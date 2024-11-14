#include <iostream>
#include <string>

using namespace std;

class Student {
    private:
        string name;
        int age;
        char grade;

    public:
        void setName(string n) {name=n;}
        void setAge(int a) {age=a;}
        void setGrade(char g) {grade=g;}

        string getName() {return name;}
        int getAge() {return age;}
        char getGrade() {return grade;}
};

int main() {
    Student student;
    student.setName("Alice");
    student.setAge(20);
    student.setGrade('A');

    cout << "Student Name: " << student.getName() << endl;
    cout << "Age: " << student.getAge() << endl;
    cout << "Grade: " << student.getGrade() << endl;

    return 0;
};