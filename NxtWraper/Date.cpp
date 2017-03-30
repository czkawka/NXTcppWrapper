#include "Date.h"
#include <ctime>
#include <iostream>

using namespace std;

Date::Date()
{
  teraz = chrono::system_clock::now();
}


Date::~Date()
{
}

string Date::toString()
{
  string result;

  return result;
}
