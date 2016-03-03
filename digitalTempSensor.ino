short int pinN[2][7];
short int firstD, secondD;
int temp;

void chSt(bool digit, bool states[7])
{
    
    for(int y = 0; y < 7; y++)
      digitalWrite(pinN[digit][y],  states[y]);
}

void zero(bool digit)
{
  bool states[7];
  if(digit)
  {
    states[0] = 0;
    states[1] = 0;
    states[2] = 0;
    states[3] = 0;
    states[4] = 0;
    states[5] = 0;
    states[6] = 0;
  }
  if(!digit)
    states[0] = 1;
    states[1] = 1;
    states[2] = 1;
    states[3] = 0;
    states[4] = 1;
    states[5] = 1;
    states[6] = 1;
  chSt(digit, states);
}

void one(bool digit)
{
  bool states[7];

  states[0] = 0;
  states[1] = 0;
  states[2] = 1;
  states[3] = 0;
  states[4] = 0;
  states[5] = 1;
  states[6] = 0;
  chSt(digit, states);
}

void two(bool digit)
{
  bool states[7];

  states[0] = 1;
  states[1] = 0;
  states[2] = 1;
  states[3] = 1;
  states[4] = 1;
  states[5] = 0;
  states[6] = 1;
  chSt(digit, states);
}

void three(bool digit)
{
  bool states[7];

  states[0] = 1;
  states[1] = 0;
  states[2] = 1;
  states[3] = 1;
  states[4] = 0;
  states[5] = 1;
  states[6] = 1;
  chSt(digit, states);
}

void four(bool digit)
{
  bool states[7];

  states[0] = 0;
  states[1] = 1;
  states[2] = 0;
  states[3] = 1;
  states[4] = 0;
  states[5] = 1;
  states[6] = 0;
  chSt(digit, states);
}

void five(bool digit)
{
  bool states[7];

  states[0] = 1;
  states[1] = 1;
  states[2] = 0;
  states[3] = 1;
  states[4] = 0;
  states[5] = 1;
  states[6] = 1;
  chSt(digit, states);
}

void six(bool digit)
{
  bool states[7];

  states[0] = 1;
  states[1] = 1;
  states[2] = 0;
  states[3] = 1;
  states[4] = 1;
  states[5] = 1;
  states[6] = 1;
  chSt(digit, states);
}

void seven(bool digit)
{
  bool states[7];

  states[0] = 1;
  states[1] = 0;
  states[2] = 1;
  states[3] = 0;
  states[4] = 0;
  states[5] = 1;
  states[6] = 0;
  chSt(digit, states);
}

void eight(bool digit)
{
  bool states[7];

  states[0] = 1;
  states[1] = 1;
  states[2] = 1;
  states[3] = 1;
  states[4] = 1;
  states[5] = 1;
  states[6] = 1;
  chSt(digit, states);
}

void nine(bool digit)
{
  bool states[7];

  states[0] = 1;
  states[1] = 1;
  states[2] = 1;
  states[3] = 1;
  states[4] = 0;
  states[5] = 1;
  states[6] = 1;
  chSt(digit, states);
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
}

// the loop function runs over and over again forever
void loop() {
  temp =  (5 * analogRead(A0) * 100) / 1024;
  firstD = temp / 10;
  secondD = temp % 10;

  if(firstD == 0)
    zero(false); // false if first digit
  if(secondD == 0)
    zero(true);

  if(firstD == 1)
    one(false);
  if(secondD == 1)
    one(true);

  if(firstD == 2)
    two(false);
  if(secondD == 2)
    two(true);

  if(firstD == 3)
    three(false);
  if(secondD == 3)
    three(true);

  if(firstD == 4)
    four(false);
  if(secondD == 4)
    four(true);

  if(firstD == 5)
    five(false);
  if(secondD == 5)
    five(true);

  if(firstD == 6)
    six(false);
  if(secondD == 6)
    six(true);

  if(firstD == 7)
    seven(false);
  if(secondD == 7)
    seven(true);

  if(firstD == 8)
    eight(false);
  if(secondD == 8)
    eight(true);

  if(firstD == 9)
    nine(false);
  if(secondD == 9)
    nine(true);


  
  delay(1000);
}
