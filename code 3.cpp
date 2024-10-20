
void setup(){
pinMode(ledPin,OUTPUT);  >>حالت پایه 
Serial.begin(9600); >>شروع کردن پنل سریال 
}
void loop() {
if(Serial.available()>0). >>دستور برای چک وجود  پنل 
 {
 String a=Serial.readString();   >>خواندن رشته  از پنل 
if( a =="on") >> چک کردن وجود on 
{
  digitalWrite (ledPin,HIGH);  >>دستور روشن شدن 
}
else if ( a=="off")  >>چک کردن. وجود off
{
  digitalWrite (ledPin,LOW);  >>دستور خاموش شدن 
    }
   }
}