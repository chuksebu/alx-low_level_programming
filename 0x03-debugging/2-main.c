#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
        int a, b, c;
        int largest = 0;

        a = 972;
        b = -98;
        c = 0;

	largest = largest_number(a, b, c);

	 printf("The largest number among %d, %d, and %d is: %d\n", a, b, c, largest);

        return (0);
}
