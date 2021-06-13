// Given an array of size n .Write a program to give sum of each  sub array.

 #include<iostream>
 using namespace std;
/* --- Program to find sum of array.
 int SumOFArray(int arr[], int n)
 {
	 int sum = 0;
	 for (int i =0; i<=n; i++)
	 {
		 sum+=arr[i];
	 }return sum;
}
*/


int SumOfSubArray(int arr[],int n){ // Test element - 0 1 2 -  // - 0 - 01 -012 // 1 // 12 //2
	int sumsub = 0;
	for (int i =0; i<n; i++) // this outer loop is responsible for making sub-arrays 
	{	sumsub = 0; // initiating with zero everytime so as to get sum of each sub-array individually otherwise sum of previous array will be added to sum of present array
		for(int j = i; j <n; j++) // inner loop gives sum of each array.
		{
			sumsub = sumsub + arr[j];
			cout<<"SumSubArray : "<<i<<","<<j<<" = "<<sumsub<<endl;
		}
//		sumsub = sumsub + SumOFArray(arr,i);
	}return sumsub;
}

 
 int main()
 {
	 int n;
	 cin>>n;

	 int arr[n];
	for(int i =0; i<n;i++)// takes elements of array from user

	{
		cin>>arr[i];

	}

	SumOfSubArray(arr,n);

	 return 0;
 }
