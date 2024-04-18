#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * 
 * Return: pointer to the concatenated strings, NULL upon failure
*/
char *str_concat(char *s1, char *s2)
{
    int i, len1 = 0, len2 = 0;
    char *result;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    for (i = 0; s1[i] != '\0'; i++)
        len1++;
    for (i = 0; s2[i] != '\0'; i++)
        len2++;
    
    if (!(s1 || s2)) /* check if any of the pointers is NULL */
        return (NULL);
    
    result = malloc((len1 + len2 + 1) * sizeof(char));/* allocate memory for the new string */

    if (!result)   /* check if allocation was successful */
        return (NULL);
    
    /*concatenate*/
    for (i = 0; i < len1; i++)
        result[i] = s1[i];
    for (i = 0; i < len2; i++)
        result[len1 + i] = s2[i];
	
    result[len1 + len2] = '\0';      /* add null terminator at end of new string */
    
    return (result);                 /* return pointer to the new string */
}