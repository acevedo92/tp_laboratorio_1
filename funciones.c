int suma (int a,int b) //recibe el operando A y el operando B y devuelve la suma de los mismos
{
    int res;
    res=a+b;
    return res;
}

int resta(int a,int b) //recibe el operando A y el operando B y devuelve la diferencia (A-B)
{
    float res;
    res=a-b;
    return res;
}

float division(float a, float b) //recibe el operando A y el operando B y devuelve el resultado de la division de A sobre B
{
    float res;
    res=a/b;
    return res;
}

int producto(int a,int b) //recibe el operando A y el operando B y devuelve el resultado de la multiplicacion de A por B
{
    int res;
    res=a*b;
    return res;
}

long long int factorial(int a) //recibe el operando A y devuelve el factorial
{
    long long int res=1;
    int i;
    for (i=a;i>0;i--)
    {
        res=res*i;
    }
    return res;
}
