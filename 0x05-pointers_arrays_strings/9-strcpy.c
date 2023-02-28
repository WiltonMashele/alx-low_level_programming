#include "main.h"

/**
 * _strcpy - function copies the string pointed
 * @dest: pointer to copy the string to.
 * @src: the string to copy to the destination.
 *
 * Return: a copy of the src.
 */

char* _strcpy(char* dest, const char* src)
{
    char* dest_copy = dest;

    /* Copy the characters from src to dest */
    while (*src != '\0')
    {
        *dest_copy = *src;
        dest_copy++;
        src++;
    }

    /* Copy the null terminator */
    *dest_copy = '\0';

    /* Return a pointer to the destination string */
    return dest;
}
