#include <bitset>
#include <iostream>

int getUserInput()
{
	int value{};
	// validate user input between 0 and 255
	do
	{
		std::cout << "Enter a number between 0 and 255: ";
		std::cin >> value;
	} while (!(value >= 0 && value <= 255));

	return value;
}

void print8BitBinary(int decimal)
{
	int result{};
	uint8_t bitmask = 0x80;		// start with MSB (Most Significant Bit)
	for (int i{7}; i >= 0; --i) // start from pow(2, 7), which equals 128
	{
		result = decimal / bitmask; // pow(base, exponent)
		if (i == 3)
		{
			std::cout << ' ';
		}
		if (result % 2 == 0)
		{
			std::cout << "0";
		}
		else
		{
			std::cout << "1";
		}
		bitmask = bitmask >> 1;
	}
	std::cout << '\n';
}

int main()
{
	int userInput{getUserInput()};
	print8BitBinary(userInput);
	return 0;
}
