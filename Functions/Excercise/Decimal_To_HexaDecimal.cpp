// Do this agaib after sometime for clearity
#include<bits/stdc++.h>
using namespace std;

string DecimalToHexaDecimal(int num)
{int rem;
string val = ""; // make it as empty string

	while(num>=0)
	{
		rem = num%16;
		if (rem>=0 && rem<=9)
		{val = val + to_string(rem) ;}// to_string is a function that converts int to string
		else if (rem>=10 && rem<=15)
		{char c = 'A' + rem - 10;
		val.push_back(c);}
		num = num/10;
	}cout<<val;
}




int main()
{
	int num;
	cin>>num;

	DecimalToHexaDecimal(num);
return 0;
}