#include<iostream>

using namespace std;
class matrix{
int rows , columns;
public:
    matrix(int a, int b){
    rows = a;
    columns = b;
}
    void addrows(){
        
    }

void display(){
cout<<"salary is :"<<rows<<endl;
cout<<"hours is :"<<columns<<endl;}
};

int main(){
matrix e1(10,20);
e1.display();
return 0;
}
