void setup() {
  // put your setup code here, to run once:
  Serial1.begin(115200);

}

void loop() {
  String t;
  while(Serial1.available()){
    t += (char) Serial1.read();
  }
  
  if(t.length()){
    if (t == "hello"){
      Serial1.print("Hello from the bluetooth module");
    }
    else{
      Serial1.print("Sorry, I don't know that");
    }
    
  }
  delay(20);
  // put your main code here, to run repeatedly: 
  
}
