#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <cstdlib>

# define FLT_MIN -3.40282e+38
# define FLT_MAX 3.40282e+38

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		~ScalarConverter();
		ScalarConverter		&operator=(const ScalarConverter &copy);
		static std::string	*isPseudo(std::string str);
		static int			isCharLit(std::string str);
		static int			isIntLit(std::string str);
		static int			isFloatLit(std::string str);
		static int			isDoubleLit(std::string str);
		static void			printPseudo(std::string *pseudo);
		static void			printChar(char c);
		static void			printInt(int i);
		static void			printFloat(float f);
		static void			printDouble(double d);
	public:
		static void	convert(std::string str);
};

#endif

