#include "Logger.h"
#include <iostream>
#include <ctime>
#include "Date.h"

using namespace std;

Logger::Logger()
{
}


Logger::~Logger()
{
}

void Logger::debug(string)
{
}

void Logger::error(string msg)
{
  cout << podajDateTeraz()
    << " [error] "
    << msg

    << "\n";
}

void Logger::info(string)
{
}

void Logger::warn(string)
{
}

string Logger::podajDateTeraz()
{
  Date date;
  return date.toString();
}
