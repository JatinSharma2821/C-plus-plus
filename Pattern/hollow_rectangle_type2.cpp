// Type - 2
// Write a code for hollow rectangle -
// *****
// #   #
// #   #
// #   #
// *****
#include <iostream>
using namespace std;
int main()
{
int row1,col1;
char design1 , design2;
cout<<"Enter row1 "<<" Enter col1 "<<" design1 "<<" design2 "<<endl;
cin>>row1>>col1>>design1>>design2;

for (int m = 1; m <= col1; m++){
for (int n = 1; n <= row1; n++)
{
	if (m==1 || m==col1 || n == 1 || n == row1)
	{if (n==1 || n == row1)
	cout<<design2;
	else 
	cout<<design1;
	}
	else 
	cout<<' ';
}cout<<endl;
}return 0;
}