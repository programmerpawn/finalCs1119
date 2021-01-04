#include <iostream>
#include "Triangle.h"
using namespace std;

int main(int argc, const char* argv[]) {
   Triangle triangle1;
   Triangle triangle2;
   double numBase;
   double numHeight;
   double numBase2;
   double numHeight2;
   
   cin >> numBase;
   cin >> numHeight;
   
   cin >> numBase2;
   cin >> numHeight2;
   
   // TODO: Read and set base and height for triangle1 (use SetBase() and SetHeight())
   triangle1.SetBase(numBase);
   triangle1.SetHeight(numHeight);
   //triangle1.PrintInfo(); 
      
   // TODO: Read and set base and height for triangle2 (use SetBase() and SetHeight())
   triangle2.SetBase(numBase2);
   triangle2.SetHeight(numHeight2);
   //triangle2.PrintInfo(); 
   
   // TODO: Determine larger triangle (use GetArea())

   cout << "Triangle with larger area:" << endl;
   //cout << triangle1.GetArea();
   //cout << triangle2.GetArea();
   
   if (triangle1.GetArea() > triangle2.GetArea()){
      triangle1.PrintInfo();  
   } else {
      triangle2.PrintInfo();
   }
   // TODO: Output larger triangle's info (use PrintInfo())
   
   return 0;
}
