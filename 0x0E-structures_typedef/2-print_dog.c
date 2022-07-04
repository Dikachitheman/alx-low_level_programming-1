#include <stdio.h>

/**
 * print_dog - prints all member info of a struct dog
 * @d: a variable of type struct dog
 */
void print_dog(struct dog *d)
{

	if (d == NULL) /* validate if d initialized correctly */
	{
		return;
	}

	if (!(d->name))
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("age: %f\n", d->age);

	if (!(d->owner))
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
