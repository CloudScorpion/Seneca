#ifndef __MEMORY_H__
#define __MEMORY_H__

#include "Storage.h"

class Memory : public Storage
   {
   public:
      Memory() : Storage("Hello", 6) {}
      void flush()
         {
         char temp[500] = {0};
         write(temp,500);
         }
   };

#endif