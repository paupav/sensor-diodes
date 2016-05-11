short int temp;
short int pinN[2][7];
short int firstD, secondD;

class Numbers
{
public:
  bool states[7];
};
Numbers number[10];

//makes it easier to set up numbers
void addValues(Numbers &numberl, bool v1, bool v2, bool v3, bool v4, bool v5, bool v6, bool v7)
{
   numberl.states[0] = v1;
   numberl.states[1] = v2;
   numberl.states[2] = v3;
   numberl.states[3] = v4;
   numberl.states[4] = v5;
   numberl.states[5] = v6;
   numberl.states[6] = v7;
}

//gives array of premade signals for each number
void createNumbers()
{
  addValues(number[0], 1,1,1,0,1,1,1);
  addValues(number[1], 0,0,1,0,0,1,0);
  addValues(number[2], 1,0,1,1,1,0,1);
  addValues(number[3], 1,0,1,1,0,1,1);
  addValues(number[4], 0,1,0,1,0,1,0);
  addValues(number[5], 1,1,0,1,0,1,1);
  addValues(number[6], 1,1,0,1,1,1,1);
  addValues(number[7], 1,0,1,0,0,1,0);
  addValues(number[8], 1,1,1,1,1,1,1);
  addValues(number[9], 1,1,1,1,0,1,1);
}

//turns states into signals
void chSt(bool digit, Numbers numberl)
{
    
    for(int y = 0; y < 7; y++)
      digitalWrite(pinN[digit][y],  numberl.states[y]);
}

// the setup function runs once when you press reset or power the board
void setup() {
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
  
  delay(1000);
}
