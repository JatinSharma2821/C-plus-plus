#include <iostream>
#include <cstdio>
#include<iomanip> // gives fixed and setprecision() for prinitng speciic decimal places;
// first using fixed, instructions are fixed for only after decimal point 
// then set precision is used;
using namespace std;

int main() {
    int num1;
    long int num2;
    char s;
    float floatnum1;
    double floatnum2;
    cin>>num1>>num2>>s>>floatnum1>>floatnum2;
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<s<<endl;
    cout<<fixed;
    cout<<setprecision(3);
    cout<<floatnum1<<endl;
    cout<<fixed;
    
    cout<<setprecision(9);
    cout<<floatnum2<<endl;
    
    
    return 0;
}
