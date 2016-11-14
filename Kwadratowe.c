#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A,B,C,x;
    printf("Wprowadz pierwszy wspolczynnik: \n");
    scanf("%f",&A);
    while(getchar()!='\n');
    printf("Wprowadz drugi wspolczynnik: \n");
    scanf("%f",&B);
    while(getchar()!='\n');
    printf("Wprowadz trzeci wspolczynnik: \n");
    scanf("%f",&C);
    while(getchar()!='\n');
    printf("Wprowadz punkt: \n");
    scanf("%f",&x);
    while(getchar()!='\n');
    printf("%f * %f^2 + %f * %f + %f = %f",A,x,B,x,C,((A*x*x)+(B*x)+(C)));
    return 0;
}
