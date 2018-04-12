#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0,a=0,b=0;
    float div;
    long long int fact,sum,res,prod;

    while(seguir=='s')
    {
        printf("1- Ingresar Primer operando (A=%d)\n",a);
        printf("2- Ingresar Segundo operando (B=%d)\n",b);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Primer operando: ");
                scanf("%d",&a);
                break;
            case 2:
                printf("Segundo operando: ");
                scanf("%d",&b);
                break;
            case 3:
                sum=suma(a,b);
                printf("La suma es: %d\n",sum);
                break;
            case 4:
                res=resta(a,b);
                printf("La resta es: %d\n",res);
                break;
            case 5:
                while(b==0)
                {
                    printf("Imposible dividir por 0, ingrese nuevamente el 2do operando: ");
                    scanf("%d",&b);
                }
                div=division(a,b);
                printf("La division es: %.2f\n",div);
                break;
            case 6:
                prod=producto(a,b);
                printf("El producto es: %d\n",prod);
                break;
            case 7:
                while(a<=0)
                {
                    printf("imposible realizar la operacion, ingrese un numero mayor a 0: ");
                    scanf("%d",&a);
                }
                fact=factorial(a);
                printf("El factorial de %d es: %lli\n",a,fact);
                break;
            case 8:
                sum=suma(a,b);
                res=resta(a,b);
                div=division(a,b);
                prod=producto(a,b);
                fact=factorial(a);
                printf("La suma es: %d\n",sum);
                printf("La resta es: %d\n",res);
                printf("La division es: %.2f\n",div);
                printf("El producto es: %d\n",prod);
                printf("El factorial de %d es: %lli\n",a,fact);
                break;
            case 9:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
