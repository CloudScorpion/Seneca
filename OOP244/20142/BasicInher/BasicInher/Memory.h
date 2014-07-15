#ifndef __MEMORY_H__
#define __MEMORY_H__

#include "Storage.h"


class Memory : public Storage
   {
   public:
      void flush()
         {
         char ar[500] = {0};
         write(ar, 500);
         }
   };


#endif