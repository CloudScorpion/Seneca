#include "Missile.h"
#include <iostream>

int main()
   {
   Missile a, b, c;
   a.setName("Alpha");//operation is only safe due to statically allocated string memory
   b.setName("Beta");
   c.setName("Gamma");
   while(a.getFuel() != 1 && b.getFuel() != 1 && c.getFuel() !=1)
      {
      std::cout << "Please fill all missiles to 100%" << std::endl;
      std::cin >> a >> b >> c;
      std::cout << std::endl << a << b << c << std::endl;
      }
   return 0;
   }