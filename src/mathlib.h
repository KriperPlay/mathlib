float sum(float a, float b)
{
    return a + b;
}

float min(float a, float b)
{
    return a - b;
}

float mult(float a, float b)
{
    return a * b;
}

float divv(float a, float b)
{
    return a / b;
}

long int poww(long int a, unsigned int n)
{
    long int res = 1;
    for (int i = 0; i < n; i++)
    {
        res *= a;
    }
    return res;
}

float abss(float a)
{
    if (a < 0)
    {
        a = -a;
    }
    return a;
}

float truncc(float y)
{
    int x = y;
    return x;
}

float ffmax(float a, float b)
{
    return (a > b) ? a : b;
}

float ffmin(float a, float b)
{
    return (a < b) ? a : b;
}

float dim(float x, float y)
{
    float res = x - y;
    if (res < 0)
    {
        return 0;
    }
    else
    {
        return res;
    }
}

float _exp2(float x)
{
    float res = 1;
    for (int i = 0; i < x; i++)
    {
        res *= 2;
    }
    return res;
}

float cpsg(float x, float y)
{
    return (y < 0) ? -x : x;
}

double _exp(float x)
{
    double e = 2.71828182845904;
    double res = 1;
    for (int i = 0; i < x; i++)
    {
        res *= e;
    }
    return res;
}

int bisector(int a)
{
    return a / 2;
}

int bisector_(int a)
{
    return a * 2;
}
