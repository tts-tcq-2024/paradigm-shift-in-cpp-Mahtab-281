#include <assert.h>
#include <iostream>
using namespace std;

bool batteryIsOk(float temperature, float soc, float chargeRate) {
  bool isOk = true;
  
  if (temperature < 0 || temperature > 45 || 
      soc < 20 || soc > 80 || 
      chargeRate > 0.8) {
    cout << "Battery parameters out of range!\n";
    isOk = false;
  }

  return isOk;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7) == true);
  assert(batteryIsOk(50, 85, 0) == false);
}
