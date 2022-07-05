#include "dog.h"

/**
 * _strlen - returns the length of a string .
 * @s: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest.
 * @dest: copy source to this buffer
 * @src: this is the source to copy
 * Return: copy of original source
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
		dest[i] = src[i];
	return (dest);
}
/**
 * new_dog - create new instance of struct dog
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return: initialized instance of struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *n;

	n = malloc(sizeof(struct dog));
	if (n == NULL)
		return (NULL);

	n->name = malloc(_strlen(name) + 1);
	if (n->name == NULL)
	{
		free(n);
		return (NULL);
	}
	n->age = age;
	n->owner = malloc(_strlen(owner) + 1);
	if (n->owner == NULL)
	{
		free(n);
		free(n->name);
		return (NULL);
	}
	_strcpy(n->name, name);
	_strcpy(n->owner, owner);
	return (n);
}
