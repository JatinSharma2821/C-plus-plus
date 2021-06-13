// Given an array of size n .Write a program to give sum of each  sub array.

 #include<iostream>
 using namespace std;

int MaxSumOfSubArray(int arr[],int n){ // Test element - 0 1 2 -  // - 0 - 01 -012 // 1 // 12 //2
	int sumsub = 0;
	int maxsum = -99999;
	
	for (int i =0; i<n; i++) // this outer loop is responsible for making sub-arrays 
	{
		
			sumsub = sumsub + arr[i];
			if (sumsub<0)			
			{
				sumsub=0;
			}
			maxsum = max(maxsum,sumsub);
		
		

	}cout<<maxsum;
}

// Kadane's Algorithm 
 int main()
 {
	 int n;
	 cin>>n;

	 int arr[n];
	for(int i =0; i<n;i++)// takes elements of array from user

	{
		cin>>arr[i];

	}

	MaxSumOfSubArray(arr,n);

	 return 0;
 }
