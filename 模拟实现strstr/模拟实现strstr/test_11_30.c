const char *mystrstr(const char*str1, const char* str2)
{
	assert(str1&&str2);
	while (*str2)
	{
		while (*str1&&*str1 != *str2)
		{
			++str1;
		}
		if (!*str1)
			return NULL;
		const char* tmp1 = str1, *tmp2 = str2;
		while (*str1&&*str2&&*str1 == *str2)
		{
			++str1;
			++str2;
		}
		if (*str2)
			str1 = tmp1 + 1, str2 = tmp2;
		else
			str1 = tmp1;
	}
	return str1;
}