#include <iostream>

int AmericanTemperatureFixer() {
  
  double tempf = -100;
  double tempc;
  
  std::cout << "Enter the temperature in Fahrenheit.\n";
  std::cin >> tempf;
 
  tempc = (tempf - 32) / 1.8;
  
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
  
}
