#include <stdio.h>

void print_before_main(void)__attribute__ ((constructor));

/**
* print_before_main - Prints a message before the main function is executed.
*/
void print_before_main(void)
{
printf("You've reached this point!\n");
printf("However, I carry my home on my back!\n");
}
/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
printf("This is the main function.\n");
return (0);
}
