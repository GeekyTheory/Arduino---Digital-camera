/*
     Arduino Digital Camera
	
Mario Pérez Esteso
http://www.geekytheory.com
https://www.youtube.com/user/telecoreference

https://twitter.com/geekytheory

Facebook page! Join us with a LIKE!
https://www.facebook.com/geekytheory
*/

void setup() {                
  pinMode(8, OUTPUT);     
}

void loop() {
  digitalWrite(8, HIGH);  //Photo 
  delay(1000);              
  digitalWrite(8, LOW);  //9 sec. delay 
  delay(9000);             
}
