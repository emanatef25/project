
const int led[8] = {5,6,7,8,9,10,11,12};

void setup() {
for(int i=0;i<8;i++){
  pinMode(led[i],OUTPUT);
}
}

void loop() {

for(int i=0;i<8;i++){
 digitalWrite(led[i],HIGH); 
  }
  delay(200);
for(int i=0;i<8;i++){
 digitalWrite(led[i],LOW); 
  }
  delay(200);

for(int i ; i<8 ; i++){
    for(int z=0;z<8;z++){
      digitalWrite(led[z],LOW); 
    }
    digitalWrite(led[i],HIGH); 
    delay(200);
  }
  for(int i=6 ; i>0 ; i--){
    for(int z=0;z<8;z++){
      digitalWrite(led[z],LOW); 
    }
    digitalWrite(led[i],HIGH); 
    delay(200);
  }
   delay(100);
   for (int i=0;i<8; i++){
    digitalWrite(led[i],HIGH);
    digitalWrite(led[i+1],HIGH);
    digitalWrite(led[7-i],HIGH);
    digitalWrite(led[7-i-1],HIGH);
    delay(200);
     digitalWrite(led[i],LOW);
    digitalWrite(led[i+1],LOW);
    digitalWrite(led[7-i],LOW);
    digitalWrite(led[7-i-1],LOW);
    delay(200);
    }
      delay(100);
      for(int i ; i<8 ; i++){
    for(int z=0;z<8;z++){
      digitalWrite(led[z],LOW); 
    }
    digitalWrite(led[i],HIGH); 
    delay(200);
  }
  for(int i=6 ; i>0 ; i--){
    for(int z=0;z<8;z++){
      digitalWrite(led[z],LOW); 
    }
    digitalWrite(led[i],HIGH); 
    delay(200);
  }
     delay(100);
  for(int i ; i<8 ; i++){
   digitalWrite(led[i],HIGH);
     delay(200);    
  }
    delay(100);
     for (int i=0;i<8;i++){
      digitalWrite(led[i],LOW);
      }
      delay(100);
}
