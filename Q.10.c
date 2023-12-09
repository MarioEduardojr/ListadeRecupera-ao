#include <stdio.h>

int main() 
{
    int tempoespecifico, velocidadevariavel;
    double litros; 
         scanf("%d", &tempoespecifico);
         
         scanf("%d", &velocidadevariavel);

    litros = (tempoespecifico * velocidadevariavel) / 12.0;

         printf("%.3lf\n", litros);

    return 0;
}
