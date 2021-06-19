/* Lets say we have array = [1,2,3]
so  no. of subset will be 3C2 + 3 + 1 + 1
3C2 refers to possible pairs b/w 2 elements out of total 3. 
3 is for situation if each element is alone present in subset
1 - for no element present - empty set
1 - for all elements present in set.

So, total no of subsets = 8 , if 3 elements are there in array.
So, no. of subset = 2**n; and it can be written as 1<<n , 
lets say n = 3, so 2**3 = 8 and 1<<3 = 1000, it is also 8
So, 2**N can be written as 1<<n;


[] - empty sub sets
[1]
[2]
[1][2]
[3]
[1][3]
[2][3]
[1][2][3]

Approach - since we are doing question using bit calculation , it gives us hint to play with 1<< i.e, 1 left shift or 1 right shift
    lets say i = 0 ; j = 0 ,so 1<<0 = 0 
    => 0 & 0 and this gives 0.
        
    we have set condition that if(i & 1<<j == true) , then it will print corresponding elements
    and if false , it will not print
        


*/


#include<iostream>
using namespace std;

void subsets(int arr[], int n)
{
    for(int i = 0 ; i < (1<<n); i++) // outer loop is for iterating over total no. of subsets possible, ie., 1<<n.
    {
        for(int j = 0; j < n ; j++) 
        {
            if(i & (1<<j))
            {
                printf("%i ",arr[j]);
            }


        }
        printf("\n");
    }
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    subsets(arr,5);


    return 0;
}
