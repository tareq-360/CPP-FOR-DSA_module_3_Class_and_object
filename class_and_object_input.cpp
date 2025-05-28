#include<iostream>
using namespace std;
class Student{
    public:
    char name[100];
    int roll;
    double gpa;
    char sec;

};
int main(){
    Student s1,s2;
    cin.getline(s1.name,100);
    cin>>s1.roll>>s1.gpa>>s1.sec;
    cin.ignore();
    cout<<s1.name<<" "<<s1.roll<<" "<<s1.gpa<<" "<<s1.sec<<endl;
    cin.getline(s2.name,100);
    cin>>s2.roll>>s2.gpa>>s2.sec;
    cout<<s2.name<<" "<<s2.roll<<" "<<s2.gpa<<" "<<s2.sec<<endl;
    return 0;

}