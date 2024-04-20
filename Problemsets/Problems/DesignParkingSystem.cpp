#include <unordered_map>

class ParkingSystem {
public:
    std::unordered_map<int, int> parking = {{1, 0}, {2, 0}, {3, 0}};
    ParkingSystem(int big, int medium, int small) {
        parking[1] = big;
        parking[2] = medium;
        parking[3] = small;
    }

    bool addCar(int carType) {
        if (parking[carType] > 0) {
            parking[carType]--;
            return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */