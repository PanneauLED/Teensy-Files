void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial1.begin(9600);

}

// put your main code here, to run repeatedly: 
void loop() {
  String t;
  while(Serial1.available()){
    t += (char) Serial.read();
  }
  if(t.length()){
    Serial.print("Received");
    if (t == "hello"){
      
      Serial1.print("Hello from the bluetooth module");
    }
    else{
      Serial1.print("Sorry, I don't know that");
    }
  }
  delay(20);
}
