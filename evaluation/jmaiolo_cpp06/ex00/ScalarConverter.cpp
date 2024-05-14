#include "ScalarConverter.hpp"

// Default constructor
ScalarConverter::ScalarConverter(void)
{
	//std::cout << "Default constructor called" << std::endl;
	return ;
}

// Copy constructor
ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	//std::cout << "Copy constructor called" << std::endl;
	(void) copy;
	return ;
}

// Destructor
ScalarConverter::~ScalarConverter(void)
{
	//std::cout << "Destructor called" << std::endl;
	return ;
}

// Assignment operator overload
ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &copy)
{
	//std::cout << "Assignment operator called" << std::endl;
	if (this != &copy)
		(void) copy;
	return (*this);
}

// Type checkers
std::string	*ScalarConverter::isPseudo(std::string str)
{
	static std::string	case1[5] = {"nan", "impossible", "impossible", "nanf", "nan"};
	static std::string	case2[5] = {"nanf", "impossible", "impossible", "nanf", "nan"};
	static std::string	case3[5] = {"inff", "impossible", "impossible", "inff", "inf"};
	static std::string	case4[5] = {"+inff", "impossible", "impossible", "+inff", "+inf"};
	static std::string	case5[5] = {"-inff", "impossible", "impossible", "-inff", "-inf"};
	static std::string	case6[5] = {"inf", "impossible", "impossible", "inff", "inf"};
	static std::string	case7[5] = {"+inf", "impossible", "impossible", "+inff", "+inf"};
	static std::string	case8[5] = {"-inf", "impossible", "impossible", "-inff", "-inf"};
	static std::string	*cases[8] = {case1, case2, case3, case4, case5, case6, case7, case8};

	for (size_t i = 0; i < 8; i++)
	{
		if (str == cases[i][0])
			return (cases[i]);
	}
	return (NULL);
}

int	ScalarConverter::isCharLit(std::string str)
{
	if (str.length() == 1 && !isdigit(str[0]))
		return (1);
	return (0);
}

