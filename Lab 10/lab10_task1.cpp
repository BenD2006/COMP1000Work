#include <iostream>
#include <string>

using namespace std;

class Vehicle {
    protected:
        string make;
        string model;
    
    public:
        Vehicle(string mke, string mdl): make(mke), model(mdl) {}

        virtual void displayInfo() {
            cout << "Make " << make << "Model " << model << endl;
        }
};
class Car: public Vehicle {
    private:
        int numOfDoors;

    public:
        Car(string mke, string mdl, int drs): Vehicle(mke, mdl), numOfDoors(drs) {}

        void displayInfo() override {
            Vehicle::displayInfo();
            cout << "Num of doors " << numOfDoors << endl;
        }

};

class Bike: public Vehicle {
    private:
        bool hasCarrier;
    
    public:
        Bike(string mke, string mdl, bool car): Vehicle(mke,mdl), hasCarrier(car) {}

        void displayInfo() override {
            Vehicle::displayInfo();
            cout << "Has Carrier " << (hasCarrier? "Yes":"No") << endl;
        }
};

int main () {
    Car car("Toyota", "Corolla", 4);
    Bike bike("Yamaha", "MT-15", true);

    car.displayInfo();
    bike.displayInfo();

    return 0;
}