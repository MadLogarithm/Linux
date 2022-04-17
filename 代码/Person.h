#ifndef _PERSON_H
#define _PERSON_H
#include<bits/stdc++.h>
using namespace std;
class Person{
public:
    void input(void);
    void print(void);
private:
    char name[50];
    char id[50];
};
void Person::input(void){
    cout<<"Input name:";
    cin>>name;
    cout<<"Input id:";
    cin>>id;
}
void Person::print(void){
    cout<<"Name:"<<name<<endl;
    cout<<"Id:"<<id<<endl;
}
#endif // _PERSON_H
