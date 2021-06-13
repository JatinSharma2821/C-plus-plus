#include<iostream>
using namespace std;

int func_factorial(int n)// gives factorial of a no.
{
	int m = 1;
	for (int i = 1; i <= n; i++)
	{
		m*= i;
	} return m;
	
}

int nCr(int n,int r)// gives nCr value
{	int c;
	 c = func_factorial(n)/(func_factorial(r)*func_factorial(n-r));
	 return c;
}

int main()
{
	int n,r;
	cout<<"Enter n"<<"Enter r"<<endl;
	cin>>n>>r;
	if(n>r)
	{cout<<nCr(n,r);}
	else {cout<<"Defined only for n>R";}

	return 0;
}