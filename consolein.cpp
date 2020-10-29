#include <iostream>

int main(int argc, char **argv)
{
	int a, b;
	std::cin >> a >> b;
	int sum = a + b;
	std::cout << sum << std::endl;

	for (int i = 0; i < argc; ++i)
		std::cout << argv[i] << std::endl;

	return 0;
}
