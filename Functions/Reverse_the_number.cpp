#include<iostream>
using namespace std;
int main()
{
long int num;
	cout<<"This program is to reverse the no."<<endl;
	cout<<"Enter the num to reverse"<<endl;
	cin>>num;
	int rem;
	int quo;
	int reversenum = 0;

	while (num>0)
	{
		rem = num%10;
		reversenum = reversenum*10 + rem; // adds remainder by multiply with earlier remainder with 10. Think Why?
	
		num = num/10;

	}cout<<reversenum;








	return 0;
}