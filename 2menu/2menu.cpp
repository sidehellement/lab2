#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b, c, d = 0;
	string str = "1. Ввод числа а\n2. Ввод числа b\n3. Сложение a и b\n4. Умножение a и b\n5. Выход\nВведите номер действия\n";
	while (d != 5)
	{
		c = 0;
		switch (c)
		{
		case 0:
		{
			cout << str;
			cin >> c;
			d = c;
			if (c > 5 || c < 0)
			{
				cout << "Вы ввели неправильное число. Введите 1-5 \n";
				break;
			}
		}
		case 1:
		{
			cout << "Введи значение числа А";
				cin >> a;
				break;
		}
		case 2:
		{
			cout << "Введи значение числа Б";
			cin >> b;
			break;
		}
		case 3:
		{
			cout << "Сумма А и Б = " << a + b;
			break;
		}
		case 4:
		{
			cout << "Призведение А и Б = " << a * b;
			break;
		}
		case 5: 
		{
			cout << "Программа завершена";
			return 0;
		}
		}
	}
}
