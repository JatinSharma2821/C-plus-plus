// Bubble sort - A sorting method in which swaped are sorted if they are in wrong order.

#include<iostream>
using namespace std;

int BubbleSort(int arr[], int n) // Self Method O(2(n-1)**2)
{
	for (int i =0; i <n; i++)
	{
		for (int j = 0; j<n; j++)/// 15 10 7 5 50 -- 
								///  10 15 7 5 50
								///  10 7 15 5 50
								///  10 7 5 15 50

		{
			if(j!=0 && arr[j]<arr[j-1])
			 {
				int temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			}
		}


		for (int j = n-1; j >=0; j--)
		{
			 if(arr[j]<arr[j-1])	
			 {
				int temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			}
		}
	}

}



int BubbleSortSir(int arr[],int n){ // Sir MEthod - O((n-1)**2)
for (int i = 1; i<n; i++){
	for (int j = 0; j <=n-i; j++){

		if( arr[j+1]<arr[j])
			 {
				int temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
	}
}

}



int main()
{

int n;
cin>>n;
int arr[n];
for (int i = 0; i<n; i++)
{
	cin>>arr[i];
}

BubbleSort(arr,n);

for (int i = 0; i<n; i++)
{
	cout<<arr[i]<<" | ";
}
	return 0;
}
