#include <stdio.h>

int main()
{
    int casospossiveis, n, i;
    
       scanf("%d", &casospossiveis);

    for (i = 0; i < casospossiveis; i++) {
       
        scanf("%d", &n);

        
        int resultado = (n % 2 == 0) ? 0 : 1;

       
        printf("%d\n", resultado);
    }

    return 0;
}

