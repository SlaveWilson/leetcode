#include <iostream>
#include <vector>
using namespace std;

class ParkingSystem
{
private:
  int _big = 0;
  int _medium = 0;
  int _small = 0;

public:
  ParkingSystem(int big, int medium, int small)
  {
    _big = big;
    _medium = medium;
    _small = small;
  }

  bool addCar(int carType)
  {
    switch (carType)
    {
    case 1:
      if (_big == 0)
        return false;
      else
      {
        _big--;
        return true;
      }
      break;
    case 2:
      if (_medium == 0)
        return false;
      else
      {
        _medium--;
        return true;
      }
      break;
    case 3:
      if (_small == 0)
        return false;
      else
      {
        _small--;
        return true;
      }
      break;
    default:
      return false;
      break;
    }
  }
};

int main()
{
  ParkingSystem *parkingSystem = new ParkingSystem(1, 1, 0);
  cout << parkingSystem->addCar(1) << endl;
  cout << parkingSystem->addCar(2) << endl;
  cout << parkingSystem->addCar(3) << endl;
  cout << parkingSystem->addCar(1) << endl;
}