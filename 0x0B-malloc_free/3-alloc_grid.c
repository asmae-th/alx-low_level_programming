#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
    int i = 0;
    int j = 0;
    int **str;
    str = (int ** ) malloc((width * height) * sizeof(int *));
    if (!str)
        return NULL;
    while(j <= height)
    {
        while(i <= width)
        {
            str[j][i] = 0;
            i++;
        }
        j++;
    }
    return str;
}