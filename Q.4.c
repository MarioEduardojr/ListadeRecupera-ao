#include <stdio.h>

int main()
{
    int Golsdointer, Golsdogremio, grenais = 0, vitoriasdoInter = 0, vitoriasdoGremio = 0, empates = 0, repetir;

    do {
      
           scanf("%d %d", &Golsdointer, & Golsdogremio);

        
        grenais++;

        if (Golsdointer > Golsdogremio) 
        {
            vitoriasdoInter++;
        } else if (Golsdogremio > Golsdointer) 
        {
            vitoriasdoGremio++;
        } else {
            empates++;
        }

        
        printf("Novo grenal (1-sim 2-nao)\n");
           scanf("%d", &repetir);

    } while (repetir == 1);

    
    printf("%d grenais\n", grenais);
     printf("Inter:%d\n", vitoriasdoInter);
      printf("Gremio:%d\n", vitoriasdoGremio);
       printf("Empates:%d\n", empates);

    if (vitoriasdoInter > vitoriasdoGremio) {
        printf("Inter venceu mais\n");
    } else if (vitoriasdoGremio > vitoriasdoInter) {
        printf("Gremio venceu mais\n");
    } else {
        printf("Nao houve vencedor\n");
    }

    return 0;
}
