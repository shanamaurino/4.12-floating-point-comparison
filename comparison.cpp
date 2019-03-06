#include <iostream>

#include <cmath>

using namespace std;



int main() {

   double targetValue = 0.3333;

   double sensorReading = 0.0;



   sensorReading = 1.0/3.0;



   if (fabs(targetValue - sensorReading) < 0.0001) {

    cout << "Equal" << endl;

   }

   else {

      cout << "Not equal" << endl;

   }



   return 0;
}