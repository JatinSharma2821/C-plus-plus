/*
Concept
How does XOR works ? 
Trick to remember  -
    1) We used it in BIT manipulation means it has to do something with 0 & 1
    2) XOR sounds like logical OR ( | ) so its working is also little bit similar to OR.
    3)          OR      XOR
        0   1    1       1    ---
        1   0    1       1      | ----    similarity
        0   0    0       0    ---

        1   1    1       0    --------     difference

XOR operator is denoted by ^










Case 1- If array has only one unique element 
    array = [1,2.4,3,1,3,2]


    consider an array having every element twice except one unique number. Find that unique number

    XOR of evenly reeating number is 0.

    Unqiue number refers to - 4.

    Approach - Here we will be using XOR operator i.e, - ^




Case 2 - Finding two unique elements
    int arr[] = {1,2,3,4,2,1};

    Analysis - Two unique num = 3,4
    3 ^ 4 = 11 ^ 100 = 111 , we can see XOR output has setbit at pos - 0,1,2
     it means one of element participating in  XOR event has setbit has pos 0,1,2,


    So we will transverse over only those elements having setbit at pos - 1 ,
    lets say output of this process as output2 , output2 will give us one unique element
    and then we will take output ^ output , it will give us second unique element.

Case 3 - Finding one unique element in array containing thrice repeating elements except one.

    Approach - 
    consider array = [ 1  ,  2  ,  3  ,  4  ,  1  ,  2  ,  3  ,  1  ,  2  ,  3  ] , n = 10
                       001  010   011   100   001   010   011   001    010   011

    lets talk about number repeatiting thrice - 
    , it is obvious then - that 1 will be three times and same for other repeatiting elements
    ==> we can say that 001 (binary representation of 1) will be three times and same for others
        In short sum of bin value position vise will be completely divided by 3 for repeating elements


         For further clarification , we will add bin value of each element position wise
         Sum at Position 0 - (Pos 0 of 1 + Pos 0 of 2 + Pos 0 of 3) * 3 ...why multiply with 3 , because every element is three and so the pos 0 value of each element
         ==> Sum at Position 0 = 6;
         Similarly Sum at pos 1 = 6;
                    sum at pos 2  = 1;

        Now, revising again that above we read "In short sum of bin value position vise will be completely divided by 3 for repeatiting elements."

        So, for easy understanding consider an array containing  ((sum of position)%3).
        
        | 6 % 3 | 6 % 3 | 1 % 3 | -- desired array 
        |   0   |   0   |   1   | --  this gives us ((sum of position)%3)
        Now, thrice repeating element gave 0 remainder and this array gives us our unique number - 100 (remember binary number are written from right to left order)


*/

#include<iostream>
using namespace std;

int uniquenum(int arr[], int n)
{
    int unique = 0;
    for(int j = 0; j < n; j++)
    {
        unique ^= arr[j];
    }
    if(unique)
    cout<<unique<<endl;
    else
    cout<<"No unique number"<<endl;
}

int checksetbit( int allxor,int arr[], int oneelement, int n) // loop to check at what position setbit exists in allxor and then work on selected elemenets of array having setbit at same position
{ // 11 100 - 111
     // represents of one of two unique element
    
    
    for(int j = 0; j<8; j++) // it will go through each of bit position
    {
    if(allxor & (1<<j)) // finding and locking position of setbit, represented by j here
    {
       // cout<<" (1<<j)  = "<<(1<<j)<<endl;
    for(int k = 0; k < n ; k++) // loop to transverse over whole array
    {    
        if(arr[k] & 1<<j) // it is selecting elements having same position of setbit as of allxor
        {
           // cout<<"| element of arr = "<<arr[k]<<" ";
            oneelement = oneelement ^ arr[k];
            // cout<<" oneelement = "<<oneelement<<"  | "<<endl;
        }
        

    }
        return oneelement; // this is one of unique element
        break;
    }
    }
    
}
void twouniquenum(int arr[], int n)
{ // 1 2 3 4  2 1 ; xorsum = 7
int allxor = 0; // represents XOR of whole array ie, xorsum
int oneelement = 0; // will give one element
// cout<<" n = "<<n <<endl;
    for(int j = 0; j<n; j++)
    {
        // cout<< allxor << " | ";
        allxor = allxor^arr[j];// 2 // 6 // 0 / 7 // 3 // 6 
    }
   //  cout<<endl;
    // cout<<allxor<<endl;

    oneelement = checksetbit(allxor,arr,oneelement,n);
    int secondelement = oneelement ^ allxor;
    cout<<oneelement<<endl;
    cout<<secondelement<<endl;


}


void onethriceunique(int arr[], int n)
{// 1 2 3 3 2 1 4 1 2 3

    int array[8];
    for(int i =0; i<(1<<3); i++)
    {
        array[i] = 0;
    }

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<8; j++)
        {
            if(arr[i] & 1<<j)
            {
            array[j]++;
            }
        }
        
    }

for(int i = 0; i<(1<<3); i++)
{
    int sum = 0;
    int out = array[i]%3;
      //cout<<out;  
     sum = sum + ((1<<i) * out);
      
      
    if(out)
    {   cout<<sum;
        break;
    }//i = 2, 4
    
      
}
}


int main()
{
    int n ;
    cin>>n;
    
    int x;
    cout<<"1. Single Unique Number \n2. Two Unique number in twice repeating elemens.\n 3. One Unique number in Thrice repeating elements"<<endl;
    cin>>x;
    int arr[n];

    switch (x)
    {
    case 1:
        
        for(int i = 0; i<n; i++)
        {
        cin>>arr[i];
        }

        uniquenum(arr,n);// it prints unique number

        break;
    
    case 2:

        for(int j = 0; j<n; j++)
        {
            cin>>arr[j];
        }
       // cout<<" n = "<<n <<endl;
           twouniquenum(arr,n);

        break;

    case 3:
        for(int i = 0; i<n; i++)
        {cin>>arr[i];}

        onethriceunique(arr,n);





        break;
    default:
        cout<<"Run again and select between 1 and 2."<<endl;
        break;
    }
    
    
    
 




    return 0;
}