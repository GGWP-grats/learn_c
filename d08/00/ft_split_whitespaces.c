#include <stdio.h>
#include <stdlib.h>
static int words_counter(char *str)
{
	int words;
	int i;

	i = 0;
	words = 0;
	while(str[i])
	{
		while(str[i] != '\t' && str[i] != '\n' && str[i] != ' ')
	 	{	
			if (!(str[++i]) || (str[i] == '\t' || str[i] == '\n' || str[i] == ' '))
				words++;
			if (!str[i])
				return(words);
	 	}
	 	i++;
	}
	return (words);
}

static int		word_len(char *str)
{
	int i;
	int len;

	len = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != '\n' && str[i] != '\t' && str[i] != ' ')
			len++;
		i++;
		if ((len) && (str[i] == '\n' || str[i] == '\t' || str[i] == ' ' || !str[i]))
			return(len);
	}
	return(0);
}

char		**ft_split_whitespaces(char *str)
{
	char **p_words;
	int w;
	int wl;
	int i;
	int j;
	
	w = words_counter(str); 	
	p_words = (char **)malloc(sizeof(char*) * (w + 1));
	i = 0;
	while(i < w)
	{
		wl = word_len(str);
		p_words[i] = (char *)malloc(sizeof (char) * (wl + 1));
		while (*str == '\t' || *str == '\n' || *str == ' ')
			str++;
		
		j = 0;
		while (j < wl)
		{
			p_words[i][j] = str[j];
			j++;
		}
		p_words[i][j] = '\0';
		printf("lenght of %s word : %d\n", p_words[i], wl);
		str += wl;
		i++;	
	}
	p_words[i] = 0;
	return(p_words);
}
int 	main(void)
{
	char str[] = {" \t \n  ftwgAGA YG24YHAW24HBESTHSEHSEHESHJRTJHRTJRTJETJTRJETJWJWEJHf a f43tgaweg irst second 123 5"};
	ft_split_whitespaces(str);
	return(0);
}
