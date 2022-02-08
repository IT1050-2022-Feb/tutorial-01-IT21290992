/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>
int minimum(int n1 , int n2);
int maximum(int n1 , int n2);
int multiply(int n1 , int n2);

int minimum(int n1 , int n2)
{
	int solution;
	
	if(n1 < n2)
		solution = n1;
	else
		solution = n2;
		
	return solution;
}


int maximum(int n1 , int n2)
{
	int solution;
	
	if(n1 > n2)
		solution = n1;
	else
		solution = n2;
		
	return solution;
}


int multiply(int n1 , int n2)
{
	int solution;
	solution = n1 * n2;
	
	return solution;
}

int main() 
{
   int no1, no2;

   printf("Enter a value for no 1 : ");
   scanf("%d", &no1);
   printf("Enter a value for no 2 : ");
   scanf("%d", &no2);

   printf("%d ", minimum(no1, no2));
   printf("%d ", maximum(no1, no2));
   printf("%d ", multiply(no1, no2));

   return 0;
}
