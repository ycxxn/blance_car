void setup() {
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop() {
  move(120);
  delay(1000);
  
}

void move(int speed_)
{
  if(speed_ >= 0)
  {
    analogWrite(5,0);
    analogWrite(6,speed_);
    analogWrite(9,0);
    analogWrite(10,speed_);
  }
  if(speed_ < 0)
  {
    analogWrite(5,speed_);
    analogWrite(6,0);
    analogWrite(9,speed_);
    analogWrite(10,0);
  }
}
