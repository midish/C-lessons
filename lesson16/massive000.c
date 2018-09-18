#include <stdio.h>

#define SIZE 4

int     main(void)
{
    float prices[SIZE]; 

    size_t floatSize = sizeof(float);
    printf("Float size: %zu bytes.\n", floatSize);  // Узнаю размер типа float

    return (0);
}