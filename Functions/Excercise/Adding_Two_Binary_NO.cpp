// Visit this again to understand it.




// Adding two binary no.
// If on addition we get 2, answer comes to 0 and 1 carry is passed to next position.

// # possible cases - both zero, 1st zero-second one/second zero-1st one, both one.
#include<iostream>
using namespace std;

int addBinary(int num1, int num2)
{	int ans = 0;// initialsed answer to add outcome in this.
	int prevCarry = 0;// taken for adding carry
	while(num1>0 || num2>0)

	{if (num1 + num2 ==0)// Case 1 - Both ZEro
	{ans+= prevCarry;
	prevCarry = 0;}

	else if (num1 + num2 == 1)//Case 2- Only one zero
		{if (prevCarry=1){ans+= 0; prevCarry = 1 ;}
		else {ans+= 1; prevCarry = 1;}}

	else {ans+= prevCarry; prevCarry = 0;}// CAse 3- Both 1		

	num1 = num1/10;
	num2 = num2/10;	

	}cout<<ans;
}


int main()
{

int num1,num2;
cin>>num1>>num2;// Taking two input for adding binary no.

addBinary(num1,num2);



	return 0;
}