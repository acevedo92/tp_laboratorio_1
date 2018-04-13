int suma (int a,int b) //recibe el operando a y el operando b y los suma
{
    int res;
    res=a+b;
    return res;
}

int resta(int a,int b) //recibe el operando a y el operando b y los resta
{
    float res;
    res=a-b;
    return res;
}

float division(float a, float b) //recibe el operando a y el operando b y los divide
{
    float res;
    res=a/b;
    return res;
}

int producto(int a,int b) //recibe el operando a y el operando b y los multiplica
{
    int res;
    res=a*b;
    return res;
}

long long int factorial(int a) //recibe el operando a y devuelve el factorial
{
    long long int res=1;
    int i;
    for (i=a;i>0;i--)
    {
        res=res*i;
    }
    return res;
}
