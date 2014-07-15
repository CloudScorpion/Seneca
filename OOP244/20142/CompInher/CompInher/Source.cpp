#include "HDD.h"
#include "Memory.h"
#include <iostream>

int main()
   {
   Memory a;

   HDD b("NTFS");
   b.write("This is a test", 15);

   HDD* c = &b;

   c->write("herp", 5);

   Storage* d = &b;
   d->write("derp", 5);

   std::cout << b.read();


   return 0;
   }