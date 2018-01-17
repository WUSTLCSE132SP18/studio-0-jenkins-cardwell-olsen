void setup() {
  // put your setup code here, to run once:
  //int n = 0;
  Serial.begin(9600);
  pinMode(13, OUTPUT);   
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int n = millis(); 
  n = n / 1000; 
  digitalWrite(13, HIGH); 
  delay(400);
  digitalWrite(13, LOW);
  delay(400);  
  Serial.print(n); 
  Serial.println(" seconds have elapsed"); 
  delay(200); 
  

}
