#include <iostream>
using namespace std;
int main() {

    for(int i = 1; i <= 10; i++) // for loop used for iteration with counter variable
      { int a;
        cout<<"Enter positive integer "<<endl;
        cin>>a;
        cout<<"Value of a"<<a<<endl; 
    }
    
    
    // while loop
    int n; 
    cout<<"Enter n"<<endl; // while loop used for true condition  with iteration upto truthness of condition
    cin>>n;
    
    
        while (n>=0){ // example of while loop iterating upto truthness of condition
        
        cout<<"Valid"<<endl;
        cout<<"Enter positive integer"<<endl;
        cin>>n;
        }
    

     // do while loop
     int b;
    do{    // similar to while loop 
          // but loop body written first and condition later
    cout<<"Enter b"<<endl; 
    cin>>b;
    
        cout<<"Valid"<<b<<endl; // body written first so loop body is executed atleast one time // IT IS DIFFERENCE BETWEEN WHILE AND DO WHILE
        cout<<"Enter positive integer"<<endl;
        cin>>b;
        


    }while (b>=0) ;    // while condtion mentioned in last


    
    return 0;
    
}