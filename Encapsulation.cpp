#include <iostream>
using namespace std;

class Employee {
private: 
   string Name;
   string Company;
   int Age;
public:
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        Age = age;
    }
    int getAge(){
        return Age;
    }
    void IntroduceYourself(){
        std::cout << "Hello I am " << Name << endl; 
        std::cout << "I work for company called " << Company << endl; 
        std::cout << "And I am " << Age << endl; 
    }
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
}; 
int main()
{
    Employee employee1 = Employee("Tehreem", "My own self", 15);
    employee1.IntroduceYourself();

    Employee employee2 = Employee ("Mahreen", "Everva", 20);
    employee2.IntroduceYourself();

    employee1.setAge(67);
    employee1.setName("Tehreem");
    cout << employee1.getName() << " is " << employee1.getAge() << " years old" << endl;
    
}