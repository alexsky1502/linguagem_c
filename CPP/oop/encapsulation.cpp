#include <iostream>
using namespace std;

//why we do use encapsulation? because it ensures better control of your data, because you
//or others can change one part of the code without affecting other parts
//and it increase the security of data

class Employee {
    private:
        //private attribute
        int salary;

    public:
        //setter
        void setSalary(int s) {
            salary = s;
        }

        //getter
        int getSalary() {
            return salary;
        }
};

int main() {
    Employee myObj;
    myObj.setSalary(50000);
    cout << myObj.getSalary();
    return 0;
}