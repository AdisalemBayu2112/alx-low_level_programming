#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("Poppy", 3.5, "Bob");
	if (my_dog == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	printf("My name is %s, I am %.2f :) - Woof!\n",
			my_dog->name, my_dog->age);
	return (0);
}

