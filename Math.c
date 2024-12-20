#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14

void bashcara()
{

    printf("Digite o valor de A");
    int a;
    scanf("%d", &a);
    printf("Digite o valor de B");
    int b;
    scanf("%d", &b);
    printf("Digite o valor de c");
    int c;
    scanf("%d", &c);

    int delta = pow(b, 2) - 4 * a * c;

    printf("delta e igual a: %d", delta);
}
void raio()
{

    double raio;
    double area;

    printf("Digite o valor do raio\n");
    scanf("%lf", &raio);

    area = pi * pow(raio, 2);

    printf("A area do circulo e %f", area);
}
int main()
{
    raio();
    // bashcara();
}