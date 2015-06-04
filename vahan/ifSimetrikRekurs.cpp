#include <iostream>

int getDigitCount(int n)
{
	if (n == 0)
	{
		return 0;
	}
	return 1 + getDigitCount(n/10);
}


int reversedNumber (int number, int d)
{
	
	if(number == 0)
	{
		return number;
	}

	return ( (number % 10) * pow(10.0, d)  + reversedNumber(number/10, d - 1) ); 
}

bool isSimetrik(int number, int d)
{
	int rev = reversedNumber(number, d);
	if(rev == number)
	{
		return true;
	} else {
		return false;
	}
}

int main()
{
	int x, d;
	std::cout << "Type a number to check if it is simetrik"<< std::endl;
	std::cout << "Type 0 to exit" << std::endl;

	while(true)
	{
		std::cin >> x;
		d = getDigitCount(x) - 1;
		if (x == 0)
		{
			break;
		}
		
		if ( isSimetrik(x, d) )
		{
			std::cout << "The number is simetrik!" << std::endl;
		}
		else 
		{
			std::cout << "The number is not simetrik!" << std::endl;
		}
		
	}

	return 0;
}