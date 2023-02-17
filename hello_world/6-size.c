#include <stdio.h>

/**
 * main -C program
 *
 * Return: 0 (Succes);
 */
int main(void)
{
char caracter;
int entero;
long int longEnter;
long long int llEnt;
float flotante;
printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(caracter));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(entero));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(longEnter));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(llEnt));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(flotante));
return (0);
}
