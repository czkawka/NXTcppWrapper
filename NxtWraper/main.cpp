#include <iostream>
#include "NXT++.h"
#include <conio.h>
#include <ctime>
#include "Logger.h"

using namespace std;

int main()
{
  Logger logger;
  logger.error("Pipka");
  while (!_kbhit());
  return EXIT_SUCCESS;
}