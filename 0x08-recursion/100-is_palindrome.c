#include "main.h"

/**
 * palindLn - obtains length of a
 * @a: string
 * @l: length
 *
 * Return: interger.
 */
int palindLn(char *a, int l)
{
	if (*a == 0)
		return (l - 1);
	return (palindLn(a + 1, l + 1));
}
/**
 * palindComp - compares string vs string reverse
 * @a: string
 * @l: length
 *
 * Return: integer.
 */

int palindComp(char *a, int l)
{
	if (*a != *(a + l))
		return (0);
	else if (*a == 0)
		return (1);
	return (palindComp(a + 1, l - 2));
}
/**
 * is_palindrome - palindrome
 * @s: string to evaluate
 *
 * Return: On success 1.
 */
int is_palindrome(char *s)
{
	int l;

	l = palindLn(s, 0);
	return (palindComp(s, l));
}
