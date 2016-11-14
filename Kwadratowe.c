#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y;
    printf("Wprowadz pierwsza liczbe: \n");
    scanf("%f",&x);
    while(getchar()!='\n');
    printf("Wprowadz druga liczbe: \n");
    scanf("%f",&y);
    while(getchar()!='\n');
    printf("%f * %f = %f",x,y,(x*y));
    return 0;
}
