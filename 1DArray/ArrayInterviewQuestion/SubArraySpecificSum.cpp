/*	Google - Facebook - Amazon - Visa
Given an unsorted array of nonnegative integers, find a continuous subarray which adds to a given number. 
Examples : 

Input: arr[] = {1, 4, 20, 3, 10, 5}, sum = 33
Ouptut: Sum found between indexes 2 and 4
Sum of elements between indices
2 and 4 is 20 + 3 + 10 = 33

Input: arr[] = {1, 4, 0, 0, 3, 10, 5}, sum = 7
Ouptut: Sum found between indexes 1 and 4
Sum of elements between indices
1 and 4 is 4 + 0 + 0 + 3 = 7

Input: arr[] = {1, 4}, sum = 0
Output: No subarray found
There is no subarray with 0 sum
*/


#include<iostream>
using namespace std;


int SumSubArray(int arr[],int i,int j)// function defined to return sum of array
// Time Complexity ---- O(n**2)
{ int sum = 0;
	for (int k = i; k<=j; k++)
	{
		sum  = sum + arr[k];
	}return sum;

}






int main()// Driver Code
{

	int n;
	cin>>n;

	int Given_Sum;
	cin>>Given_Sum;

	int arr[n];

	for (int i = 0; i<n; i++)

	{
		cin>>arr[i];
	}


	int check=0;//defined for checking whether loop has executed or not
	for (int i = 0; i<n;i++)
	{
		for (int j=i;j<n;j++)
		{
			if ( SumSubArray(arr,i,j) == Given_Sum)
			//{cout<<"Sum of elements between indicies "<<i<<" and "<<j<< " is "<<sum(arr[i],arr[j])}
						{cout<<"Sum of elements between indicies "<<i<<" and "<<j<< " is "<<Given_Sum;
						check = 1;}
						//break;}
		}
	}
	if (check==0)
	{{cout<<"No such value";}}
	cout<<endl;
	// SpecificSum(arr,n); Mwthod for optimisied aproach with O(n)

	

	return 0;
}