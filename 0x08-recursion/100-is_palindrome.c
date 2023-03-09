#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen(s);
	if (len <= 1)
	return (1);
	return (_ispalindrome(s, s + len - 1));
}

/**
 * _ispalindrome - recursively checks if a string is a palindrome
 * @start: pointer to the start of the string
 * @end: pointer to the end of the string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int _ispalindrome(char *start, char *end)
{
	if (start >= end)
	return (1);
	if (*start != *end)
	return (0);
	return (_ispalindrome(start + 1, end - 1));
}

/**
 * _strlen - computes the length of a string
 * @s: pointer to the string to measure
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
	return (0);
	return (1 + _strlen(s + 1));
}
