#ifndef _STUDENT_H
#define _STUDENT_H
#include<bits/stdc++.h>
#include"Person.h"
using namespace std;
class Student: public Person{
public:
    void input(void);
    void print(void);
private:
    int age;
    char stuNum[50];
};
void Student::input(void){
    Person::input();
    cout<<"Input student's age:";
    cin>>age;
    cout<<"Input student's number:";
    cin>>stuNum;
}
void Student::print(void){
    Person::print();
    cout<<"Age:"<<age<<endl;
    cout<<"Student's number:"<<stuNum<<endl;
}
#endif // _STUDENT_H
