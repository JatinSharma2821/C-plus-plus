// Search - Linear and Binary;

// This program is to search linear
#include<iostream>
using namespace std;



int binarySearch(int arr2[],int m, int object2) /// - Self MEthod
{int pos = 0;
int mid = (m+0)/2;
for (int i = 0 ;i <m; i++)
{
if (object2==arr2[mid]){pos = mid;}
if(object2>arr2[mid]){mid = (mid+m)/2;}
else{mid = (0+mid)/2; }}
return pos;

}
int binarySearch2(int arr[],int m, int object2) //---- Sir Emthod
{
	int s = 0; // - lower level
int e = m;// - upper level
int mid = (s+e)/2;
while(s<=e){// if lower-level == upper-level means value is array of single length
	if (object2==mid){return mid;}
	else if (object2>mid){s = (mid + 1);} // ---- 1 2 3 4 5 6 7 -- Suppose we are finding 6--- 
	// mid = 4-- so lower range need to come forward as s = (mid+1)/ = 5 -- new range - 5 6 7 hence shortens range in long array
	else {e = (mid - 1);} // similary in case of object < mid -- upper level need to shift
} return -1; // if mid is not returned means it is not found-- so it will return -1
}





//function method
int linearSearch(int arr[],int  n,int object)
{
	
	for (int i  = 0; i < n; i++) // Linear search time complexity-Tc- O(n)
	{
		if (arr[i] == object){return object;}
	}return -1;
}


int main()
{
// Normal Method 
		int cat = 40;// key1 to search
int mouse  = 20;// key2 to search
	int arr1[5] = {10,2030,40,50,60};// array taken
		for(int i = 0; i < 5; i++)
	{
		if(arr1[i] == cat){cout<<"Cat found"<<i<<endl;}
		if (mouse==arr1[i]){cout<<"Mouse found"<<i<<endl;}
	}
	int n;
	cout<<"Enter n";
	cin>>n;

	int arr[n];
	for (int i =0; i<n; i++)
	{
		cout<<"Enter arr["<<i<<"]"<<endl;
		cin>>arr[i];
	}
int object;
	cout<<"Enter object";
	cin>>object;

	cout<<linearSearch(arr,n,object);
 

 // Binary No. - As the name suggests -Binary involve two level - Upper level(u) and lower level(l)
int object2;
cout<<"Enter object2"<<endl;
cin>>object2;
int m;
cout<<"Enter m"<<endl;
cin>>m;
int arr2[m];
for (int i =0; i <m; i++)
{
	cout<<"Enter arr["<<i<<"]"<<endl;
	cin>>arr2[i];
}
cout<<binarySearch(arr2,m,object2);



return 0;
}