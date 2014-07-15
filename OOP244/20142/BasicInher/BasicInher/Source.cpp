#include "Memory.h"
#include "HDD.h"

int main()
   {
   Memory a;
   a;
   HDD b("NTFS");
   b.write("This is a test", 15);
   b.format("FAT");
   b.write("This is a test", 15);
   Storage c = b;
   Storage* bp = &b;

   bp->write("Data", 5);

   return 0;
   }