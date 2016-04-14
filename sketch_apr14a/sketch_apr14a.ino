void setup() {
  //in functia setup singurul lucru pe care trebuie sa-l fac este
  //sa-i spun MC-ului care pin-uri sunt de OUTPUT
  for(int i=2;i<=12;i++){
    pinMode(i, OUTPUT);
  }
}

void loop() {
  int n=12,j,i,n2,i2;
  for(int i=0;i<=2;i++)
  {
  digitalWrite(2, HIGH);
  delay(300);
  digitalWrite(2, LOW);
  delay(100);
  }
  for(int i=3;i<=n;i++)
  { digitalWrite(i, HIGH);
  delay(300);
  digitalWrite(i, LOW);
  delay(100);
  }
  
  for(int i=3;i<=(n+2)/2;i++)
  { digitalWrite(i, HIGH);
     
     digitalWrite((n+3-i),HIGH);
     
  }
  for(int i=3;i<=(n+2)/2;i++)
  { digitalWrite(i, LOW);
     delay(500);
     digitalWrite((n+3-i),LOW);
     delay(500);
  }
    for(int i=3;i<=(n+2)/2;i++)
  { digitalWrite((n+3-i),HIGH);
     delay(250);
    digitalWrite(i, HIGH);
     delay(250);
     
  }
  
//  for(int i=3;i<=(n+2)/2;i++)
//  { digitalWrite(n-5+i-3, LOW);
//     delay(250);
//     digitalWrite(n-5-i+3,LOW);
//     delay(250);
//  }

  for(int i=3;i<=(n+4)/2;i++)
  { digitalWrite(i, LOW);
    delay(100);
     digitalWrite(i+5,LOW);
     delay(100);
  }
for(j=3;j<=12;j++)
{for(i=3;i<=j;i++)
{digitalWrite(i, HIGH);
 delay(250);
}
n2=i;
for(i2=i;i2>=3;i2--)
{
digitalWrite(i2, LOW);
delay(100);
}
}






    for(int i=2;i<=n;i++)
  { digitalWrite(i, LOW);
  delay(200);
  }
  
  
}
