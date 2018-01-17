void setup() {
  // put your setup code here, to run once:
  //int n = 0;
  Serial.begin(9600);  
  
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1001);
  int n = millis(); 
  n = n / 1000; 
  Serial.print(n); 
  Serial.println(" seconds have elapsed"); 
  

}
