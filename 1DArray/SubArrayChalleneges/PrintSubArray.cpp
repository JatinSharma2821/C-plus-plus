/*
-1 4 7 2
Print all the subarray  that can be made from given element.
like - -1 | -1 4 | -1 4 7 | -1 4 7 2
		4  | 4 7 | 4 7 2 |
		7 | 7 2
		2
*/

/*

Observation - similar to case of pattern printing where j<=i and then i++ and again j<=i.


*/
#include<iostream>
using namespace std;

int main()
{

int n;
cin>>n;

int arr[n];

for (int i=0; i<n; i++)
{
	cin>>arr[i];
}



int s=0;// strating point
int e=0;//ending point

while(s<=e)// condition for validity
{	e = s;
	while(e<n)// maximum value of end point

{//-1 | -1 4 | -1 4 7 | -1 4 7 2 || 4  | 4 7 | 4 7 2 || 7 | 7 2|| 2
	for (int j=s; j<=e; j++)// both starting and ending point is variable.
	{
	
		cout<<arr[j]<<" ";
		
	}cout<<endl;
	
	e++;
}s++;
}


	return 0;
}