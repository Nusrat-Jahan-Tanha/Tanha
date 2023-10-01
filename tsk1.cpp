#include <iostream>

class Vehicle {
public:
    Vehicle(int wheels, int range) : wheels(wheels), range(range) {}
    void display() const {
        std::cout << "Wheels: " << wheels << "\nRange: " << range << std::endl;
    }

private:
    int wheels;
    int range;
};

class Car : public Vehicle {
public:
    Car(int wheels, int range, int passengers) : Vehicle(wheels, range), passengers(passengers) {}
    void display() const {
        std::cout << "Car:\n";
        Vehicle::display();
        std::cout << "Passengers: " << passengers << std::endl;
    }

private:
    int passengers;
};

class Truck : public Vehicle {
public:
    Truck(int wheels, int range, int loadLimit) : Vehicle(wheels, range), loadLimit(loadLimit) {}


