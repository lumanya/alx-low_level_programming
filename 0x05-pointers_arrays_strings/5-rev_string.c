/**
 * rev_string - function that reverse string.
 * @s: pointer int type
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int o, j;
	char temp[500];

	for (o = 0; *s != '\0'; o++)
	{
		temp[o] = *s;
		s++;
	}

	s--;

	for (j = 0; j != o; j++)
	{
		*s = temp[j];
		s--;
	}

	s++;

}