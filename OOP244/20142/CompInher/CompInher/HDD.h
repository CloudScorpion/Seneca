#ifndef __HDD_H__
#define __HDD_H__

#include "Storage.h"
#include <string.h>

class HDD : public Storage
   {
   char fs[6];
   public:
      HDD(const char* filesystem) : Storage("Hello", 6)
         {
         strcpy(fs, filesystem);
         }

      void format(const char* filesystem)
         {
         char ar[500] = {0};
         write(ar, 500);
         strcpy(fs, filesystem);
         }

      void write(const char* d, int s)
         {
         char da[500] = {0};
         if(strcmp(fs, "NTFS") == 0)
            {
            for(int i = s -1, j = 0; i+1; i--, j++)
               {
               da[j] = d[i-1];
               }
            Storage::write(da,s);
            }
         else
            Storage::write(d,s);
         }
   };

#endif