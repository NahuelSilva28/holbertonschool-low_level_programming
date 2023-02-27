#include "main.h"
/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 * Return: sing * num.
 **/
int _atoi(char *s)
{
    int sign = 1;
    unsigned int num = 0;

    while (*s)
    {
        if (*s >= '0' && *s <= '9')
        {
            num = (num * 10) + (*s - '0');
        }
        else if (*s == '-')
        {
            sign = -sign;
        }
        else if (num > 0)
        {
            break;
        }
        s++;
    }

    return (sign * num);
}
