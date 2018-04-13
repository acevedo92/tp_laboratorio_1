#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0,a=0,b=0,sum,res,prod;
    float div;
    long long int fact;

    while(seguir=='s')
    {
        printf("1- Ingresar el primer operando (A=%d)\n",a);
        printf("2- Ingresar el segundo operando (B=%d)\n",b);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Primer operando: ");
                esNumero=scanf("%d",&a);
                while (esNumero==0) //valida que sea un numero y no un caracter
                {
                printf("Imposible realizar las operaciones con caracteres, ingrese un numero entero: ");
                setbuf(stdin,NULL);
                esNumero=scanf("%d",&a);
                }
                break;
            case 2:
                printf("Segundo operando: ");
                esNumero=scanf("%d",&b);
                while (esNumero==0) //valida que sea un numero y no un caracter
                {
                printf("Imposible realizar las operaciones con caracteres, ingrese un numero entero: ");
                setbuf(stdin,NULL);
                esNumero=scanf("%d",&b);
                }
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
                while(b==0) //valida que no sea una division por 0
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
                while(a<=0) //valida que no sea un numero negativo
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
