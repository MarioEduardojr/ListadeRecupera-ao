#include <stdio.h>

int main() 
{
    int quantia_produtos, codigo_produto, quantia_comprada;
    double total = 0;

    
    scanf("%d", &quantia_produtos);

  
    for (int i = 0; i < quantia_produtos; i++)
    {
      
        scanf("%d %d", &codigo_produto, &quantia_comprada);

       
        switch (codigo_produto) 
        {
            case 1001:
                  total += 1.50 * quantia_comprada;
                     break;
            case 1002:
                  total += 2.50 * quantia_comprada;
                     break;
            case 1003:
                  total += 3.50 * quantia_comprada;
                     break;
            case 1004:
                  total += 4.50 * quantia_comprada;
                     break;
            case 1005:
                  total += 5.50 * quantia_comprada;
                     break;
            default:
                printf("Código de produto inválido.\n");
                return 1; 
        }
    }

   
    printf("%.2f\n", total);

    return 0;
}
