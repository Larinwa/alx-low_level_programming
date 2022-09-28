#include "main.h"

int _compare(char *head, char *tail);
int _strlen(char *s);
int is_palindrome(char *s);

/**
 * _compare - compare head and tail indices for match
 * @head: index starting from left of string
 * @tail: index starting from right of string, moving backwards
 * Return: 1 if palindrome, 0 if not
 */

int _compare(char *head, char *tail)
{

	if (head >= tail)
		return (1);
	if (*head == *tail)
		return (_compare(head + 1, tail - 1));

	return (0);
}

/**
 * _strlen - find length of string to access last index
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{

	if (*s == '\0')
		return (0);
	s++;
	return (1 + (_strlen(s)));
}

/**
 * is_palindrome - check if palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (_compare(s, (s + len - 1)));
}
