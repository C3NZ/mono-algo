#include <iostream>
#include <cstdio>
using namespace std;

int main() {
  int input_integer;
  long input_long;
  char input_character;
  float input_float;
  double input_double;

  scanf(
      "%d %ld %c %f %lf", 
      &input_integer, 
      &input_long, 
      &input_character, 
      &input_float, 
      &input_double);


  printf("%d\n", input_integer);
  printf("%ld\n", input_long);
  printf("%c\n", input_character);
  printf("%f\n", input_float);
  printf("%lf\n", input_double);
  return 0;
}
