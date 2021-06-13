// Task
// 1
// 23
// 456
// 78910
// 1112131415

#include <iostream>
using namespace std;
int main()
{

int n;
cout<<"Enter n"<<endl;
cin>> n;
int val;// we see a value starting from 1 is incremented and printed.
val = 1;
for (int i = 1; i<= n; i++)
{
	for (int j = 1 ; j <= i; j++)// j goes till value of i only.
	{ 
		cout<<val++<<" ";//val getting printed and incremented for next execution
	}cout<<endl;
}



	return 0;
}