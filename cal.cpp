//client

#include "calheader.h"

int main()
{
  Calculator* pCalc = new Calculator;

  pCalc->launch();

  while (pCalc->run())
  {
    pCalc->readInput();
    pCalc->writeOutput();
  }

  return 0;
}