#include <iostream>
using namespace std;
int main(){
int num;
cout<<"This program is to convert decimal to binary no."<<endl;
cout<<"Enter the no. to convert it into binary"<<endl;
cin>>num;
long int quo,rem;
//  example num = 45
while (quo!=0)
{
	rem = num%2;// rem==remainder, it gives binary form element ---
	// for i=1, rem=45%2=1 --- so 1 is binary element for 1st iteration-- 
	// it can be veryified by using standard method of calculating bin form from decimal by sort of prime factorisation.
	cout<<rem;
	quo = num/2;//its takes integer part of division by 2 
	// quo = 45/2 = 22(quo takes int value only)
	num = quo;// updates value of num for next iteration 
	// num updated to new value =2
	//Now again loop body will be executed with num == 2
}


/*   Self-tried method for bin to deci---
// Program to convert bin to decimal
int num1;
cout<<"This program is to convert bin to decimal"<<endl;
cout<<"Enter no. to be converted"<<endl;
cin>>num1;
int val = 0;
int i;

for (i = sizeof(num1) - 1; i>=0; i--)
{
	// 101101
//val = val + (pow(2,i))*num1[-i];

}
*/


// correct method---
// Hints

// 1. while loop will come into role
// 2.think about taking out last digit first (remainder method) for multiplication with appropriate power of 2	return 0;

}