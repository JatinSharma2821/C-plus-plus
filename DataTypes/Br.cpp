#include <iostream>
using namespace std;
int main () { // Writing code for girl who is allowed to go out only on date multiple of 5
         // and girl isnot ambigious about  going out on Saturday(multiple of 6). So, she does not want to say something about Saturday.
         //So Saturday will be skipped
    for (int i = 1 ; i <= 30; i++)
    {
        if(i%5==0) {
            cout<<"Allowed"<<i<<endl;
            if (i%6==0){continue;}; // continue used to skip statement
        }
        else{ 
            cout<<"Not Allowed"<<endl;
            break; // break used to terminate the loop
        }
    }
    return 0;
}