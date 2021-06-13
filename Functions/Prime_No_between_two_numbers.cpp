#include<iostream>
#include<math.h>
using namespace std;

/* This method is what I tried --- I'll visit it again after some time
int prime(int n1,int n2)// //output-return-type is defined ---arguments are passed with data types
{
	int check = 0;// defined a variable with some initial value
for (int i = n1; i <= n2; i++)// outer loop increments i from lower no. to upper

{
	for (int j = 2; j <= sqrt(i); j++)// nested loop checks for every no. b/w lower and upper no. whether it is prime or not
	{
		if (i%j==0)
		{ check = 1;
		 break;
		}// if no. is composite, check`s value will be changed to 1.

	}if (check==0){cout<<i<<" is a Prime No. || ";}// if check is still zero , means if condition of nested loop is not executed so no. is pri

}
}
*/

bool isPrime(int n)// output-return-type bool - bcz it returns true or false
{
	for (int j = 2; j<=sqrt(n); j++){
		if (n%j==0){return false;}
	}return true;
}
int main() {// main() is called by OS ---so main() gets stored in Call stack and become active frame
	int n1,n2;
cout<<"This program is to print all the prime no. between two no."<<endl;
cout<<"Enter starting no."<<endl;
cin>>n1;
cout<<"Enter ending no."<<endl;
cin>>n2;

//prime(n1,n2);
//This is what I tried first// prime() is called by main()--- prime is pushed in stack and becomes new active frame.
// After prime() body is executed , it will be popped out from stack and main() becomes active frame.

//MEthod-2----Teacher's Method

for (int i = n1; i <= n2; i++)
{
	if(isPrime(i)==true){cout<<i<<endl;}//if bydefault gives boolean value.
}
	return 0;// here main() is popped out and control is returned to OS
}