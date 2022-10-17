#include <stdio.h>
/**
 * main -is the entey point for the program
 *
 * Return:zero if no error, Non-zero value if errors.
 */
int main(void)
{
	printf("Size of a char: %id byte(s)\n", sizeof(char));
	printf("Size of an int: %id byte(s)\n", sizeof(int));
	printf("Size of a long int: %id byte(s)\n", sizeof(long int));
	printf("Size of long long int: %id byte(s)\n", sizeof(long long int));
	printf("Size of a float: %id byte(s)\n", sizeof(float));
	return (0);
}
