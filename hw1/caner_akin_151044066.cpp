#include <iostream>
using namespace std;

unsigned int find_Fibonacci(int number);	/*this function find fubonacci and return*/
void operation_function(int number_L);		/*this function find the triangle*/

int main()
{
	int number_L;	/*height and heart*/
	operation_function(-5);		/*for negative number (nothing print)*/
	operation_function(0);		/*for only one element*/
	operation_function(1);		/*simple example*/
	operation_function(9);		/*that given to me for example*/
	operation_function(46);		/*that work because i declare unsigned*/
	cin >> number_L ;		/*want to the height in user*/	
	operation_function(number_L);	/*there work for user want number*/			
	return 0;
}

unsigned int find_Fibonacci(int number)	/*this function find fubonacci and return*/
{
	int i;
	unsigned int num_1 = 0;
	unsigned int num_2 = 1;
	unsigned int temp;	
	for (i = 1; i <= number; ++i)	/*contunie to find*/
	{
		temp = num_2;
		num_2 += num_1; 
		num_1 = temp;	
	}
	return num_2;	/*return number*/
}

void operation_function(int number_L)	/*this function find the triangle*/
{
	if (number_L >= 0)
	{
		int i ,j;		/*height and column*/
		unsigned int output , heart; 

		for (i = 0; i <= number_L; ++i)		/*continue up to height*/
		{
			for (j = 0; j <= i; ++j)		/*continue up to i*/
			{
				/*formül :
				all element in the row are multiplied by the number of lines
				*/

				if (j == 0)		/*for multiplied with zero */
				{
					output = 1 * find_Fibonacci(i + j) ;	/*first element in fibonacci */
				}
				else	/* finonacci * fibonacci */
				{
					output = find_Fibonacci(j) * find_Fibonacci(i - j) ;	
				}
				cout << output << " " ;	 
			}
			cout << endl ;	/*for new line*/
		}
		cout <<  "Biggest number: " << output << endl ;		/*print the big number (last number being big number)*/

		heart = (number_L + 1) / 2;	/*that is a formüla*/
		heart += 1;

		if (number_L % 2 == 0)		/*if number is double number*/
		{
			i = number_L / 2;	/*line*/
			j = i / 2;	/*column*/
			if (i % 2 == 0)		/*if have a one point */
			{
				output = find_Fibonacci(j) * find_Fibonacci(i - j) ;	/*find value*/
				cout <<  "Heart of the pyramid: " << output << endl ;
			}
			else	/*if have a two point*/
			{
				output = find_Fibonacci(j) * find_Fibonacci(i - j) ;	/*find value*/
				cout <<  "Heart of the pyramid: " << output;
				j += 1;
				output = find_Fibonacci(j) * find_Fibonacci(i - j) ;	/*find value*/
				cout <<  " " << output << endl ;
			}
		}
		else	/*not double*/
		{
			i = (number_L / 2) + 1;	/*line */
			j = i / 2;	/*column*/
			if (i % 2 == 0)		/*if have a one point */
			{
				output = find_Fibonacci(j) * find_Fibonacci(i - j) ;	/*find value*/
				cout <<  "Heart of the pyramid: " << output << endl ;			
			}
			else		/*if have a two point*/
			{
				output = find_Fibonacci(j) * find_Fibonacci(i - j) ;	/*find value*/
				cout <<  "Heart of the pyramid: " << output;
				j += 1;
				output = find_Fibonacci(j) * find_Fibonacci(i - j) ;	/*find value*/
				cout <<  " " << output << endl ;			
			}
		}
		cout << endl << endl ; /*for look good*/
	}
}
