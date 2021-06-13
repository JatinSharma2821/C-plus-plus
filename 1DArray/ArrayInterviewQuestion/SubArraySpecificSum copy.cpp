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



// optimised solume with O(n)
int SpecificSum(int arr[],int n, int Given_Sum)

{
	int st=-1; int en=-1;	
	int sum = 0;// intialised for storing variables
int s = 0;// starting
int e = 0;// ending
while(e<n && sum + arr[e]<=Given_Sum)// till ending pointer reaches last element
{
 sum += arr[e];
 if (sum==Given_Sum){cout<<" Sum of elements between "<< s+1 <<" and "<< e <<" is " << Given_Sum; return 0;}
 
}  

while(e<n)

{
	sum+=arr[e];
	while (sum>Given_Sum){
		sum-=arr[s];// to remove that extra ar[i] added which gave > Given_sum ; 
		s++;
	}
	if (sum==
	Given_Sum)
	{st = s+1; en = e+1; break;
		;}
e++;	
}
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
	SpecificSum(arr,n, Given_Sum);

	

	return 0;
}