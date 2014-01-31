int motion_1 = 2;
int light_1 = 13;
void setup(){
  Serial.begin(9600);
  pinMode (motion_1,INPUT);
  pinMode (light_1, OUTPUT);
}

void loop (){
  digitalWrite (light_1,LOW);
  delay(1000); //this delay is to let the sensor settle down before taking a reading
  int sensor_1 = digitalRead(motion_1);
  if (sensor_1 == LOW){
    digitalWrite(light_1,HIGH);
    delay(1000);
    digitalWrite(light_1,LOW);
    delay(1000);
  }
  if (sensor_1 == LOW){
    Serial.println("Motion Detected");
    delay(2000);

   }
}
