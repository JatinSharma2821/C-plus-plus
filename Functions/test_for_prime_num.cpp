#include<iostream>
#include<cmath>// ignore if starting file for first time as one move forward in this tutorial, one will come to know its importance 
using namespace std;
int main()
{

cout<<"This program is to check whether the given no. is prime or not"<<endl;
int num;
cout<<"Enter the num"<<endl;
cin>>num;

int i;
for (i=2; i < num; i++) //  prime num is divisible by itself and 1 always. range of i will not include them.
{
	if (num%i==0)
	{ // if remainder is zero means it is divisible by some other no. than 12 and itself too.
		cout<<num<<" is a composite no. and is divisble by "<<i;// so this will be composite no.
		 break;// only one factor is required to prove it as composite no. so it wil break as soon as even a single factor ia found
		}
		
	
}

// above concept is correct to check nature but the issue if we enter a prime no. 
// Issue 1 - // we donot get any output so we donot come to know whether the loop is executed or not.

// this issue can be solved by taking other int variable with some value and in loop changing its value. 
// then printing varible , if we get old value means the loop has completly executed and didnot found any factor means 
// if condition inside loop is not executed and if gets updated value implies that if condition is executed 
// and no. is composite no.

// Issue 2 - Donot work for negative number.
// Need to apply condition for num to be +ve.

// Range of i is large and it can be shortened smartly .
// i<sqrt(num) because if a factor exists afer sqrt of n so it will surely multiply with a no. equal or less than sqrt(num).
// for that we need to include header file named as cmath.

int num1,j;
cout<<"This is updated program with solved earlier bug"<<endl;
cout<<"Enter the num"<<endl;
cin>>num1;
if (num1>=0)
{
int check = 0;
for (j = 2; j < sqrt(num1); j++)
{
	if (num1%j==0)
	{
		cout<<num1<<" is a composite no. and is divisble by "<<j;
		check = 1;
		 break;
	}
}
	if (check==0) {cout<<"Given no. is Prime no."<<endl;}

}
else {cout<<"The program is designed for positive no. only";}

	return 0;
}