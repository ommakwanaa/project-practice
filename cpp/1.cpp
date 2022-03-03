#include<iostream>

using namespace std;
class Employee{
int salary , month;
public:
void getInfo(int sal, int hr){
salary = sal;
month = hr;
}
void AddSal(){
if (salary<500){
salary+=10;}}

void AddWork(){
if(month>6){
salary+=5;}}

void display(){
cout<<"salary is :"<<salary<<endl;
cout<<"hours is :"<<month<<endl;}
};

int main(){
Employee e1;
int a,b;
cout<<"enter the salary in $: ";
cin>>a;
cout<<endl<<"enter the number of hours per day: ";
cin>>b;
e1.getInfo(a,b);
cout<<"Before"<<endl;
e1.display();
e1.AddSal();
e1.AddWork();
cout<<"After"<<endl;
e1.display();
return 0;
}
