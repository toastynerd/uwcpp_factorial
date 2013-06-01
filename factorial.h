//Tyler Morgan
//UW online cpp course quarter 2
//assignment 3
//part 1
//factorial.h

#include <iostream>

template<class T>
class Factorial
{
public:
  T fact(T num)
  {
    return (num < 2 ? 1 : num * fact(num-1));
  }
};