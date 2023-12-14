#include <iostream>
int main()
{
	int num1 = 101, num2 = -999, num3 = 23864, num4 = 74665165, num5 = 7777;
	int* ptr = &num1;
	for (int i = 0; i < 20; i++)
	{
		std::cout << i <<'\t' << ptr - i << ": " << *(ptr + i) << std::endl;
	}
}