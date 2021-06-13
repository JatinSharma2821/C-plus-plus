/*Question - Given an array of integers, find the first repeating element in it. We need to find the element 
that occurs more than once and whose index of first occurrence is smallest. */

//  1 2 3 4 5 5 9 8 7 7 -here 5 and 7 both are repeating no. but we have to find 1st repeating no. with smallest index no.




#include<iostream>
using namespace std;
int SelectionSort(int arr[],int n) // we wouldnot sort here . Think why?
{// 2 5 6 48 9 2 7
	for (int i = 0; i <n; i++)
	{
		for (int j = i+1; j<n; j++)
		{
			if (arr[j] < arr[i])
			{
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}

		}
	}
}

int FindfirstDuplicate(int arr[],int n)
{// 2 5 6 48 9 2 7
	for (int i =0; i<n; i++)
	
	{for (int j = i+1; j<n; j++)
		{
			if (arr[i]==arr[j]){
				cout<<"Elements at "<<i<<" "<<j<<"are same"<<endl;
				return 0;}// why not break bcz break will jut break if condition but will be executed for whole loop 
							// while return 0 instanenously hand overs the control to main()
			
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
// SelectionSort(arr,n);

FindfirstDuplicate(arr,n);







return 0;
}