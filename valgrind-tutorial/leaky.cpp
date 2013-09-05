#include <cstdlib>
#include <cstring>
#include <iostream>

char *get_string()
{
	char *str = new char[1024];
	strcpy(str, "Test String");
	return str;
}

int main()
{
	std::cout << "Starting program" << std::endl;

	char *str = get_string();

	std::cout << "String is \"" << str << "\"" << std::endl;

	return EXIT_SUCCESS;
}
