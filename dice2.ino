#include <MicroView.h>


int delayTime = 5000;
int Face;
int minRoll = 10;
int maxRoll = 20;
void setup()
{

  uView.begin();  
  uView.clear(PAGE);  

}

void loop()
{
  
  int rolls = random(minRoll, maxRoll);
  int i;
  for(i = 0; i < rolls; i++)
  {
    diceFace = random(1, 7);
    drawDice(diceFace); 
    delay(100); 

  }
  delay(delayTime); 

}


void drawDice(int face)
{
  uView.clear(PAGE); 
  
  switch (face)
  {

    case 1:   // draw face 1
      uView.rect(8, 0, 48, 48);
      uView.circleFill(32, 24, 4);
      break;

    case 2:   // draw face 2
      uView.rect(8, 0, 48, 48);
      uView.circleFill(21, 12, 4);
      uView.circleFill(43, 35, 4);
      break;

    case 3:   // draw face 3
      uView.rect(8, 0, 48, 48);
      uView.circleFill(21, 12, 4);
      uView.circleFill(43, 35, 4);
      uView.circleFill(32, 24, 4);
      break;

    case 4:   // draw face 4
      uView.rect(8, 0, 48, 48);
      uView.circleFill(21, 12, 4);
      uView.circleFill(43, 35, 4);
      uView.circleFill(43, 12, 4);
      uView.circleFill(21, 35, 4);
      break;

    case 5:    // draw face 5
      uView.rect(8, 0, 48, 48);
      uView.circleFill(21, 12, 4);
      uView.circleFill(43, 35, 4);
      uView.circleFill(43, 12, 4);
      uView.circleFill(21, 35, 4);
      uView.circleFill(32, 24, 4);
      break;

    case 6:    // draw face 6
      uView.rect(8, 0, 48, 48);
      uView.circleFill(21, 12, 4);
      uView.circleFill(21, 35, 4);
      uView.circleFill(21, 24, 4);
      uView.circleFill(43, 35, 4);
      uView.circleFill(43, 12, 4);
      uView.circleFill(43, 24, 4);
      break;
  }
  uView.display(); 
}
