char* reverseleftwords(char *s, int n)
{
	if (s == NULL || n == 0)
	{
		return NULL;
	}
	int i = 0;
	i = strlen(s);
	char *s1 = (char*)malloc(sizeof(char)*(i + 1));
	int j = 0;
	for (j = 0; j < i - n; ++j)
	{
		s1[j] = s[n + j];
	}﻿
	for (int k = 0; k < n; ++k)
	{
		s1[i - n + k] = s[k];
	}
	s[i] = '\0';
	return s1;
}