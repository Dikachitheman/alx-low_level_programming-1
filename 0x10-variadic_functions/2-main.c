#include "variadic_functions.h"

int main(void)
{
	print_strings(" ", 3, "Jack", "Bauer", "is");
	print_strings(" ", 4, "Chukwujama", NULL, "Chibuzor", "Jamaal");
	print_strings(" ", 1, "Hey");
	print_strings(" ", 3, "How're", "you", "doing");
	return (0);
}
