#include<iostream>
using namespace std;
int main()
{
	int n,m,o;
	cin>>n>>m>>o;

int arr1[n][m]; // n - row in arr1 // m -- column in arr1
// first matrix
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<m ; j++)
		{
			cin>>arr1[i][j];
		}
	}
	int arr2[m][o]; // m - row in arr2 -- o - column in arr2

	// - notice that column in arr1, m = row in arr2,m  (and it is condition for multiplying two matrices)

// second matrix
	for (int i = 0; i<m; i++)
	{
		for (int j = 0; j<o ; j++)
		{
			cin>>arr2[i][j];
		}
	}
	int arr3[n][o]; // summation of matrices // n - row // o - column

for (int i=0; i<n; i++)
{
	for (int j =0; j<o; j++)
	{
		arr3[i][j] = 0;
	}
}
	

// 1 2 3 4    ------------ 1 2 3
// 4 5 6 7 --------------- 4 5 6
// 7 8 9 10  ------------- 7 8 9
//  -----------------------10 11 12


	for (int i = 0; i<n; i++) // first loop to iterate over row of 1st matrice
	{// column of 1 == row of 2nd , so we will itertae over column of 2nd matrice .
		for (int j =0; j<o; j++) // second loop to iterate over column of 2nd matrice
		{for (int k =0; k<m; k++) // row of 2nd 
		{
			
			arr3[i][j] += arr1[i][k] * arr2[k][j]; // arr1[row][col] * arr2[row][col]
			
		}

		}
		


	}


for (int i =0; i<n; i++)
{
	for (int j =0; j<o; j++)
	{
		cout<<arr3[i][j]<<" " ;
	}
	cout<<endl;
}


	return 0;
}