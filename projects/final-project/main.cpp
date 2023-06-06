

#include <iostream>
#include <string>
#include <vector>
using namespace std;
#include "Mountain.h"

int minElevation(vector<Mountain> mList ){
   Mountain firstObj = mList.at(0);
   int minVal = firstObj.getElevation();
   for(auto m: mList){
      if(minVal > m.getElevation() ){
         minVal = m.getElevation();
      }
   }
   return minVal;
}

int main(){
vector<Mountain> listMountains;
int minVal;
string minMountain;

Mountain obj1;
obj1.setMountain("Chimborazo");
obj1.setCountry("Ecuador");
obj1.setElevation(20549);
listMountains.push_back(obj1);

Mountain obj2;
obj2.setMountain("Matterhorn");
obj2.setCountry("Switzerland");
obj2.setElevation(14692);
listMountains.push_back(obj2);

Mountain obj3;
obj3.setMountain("Olympus");
obj3.setCountry("Greece (Macedonia)");
obj3.setElevation(9573);
listMountains.push_back(obj3);

Mountain obj4;
obj4.setMountain("Everest");
obj4.setCountry("Nepal");
obj4.setElevation(29029);
listMountains.push_back(obj4);

Mountain obj5;
obj5.setMountain("Mount Marcy - Adirondacks");
obj5.setCountry("United States");
obj5.setElevation(5344);
listMountains.push_back(obj5);

Mountain obj6;
obj6.setMountain("Mount Mitchell - Blue Ridge");
obj6.setCountry("United States");
obj6.setElevation(6684);
listMountains.push_back(obj6);

Mountain obj7;
obj7.setMountain("Zugspitze");
obj7.setCountry("Switzerland");
obj7.setElevation(9719);
listMountains.push_back(obj7);

minVal = minElevation(listMountains);

for(auto m: listMountains){
   cout << m.getMountain() << " " 
        << m.getCountry() << " "
        << m.getElevation() << "ft "
        << m.toMeters() << "m " << endl;
   if(m.getElevation() == minVal){
      minVal = m.getElevation();
      minMountain = m.getMountain();
   }
}

cout << "Shortest Mountain: " << minMountain << " " << minVal << "ft" << endl;

return 0;
}

