#include <iostream>

void printNumbers(int N)
{
	if (N == 0)
	{
		return;
	}
	printNumbers(N-1);
	std::cout << N <<" ";

}
/*
int main()
{
	std::cout <<"Input number N to print (1,2,....N)" << std::endl;
	int N;
	std::cin >> N;
	printNumbers(N);
	int a;std::cin >> a;
	return 0;
}
*/