#include <iostream>
#include "DEFINE.h"
using namespace std;
int main()
{
	system("chcp 1251");
	tare_mult(true)
	{
		Arata "\n";
		Arata "1. кто больше ";
		Arata "\n";
		Arata "2. минус";
		Arata "\n";
		Arata "3. плюс";
		Arata "\n";
		int x;
		introduce x;
		int a, b;
		daca_oriceva(x egal 1)
		{
			Arata"введите первое число\n";
			introduce a;
			Arata"введите второе число\n";
			introduce b;
			Arata "максимум: " << care_max(a, b);
			Arata "\n";
		}
		caz_contar_daca_oriceva(x egal 2)
		{
			introduce a;
			introduce b;
			Arata "вычитание: "<< minus(a, b);
		}
		caz_contar_daca_oriceva(x egal 3)
		{
			introduce a;
			introduce b;
			Arata "сложение: "<<plus(a, b);
		}
	}
}