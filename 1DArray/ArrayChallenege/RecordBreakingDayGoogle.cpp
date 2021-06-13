/* -- Google KickStart 2020 Round D
Problem
Isyana is given the number of visitors at her local theme park on N consecutive days. The number of visitors on the i-th day is Vi. A day is record breaking if it satisfies both of the following conditions:

The number of visitors on the day is strictly larger than the number of visitors on each of the previous days.
Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors on the following day.
Note that the very first day could be a record breaking day!
Please help Isyana find out the number of record breaking days.

*/
/*
Taking examples to understand better
Day 1 - Vi
2 -V2
| 
|
N - Vn

*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int main()
{

int n;
cin>>n;

int arr[n];
arr[n] = -1;// index no. of last element of array = n-1; as per condition to check whether arr[i]>arr[i+1]; we defenied arr[n] as -bcz every element of array is and we have compare arr[n-1] with arr[n]
for (int i = 0; i<n;i++)
{
	cin>>arr[i];
}

int rb = 0;
int mx = -99999;// defind variable for record breaking 
// 1 2 0 7 2 0 2 0 
//3 1 4 1 5 9 2 6 5
// 4 8 15 16 23 42
// 9 9 9 9 9 9 9
for (int i=0; i<n; i++)
{
/*if (i==1 && arr[i]>arr[i+1]) {rb+=1;} mx = max(mx,arr[i]);
	else if ((2<=i<n) && arr[i]>mx && arr[i]>arr[i+1] ) {} rb+=1;}mx = max(mx,arr[i]);*/
	if ( ( arr[i] > mx ) && (arr[i]>arr[i+1])) // as it is starting from zero n worries for arr[i]comparision with arr[i+1] // defined arr[n] too for smooth comparing of arr[n-1]
{	rb++;} 
mx = max(mx,arr[i]);// Sir Method

	
}

	

	/*else {if (arr[i] > mx) && arr[i] > arr[i+1]
	{rb+=1;}}*/
	
//if (((arr[i]>arr[i+1]) || ) && (arr[i] > rb))
cout<<rb;
return 0;
}