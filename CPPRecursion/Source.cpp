// Recursive Function

#include <iostream>

using namespace std; 

/* When you have a recursive function. Make sure to have a base which is the end point for the function. When the functions solves that base, then it can solve the rest of it like below */
int factorialCalculator(int x)
{
	if (x == 1)
	{
		return 1;
	}
	else
	{
		return x * factorialCalculator(x - 1);   /*<<< Because it gives a value of 10 to x on line 25. Now it multiples that value with x - 1 everytime it runs until it hits 1*/
	}
}



int main()
{

	cout << factorialCalculator(10) << endl; // << This puts a value on the x



	cin.get();

}