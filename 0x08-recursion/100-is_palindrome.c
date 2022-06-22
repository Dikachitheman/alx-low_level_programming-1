#include "main.h"

/**
 * compare - compare head and tail indices for match
 * @head: index starting from left of string
 * @tail: index starting from right of string moving backwards
 * Return: none
 */

int compare(char *head, char *tail)
{
	if (head >= tail)
		return (1);
	if (*head == *tail)
		return (compare(head + 1, tail - 1));

	return (0);
}

/**
 * _strlen_recursion - prints the length of a string recursively
 * @s: string
 * Return: length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	s++;
	return (1 + _strlen_recursion(s));
}

/**
 * is_palindrome - checks if a string is a palindrome or not
 * @s: string
 * Return: None
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (compare(s, (s + len - 1)));
