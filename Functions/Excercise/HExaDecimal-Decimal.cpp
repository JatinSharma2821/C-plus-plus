#include<bits/stdc++.h>// it contains string data-type and all required tools for coding
using namespace std;


int converter (string num)

{ int s = num.size();// gives size / length of string
int val = 0;
int x = 0;
for (int i = s-1; i >=0; i--)
	{
		if (num[i]>='0' && num[i]<='9')// checking wether n[i] is b/w 0-9....if b/w 0-9 no issue we will print it directly
		{
			val+= (num[i] - '0')*pow(16,x);//here base is 16....
			}
		else if(num[i]>= 'A' && num[i]<= 'F')// n[i] is b/w A & F--- 
		// means we need to do something that will be give answer in integral form
		// 'A' & 'F' means character A & F so their their ascii encoding value will be taken.
		{
			val+= (num[i] - 'A' + 10)*pow(16,x);
			 // here lets suppose num[i] = B so Ascii encoding of B - ascii encoding of A will be added to 10
			 // so final asnwer will be integer
			}
		x++;
	


	}cout<<val;
}

int main()
{
// Convert DEcimal to HExaDecimal
// int num;// here we want to deal with alphabets too so datatype will be string
string num;
cin>>num;

converter(num);




	return 0;
}