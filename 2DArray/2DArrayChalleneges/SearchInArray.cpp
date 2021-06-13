/* Find if given element is present or not in sortred matrix.
Each row has sorted elments in ascending oreder
Each coulmn has sorted elements in descending order

1 4 7 11
2 5 8 12
3 6 9  16
10 13 14 17

*/

#include<iostream>
using namespace std;
int main()
{
	int n,m,num; // n - row // m - column // num - num to be searched
	cin>>n>>m>>num;

	int arr[n][m];
	for (int i =0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			cin>>arr[i][j];
		}
	}

/*
1 4 7 11
2 5 8 12
3 6 9  16
10 13 14 17

A key to note at 11 & 10 - they have one side smaller element and other side bigger element while at 1&17, 1 have bigger , 17 have smaller element respectively
So , starting at either 10 or 11 will be easy.
*/
// Starting at 10 , 
	int s=n-1; // row
	int e = 0; // column
	int check = 0; // varioable to check whether num exists or not in martrice
	while(s >= 0 && s<n && e<m-1 && e>=0)
	{
		if (arr[s][e] < num)
		{
			e++;
			

		}
		else if (arr[s][e] > num )
		{	
			s--;
		}
		else if (arr[s][e]==num){ check == 1;
			cout<<num<<" found at cordinates ("<<s<<" ,"<<e<<") ."<<endl;
			return 0;}

	}
	if (check==0)
	{
		cout<<" not found"<<endl;
	}
}