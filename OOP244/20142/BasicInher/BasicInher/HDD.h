#ifndef __HDD_H__
#define __HDD_H__

#include "Storage.h"
#include <string.h>


class HDD : public Storage
   {
   char fs[5];
   public:
      HDD(char* filesystem)
         {
         strcpy(fs, filesystem);
         }

      void format(char* filesystem)
         {
         char ar[500] = {0};
         write(ar, 500);
         strcpy(fs, filesystem);
         }

      void write(const char* d, int s)
         {
         if(strcmp(fs, "NTFS") == 0)
            {
            char da[500] = {0};
            for(int i = s -1, j = 0; i+1; i--, j++)
               {
               da[j] = d[i-1]; 
               }
            Storage::write(da, s);
            }
         else
            Storage::write(d, s);
         }
   };

#endif