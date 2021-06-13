// Task
// 1
// 22
// 333
// 4444
// 55555

// Obeservation- value of i is getting printed using pattern of half pyramid.

#include<iostream>
using namespace std;
int main()
{

int n;
cout<<"ENter n";
cin>>n;
for (int i = 1; i<=n; i++)
{
	for (int j = 1; j<= i; j++){// In pattern j is getting printed till value of i only.
		cout<<i;// element getting printed is nothing but just i.
	}cout<<endl;
}


	return 0;
}