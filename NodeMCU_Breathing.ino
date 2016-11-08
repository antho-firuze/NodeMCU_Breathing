/*LED_Breathing.ino Arduining.com  20 AUG 2015
Using NodeMCU Development Kit V1.0
Going beyond Blink sketch to see the blue LED breathing.
A PWM modulation is made in software because GPIO16 can't
be used with analogWrite().
*/

#define LED       D8      // Led in NodeMCU at pin GPIO16 (D0).
 
#define BRIGHT    350     //max led intensity (1-500)
#define INHALE    1250    //Inhalation time in milliseconds.
#define PULSE     INHALE*1000/BRIGHT
#define REST      1000    //Rest Between Inhalations.

#define APin      A0

float AVal = 0;
float RVolt = 3.4; //3.55;
float RBit = 1023;
float Vi = 0;
float Vo = 0;
float R1 = 277000;
float R2 = 9900;
int sample_count = 0;
int sample_max = 10;
float sample_sum = 0;


//----- Setup function. ------------------------
void setup() {      
  Serial.begin(9600);        

//  Serial.println("Booting");
//  pinMode(LED, OUTPUT);   // LED pin as output.    

//  pinMode(APin, INPUT);
}

//----- Loop routine. --------------------------
void loop() {
  AVal = analogRead(APin);
//  Vo = (AVal*RVolt)/RBit;
//  Vi = Vo/(R2/(R1+R2));
  Serial.print("CUR :  ");
  Serial.print(AVal);
//  Serial.print("  ");
//  Serial.print(Vo);
//  Serial.print("  ");
//  Serial.print(Vi);
//  Serial.println(" V");
  Serial.println();

//  while (sample_count < sample_max) {
//    sample_sum += analogRead(APin);
//    sample_count++;
//    delay(10);
//  }
//  AVal = sample_sum/sample_max;
//  Vo = (AVal*RVolt)/RBit;
//  Vi = Vo/(R2/(R1+R2));
//  Serial.print("AVG :  ");
//  Serial.print(AVal);
//  Serial.print("  ");
//  Serial.print(Vo);
//  Serial.print("  ");
//  Serial.print(Vi);
//  Serial.println(" V");
//  Serial.println();
//  sample_sum = 0;
//  sample_count = 0;

//  Vo = (AVal * 3.43)/1023;
//  Vi = Vo / (R2/(R1+R2));
//  Vi = Vi * 1.025;   // toleransi 2.5%
//  Serial.print("2.5% :  ");
//  Serial.print(AVal);
//  Serial.print("  ");
//  Serial.print(Vo);
//  Serial.print("  ");
//  Serial.print(Vi);
//  Serial.println(" V");
//  Serial.println();

  delay(REST);

  
//  Serial.println("ON");
//  digitalWrite(LED, HIGH);
//  delay(1000);
//  Serial.println("OFF");
//  digitalWrite(LED, LOW);
//  delay(5000);

  //ramp increasing intensity, Inhalation: 
//  Serial.println("OFF");
//  for (int i=1;i<BRIGHT;i++){
//    digitalWrite(LED, LOW);          // turn the LED on.
//    delayMicroseconds(i*10);         // wait
//    digitalWrite(LED, HIGH);         // turn the LED off.
//    delayMicroseconds(PULSE-i*10);   // wait
//    delay(0);                        //to prevent watchdog firing.
//  }
  
  //ramp decreasing intensity, Exhalation (half time):
//  Serial.println("ON");
//  for (int i=BRIGHT-1;i>0;i--){
//    digitalWrite(LED, LOW);          // turn the LED on.
//    delayMicroseconds(i*10);          // wait
//    digitalWrite(LED, HIGH);         // turn the LED off.
//    delayMicroseconds(PULSE-i*10);  // wait
//    i--;
//    delay(0);                        //to prevent watchdog firing.
//  }
//  delay(REST);                       //take a rest...
}
