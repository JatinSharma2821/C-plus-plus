/*
// how to get bin(n-1) from bin(n) ; ver simple -- just revert the gitis from rightmost setbit 
// example 26 = 11100; so 25 = 11011 ; we reverted every bit from rightmost setbit i.e, from index no. 2 to 0;

*/


#include<iostream>
using namespace std;

string checkpower(int num, int count)
{
    int out;
    // 5 - 0101- 
     if((num & (1<<(count - 1))) == num)
     {
         return "Yes";
     }
     else
     {
            return "No";
     }
     
   

} // 100000

bool ispow2(int num)
{

    return (num && !(num & num-1));// if num is power of 2 so, lets say - 16,== 10000 : so num-1 = 15 = 01111
}
int main()
{
    int num;
    cin>>num;
    int original = num; // we have stored num's original value to a variable original bcz while counting no. of bits , value of num will be altered;

    int count = 0;// count refers to no. of bits in given number
    // finding total no. of bits;
    while(true)
    {// 101
    // num = 5
    count++;// 1 // 2
    if(num/2 == 0)
        {
            break;
        }
    num /= 2;// 2 // 1
       
    }
    // num after this loop is 1 . so we need to assign its orignal value to num;
    num = original; // telling num again that it's your original value.
    cout<<count<<endl;
    cout<<checkpower(num,count);

    cout<<ispow2(num);// sir's approach


    return 0;
}