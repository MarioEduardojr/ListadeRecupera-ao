#include <stdio.h>

int main() 
{
    double raio, volumetotal;
        scanf("%lf", &raio);

    
    volumetotal = (4.0 / 3.0) * 3.14159 * raio * raio * raio;
        printf("VOLUME = %.3lf\n", volumetotal);

    return 0;
}
