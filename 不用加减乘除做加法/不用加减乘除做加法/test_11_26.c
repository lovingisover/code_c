int add(int a, int b)
{
	while (b != 0)
	{
		unsigned int Car = (unsigned)(a&b) << 1;
		a = a^b;
		b = Car;
	}
	return a;
}