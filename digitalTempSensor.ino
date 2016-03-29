short int temp;
short int pinN[2][7];
short int firstD, secondD;
bool numbers[10];



void addValues(bool states[7], bool v1, bool v2, bool v3, bool v4, bool v5, bool v6, bool v7)
{
   states[0] = v1;
   states[1] = v2;
   states[2] = v3;
   states[3] = v4;
   states[4] = v5;
   states[5] = v6;
   states[6] = v7;
}

void createNumbers()
{
  addValues(numbers[0], 1,1,1,0,1,1,1);
  addValues(numbers[1], 0,0,1,0,0,1,0);
  addValues(numbers[2], 1,0,1,1,1,0,1);
  addValues(numbers[3], 1,0,1,1,0,1,1);
  addValues(numbers[4], 0,1,0,1,0,1,0);
  addValues(numbers[5], 1,1,0,1,0,1,1);
  addValues(numbers[6], 1,1,0,1,1,1,1);
  addValues(numbers[7], 1,0,1,0,0,1,0);
  addValues(numbers[8], 1,1,1,1,1,1,1);
  addValues(numbers[9], 1,1,1,1,0,1,1);
}

void chSt(bool digit, bool states[7])
{
    
    for(int y = 0; y < 7; y++)
      digitalWrite(pinN[digit][y],  states[y]);
}

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(14, INPUT);
  for(int i = 0; i <= 13; i++)
    pinMode(i, OUTPUT);
  short int pin = 0;
  for(int i = 0; i < 2; i++)
    for(int y = 0; y < 7; y++)
      pinN[i][y] = pin++;
  
  createNumbers();
}

// the loop function runs over and over again forever
void loop() {
  temp =  (5 * analogRead(A0) * 100) / 1024;
  firstD = temp / 10;
  secondD = temp % 10;
  
  
  chSt(0, number[firstD]);
  chSt(1, number[secondD]);
  }
  
  delay(1000);
}
