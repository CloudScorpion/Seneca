#include "Missile.h"

Missile::Missile() : name("derp"), fuel(0.0f) {}
Missile::Missile(char* n, float f) : name(n), fuel(f) {}
float Missile::getFuel() {return fuel;}
char* Missile::getName() {return name;}
void Missile::addFuel(float f) {fuel = f;}
void Missile::setName(char* n) {name = n;}


std::istream& operator>>(std::istream& is, Missile& m)
   {
   std::cout << "Enter fuel for " << m.name << ": ";
   is >> m.fuel;
   return is;
   }
std::ostream& operator<<(std::ostream& os, const Missile& m)
   {
   os << "Missile Name: " << m.name << std::endl;
   os << "Fuel Remaining: " << m.fuel * 100 << "%" << std::endl;
   return os;
   }