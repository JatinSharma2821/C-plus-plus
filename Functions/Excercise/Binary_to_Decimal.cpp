#include<bits/stdc++.h>
#include<cmath>
#include<math.h>
using namespace std;

/*
int len(int num,int base) // Program tyo find length of no.
{	int length = 0;
	while(num>0)
	{num/base;
	length++;
	}
	cout<<length;
}
*/
int converter(int num)	
{ int val = 0;
int x = 0;
while(num>0)
{
	int rem = num%10; // Gives last no. 
	int result = rem*pow(2,x);// last no multiplied by corresponding power of 2.
		val = val + result;
		num = num/10;
		x++;

}cout<<val;


}

int main()
{
//cout<<"This program is to convert bin to decimal"<<endl;
int n;
//cout<<"Enter binary no."<<endl;
cin>>n;

converter(n);




	return 0;
}
