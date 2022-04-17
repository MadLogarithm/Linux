#ifndef _TUTOR_H
#define _TUTOR_H
#include<bits/stdc++.h>
#include"Person.h"
#include"Teacher.h"
#include"Student.h"
using namespace std;
class Tutor: public Teacher{
public:
    void input(void);
    void print(void);
private:
    Student student;
    int year;
    int month;
    int day;
    int hour;
    int minute;
};
void Tutor::input(void){
    cout<<"Input teacher's information:"<<endl;
    Teacher::input();
    cout<<"Input student's information:"<<endl;
    student.input();
    cout<<"Input meeting time(like 2022/04/13 15:45):";
    cin>>year;
	cin.get();
	cin>>month;
	cin.get();
	cin>>day;
	cin.get();
	cin>>hour;
	cin.get();
	cin>>minute;
}
void Tutor::print(void){
    cout<<"Teacher's information:"<<endl;
    Teacher::print();
    cout<<"Student's information:"<<endl;
    student.print();
    cout<<"Meeting time:";
    printf("%d/%02d/%02d %02d:%02d\n", year, month, day, hour, minute);
}
#endif // _TUTOR_H
