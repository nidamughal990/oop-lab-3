#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
    string name;
    int age;

public:
    void setPerson( string personName, int personAge) {
        name = personName;
        age = personAge;
    }

    void showPerson() {
        cout << "Name: " << name << ", Age: " << age;
    }
};

class Student : public Person {
private:
    int rollNo;

public:
void setStudent( string studentName, int studentAge, int studentRollNo) {
        setPerson(studentName, studentAge);  
        rollNo = studentRollNo;
}
    void showStudent() {
        showPerson();
        cout << ", Roll No: " << rollNo <<endl;
    }
};

int main() {
    Student s1;
    s1.setStudent("Alice", 20, 101);
    s1.showStudent();

    return 0;
}
