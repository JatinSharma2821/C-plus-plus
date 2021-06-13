// task - 
// #####
// ####
// ###
// ##
// #
#include<iostream>
using namespace std;
int main()
{
	int n;
	char element;
	cout<<"Enter n"<<endl;
	cin>>n;
	cout<<"Enter element";
	cin>>element;
	for(int i = 1; i <= n; i++)
	{
		for(int j = n + 1- i; j >= 1; j--)
		// @ i = 1; range of j = [5,1] so j will give 5 values and will keep on decrementing
		{
			cout<<element;
		}cout<<endl;
	}
	return 0;
}