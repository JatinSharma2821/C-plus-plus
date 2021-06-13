/*
An array is a data structure that contains a group of elements. 
Typically these elements are all of the same data type, 
such as an integer or string. Arrays are commonly used in computer programs
to organize data so that a related set of values can be easily sorted or searched


Array - These are nothing but list of similar kind of elements.
[10,20,30,40] -- all int --- array
[a,s,d,f,h,j] -- all char --- array
[a,s,d,g,3,4,5,j] --- int + char --- not array


format of writing array in C++

data_type arrayName[size] 

e.g.- int crush[10]   - data_type - int; arrayName - crush; size - 10
--- it is an array consisting of list of all the crush till college of a boy.
crush - 10 till date

*/


#include<iostream>
#include<climits>
using namespace std;

/* ---- This is the logic and code I thought and wrote first
int MaxMin(int m)
{	int max = 0; int min = 0;
	int arr[m];
	for (int i = 0; i<= m-1; i++)
	{
		cin>>arr[i];
		if (arr[i]>arr[i-1]){max = arr[i];min = arr[i-1];}
		else {min = arr[i]; max = arr[i-1];}
	}
	cout<<max<<" || "<<min;

} Here output is considering only last two values for min and max comparision.
Reason is this code is updating values of max & min without checking whether they are actually min or max

For understanding upper statement lets take an example
m = 5 arr[5] = [21,12,33,10,25]

for i = 0; arr[i-1] gives -1.;
if condition gives max = arr[i] = 21 but min = arr[i-1] so takes  value as -1...Remember we iniialised min form 0; 
--- max = 21; min = -1.

for i = 1; max = 21 & min = 12; 

i = 2; max = 33 & min = 12;
i = 3; max = 33 & min = 10;
i = 4; max = 25 & min = 10; ----- 
Here in this step bug is visible although @i=3, max value is obtained but still it takes lastmost value --- this is meaning of upper statement

*/





int main(){
/* -- This Print array[i] as per given condition
	int n;
	cin>>n;
	int array[n];
for(int i=0; i <= n-1; i++)
{
	array[i] = 10*i;
	cout<<array[i]<<" ";
}cout<<endl;
*/
// Take input from user and make a array of size given by user .Print max and min value.
int m;
cin>>m;

int max = 0; int min = 0;
	int arr[m];
	for (int i = 0; i<= m-1; i++)
	{
		cin>>arr[i];
/*		if (i!=0) --- Issue explained above
		{if (arr[i]>arr[i-1]){max = arr[i];min = arr[i-1];}
		else {min = arr[i]; max = arr[i-1];}}
		else {max = arr[i]; min = arr[i];}
*/	if(i==0){max = arr[i]; min = arr[i];}
	else {if (arr[i]>max){max = arr[i];}
	if (arr[i]<min){min = arr[i];}}
	}
	
	cout<<max<<" || "<<min;

// Sir Method -

int max = INT_MIN; // this INT_MIN gives minimum possible integral value --- as some value becomes larger than it max s upgraded
int min = INT_MAX;



	return 0;
}

