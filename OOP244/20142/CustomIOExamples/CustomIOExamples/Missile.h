#include <iostream>
class Missile
   {
   private:
      float fuel;
      char* name;
   protected:
   public:
      Missile();
      Missile(char*, float);
      float getFuel();
      char* getName();
      void addFuel(float);
      void setName(char*);


      friend std::istream& operator>>(std::istream&, Missile&);
      friend std::ostream& operator<<(std::ostream&, const Missile&);
   };
