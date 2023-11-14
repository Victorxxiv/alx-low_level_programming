#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int found = 1;

while (*s && found)
{
char *a = accept;
found = 0;

while (*a)
{
if (*s == *a)
{
found = 1;
count++;
break;
}
a++;
}

if (found)
s++;
}

return (count);
}

