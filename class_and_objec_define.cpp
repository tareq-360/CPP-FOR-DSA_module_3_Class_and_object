#include<iostream>
#include<string.h>
using namespace std;
class Student{
    public:
    char name[100];
    int roll;
    double gpa;
    char sec;
};
int main(){
    Student s1;
    char temp[100]="Md Tareq Hossain";
    strcpy(s1.name,temp);
    s1.roll=683384;
    s1.gpa=3.56;
    s1.sec='A';
    cout<<s1.name;
    return 0;
}