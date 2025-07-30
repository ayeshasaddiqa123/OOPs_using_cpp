#include<iostream>
using namespace std;
class Teacher {
    private:
        int id;
        string name;
        int age;
        double salary;
    public:
      Teacher(int id, string name, int age, double salary) 
        : id(id), name(name), age(age), salary(salary) {}

        // Copy constructor
        Teacher(const Teacher &t) {
            id = t.id;
            name = t.name;
            age = t.age;
            salary = t.salary;
            cout << "Copy constructor called" << endl;
        }

        void setid(int id) {
            this->id = id;
        }

        double getSalary() const {
            return salary;
        }


        // Destructor
        ~Teacher() {
            cout << "Destructor called for " << name << endl;
        }

        display() const {
            cout << "ID: " << id << ", Name: " << name << ", Age: " << age << ", Salary: " << salary << endl;
        }
    };

int main()
{
    Teacher t1(1, "John Doe", 35, 50000.0);
    Teacher t2(t1); // Copy constructor

    t2.setid(2); // Change ID of copied object
    cout<<"Record of 1st teacher: "<<endl;
    t1.display(); // Display original object
    cout<<"Record of 2nd teacher: "<<endl;
    t2.display(); // Display copied object

    // to compare the teaher's salary and print the largest one
    if (t1.getSalary() > t2.getSalary()) {
        cout << "Teacher 1 has a higher salary: " << t1.getSalary() << endl;
    } else {
        cout << "Teacher 2 has a higher salary: " << t2.getSalary() << endl;
    }

}