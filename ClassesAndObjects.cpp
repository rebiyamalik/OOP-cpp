#include <iostream>
using namespace std;

// there are 3 access modifiers:
// 1) Private
// 2) Protected
// 3) Public 

class Employee {
public: 
   string Name;
   string Company;
   int age;

   void IntroduceYourself(){
    cout << "Hello I am " << Name << endl; 
    cout << "I work for company called " << Company << endl; 
    cout << "And I am " << age << endl; 

   } 
}; 

int main()
{
    Employee employee1;
    employee1.Name = "Tehreem";
    employee1.Company = "My Own Company";
    employee1.age = 16;
    employee1.IntroduceYourself();

    Employee employee2;
    employee2.Name = "Mahreen";
    employee2.Company = "Everva";
    employee2.age = 20;
    employee2.IntroduceYourself();


}