#include <bitset>
#include <iostream>

// "rotl" stands for "rotate left"
std::bitset<4> rotl(std::bitset<4> bits)
{
	const bool leftbit{bits.test(3)};
	bits <<= 1;
	if (leftbit)
	{
		bits.set(0);
	}
	return bits;
}

std::bitset<4> rotl_bitwise_operators(std::bitset<4> bits)
{
	return (bits << 1) | (bits >> 3);
}

int main()
{
	std::bitset<4> bits1{0b0001};
	std::cout << rotl(bits1) << '\n';

	std::bitset<4> bits2{0b1001};
	std::cout << rotl(bits2) << '\n';

	std::cout << rotl_bitwise_operators(bits1) << '\n';
	std::cout << rotl_bitwise_operators(bits2) << '\n';

	return 0;
}
