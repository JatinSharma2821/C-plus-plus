#include<iostream>
#include<bits/stdc++.h>
using namespace std;




/*
Case 1 - Wrapping is not required - Kadane Algorithm --- [ -1 -2 -3 7 5 -6]-- 7 5 gives max sum =`12

Case 2 =- Wrapping is required --- [ 4 -4 6 -6 10 -11 12] -- here to find max sum 12 has to wrapped with 4 at index no. = 0 upto 10
Here -11 is non contirbuting element.

Max Sum = Total Sum of Array - Non contributing element sum.

Non contributing element sum is founded through Kadane ALgorithm.
	Trick - make a array negative of given array and find sum max .. -ve of sum max is sum of non contributing
arr1 = [ -4 4 - 6 6 -10 11 -12] .. here max sum is 11.

*/


int kadane(int arr[], int n)// gives maximum sum of subarray
{
	int currentsum=0;
	int maxsum = INT_MIN; // assigns minimum value

	for (int i =0; i<n; i++)
	{
		currentsum+=arr[i];
		if (currentsum<0)
		{
			currentsum=0;
		}
		maxsum = max(maxsum,currentsum);
	}
	return maxsum;

}
int main()
{
	int n;
	cin>>n;

	int arr[n];
	for (int i =0; i<n; i++)
	{
		cin>>arr[i];
	}
	/* My inital approach
	int arr1[n];
	for (int i =0; i<n; i++)
	{
		arr1[i] = -arr[i];
	

	int sumtotal = 0;

	for (int i =0; i<n; i++)
	{
		sumtotal+=arr[i];//storing total sum
		arr[i]=-arr[i];//assigning -ve value of elements
	}
	

	int kadane(int arr[],int n)
	{
		int maxsum = INT_MIN;
		int sumsub=0;
		for (int i =0; i<n; i++)
		{
		sumsub+=arr[i];// this arr is -ve arr
		if (sumsub<0)
		{sumsub=0;}
		maxsum = max(maxsum,sumsub);
		}
	}
	

	int ans = sumtotal + kadane(arr,n);
	ans = max(ans,kadane(arr,n));
	cout<<ans;
	*/

// Best Approach

int wrapsome;//for storing sum where wrapping is required
int nonwrapsome;// for non wrapping sum
int totalsum = 0;// stores total sum

nonwrapsome = kadane(arr,n); // kadane gives max sum of subarray where wrapping is not required

for (int i =0; i<n; i++)
{ 
	totalsum+=arr[i];// stores total sum;
	arr[i]=-arr[i];// creates -ve array
// now array is -ve of earlier array
}
// wrapsome = totalsum - (-kadane(arr,n))--------     -ve + -ve = +;
wrapsome = totalsum + kadane(arr,n);

cout<< max(wrapsome,nonwrapsome);





	return 0;
}