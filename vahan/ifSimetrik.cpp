#include <iostream>
#include <vector>

std::vector<int> getDigits(int number)
{
	if (number < 0)
	{
		number = -number;
	}
	int i = 0;
	int elem;
	std::vector<int> vect;
	while(number >= 1)
	{
		elem = number%10;
		vect.push_back(elem);
		number = number/10;
	}
	return vect;
}
bool isSimetrik(int number) 
{
	std::vector<int> digits= getDigits(number);
	int size = digits.size();
	if (size == 1)
	{
		return true;
	}
	int i, j;
	int iter = 0;
	for (i = 0, j = size-1; i <= size/2, j >= size/2; ++i, --j) 
	{
		if (digits[i] == digits[j]) 
		{
			++iter;
		}
		else break;
	}
	if (iter >= size/2) 
	{
		return true;
	}
	else 
	{
		return false;
	}
}

/*int main()
{
	int x;
	std::cout << "Type a number to check if it is simetrik"<< std::endl;
	std::cout << "Type 0 to exit" << std::endl;

	while(true)
	{
		std::cin >> x;
		if (x == 0)
		{
			break;
		}
		if ( isSimetrik(x) )
		{
			std::cout << "The number is simetrik!" << std::endl;
		}
		else 
		{
			std::cout << "The number is not simetrik!" << std::endl;
		}
	}

	return 0;
}*/