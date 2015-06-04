#include <iostream>
void swap(int &x, int &y) 
{
	x = x + y;
	y = x - y;
	x = x - y;
}

/*
int main() 
{
	std::cout<< "Input two variables..." << std::endl;
	int x, y;
	std::cin >> x;
	std::cin >> y;
	std::cout << "x = " << x << "\ny = " << y << "\nLet's swap their values...";
	swap(x, y);
	std::cout << "\nx = " << x <<std::endl;
	std::cout << "y = " << y <<std::endl;
	
	int a;std::cin >>a;
	return 0;
}
*/