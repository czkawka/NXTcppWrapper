#pragma once
#include <string>
#include <chrono>

using namespace std;

class Date
{
public:
  Date();
  ~Date();
  string toString();
private:
  chrono::time_point<chrono::system_clock> teraz;
};

