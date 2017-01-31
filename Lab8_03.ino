void setup() {
  pinMode(A0,INPUT);  // x axis
  pinMode(A1,INPUT);  // y axis
  Serial.begin(9600);
  pinMode(2,OUTPUT);  // red
  pinMode(3,OUTPUT);  // green
  pinMode(4,OUTPUT);  // blue
}

int x,y;

void loop() {
 
  x = analogRead(A0);
  y = analogRead(A1);
  Serial.print("x = ");Serial.println(x);
  Serial.print("y = ");Serial.println(y);
 
  if (500 < y < 506 && x < 524)
  {
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
    Serial.println("blue");
    delay(1000);
  }
  if ( 500 < y < 506 && x > 524 && x < 1020)
  {
    digitalWrite(4,LOW);
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    Serial.println("green");
    delay(1000);  
  }
  if (500 < y < 506 && x > 1020  )
  {
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(2,HIGH);
    Serial.println("red");
    delay(1000);
  } 
}
