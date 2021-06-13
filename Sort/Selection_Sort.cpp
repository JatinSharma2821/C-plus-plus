// SelectionSort = The whole given array is transversed and minimum element is swaped with first element



#include<bits/stdc++.h>
#include<climits>
#include<iostream>
using namespace std;
// n = 5
// arr  = 5 50 45 10 25
int SelectionSort(int arr[],int n)// Why named as selectionSort? --- because here we select first and then compare and then sort the whole array
{
	

	int s = 0;// s index no. for - first element
	int e  = n;//  e = index no. for -  last element
while(s<e) // just before first and last term coincide
{
	for(int i =s+1; i<=n; i++)// here i  = s+1 ; because s index no is selected here for comparision.
	{
		
	
	if (arr[i]<arr[s])// if any no. is smaller than selected no. ,
	{
		int temp = arr[i];
		arr[i] = arr[s];// they will be swapped
		arr[s] = temp;
		
		}

	}
	
	s +=1;// index for selection of no. incremented after sorting
}
}



int main()
{
	int n;
	cin>>n;

	int arr[n];

	for (int i = 1; i<=n; i++)
	{
		cout<<"Enter arr["<<i<<"]";
		cin>>arr[i];
	}

	SelectionSort(arr,n);
	for (int i = 0; i<n; i++)
	
	{cout<<arr[i]<<" | ";}



	return 0;
}