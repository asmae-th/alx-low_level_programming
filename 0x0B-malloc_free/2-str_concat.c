#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
char *str_concat(char *s1, char *s2)
{
    int i = 0;
    int j = 0;
    char *ptr =(char *)malloc((strlen(s1) + strlen(s2)) * sizeof(char));
    if(!s1 || !s2)
        return NULL;
    while(s1[i] != '\0')
    {
        ptr[i] = s1[i];
        i++;
    }
    while(s2[j] != '\0')
    {
        ptr[i] = s2[j];
        i++;
        j++;
    }
    ptr[i] = '\0';
    return ptr;
}
