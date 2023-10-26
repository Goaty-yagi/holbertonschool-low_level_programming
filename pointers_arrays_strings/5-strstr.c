#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * _strstr - calls _strstr
 * @haystack: char pointer
 * @needle: char pointer
 *
 * Return: char pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int n_counter, n_len, m_sum;

	char *p_first;

	n_counter = m_sum = 0;

	n_len = strlen(needle);

	while (*haystack)
	{
		if (*haystack != 32 || *haystack != 44)
		{
			p_first = haystack;
			while (n_counter < n_len)
			{
				if (*haystack == needle[n_counter])
				{
					haystack++;
					n_counter = 0;
					m_sum = m_sum + 1;
				}
				else
				{
					n_counter = n_counter + 1;
				}
			}
		}
		if (m_sum == n_len)
		{
			return (p_first);
		}
		m_sum = 0;
		n_counter = 0;
		haystack++;
	}
	return (NULL);
}
