/*
Check if there exist two elements in an array whose sum is equal to the sum of rest of the array.

Input  : arr[] = {2, 11, 5, 1, 4, 7}
Output : Elements are 4 and 11
Note that 4 + 11 = 2 + 5 + 1 + 7

Input  : arr[] = {2, 4, 2, 1, 11, 15}
Output : Elements do not exist

*/


#include<iostream>
using namespace std;



int main()
{
	int n;
	cin>>n;
int arr[n];
	for (int i=0;i<n;i++)
	{
		cin>>arr[i];

	}

	int givensum;
	cin>>givensum;

	int s=0;//starting
	int e=n-1;//starting

// Input  : arr[] = {2, 11, 5, 1, 4, 7} // - sorted array - 1 2 4 5 7 11
// Output : Elements are 4 and 11
// Note that 4 + 11 = 2 + 5 + 1 + 7
int check=0; // to check wether loop has completely run.
	while(s<=e && e>=0)
	{
		if (arr[s]+arr[e] == givensum){check=1;break;}// check will be value 1 if exixts such elements
		else if ((arr[s]+arr[e])>givensum) {e-=1;}
		else {s+=1;}
	}
	if (check==0)
	{cout<<"INvalid request";}
	else {cout<<"Exists :"<<s<<" - "<<e<<endl;}
	
	return 0;
}