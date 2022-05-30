#define MAX_RANG (520)
#define ADC_SOLUTION (1023.0)
#define DELAY (200)
int oldMidi;
int control;
int controlDistance;

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  oldMidi = 0;
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0 and 1:
  int sensorValueTones = analogRead(A0);
  int sensorValueSemitones = analogRead(A1);
  int toneDistance = (sensorValueTones * MAX_RANG)/(ADC_SOLUTION);
  int semitoneDistance = (sensorValueSemitones * MAX_RANG)/(ADC_SOLUTION);

  //BLACK NOTES
  if ((semitoneDistance > 2) && (semitoneDistance < 13)){
    if ((semitoneDistance > 2)&&(semitoneDistance < 5)){
    if (oldMidi!=49){
      delay(DELAY);
      control = analogRead(A1);
      controlDistance = (control * MAX_RANG)/(ADC_SOLUTION);
      if ((controlDistance > 2) && (controlDistance < 5)){
      if (oldMidi!=0){
        Serial.println(oldMidi);
        Serial.print("s");
      }
      Serial.println(49);
      Serial.print("b");
      oldMidi = 49;
    }
    }
    }
    if ((semitoneDistance > 4)&&(semitoneDistance < 7)){
    if (oldMidi!=51){
      delay(DELAY);
      control = analogRead(A1);
      controlDistance = (control * MAX_RANG)/(ADC_SOLUTION);
      if ((controlDistance > 4) && (controlDistance < 7)){
      if (oldMidi!=0){
        Serial.println(oldMidi);
        Serial.print("s");
      }
      Serial.println(51);
      Serial.print("b");
      oldMidi = 51;
    }
    }
  }
  if ((semitoneDistance > 6)&&(semitoneDistance < 9)){
    if (oldMidi!=54){
      delay(DELAY);
      control = analogRead(A1);
      controlDistance = (control * MAX_RANG)/(ADC_SOLUTION);
      if ((controlDistance > 6) && (controlDistance < 9)){
      if (oldMidi!=0){
        Serial.println(oldMidi);
        Serial.print("s");
      }
      Serial.println(54);
      Serial.print("b");
      oldMidi = 54;
    }
    }
  }
  if ((semitoneDistance > 8)&&(semitoneDistance < 11)){
    if (oldMidi!=56){
      delay(DELAY);
      control = analogRead(A1);
      controlDistance = (control * MAX_RANG)/(ADC_SOLUTION);
      if ((controlDistance > 8) && (controlDistance < 11)){
      if (oldMidi!=0){
        Serial.println(oldMidi);
        Serial.print("s");
      }
      Serial.println(56);
      Serial.print("b");
      oldMidi = 56;
    }
    }
  }
  if ((semitoneDistance > 10)&&(semitoneDistance < 13)){
    if (oldMidi!=58){
      delay(DELAY);
      control = analogRead(A1);
      controlDistance = (control * MAX_RANG)/(ADC_SOLUTION);
      if ((controlDistance > 10) && (controlDistance < 13)){
      if (oldMidi!=0){
        Serial.println(oldMidi);
        Serial.print("s");
      }
      Serial.println(58);
      Serial.print("b");
      oldMidi = 58;
    }
    }
  }
  }


  //WHITE NOTES
  else if ((toneDistance > 2) && (toneDistance < 27)){
    if ((toneDistance > 2)&&(toneDistance < 6)){
    if (oldMidi!=48){
      delay(DELAY);
      control = analogRead(A0);
      controlDistance = (control * MAX_RANG)/(ADC_SOLUTION);
      if ((controlDistance > 2) && (controlDistance < 6)){
      if (oldMidi!=0){
        Serial.println(oldMidi);
        Serial.print("s");
      }
      Serial.println(48);
      Serial.print("w");
      oldMidi = 48;
    }
    }
  }
    if ((toneDistance > 5)&&(toneDistance < 9)){
    if (oldMidi!=50){
      delay(DELAY);
      control = analogRead(A0);
      controlDistance = (control * MAX_RANG)/(ADC_SOLUTION);
      if ((controlDistance > 5) && (controlDistance < 9)){
      if (oldMidi!=0){
        Serial.println(oldMidi);
        Serial.print("s");
      }
      Serial.println(50);
      Serial.print("w");
      oldMidi = 50;
    }
    }
  }
    if ((toneDistance > 8)&&(toneDistance < 12)){
    if (oldMidi!=52){
      delay(DELAY);
      control = analogRead(A0);
      controlDistance = (control * MAX_RANG)/(ADC_SOLUTION);
      if ((controlDistance > 8) && (controlDistance < 12)){
      if (oldMidi!=0){
        Serial.println(oldMidi);
        Serial.print("s");
      }
      Serial.println(52);
      Serial.print("w");
      oldMidi = 52;
    }
    }
  }
    if ((toneDistance > 11)&&(toneDistance < 15)){
    if (oldMidi!=53){
      delay(DELAY);
      control = analogRead(A0);
      controlDistance = (control * MAX_RANG)/(ADC_SOLUTION);
      if ((controlDistance > 11) && (controlDistance < 15)){
     if (oldMidi!=0){
        Serial.println(oldMidi);
        Serial.print("s");
      }
      Serial.println(53);
      Serial.print("w");
      oldMidi = 53;
    }
    }
  }
    if ((toneDistance > 14)&&(toneDistance < 18)){
    if (oldMidi!=55){
      delay(DELAY);
      control = analogRead(A0);
      controlDistance = (control * MAX_RANG)/(ADC_SOLUTION);
      if ((controlDistance > 14) && (controlDistance < 18)){
      if (oldMidi!=0){
        Serial.println(oldMidi);
        Serial.print("s");
      }
      Serial.println(55);
      Serial.print("w");
      oldMidi = 55;
    }
    }
  }
    if ((toneDistance > 17)&&(toneDistance < 21)){
    if (oldMidi!=57){
      delay(DELAY);
      control = analogRead(A0);
      controlDistance = (control * MAX_RANG)/(ADC_SOLUTION);
      if ((controlDistance > 17) && (controlDistance < 21)){
      if (oldMidi!=0){
        Serial.println(oldMidi);
        Serial.print("s");
      }
      Serial.println(57);
      Serial.print("w");
      oldMidi = 57;
    }
    }
  }
    if ((toneDistance > 20)&&(toneDistance < 24)){
    if (oldMidi!=59){
      delay(DELAY);
      control = analogRead(A0);
      controlDistance = (control * MAX_RANG)/(ADC_SOLUTION);
      if ((controlDistance > 20) && (controlDistance < 24)){
      if (oldMidi!=0){
        Serial.println(oldMidi);
        Serial.print("s");
      }
      Serial.println(59);
      Serial.print("w");
      oldMidi = 59;
    }
    }
  }
    if ((toneDistance > 23)&&(toneDistance < 27)){
     if (oldMidi!=60){
      delay(DELAY);
      control = analogRead(A0);
      controlDistance = (control * MAX_RANG)/(ADC_SOLUTION);
      if ((controlDistance > 23) && (controlDistance < 27)){
      if (oldMidi!=0){
        Serial.println(oldMidi);
        Serial.print("s");
      }
      Serial.println(60);
      Serial.print("w");
      oldMidi = 60;
    }
    }
  } 
  }

  //STOP NOTE
  else {
    if (oldMidi != 0){
      Serial.println(oldMidi);
      Serial.print("s");
      }
     oldMidi = 0;
    }
    
  delay(20);        // delay in between reads for stability
}
