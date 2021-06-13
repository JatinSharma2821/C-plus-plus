#include<iostream>
using namespace std;

void fibonacci(int n)
{
	int a,b,c;
	a = 0;
	b = 1;

	for (int i = 1; i <= n; i++)
{	cout<<a<<" ";
	c = a+b;
	
	a = b;
	b = c;
	}return;

}

int main(){
int n;
cout<<"Enter n"<<endl;
cin>>n;
fibonacci(n);
return 0;
}