/* Write a code for total no. of chocolates that a person can eat ?
Total money = Rs.15
Chocolate price = Rs.1
3 wrapper can be exchanged for 1 chocolate

*/

#include<iostream>
using namespace std;
int main()
{

	int total_amount;//15
	cin>>total_amount;

	int single_price;//1
	cin>>single_price;
	
	int wrapper_value;//3
	cin>>wrapper_value;

	int no_of_chocolate_by_amount;//15
	no_of_chocolate_by_amount = (total_amount/single_price);

	int no_of_wrapper;
	no_of_wrapper = no_of_chocolate_by_amount;//15
	int total_choc_by_wrapper = 0;/// taken some zero value so as to append it with values coming out from while loop
while(no_of_wrapper>=wrapper_value)// think logically // condtion unsatisfied in 3rd iteration.
{
	int instanteous_no_of_choc_by_wrapper = no_of_wrapper/wrapper_value;// 5=15/3 -- first iteration // 1 = 5/3 -- second iteration // 1 = 3/3 -- third iteration
	
	total_choc_by_wrapper = total_choc_by_wrapper + instanteous_no_of_choc_by_wrapper; // 0 +5 = 5 -- first iteration// 5 + 1 = 6 -- second iteration // 6 + 1 = 7 --- third iteration
	no_of_wrapper = instanteous_no_of_choc_by_wrapper + no_of_wrapper%wrapper_value ; // 5 + 0 = 5 -- first // 1 + 2 = 3 -- second itertion // 1 + 0 = 1---- third iteration --- 1<3(does not satisfy loop condition)

	
}

cout<<"Total no of chocolate = "<<no_of_chocolate_by_amount + total_choc_by_wrapper;	


	return 0;
}