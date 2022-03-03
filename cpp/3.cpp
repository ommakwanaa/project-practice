#include<iostream>

using namespace std;
class addammount{
int balance=50;
public:
    addammount(){
        cout<<"Default constructor"<<endl;
    }
    addammount(int b){
        cout<<"Parameterize constructor"<<endl;
        balance+=b;
    }
    void display(){
    cout<<"Balance is :"<<balance<<endl;}
};

int main(){
addammount a1;
a1.display();
addammount a2(50);
a2.display();
return 0;
}