#include <stdio.h>
float celsius_to_fahrenheit(float celsius)
{
  return (celsius * 9 / 5) + 32;
}
int main(void) 
{
  float celsius,fahrenheit;
  printf("Enter the temperature in celsius:");
  scanf("%f", & celsius);
  fahrenheit =    celsius_to_fahrenheit(celsius);
  printf("%.2f celsius is equal to %.2f fahrenheit\n",celsius, fahrenheit);
  return 0;
}
