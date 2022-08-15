#include <iostream>
using namespace std;

// 3 rules for constructor:
// 1) A constructor doesn't have a return type.
// 2) A constructor has the same name as the class that it belongs to.
// 3) Contructor must be public.

class Employee {
public: 
   string Name;
   string Company;
   int age;

   Employee(string name, string company, int _age) {
    Name = name;
    Company = company;
    age = _age;     
    }
   void IntroduceYourself(){
    std::cout << "Hello I am " << Name << endl; 
    std::cout << "I work for company called " << Company << endl; 
    std::cout << "And I am " << age << endl; 
    }

}; 

int main()
{
    Employee employee1 = Employee("Tehreem", "My own self", 16);
    employee1.IntroduceYourself();

    Employee employee2 = Employee ("Mahreen", "Everva", 20);
    employee2.IntroduceYourself();


}