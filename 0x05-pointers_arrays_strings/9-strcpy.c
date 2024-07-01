#include "main.h"

/**
* *_strcpy - copies the string pointed
* terminated null byte(\0)
* @src: string to be copied
* @dest: pointer to the buffer in which we copy the string
* Return: the pointer
*/
char *_strcpy(char *dest, char *src)
{
int length, p;

length = 0;

while (src[length] != '\0')
{
length++;
}

for (p = 0; p < length; p++)
{
dest[p] = src[p];
}
dest[p] = '\0';

return (dest);
}
