int search_f(char f, char *c)
{
	int i;
	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] == f)
			return (i);
	}
	return (-1);
}
