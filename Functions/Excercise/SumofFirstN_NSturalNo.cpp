#include<iostream>
using namespace std;

int sumofn(int n)// function to get sum of all first n natural no.
{
	int c = 0;
	for (int i = 1; i<=n; i++){
		c+= i; // add all natural no.

	}return c;
}

int main()
{
// Q-1 Print sum of all first n numbers.

int n;
//cout<<"Enter n"<<endl;
cin>>n;

cout<<sumofn(n);


	return 0;
}