#include <iostream>
using namespace std;

class ParkingSystem {
public:
    int bigNum, mediumNum, smallNum;
    ParkingSystem(int big, int medium, int small) {
        bigNum = big;
        mediumNum = medium;
        smallNum = small;
    }
    
    bool addCar(int carType) {
        if (carType == 1) {
            if (bigNum < 1) return false;
            bigNum -= 1;
            return true;
        } else if (carType == 2) {
            if (mediumNum < 1) return false;
            mediumNum -= 1;
            return true;
        } else if (carType == 3) {
            if (smallNum < 1) return false;
            smallNum -= 1;
            return true;
        }
        
        return false;
    }
};
