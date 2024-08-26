#include <iostream>

int main()
{
	// Initilisation variable techniques
	//https://www.learncpp.com/cpp-tutorial/variable-assignment-and-initialization/?utm_content=cmp-true

	int b{ 4 };	// Direct list initilisation. The C++ way
	int c(5);	// Direct initilisation. Over the top for simple variable initilisation
	int a = 3;	// C compatibility
	int x{ 4 }, y{ 6 }, z{ 6 };


	std::cout << "a = " << a << std::endl;
	printf("b = %d\n", b);
	std::cout << "c = " << c << std::endl;

	b = a + b;
	std::cout << "b = " << b << std::endl;
	printf("x = %d, y = %d, z = %d\n", x, y, z);

	std::cout << "Goodbye World";
	std::cout << std::endl;
	std::cout << "Goodbye World Again" << std::endl;

	return 0;
}