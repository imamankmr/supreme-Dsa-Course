#include<iostream>
using namespace std;
// global variable declare

int c=45;
int main(){
    // declaration
    int a;
// intialisation.
    int b=10;
// updation
    b=15;
    // calling global variable
    cout << c << endl;
if(true){
    int b=23;
    cout <<b << endl;
    cout <<c<< endl;
}
cout << b<< endl;
}