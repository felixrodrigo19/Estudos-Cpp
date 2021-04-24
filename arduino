int portas[4] = { 6,7,8,9 };
int tick = 1;
int time = 500;

void setup() {
  pinMode(portas[0], OUTPUT);
  pinMode(portas[1], OUTPUT);
  pinMode(portas[2], OUTPUT);
  pinMode(portas[3], OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  for(int i = 0; i < 4; i++) {
    if ((tick % 2) && (i % 2 == 0)) 
      Piscar( portas[i], time );    

    else if ((tick % 2 == 0) && (i % 2 == 1))
      Piscar( portas[i], time );    
  }
  
  if (tick % 2==0) {
    time = 100;
    for(int x = 0; x < 4; x++) {
       //0 1 2 3
      for(int i = 0; i < 4; i++)
        Piscar( portas[i], time );

      //3 2 1 0
      for(int i = 3; i >= 0; i--)
        Piscar( portas[i], time );      
    }
    time = 500;
  }
    
  tick++;
}

void Piscar( int porta, int tempo ) 
{
  digitalWrite( porta, HIGH );
  
  delay( tempo );
  digitalWrite(porta, LOW);
  delay( tempo );
}

