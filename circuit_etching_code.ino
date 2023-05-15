#define led_green D4
#define led_blue D6
#define led_red D0
#define in1 D3
#define in2 D2
#define pwm D7
#define hallaune_time_in_min 10

float t1;
float t2;

void setup()
{
  pinMode(led_blue,OUTPUT);
  pinMode(led_green,OUTPUT);
  pinMode(led_red,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(pwm,OUTPUT);
  
  digitalWrite(led_red,LOW);
  digitalWrite(led_green,LOW);
  digitalWrite(led_blue,HIGH);
  delay(5000);
  t1 = millis();
  //digitalWrite(led_green,LOW);
  digitalWrite(led_blue,LOW);
  digitalWrite(led_red,HIGH);
}

void loop()
{
t2 = millis();
if((t2-t1) < (hallaune_time_in_min*1000*60) )
{  analogWrite(pwm,100);
  digitalWrite(in1,HIGH);
  digitalWrite(in2,LOW);

}
else
{
  digitalWrite(in1,LOW);
  digitalWrite(in2,LOW);
  digitalWrite(led_blue,LOW);
  digitalWrite(led_red,LOW);
  digitalWrite(led_green,HIGH);
}

}
