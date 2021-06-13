#include<iostream>
using namespace std;
int main() {
    char name;
    cout<<"Enter character"<<endl; // writing code for robot that gives fix output depending upon input
    cin>>name;
    switch (name) {  // switch is used in place of multiple if-else condition
        case 'a' : 
            cout<<"n = a"; 
            break;
        case 'b' : 
            cout<<"n = b";
            break;
        case 'c' :
            cout<<"n = c"; 
            break;
        case 'd' : 
            cout<<"n = d";
            break;
        case 'e' :
            cout<<"n = e";
            break;
         
        default : 
            cout<<"NO such directory"<<endl;
            break;
    }
    // writing code for calc
    int a,b,c;
    char func;

    cout<<"Enter a"<<endl;
    cin>>a;
    cout<<"Enter b"<<endl;
    cin>>b;
    cout<<"Enter operation"<<endl;
    cin>>func;

    switch (func) 
        
    
    {
    case 'a' :
         c = a + b ;
         cout<<"Add gives"<<c<<endl;
         break;
        
    case 's' :
        if (a > b) {c = a - b ;}
        else { c = b - a;}
         
         cout<<"sub gives"<<c<<endl;
         break;

    case 'd' :
        if (a > b) {c = a / b ;}
        else { c = b / a;}
         
         cout<<"div gives"<<c<<endl;
         break;

    case 'm' :
         c = a * b ;
         cout<<"mul gives"<<c<<endl;
         break;    
    default : cout<<"Out of Scope of this calc";
        break;
    }

    return 0;
}
