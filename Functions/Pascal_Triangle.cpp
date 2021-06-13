#include<iostream>
// #include "nCr_Calc.cpp" -- another cpp file can be imported like this but here the issue is int main() is already defined there.
using namespace std;

/* Print
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1 

 Hint- think about comparing each term in form of bionomial coefficients of i-j



*/

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


int Pascal_Triangle(int n)
{
	for (int i = 1; i<= n; i++)
	{
		for (int j = 1; j <=i; j++)
		{	cout<<nCr(i-1,j-1)<<" ";
		
		}cout<<endl;
	}
}


int main()
{ int n;
cout<<"Enter n"<<endl;
cin>>n;
Pascal_Triangle(n);
	return 0;
}