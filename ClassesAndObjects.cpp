#include <iostream>
using namespace std;

// Base class
class Employee {
private:
    string name;
    string company;
    int age;

public:
    // Constructor
    Employee(string n, string c, int a) {
        name = n;
        company = c;
        setAge(a);  // Use setter to apply validation
    }

    // Setters
    void setName(string n) { name = n; }
    void setCompany(string c) { company = c; }
    void setAge(int a) {
        if (a >= 16 && a <= 100)
            age = a;
        else
            cout << "Invalid age. Must be between 16 and 100.\n";
    }

    // Getters
    string getName() const { return name; }
    string getCompany() const { return company; }
    int getAge() const { return age; }

    // Method
    void introduceYourself() const {
        cout << "Hello, I am " << name << endl;
        cout << "I work for a company called " << company << endl;
        cout << "And I am " << age << " years old\n" << endl;
    }
};

int main() {
    // Creating objects with constructor
    Employee employee1("Tehreem", "My Own Company", 16);
    Employee employee2("Mahreen", "Everva", 20);

    employee1.introduceYourself();
    employee2.introduceYourself();

    // Optional: Use setters to modify
    employee1.setAge(18);
    employee1.introduceYourself();

    return 0;
}
