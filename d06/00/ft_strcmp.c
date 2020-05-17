int      ft_strcmp(char *s1, char *s2)
{
	int ch;
    int nb;

	ch = -1;
	nb = 0;
	while (s1[ch] && s2[ch++])
	{	
		if (s1[ch] > s2[ch])
			return(1);
		if (s2[ch] > s1[ch])
			return(-1);
	    if (s1[ch] == 0 && s2[ch] == 0)
			return(0);

	}
        return(nb);
}
