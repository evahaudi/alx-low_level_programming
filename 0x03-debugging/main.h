#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
void positive_or_negative(int i);
int largest_number(int a, int b, int c);
void print_remaining_days(int month, int day, int year);
int convert_day(int month, int day);
#endif


1-main.c

#include <stdio.h>
/**
* main - causes an infinite loop
* Return: 0
*/
int main(void)
{
int i;
printf("Infinite loop incoming :(\n");
i = 0;
/*while (i < 10)*/
/*{*/
/*putchar(i);*/
/*}*/
printf("Infinite loop avoided! \\o/\n");
return (0);
}
