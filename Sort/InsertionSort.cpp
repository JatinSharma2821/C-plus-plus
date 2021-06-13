// Insertion Sort - Method to sort in which unsorted array is inserted in sorted array and unsorted array is shifted towards right..We start from second element.
/*
12 45 54 19 8 15 ---- 1st element- 12 ... 2nd element - 45 & 45>12... 3rd element - 54 >45  .... 4th element - 54>19.
12 __ 45  54 19 8 15
12  19 45 54 8 15 --- 54 > 8

__ 12 19 45 54 8 15
8 12 19 45 54 15
8 12 15 19 45 54
*/
#include<iostream>
using namespace std;


int InsertionSort(int arr[], int n)
{//12 45 54 19 8 15 
	for (int i = 1; i<n; i++) // from second element to last; -- it just selects the element

	{
		int current; //variable defined for referring to current no. to whom we are comparing 
		 current = arr[i]; // stored current no. 
		int j = i-1; // for inner loop -- for comparing 
		while(j>=0 && arr[j]>current){// inner loop compares and insert at right position.
		

				arr[j+1] =  arr[j]; // shitfs the no. towards right
				j-=1; // decrements j -- for comparing with all the no. in back in sorted array.
			}
			arr[j+1] = current; // inserts the current element at correct position.

		}
	}




int main()
{

int n;
cin>>n;

int arr[n];
for (int i =0; i < n; i++){
	cin>>arr[i];
}cout<<endl;

InsertionSort(arr,n);
for (int i =0; i<n; i++)
{
	cout<<arr[i]<<" | ";
}cout<<endl;






	return 0;
}
