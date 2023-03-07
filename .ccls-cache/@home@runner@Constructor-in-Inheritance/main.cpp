#include <iostream>
using namespace std;

class Person {
protected:
    string name;
public:
    Person(string name) : name(name) { cout << "Person constructor called." << endl; }
};

class Employee : public Person {
protected:
    int emp_id;
public:
    Employee(string name, int emp_id) : Person(name), emp_id(emp_id) { cout << "Employee constructor called." << endl; }
};

int main() {
    Employee e("John", 1234); // Output: Person constructor called. Employee constructor called.
    return 0;
}
