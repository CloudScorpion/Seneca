#ifndef __STORAGE_H__
#define __STORAGE_H__


class Storage
   {
   //protected:
      char data[500];
   public:
      Storage(const char* d, int s)
         {
         for(int i = 0; i < s; i++)
            data[i] = d[i];
         }

      const char* read() const
         {
         return data;
         }

      void write(const char* d, int size)
         {
         for(int i = 0; i < size; i++)
            data[i] = d[i];
         }
   };

#endif