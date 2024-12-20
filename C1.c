#include <stdio.h>
#include <stdlib.h>

float a = 1;
float b = 2;

void area(float a,float  b){
    return a*b;

}
int main(){
    float resultado = area(a,b);
    printf("Sua área e %f",resultado);
    return 0;
    }
