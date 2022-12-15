#include <iostream>
#include <ctime> 
#include <cmath>
#include <Func.hpp>

using namespace std;
//bool isprime(int x) // Функция для поиска простых чисел
//{
//	for (int i = 2; i <= pow(x, 0.5); i++)
//	{
//		if (x % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL)); // Для случайных чисел. 
	int n = 0;
	int k = 0;
	int countmax = 0;
	int countip = 0;
	int arrip[100] = { 0 };
	cin >> n; //столбцы
	cin >> k; //строки
	int** a = new int* [n]; // Создаем массив указателей
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[n];
		a[i] = new int[k];// Создаем элементы
	}
	int maxi = 0;
	// Дальше как с обычным массивом. 
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			a[i][j] = 1 + rand() % 50; // элемент - случайное число от 0 до 50
			cout << a[i][j] << " "; // Вывести элементы на консоль
			if (a[i][j] > maxi) // Ищем максимальное
			{
				maxi = a[i][j];
			}
			if (mt::isprime(a[i][j]) == 1) // Считаем кол-во простых
			{
				countip++;
			}

		}
		arrip[i] = countip;
		countip = 0;
		cout << endl; //Строка кончилась, переводим строку и на консоли
	}
	for (int i = 0; i < n; i++) // Находим сколько раз встречается максимальный элемент
	{
		for (int j = 0; j < k; j++)
		{
			if (a[i][j] == maxi)
			{
				countmax++;
			}
		}
	}
	cout << "кол-во простых чисел в каждой строке (соответственной): ";
	for (int i = 0; i < n; i++)
	{
		cout << arrip[i] << ", ";
	}
	cout << endl << "максимальное число: " << maxi << " кол-во: " << countmax;
	////////////////////// здесь начинается мессиво ////////////////////////////

	if (countmax > 1)
	{
		int g = 0;
		while (g != 1) // это для того чтобы сортировка прошла полностью (т.к. я только по 2 элемента беру)
		{
			g = 1;
			for (int i = 1; i < n; i++)
			{
				if (arrip[i] > arrip[i - 1])
				{
					g++;
					swap(arrip[i], arrip[i - 1]); // здесь меняем соответствующие строки 
					swap(a[i], a[i - 1]);
				}
			}
		}
		cout << endl << "исправленная матрица: " << endl;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < k; j++)
			{
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
	}
	////////////////////// здесь оно заканчивается /////////////////////////////
	// Удаление массива
	for (int i = 0; i < n; i++)
	{
		delete[]a[i];
	}
	delete [] a;
	return 0;
}