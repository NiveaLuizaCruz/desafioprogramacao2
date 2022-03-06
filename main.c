#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int Ordena(const void*a,const void*b)
{
    if(*(int*)a==*(int*)b)
        return 0; //iguais
    else if (*(int*)a<*(int*)b)
        return -1; //vem antes
    else
        return 1; //vem depois
}

int main()
{
    setlocale(LC_CTYPE,"");
    int tam=101, i=0;                       //tam=101 porque com 1 dava problema
    int arr[tam];
    qsort(arr,101,sizeof(int),Ordena);
    printf("Informe o número de elementos da lista: ");
    scanf("%d", &tam);
    printf("\n");
    if (tam%2!=0)
    {
        for(i=0; i<tam; i++)
    {
        printf("Elemento %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    printf("\n\n");
    for(i=0; i<tam; i++)
        printf("%d ", arr[i]);
    }
    else
        printf("\nNúmero par de elementos.");
    printf("\n");
    system("PAUSE");
}
