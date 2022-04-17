#ifndef _ST_SCORE_H
#define _ST_SCORE_H
#include<bits/stdc++.h>
#include"Person.h"
#include"Student.h"
using namespace std;
class ST_Score: public Student{
public:
    void input(void);
    void print(void);
    void average(void);
private:
    double math;
    double english;
    double averagescore;
};
void ST_Score::input(void){
    Student::input();
    cout<<"Input math score:";
    cin>>math;
    cout<<"Input English score:";
    cin>>english;
    average();
}
void ST_Score::print(void){
    Student::print();
    cout<<"Math score:"<<math<<endl;
    cout<<"English score:"<<english<<endl;
    cout<<"Average score:"<<averagescore<<endl;
}
void ST_Score::average(void){
    averagescore = (math+english) / 2.0;
}
#endif // _ST_SCORE_H
