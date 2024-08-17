#include<stdio.h>

typedef struct temp
{
    int a;
    float c;
    char b;
}temp;

int main(void)
{
    temp one = {1, 12.5, 'M'}, two;
    printf("%i  %.2f  %c\n", one.a, one.c, one.b);
    two.a = 2;
    two.c = 25;
    two.b = 'K';
    printf("%i  %.2f  %c\n", two.a, two.c, two.b);
    return  0;
}