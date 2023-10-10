float sum(float a, float b) // сумма
{
	float return0; return0 = a + b;
	return return0;
}

float min(float a, float b) // разность
{
	float return0; return0 = a - b;
	return return0;
}

float mult(float a, float b) // произведение
{
	float return0; return0 = a * b;
	return return0;
}

float divv(float a, float b) // частное
{
	float return0; return0 = a / b;
	return return0;
}

long int poww(long int a, unsigned int n) //степень
{
	long int res = 1;
	for(int i = 0; i<n; i++)
	{
		res *= a;
	}
	return res;
}

float abss(float a) //Возвращает абсолютную величину целого числа 
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

int sqrtt(int x) // кв. корень
{
	//эта функция долэна находить кв. корень
	//надо доделать
}

float truncc(float y) // отбрасывание дробной части 
{
	int x = y;
	return x;
}


float ffmax(float a, float b) // наибольшее значение среди x и y 
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


float dim(float x, float y) // вычисление положительной разницы между x и y
{
	float res; res = x - y;
	if(res < 0)
		{return 0;}
	else
		{return res;}
}

float _exp2(float x) // значение числа 2, возведённого в степень x 
{
	float res = 1;
	for(int i = 0; i<x; i++)
	{
		res*=2;
	}
	return res;
}

float cpsg(float x, float y) // возвращает величину, абсолютное значение которой равно x, но знак которой соответствует знаку y 
{
	float res = 0;
	if(y<0)
	{
		res = x*-1;
	}
	else
	{
		res = x;
	}
	return res;
}

double _exp(float x) // вычисление экспоненты(число e в степени x)
{
	double e = 2.71828182845904;
	double res = 1;
	for(int i = 0; i<x; i++)
	{
		res *= e;
	}
	return res;
}