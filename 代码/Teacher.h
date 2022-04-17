#ifndef _TEACHER_H
#define _TEACHER_H
#include<bits/stdc++.h>
#include"Person.h"
using namespace std;
class Teacher: public Person{
public:
    void input(void);
    void print(void);
private:
    char degree[50];
    char Dep[50];
};
void Teacher::input(void){
    Person::input();
    cout<<"Input teacher's degree:";
    cin>>degree;
    cout<<"Input teacher's department:";
    cin>>Dep;
}
void Teacher::print(void){
    Person::print();
    cout<<"Degree:"<<degree<<endl;
    cout<<"Department:"<<Dep<<endl;
}
#endif // _TEACHER_H
