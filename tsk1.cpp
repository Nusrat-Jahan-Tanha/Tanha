#include <iostream>
using namespace std;

class Vehicle {
protected:
    int wheels;
    int range;

public:
    Vehicle(int w, int r) : wheels(w), range(r) {}

    void displayInfo() {
        cout << "Wheels: " << wheels << endl;
        cout << "Range: " << range << endl;
    }
};

class Car : public Vehicle {
private:
    int passengers;

public:
    Car(int w, int r, int p) : Vehicle(w, r), passengers(p) {}

    void displayInfo() {
        cout << "Car:" << endl;
        Vehicle::displayInfo();
        cout << "Passengers: " << passengers << endl;
    }
};

class Truck : public Vehicle {
private:
    int loadLimit;

public:
    Truck(int w, int r, int ll) : Vehicle(w, r), loadLimit(ll) {}

    void displayInfo() {
        cout << "Truck:" << endl;
        Vehicle::displayInfo();
        cout << "Load Limit: " << loadLimit << endl;
    }
};

int main() {
    Car c(4, 500, 5);
    Truck t(12, 1200, 3000);

    c.displayInfo();
    cout << endl;
    t.displayInfo();

    return 0;
}



