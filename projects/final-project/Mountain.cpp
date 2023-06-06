#include <iostream>
#include <string>
using namespace std;
#include "Mountain.h"

   void Mountain::setMountain(string inputMountain){
      mountainName = inputMountain;
   }
   
   void Mountain::setCountry(string inputCountry){
      country = inputCountry;
   }

   void Mountain::setElevation(int inputVal){
      elevation = inputVal;
   }

   string Mountain::getMountain() const{
      return mountainName;
   }

   string Mountain::getCountry() const{
      return country;
   }

   int Mountain::getElevation() const{
      return elevation;
   }

   double Mountain::toMeters(){
      return (elevation / 3.2808); 
   }