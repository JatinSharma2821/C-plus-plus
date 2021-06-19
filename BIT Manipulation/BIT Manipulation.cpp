/*
Checkbit - How to find whether at given position of number in binary form , it is 0 or 1;
Setbit/UNsetbit
Clearbit
Updatebit = Clearbit + setbit
*/
#include<iostream>
using namespace std;

int getbit(int num, int pos) // checbit
{
    if (num & (1<<pos) != 0)// & is a logical operator that compares using truth table that 1=is 1 if both are one , ....
    {return 1;}
    else
    {return 0;}
}
int setbit(int num, int bit, int pos)
{
    return (num | (bit<<pos)); // bit represents 1 for set bit and 0 for unset bit;
}
int clearbit(int num,int pos)
{
    /*
    Approach is - lets say we have 10, so bin(10) = 1110, 
    we want to clearbit at pos = 2 , means we want to make 0 at pos = 2
    we will use ~1 ... 1<<2 =  1<<2 - 0100 ; ~0100 = 1011,
     now we have zero @ desired position so now we will take its & with num
     1110 & 1010 = 1010 
    */
    return (num & ~(1<<pos));
}
int updatebit(int num, int pos, int bitt) // updatebit = clearbit + setbit
{
    int value = (num & ~(1<<pos)); // clear bit

    return (value | (bitt<<pos));
}
int main()
{
    int num,pos,bit,bitt;
    cin>>num>>pos>>bit>>bitt;

    cout<<getbit(num,pos)<<endl;// check whether bit at given position is 1
    cout<<setbit(num,bit,pos)<<endl; // set given bit at pos,

     cout<<clearbit(num,pos)<<endl; // clearbit clears the bit at given position i.e, makes it 0;
    cout<<updatebit(num,pos,bitt);// it will update bitt at given position
    return 0;
}


