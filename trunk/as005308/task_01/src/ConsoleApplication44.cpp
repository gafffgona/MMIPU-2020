// ConsoleApplication44.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	float a = 1, c = 2, d = 3, b = 0.003;
	float y = 0;
	float y2 = 0; 
	float u = 0;
	int n = 10;

	cout << "Input value u:";
	cin >> u;

	cout << "Linear equation:" << endl;  
	for (int i = 0; i <= n; i++)
	{
		y = a * y + b * u;
		cout << i << " - y(t)=" << y << endl;
	}

	cout << endl;

	cout << "Nonlinear equation:" << endl;

	for (int i = 0; i <= n; i++)
	{
		y = a * y - b * pow(y,2) + c * u + d * sin(u);
		cout << i << " y(t)=" << y << endl;
	}
	return 0;
}
