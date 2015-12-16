//Programmed by Joshua Janssen on the 16th of december 2015
int redPin = 3;   //Red Led on pin 3
int greenPin = 5; //Green Led on pin 5
int bluePin = 6;  //Blue Led on pin 6
int incomingByte;
#define FADESPEED 5 //Speed of Fade Program


void setup() {
  Serial.begin(9600);   //Begin serial 9600 baud rate
  pinMode(redPin, OUTPUT);  //Red led is an Output
  pinMode(greenPin, OUTPUT);  //Green led is an output
  pinMode(bluePin, OUTPUT); //blue led is an output
}

void loop() {
  if (Serial.available() > 0) {     //Read if serial is available
    incomingByte = Serial.read();   //define incomingByte as reading serial data?
  }

if (incomingByte == 'O') {    //if incoming data is a capital o turn all leds off
    
      digitalWrite(redPin, LOW);    //red led is low
      digitalWrite(greenPin, LOW);    //green led is low
      digitalWrite(bluePin, LOW);   //blue led is low
    }
 if (incomingByte == 'A') {   //if incoming data is a capital a turn green and blue leds on
    
      digitalWrite(redPin, LOW);      //red is low
      digitalWrite(greenPin, HIGH);   //green is high
      digitalWrite(bluePin, HIGH);    //blue is high
    }
  if (incomingByte == 'Y') {    //if incoming data is a capital y turn red and green leds on
    
      digitalWrite(redPin, HIGH);   //red is high
      digitalWrite(greenPin, HIGH);   //green is high
      digitalWrite(bluePin, LOW);   //blue is low
    }
  if (incomingByte == 'W') {    //if incoming data is a capital w turn all leds on
    
      digitalWrite(redPin, HIGH);   //red is high
      digitalWrite(greenPin, HIGH);   //green is high
      digitalWrite(bluePin, HIGH);    //blue is high
    }  
    if (incomingByte == 'R') {    //if incoming data is a capital r turn red led on
    
      digitalWrite(redPin, HIGH);   //red is high
      digitalWrite(greenPin, LOW);    //green is low
      digitalWrite(bluePin, LOW);   //blue is low
    }
    if (incomingByte == 'G') {    //if incoming data is a capital g turn green led on
    
      digitalWrite(greenPin, HIGH);   //green is high
      digitalWrite(redPin, LOW);    //red is low
      digitalWrite(bluePin, LOW);   //blue is low
    }
    if (incomingByte == 'B') {    //if incoming data is a capital b turn blue led on
    
      digitalWrite(bluePin, HIGH);    //blue is high
      digitalWrite(greenPin, LOW);    //green is low
      digitalWrite(redPin, LOW);    //red is low
    }
    if (incomingByte == 'P') {    //if incoming data is a capital p turn blue and red leds on
    
      digitalWrite(redPin, HIGH);   //red is high
      digitalWrite(greenPin, LOW);    //green is low
      digitalWrite(bluePin, HIGH);    //blue is high
    }

   if (incomingByte == 'F') {   //if incoming data is a capital f cycle thru the colour spectrum 10 times
    for(int i = 0; i < 10; i++)
     {int r, g, b;
 
  // fade from blue to violet
  for (r = 0; r < 256; r++) { 
    analogWrite(redPin, r);
    delay(FADESPEED);
  } 
  // fade from violet to red
  for (b = 255; b > 0; b--) { 
    analogWrite(bluePin, b);
    delay(FADESPEED);
  } 
  // fade from red to yellow
  for (g = 0; g < 256; g++) { 
    analogWrite(greenPin, g);
    delay(FADESPEED);
  } 
  // fade from yellow to green
  for (r = 255; r > 0; r--) { 
    analogWrite(redPin, r);
    delay(FADESPEED);
  } 
  // fade from green to teal
  for (b = 0; b < 256; b++) { 
    analogWrite(bluePin, b);
    delay(FADESPEED);
  } 
  // fade from teal to blue
  for (g = 255; g > 0; g--) { 
    analogWrite(greenPin, g);
    delay(FADESPEED);
  } 
}
   }

  if (incomingByte == 'T') {    //if incoming data is a capital t cycle thru the colour spectrum 100 times
    for(int i = 0; i < 100; i++)
     {int r, g, b;
 
  // fade from blue to violet
  for (r = 0; r < 256; r++) { 
    analogWrite(redPin, r);
    delay(FADESPEED);
  } 
  // fade from violet to red
  for (b = 255; b > 0; b--) { 
    analogWrite(bluePin, b);
    delay(FADESPEED);
  } 
  // fade from red to yellow
  for (g = 0; g < 256; g++) { 
    analogWrite(greenPin, g);
    delay(FADESPEED);
  } 
  // fade from yellow to green
  for (r = 255; r > 0; r--) { 
    analogWrite(redPin, r);
    delay(FADESPEED);
  } 
  // fade from green to teal
  for (b = 0; b < 256; b++) { 
    analogWrite(bluePin, b);
    delay(FADESPEED);
  } 
  // fade from teal to blue
  for (g = 255; g > 0; g--) { 
    analogWrite(greenPin, g);
    delay(FADESPEED);
  } 
     }
     }
}



