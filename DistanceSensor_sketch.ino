int x;

void setup () 
{
  Serial.begin(9600);
}

void loop (){
  x = analogRead(0);
  Serial.println(x);
  delay(500);
}

