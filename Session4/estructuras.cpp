#include<iostream>
using namespace std;

struct Student
{
    string name;
    int age;
    int phoneNumber;
};

void printStudent(Student estudiante3)
{
    cout << estudiante3.name << endl;
    cout << estudiante3.age << endl;
    cout << estudiante3.phoneNumber << endl;
}

void printPointer2Student(Student* pointer2Student)
{
    cout << pointer2Student->name << endl;
    cout << pointer2Student->age << endl;
    cout << pointer2Student->phoneNumber << endl;
}

int main()
{
    Student estudiante1;
    Student estudiante2;
    Student estudiante3;
    
    estudiante3.name ="Pedro";
    estudiante3.age = 20;
    estudiante3.phoneNumber = 453314;

    printStudent(estudiante3);

    Student* pointer2Student;
    pointer2Student = new Student;

    pointer2Student->name = "Juan";
    pointer2Student->age = 20;
    pointer2Student->phoneNumber = 43335;

}