/*


Question - Print transpose of sqaure matrix --
 1 2 3 ----------- 1 4 7
 4 5 6 ----------- 2 5 8
 7 8 9 ----------- 3 6 9

Here it is clearly visible that values for which i!-j are swaped and i==j are unaltered
so now just write code for this.

*/

#include<iostream>
using namespace std;
/*
int TransposeMatrix(int arr[ ][ ],int n,int m)
{
	for (int i=0;i<n;i++)
	{
		for (int j =0; j<m; j++)
		{
			if (i!=j)
			{
				int temp = arr[i][j];
				arr[i][j] = arr[j][i];
				arr[j][i] = temp;
			}
		}
	}

} */
// Tried this but exceptions shows - An array may not have elements of this type

int main()
{
int n,m;/// n - no. of row /// m - no. of column
cin>>n>>m;

int arr[n][m];
for (int i =0;i<n;i++) // i refers to row
{
	for (int j=0; j<m; j++) /// j for column
	{
		cin>>arr[i][j];
	}
}
// TransposeMatrix(arr,n,m);

for (int i=0;i<n;i++)
	{
		for (int j =0; j<m; j++)
		{
			if (i!=j)
			{ // Swapping values ---- this is not useful in swapping 2d array elements just replace interchange i and j
				/*int temp = arr[i][j];
				arr[i][j] = arr[j][i];
				arr[j][i] = temp;*/
				cout<<arr[j][i]<<" ";
			}
			else  {cout<<arr[i][j]<<" " ;}
		}
		cout<<endl;
	}

cout<<endl;
/*
for (int i =0;i<n;i++) // i refers to row
{
	for (int j=0; j<m; j++) /// j for column
	{
		cout<<arr[i][j]<<" ";
	}
	cout<<endl;
}
*/

	return 0;
}