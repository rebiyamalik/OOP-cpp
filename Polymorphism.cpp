#include <iostream>
using namespace std;

class AbstractEmployee{
     virtual void AskForPromotion()=0;

};
class Employee:AbstractEmployee {
private: 
   string Company;
   int Age;
protected: 
    string Name;
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
        if (age >= 18)
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
    void AskForPromotion() {
        if(Age > 30)
            cout << Name << " got promoted!" << endl;
        else
            cout << Name << ", sorry NO promotion for you" << endl;
    }
    void Work(){
        cout<< Name << " is checking emails, managing clients... " << endl;
    }
};
// Employee is the Parent class
// Developer is the child class 
class Developer:public Employee {      
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favprogramminglanguage) 
        :Employee(name, company, age)   
            {
                FavProgrammingLanguage = favprogramminglanguage;
            }    
    void FixBug(){
    cout << Name << " fixed a bug using " << FavProgrammingLanguage << endl;       
    }
    void Work(){
        cout<< Name << " is writing " << FavProgrammingLanguage << " code" << endl;
    }
};

class Teacher:public Employee {
public: 
    string Subject;
    void PrepareLesson(){
        cout << Name << " is preparing " << Subject << " lesson" << endl;
    }
    Teacher(string name, string company, int age, string subject)
        :Employee(name, company, age)
    {
        Subject = subject;
    }
    void Work(){
        cout<< Name << " is teaching " << Subject << endl;
    }
};
int main() // The most common use of plymorphism is when 
          // parent class reference is used to refer to a child class object.
{
    Developer d = Developer("Tehreem", "\'My own company\'", 78, "C++");
    Teacher t = Teacher("Jack", "App&Snap", 65, "History");
    
    Employee* e1 = &d;
    Employee* e2 = &t;

    e1 ->Work();
    e2 ->Work();

}