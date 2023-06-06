#ifndef MOUNTAIN_H
#define MOUNTAIN_H
using namespace std;

class Mountain {
   /**
    Private variables are created which includes mountain name, country
    and elevation
   */
   private:
      string mountainName;
      string country;
      int elevation;

   public:
      /**
       * assigns the variable mountianName with a string value
       * @param inputMountain 
      */
      void setMountain(string inputMountain);

      /**
       * assigns the variable country with a string value
       * @param inputCountry
      */
      void setCountry(string inputCountry);

      /**
       * assigns the variable elevation with a value
       * @param inputVal
      */
      void setElevation(int inputVal);

      /**
       * retrieves the mountain's name
       * @return mountainName
      */
      string getMountain() const;

      /**
       * retrieves the country's name 
       * @return country
      */
      string getCountry() const;

      /**
       * retrieves the mountain's elevation value
       * @return elevation
      */
      int getElevation() const; 

      /**
       * converts elevation from feet to meters returning a double value of meters
       * @return meters
      */
      double toMeters();

};
#endif