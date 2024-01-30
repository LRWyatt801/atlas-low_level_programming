/*
 * file: 100-atoi.c
 * auth: Logan Wyatt
 */

#include "main.h"

/**
 * _atoi - converst a string to a int
 * @s: string to be converted
 *
 * Return: 0 on success
 */

int _atoi(char *s)
{
	int i, num, sign;

	sign = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign = -1;
		else if (s[i] >= '0' && s[i] <= '9')
			break;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			num = s[i] + '0';
	}
	num *= sign;
	if (s[i] >= '0' && s[i] <= '9')
		return (num);
	else
		return (0);
}
