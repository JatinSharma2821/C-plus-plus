/*
Write a prograam to check whether given array is Palindrome or not ---
 NITIN --- RACECAR --- Does not mattter whether we starting reading from starting or ending -- it means same
 So, these are palindrome



*/



#include<iostream>
using namespace std;
int main()
{
// we take arr[n+1] for [n] elements bcz of '\0' (null charcater) at the end of string.
int n;
cin>>n;
char arr[n+1];

cin>>arr;


int s=0; //  for starting
// int e = n; // I thought this first but size no. of elements is n in arr. index starts from 0 , last element has index no. as n-1;
// Although size of char arr is [n+1]; but all the questions will be solved considering its size as 'n'.  
// n+1 space is just for null character.

int e=n-1;// for ending
int check = 0;


while(s<=e)
{
	if (arr[s] != arr[e])
	{
		check = 1;
		break;
	}
	
	s++;
	e--;

}
if (check == 0)
{
	cout<<"Yes, it is a Palindrome"<<endl;

}
else 
{
	cout<<"Not a Palindrome"<<endl;
}

	return 0;
}