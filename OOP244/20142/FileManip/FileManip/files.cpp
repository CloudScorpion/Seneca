#include <iostream>
#include <fstream>

int main()
   {
   int op = 1;
   while (op)
      {
      std::cout << "in or out: ";
      std::cin >> op;
      if(op == 1)
         {
         std::ifstream is("Test.txt");
         if(is.is_open())
            {
            while(is.good())
               {
               char name[20] = {0};
               is >> name;
               if(!is.good())
                  break;
               std::cout << "Name: " << name << std::endl;
               int id = 0;
               is >> id;
               std::cout << "ID: " << id << std::endl;
               }
            }
         }
      else if (op == 2)
         {
         std::ofstream os("Test.txt");
         if(os.is_open())
            {
            char name[20] = {0};
            std::cin >> name;
            os << name << std::endl;
            int id = 0;
            std::cin >> id;
            os << id << std::endl;
            }
         }}
   }