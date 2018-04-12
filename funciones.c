int suma (int a,int b)
{
    int res;
    res=a+b;
    return res;
}

int resta(int a,int b)
{
    float res;
    res=a-b;
    return res;
}

float division(float a, float b)
{
    float res;
    res=a/b;
    return res;
}

int producto(int a,int b)
{
    int res;
    res=a*b;
    return res;
}

long long int factorial(int a)
{
    long long int res=1;
    int i;
    for (i=a;i>0;i--)
    {
        res=res*i;
    }
    return res;
}
