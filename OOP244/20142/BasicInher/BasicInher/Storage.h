#ifndef __STORAGE_H__
#define __STORAGE_H__

class Storage 
   {
   char data[500];
   public:
      Storage() 
         {for(int i = 0; i < 500; i++) data[i] = 0;}

      const char* read() const 
         {return data;}
      void write(const char* d, int size) 
         {for(int i = 0; i < size; i++) data[i] = d[i];}
   };


#endif