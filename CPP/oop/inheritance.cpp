#include <iostream>
using namespace std;

//why do we use inheritance? it is useful for code reusability: reuse attributes and methods of
//an existing class when you create a new class.

class Vehicle {
    public: 
        string brand = "Ford";
        void honk() {
            cout << "Tuut, tuut! \n";
        }
};

class Car: public Vehicle {
    public:
        string model = "Mustang";
};

int main() {
    Car myCar;
    myCar.honk();
    cout << myCar.brand + " " + myCar.model;
    return 0;
}