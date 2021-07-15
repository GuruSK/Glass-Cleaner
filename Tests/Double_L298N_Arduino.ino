int in1r=2, in2r=3, in3r=4, in4r=5;   //right
int in1l=10, in2l=11, in3l=12, in4l=13;   //left
char t;

void setup()
{
  Serial.begin(9600);
  pinMode(in1r, OUTPUT);
  pinMode(in2r, OUTPUT);
  pinMode(in3r, OUTPUT);
  pinMode(in4r, OUTPUT);
  pinMode(in1l, OUTPUT);
  pinMode(in2l, OUTPUT);
  pinMode(in3l, OUTPUT);
  pinMode(in4l, OUTPUT);
}

void loop()
{
  if(Serial.available())
  {
    t = Serial.read();
    Serial.println(t);
  }
  if(t=='B'||t=='b')
  {
      digitalWrite(in1r, HIGH);
      digitalWrite(in2r, LOW);
      digitalWrite(in3r, HIGH);
      digitalWrite(in4r, LOW);
      digitalWrite(in1l, HIGH);
      digitalWrite(in2l, LOW);
      digitalWrite(in3l, HIGH);
      digitalWrite(in4l, LOW);
  }
  if(t=='F'||t=='f')
  {
    digitalWrite(in1r, LOW);
    digitalWrite(in2r, HIGH);
    digitalWrite(in3r, LOW);
    digitalWrite(in4r, HIGH);
    digitalWrite(in1l, LOW);
    digitalWrite(in2l, HIGH);
    digitalWrite(in3l, LOW);
    digitalWrite(in4l, HIGH);
  }
  if(t=='r'||t=='R')
  {
    digitalWrite(in1r, HIGH);
    digitalWrite(in2r, LOW);
    digitalWrite(in3r, HIGH);
    digitalWrite(in4r, LOW);
    digitalWrite(in1l, LOW);
    digitalWrite(in2l, HIGH);
    digitalWrite(in3l, LOW);
    digitalWrite(in4l, HIGH);
  }
  if(t=='l'||t=='L')
  {
    digitalWrite(in1r, LOW);
    digitalWrite(in2r, HIGH);
    digitalWrite(in3r, LOW);
    digitalWrite(in4r, HIGH);
    digitalWrite(in1l, HIGH);
    digitalWrite(in2l, LOW);
    digitalWrite(in3l, HIGH);
    digitalWrite(in4l, LOW);
  }
  if(t=='s'||t=='S')
  {
    digitalWrite(in1r, LOW);
    digitalWrite(in2r, LOW);
    digitalWrite(in3r, LOW);
    digitalWrite(in4r, LOW);
    digitalWrite(in1l, LOW);
    digitalWrite(in2l, LOW);
    digitalWrite(in3l, LOW);
    digitalWrite(in4l, LOW);    
  }
}
