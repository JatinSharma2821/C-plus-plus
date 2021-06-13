#include <iostream>
using namespace std;
int main(){
    int a; // declaration
    a = 20; // intitiation
    cout<<"size of a"<<sizeof(a)<<endl;

    float b;
    b = 30.0;
    cout<<"size of b"<<sizeof(b)<<endl;

    char c;
    c = 'f';
    cout<<"size of c"<<sizeof(c)<<endl;

    bool d;
    d = 10 > 20;
    cout<<"size of d"<<sizeof(d)<<endl;

    long int si;
    short int li;
    cout<<"size of long"<<sizeof(si)<<endl;
    cout<<"size of short"<<sizeof(li)<<endl;

    return 0;

}