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
	for(int i = 0; i<n; i++)
	{
		res *= a;
	}
	return res;
}

float abss(float a) 
{
	if(a>0)
	{
		return a;
	}
	if(a<0)
	{
		a = a * -1;
		return a;
	}
}

float truncc(float y)
{
	int x = y;
	return x;
}


float ffmax(float a, float b) 
{
	if(a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

float ffmin(float a, float b) // наименьшее значение среди x и y 
{
	if(a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}


float dim(float x, float y) 
{
	float res; res = x - y;
	if(res < 0)
		{return 0;}
	else
		{return res;}
}

float _exp2(float x)
{
	float res = 1;
	for(int i = 0; i<x; i++)
	{
		res*=2;
	}
	return res;
}

float cpsg(float x, float y) 
{
	if(y<0)
	{
		return x * -1;
	}
	else
	{
		return x;
	}
}

double _exp(float x) 
{
	double e = 2.71828182845904;
	double res = 1;
	for(int i = 0; i<x; i++)
	{
		res *= e;
	}
	return res;
}

int bisector(int a) 
{
	return a / 2:
}

int bisector_(int a) // нахождение угла от биссектрисы
{
	return a * 2;
}
