#include<iostream>
#include<math.h>
using namespace std;
// Armstrong no. - A no. whose sum of cube of all digits is equal to no. itself.
int main() 
{
	int num;
cout<<"This Program is to check wether the given is armstrong or not."<<endl;
cout<<"Enter number to check"<<endl;
cin>>num;
int rem ; 
int sum = 0;
int originalnum = num;
while (num>0)
{	rem = num%10;
cout<<rem<<" || ";
cout<<pow(rem,3)<<"  ";
	cout<<sum<<" ";
	sum = sum + pow(rem,3);
	cout<<sum<<" ---- ";
	num = num/10;
	
}
if(sum==originalnum) {cout<<"Its a armstrong no.";}
else {cout<<"Not armstrong no.";}
cout<<pow(3,3)<<" "<<pow(5,3)<<" "<<pow(1,3);




	return 0;
}