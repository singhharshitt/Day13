#include <iostream>
using namespace std;

class Car {
    string brand;
    string model;
    string engine;
    int seats;

public:
    void setInfo() {
        cout << "Enter brand: ";
        cin >> brand;
        cout << "Enter model: ";
        cin >> model;
        cout << "Enter engine: ";
        cin >> engine;
        cout << "Enter number of seats: ";
        cin >> seats;
    }

    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Engine: " << engine << endl;
        cout << "Seats: " << seats << endl;
    }
};

int main() {
    Car car1;
    car1.setInfo();
    car1.displayInfo();

    return 0;
}
