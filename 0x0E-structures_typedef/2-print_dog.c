#include "dog.h"

/**
 * print_dog - prints all member info of a struct dog
 * @d: a variable of type struct dog
 */
void print_dog(struct dog *d)
{

	if (d == NULL) /* validate if d is initiated correctly */
	{
		return;
	}

	if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);
	}
	else
	{
		printf("Name: (nil)\n");
	}
	printf("Age: %f\n", d->age);

	if (d->owner != NULL)
	{
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("Owner: (nil)\n");
	}
}
