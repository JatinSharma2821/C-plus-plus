// Qustion -1 = Print  max value till I
/* example - 10 5 15 20 26 45 ---- at i = 0; output max value til i=0; then max value till i = 1;;;;;; max value till i =n;
-----        10 10 15 20 26 45
*/

#include<iostream>
#include<climits>
using namespace std;






int MAxTilli(int arr[], int n)
{
	int mx =INT_MIN;/// 10 5 15 20 26 45 
	
// Approach make a variable named as mx and find max(mx,a[i]);
for (int i =0; i<n;i++)
{
	
	mx = max(mx,arr[i]);

	cout<<mx<<" | ";
}
}


int main()
{
	int n;
	cin>>n;

int arr[n];
	for(int i = 0; i<n;i++)
	{

		cin>>arr[i];
	}

MAxTilli(arr,n);



	return 0;
}

