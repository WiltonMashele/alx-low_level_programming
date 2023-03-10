#include <unistd.h>
#include "main.h"

/* putchar - writes the character c to stdout */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

/* islower - checks for lowercase character */
int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    return (0);
}

/* isalpha - checks for alphabetic character */
int _isalpha(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    return (0);
}

/* abs - computes the absolute value of an integer */
int _abs(int n)
{
    if (n < 0)
        return (-n);
    return (n);
}

/* isupper - checks for uppercase character */
int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    return (0);
}

/* isdigit - checks for a digit (0 through 9) */
int _isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

/* strlen - computes the length of a string */
int _strlen(char *s)
{
    int len = 0;

    while (*s != '\0')
    {
        len++;
        s++;
    }
    return (len);
}

/* puts - writes the string s, and a trailing newline, to stdout */
void _puts(char *s)
{
    int len = _strlen(s);

    write(1, s, len);
    write(1, "\n", 1);
}

/* strcpy - copies the string pointed to by src, including the null byte, to the buffer pointed to by dest */
char *_strcpy(char *dest, char *src)
{
    char *temp = dest;

    while ((*dest++ = *src++))
        ;
    return (temp);
}

/* atoi - converts a string to an integer */
int _atoi(char *s)
{
    int res = 0, sign = 1;

    if (*s == '-')
    {
        sign = -1;
        s++;
    }
    while (*s)
    {
        if (*s >= '0' && *s <= '9')
            res = res * 10 + (*s - '0');
        else
            break;
        s++;
    }
    return (res * sign);
}

/* strcat - concatenates two strings */
char *_strcat(char *dest, char *src)
{
    char *temp = dest;

    while (*dest != '\0')
        dest++;
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return (temp);
}

/**
 * _strncat - concatenates two strings, but only n bytes from source string
 * @dest: string to append to
 * @src: string to append to @dest
 * @n: maximum number of bytes to append
 *
 * Return: pointer to resulting string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int dest_len = 0, i;

    while (dest[dest_len] != '\0')
        dest_len++;

    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[dest_len + i] = src[i];

    dest[dest_len + i] = '\0';

    return dest;
}
