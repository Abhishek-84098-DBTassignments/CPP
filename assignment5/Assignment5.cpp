#include <iostream>
#include <string>

using namespace std;

class Date
 {
private:
    int day;
    int month;
    int year;

public:
    Date(int d, int m, int y)
    {
         day=d; 
         month=m; 
         year=y;
    }

    void display()
     {
        cout<<day<<":"<<month<<":"<< year;
     }
};

class Person 
{
private:
    string name;
    string address;
    Date birthdate;

public:
    Person(string n, string addr, Date dob) : name(n), address(addr), birthdate(dob) {}

    void display() 
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Birthdate: ";
        birthdate.display();
        cout<<endl;
    }
};

class Employee 
{
private:
    string id;
    double sal;
    string dept;
    Date joiningDate;

public:
    Employee(string empId, double salary, string department, Date joinDate)
        : id(empId), sal(salary), dept(department), joiningDate(joinDate) {}

    void display() 
    {
        cout<<"Employee ID: "<<id<<endl;
        cout<<"Salary: "<<sal<<endl;
        cout<<"Department: "<<dept<<endl;
        cout<<"Joining Date: ";
        joiningDate.display();
        cout<<endl;
    }
};

int main() 
{
    // Creating Date objects
    Date dob(11, 7, 1995);
    Date joinDate(1, 06, 2022);

    // Creating Person object
    Person person("Abhishek", "Karad", dob);

    // Creating Employee object
    Employee employee("1234", 70000, "Mech", joinDate);

    // Displaying details
    cout << "Person Details:" << endl;
    person.display();
    
    cout << "Employee Details:" << endl;
    employee.display();

    return 0;
}
