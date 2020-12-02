int Find(int arr[][N], int num)
{
	int i = 0;
	int j = N - 1;

	while (i < N && j > 0)
	{
		if (num == arr[i][j])
		{
			return num;
		}
		else if (num > arr[i][j])
		{
			i++;
		}
		else if (num < arr[i][j])
		{
			j--;
		}
	}

}


///////////////////////


int FindRound(const char *src, char *find)
{
	char tmp[256] = { 0 };
	strcpy(tmp, src);
	strcat(tmp, src);
	return strstr(tmp, find) != NULL;
}

////////////////////////////


int cmp(const void *a, const void *b)
{
	return (*(int*)a - *(int*)b);
}

int cmp(const void *a, const void *b)
{
	return (*(char*)a - *(int*)b);
}