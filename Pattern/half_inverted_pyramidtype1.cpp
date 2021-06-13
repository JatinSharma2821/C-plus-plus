// task - 
// #
// ##
// ###
// ####
// #####

#include <iostream>
using namespace std;
int main()
{

	
	int n;// n = no. of rows in pyramid
	char element;
	cout<<"Enter n;"<<endl;
	cin>>n;
	cout<<endl;
	cout<<"Enter element"<<endl;
	cin>>element;
	for (int i = 1; i<=n; i++)
	{
		for (int j = n ; j >= n + 1 - i; j--)
		// @ i=1, j starts from n=5 and ends at n + 1- i = 5 + 1 - 1 = 5 ;
		// this means j starts and ends at single point so j will print single value at i=1.

		// @ i = 2, j starts from n=5 ends at n+1-i = 5+1-2= 4
		// j starts from 5 and ends at 4 so, j will print two values

		// Similary more the no. of values printed by j in single iteration = difference b/w starting and ending point.
		{
			cout<<element;
		}cout<<endl;
	}
	
	return 0;
}