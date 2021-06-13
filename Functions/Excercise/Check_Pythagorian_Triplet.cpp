// This code donot give correct output in VS Code but works well in online C++ compiler

#include<iostream>
#include<math.h>
using namespace std;

int sqr(int n)
{
	int c;
	c = pow(n,2);
	return c;
}


int pythagorian(int a, int b, int c){
if (sqr(a)>sqr(b))
{
	if ((sqr(a)>sqr(c)) && (sqr(a) == sqr(b) + sqr(c)))
	{
	cout<<"Given Triplet is Pythagorean with "<<a<<" as Hypotenous"<<endl;
	}
	else if ((sqr(c)>sqr(a)) && (sqr(c) == sqr(b) + sqr(a)) ) 
	{cout<<"Given Triplet is Pythagorean with "<<c<<" as Hypotenous"<<endl;}
	else {cout<<"Given Triplet is not Pythagorean"<<endl;}
}
else {
	
	if ((sqr(b)>sqr(c)) && (sqr(b) == sqr(a) + sqr(c)))
	{
	cout<<"Given Triplet is Pythagorean with "<<b<<" as Hypotenous"<<endl;
	}
	else if ((sqr(c)>sqr(b)) && (sqr(c) == sqr(b) + sqr(a)) ) 
	{cout<<"Given Triplet is Pythagorean with "<<c<<" as Hypotenous"<<endl;}
	else {cout<<"Given Triplet is not Pythagorean"<<endl;}

}
}

int main(){
	int a,b,c;
	cout<<"Enter a "<<" b "<<" c"<<endl;
	cin>>a>>b>>c;

pythagorian(a,b,c);
	return 0;
}