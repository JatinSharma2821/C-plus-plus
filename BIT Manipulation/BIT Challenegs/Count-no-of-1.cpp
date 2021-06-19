// count no of ones in binary representation of number.
/*
Approach - num & num-1 have same bits before rightmost setbit.
    just keep on implementing num & num-1 and updating num;
26 - 11100 = num
25 - 11011
26 & 25 = 24
now, num = 24 , num-1 = 23
24 & 23 = 1
num = 1, num-1 = 0
1 & 0 == 0;
do this 
*/

#include<iostream>
using namespace std;

int checkones(int num)
{
     //11100 & 11011  = 11000
      
    int count = 1;
    while ((num&num-1) != 0) // or we can write while(num) -- it means num!=0 , in this case count will be initialised with 0;
    {
        // 26 - 11010 - 11001 ;(1) 24 - 11000 - 10111 ; (2) 1  (3) 23 - 10111 - 10110
        num = num&num-1; // we will keep on updating value of num with the & value 
        count++;
        
    }
       
    return count;
    
}
int main()
{
    int num;//11100
    cin>>num;
    
// 11100 
    cout<<checkones(num);
    return 0;
}
