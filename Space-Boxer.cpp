#include <iostream>

int main() {
  double EarthWeight = 0;
  int choice = 0;
  double WeightConvert = 0;
  
  
  std::cout << "Enter boxer weight in pounds\n";
  std::cin >> EarthWeight;
  std::cout << "Enter Planet to fight on\n";
  std::cout << "1. 		Venus 	(0.78 Relative Gravity)\n";
  std::cout << "2. 		Mars 	(0.39 Relative Gravity)\n";
  std::cout << "3.		Jupiter (2.65 Relative Gravity)\n";
  std::cout << "4. 		Saturn 	(1.17 Relative Gravity)\n";
  std::cout << "5		Uranus	(1.05 Relative Gravity)\n";
  std::cout << "6. 		Neptune	(1.23 Relative Gravity)\n";
	std::cin >> choice;
  
  switch(choice) {
    case 1:
      WeightConvert = EarthWeight * 0.78;
      std::cout << "Boxer weight on Venus is " << WeightConvert << " pounds.\n";
      break;
      case 2:
      WeightConvert = EarthWeight * 0.39;
      std::cout << "Boxer weight on Mars is " << WeightConvert << " pounds.\n";
      break;
      case 3:
      WeightConvert = EarthWeight * 2.65;
      std::cout << "Boxer weight on Jupiter is " << WeightConvert << " pounds.\n";
      break;
      case 4:
      WeightConvert = EarthWeight * 1.17;
      std::cout << "Boxer weight on Saturn is " << WeightConvert << " pounds.\n";
      break;
      case 5:
      WeightConvert = EarthWeight * 1.05;
      std::cout << "Boxer weight on Uranus is " << WeightConvert << " pounds.\n";
      break;
    	case 6:
      WeightConvert = EarthWeight * 1.23;
      std::cout << "Boxer weight on Neptune is " << WeightConvert << " pounds.\n";
      break;
    default:
      std::cout << "It broke.";
      break;
  }
  
  
  
  
  
  
  
  
}
