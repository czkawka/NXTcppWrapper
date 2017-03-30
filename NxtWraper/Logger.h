#pragma once
#include <string>

using namespace std;

class Logger
{
public:
  Logger();
  ~Logger();

  void debug(string);
  void error(string);
  void info(string);
  void warn(string);
  string podajDateTeraz();

};

