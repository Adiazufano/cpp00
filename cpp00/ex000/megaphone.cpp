#include <iostream>
#include <string>

void	toUpper(char **argv)
{
	int	index;
	std::string	str;
	std::string	sentence;
	size_t	j;

	index = 1;
	sentence = "";
	while (argv[index])
	{
		j = 0;
		str = argv[index];
		while (j < str.length())
		{
			if (str[j] >= 97 && str[j] <= 122)
				sentence += toupper(str[j]);
			else
				sentence += str[j];
			j++;
		}
		std::cout << " " << sentence;
		index++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
		return (1);
	}
	toUpper(argv);
	return (0);
}
