#ifndef MOUNTAIN_H
#define MOUNTAIN_H
using namespace std;

class Mountain {
   private:
      string mountainName;
      string country;
      int elevation;

   public:
      void setMountain(string inputMountain);
      void setCountry(string inputCountry);
      void setElevation(int inputVal);
      string getMountain() const;
      string getCountry() const;
      int getElevation() const; 
      double toMeters();

};
#endif