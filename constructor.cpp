#include<iostream>
using namespace std;
class Student{
    public:
    int roll;
    double gpa;
    int cls;
    Student(int r,double g,int c){  //constructor function 
        roll=r;
        gpa=g;
        cls=c;
    }

};
int main(){
    // Student tareq;  //this is normal process
    // tareq.roll=50;
    // tareq.gpa=3.53;
    // tareq.cls=11;
    //Student tareq(39,3.33,9); //using constractor for sortcurt 
    // if you have input 
    int r,c;
    double g;
    cin>>r>>g>>c;
    Student tareq(r,g,c);
    cout<<tareq.roll<<" "<<tareq.gpa<<" "<<tareq.cls<<endl;
    return 0;
}