int	ScalarConverter::isIntLit(std::string str)
{
	if (str[0] != '-' && str[0] != '+' && !isdigit(str[0]))
		return (0);
	else if (str.length() == 1 && !isdigit(str[0]))
		return (0);
	for (size_t i = 1; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}

int	ScalarConverter::isFloatLit(std::string str)
{
	int	fflag;

	fflag = 0;
	if (str[0] != '-' && str[0] != '+' && !isdigit(str[0]) && str[0] != '.')
		return (0);
	else if (str.length() == 1 && !isdigit(str[0]))
		return (0);
	for (size_t i = 1; i < str.length(); i++)
	{
		if (str[i] == 'f')
			fflag++;
		if (!isdigit(str[i]) && str[i] != '.' && str[i] != 'f')
			return (0);
	}
	if (fflag != 1)
		return (0);
	if (str[str.length() - 1] != 'f')
		return (0);
	if (str[0] == '.' && str[1] == 'f')
		return (0);
	return (1);
}

int	ScalarConverter::isDoubleLit(std::string str)
{
	if (str[0] != '-' && str[0] != '+' && !isdigit(str[0]) && str[0] != '.')
		return (0);
	else if (str.length() == 1 && !isdigit(str[0]))
		return (0);
	for (size_t i = 1; i < str.length(); i++)
	{
		if (!isdigit(str[i]) && str[i] != '.')
			return (0);
	}
	return (1);
}

// Print funcs
void	ScalarConverter::printPseudo(std::string *pseudos)
{
	std::cout << "char: " << pseudos[1] << std::endl;
	std::cout << "int: " << pseudos[2] << std::endl;
	std::cout << "float: " << pseudos[3] << std::endl;
	std::cout << "double: " << pseudos[4] << std::endl;
	return ;
}

void	ScalarConverter::printChar(char c)
{
	char	char_form = c;
	int		int_form = static_cast<int>(c);
	float	float_form = static_cast<float>(c);
	double	double_form = static_cast<double>(c);

	//char
	std::cout << "char: ";
	if (c >= 32 && c <= 126)
		std::cout << "'" << char_form << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	
	//int
	std::cout << "int: ";
	std::cout << int_form << std::endl;

	std::cout << std::fixed;
	//float
	std::cout << "float: ";
	std::cout << float_form << "f" << std::endl;
	//double
	std::cout << "double: ";
	std::cout << double_form << std::endl;
	return ;
}

void	ScalarConverter::printInt(int i)
{
	char	char_form = static_cast<char>(i);
	int		int_form = i;
	float	float_form = static_cast<float>(i);
	double	double_form = static_cast<double>(i);

	//char
	std::cout << "char: ";
	if (i >= -128 && i <= 127)
	{
		if (char_form >= 32 && char_form <= 126)
			std::cout << "'" << char_form << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;

	//int
	std::cout << "int: ";
	std::cout << int_form << std::endl;
	
	std::cout << std::fixed;
	//float
	std::cout << "float: ";
	std::cout << float_form << "f" << std::endl;
	//double
	std::cout << "double: ";
	std::cout << double_form << std::endl;
	return ;
}

void	ScalarConverter::printFloat(float f)
{
	char	char_form = static_cast<char>(f);
	int		int_form = static_cast<int>(f);
	float	float_form = f;
	double	double_form = static_cast<double>(f);

	//char
	std::cout << "char: ";
	if (f >= -128 && f <= 127)
	{
		if (char_form >= 32 && char_form <= 126)
			std::cout << "'" << char_form << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;
	
	//int
	std::cout << "int: ";
	if (f >= INT_MIN && f <= INT_MAX)
		std::cout << int_form << std::endl;
	else
		std::cout << "impossible" << std::endl;
	
	std::cout << std::fixed;
	//float
	std::cout << "float: ";
	std::cout << float_form << "f" << std::endl;
	//double
	std::cout << "double: " << double_form << std::endl;
	return ;

}

void	ScalarConverter::printDouble(double d)
{
	char	char_form = static_cast<char>(d);
	int		int_form = static_cast<int>(d);
	float	float_form = static_cast<float>(d);
	double	double_form = d;

	//char
	std::cout << "char: ";
	if (d >= -128 && d <= 127)
	{
		if (char_form >= 32 && char_form <= 126)
			std::cout << "'" << char_form << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	else
		std::cout << "impossible" << std::endl;

	//int
	std::cout << "int: ";
	if (d >= INT_MIN && d <= INT_MAX)
		std::cout << int_form << std::endl;
	else
		std::cout << "impossible" << std::endl;

	std::cout << std::fixed;
	//float
	std::cout << "float: ";
	if (d >= FLT_MIN && d <= FLT_MAX)
		std::cout << float_form << "f" << std::endl;
	else
		std::cout << "impossible" << std::endl;
	//double
	std::cout << "double: " << double_form << std::endl;
	return ;
}

// Convert function
void	ScalarConverter::convert(std::string str)
{
	std::string	*pseudos;
	char		char_form;
	int			int_form;
	float		float_form;
	double		double_form;
	double		valid_check;

	valid_check = std::strtod(str.c_str(), NULL);
	pseudos = isPseudo(str);
	if (pseudos != NULL)
	{
		printPseudo(pseudos);
		return ;
	}
	if (isCharLit(str))
	{
		if (valid_check > CHAR_MAX || valid_check < CHAR_MIN)
		{
			printDouble(valid_check);
			return ;
		}
		char_form = str[0];
		printChar(char_form);
		return ;
	}
	if (isIntLit(str))
	{
		if (valid_check > INT_MAX || valid_check < INT_MIN)
		{
			printDouble(valid_check);
			return ;
		}
		int_form = std::atoi(str.c_str());
		printInt(int_form);
		return ;
	}
	if (isFloatLit(str))
	{
		if (valid_check > FLT_MAX || valid_check < FLT_MIN)
		{
			printDouble(valid_check);
			return ;
		}
		float_form = std::strtof(str.c_str(), NULL);
		printFloat(float_form);
		return ;
	}
	if (isDoubleLit(str))
	{
		double_form = std::strtod(str.c_str(), NULL);
		printDouble(double_form);
		return ;
	}
	std::cout << "Invalid input!!!" << std::endl;
	return ;
}
