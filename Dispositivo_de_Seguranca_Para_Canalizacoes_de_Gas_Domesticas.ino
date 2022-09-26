#define relay 4
#define led_green 5
#define led_red 6 #define sensor A1

void setup() { 
  Serial.begin(9600); 
  pinMode(relay, OUTPUT); 
  pinMode(led_green, OUTPUT); 
  pinMode(led_red, OUTPUT);
  pinMode(sensor, INPUT);
}

void loop() { 
  Serial.println(analogRead(sensor)); 
  if (analogRead(sensor) < 250){
digitalWrite(led_green, HIGH); 
digitalWrite(led_red, LOW);
digitalWrite(relay, LOW);
 
}

else if(analogRead(sensor) >= 250 && analogRead(sensor) <=

500){
 
digitalWrite(led_green, LOW); 
digitalWrite(led_red, HIGH); 
digitalWrite(relay, HIGH); 
delay(1000); 
digitalWrite(led_red, LOW); 
delay(1000);
}
else {
digitalWrite(led_green, LOW); 
digitalWrite(led_red, HIGH); 
digitalWrite(relay, HIGH);
 


delay(500); 
digitalWrite(led_red, LOW); 
delay(500);
  }
}
