#include <iostream>
#include <ctime> 
#include <cmath>
#include <Func.hpp>

using namespace std;
//bool isprime(int x) // ������� ��� ������ ������� �����
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
	srand(time(NULL)); // ��� ��������� �����. 
	int n = 0;
	int k = 0;
	int countmax = 0;
	int countip = 0;
	int arrip[100] = { 0 };
	cin >> n; //�������
	cin >> k; //������
	int** a = new int* [n]; // ������� ������ ����������
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[n];
		a[i] = new int[k];// ������� ��������
	}
	int maxi = 0;
	// ������ ��� � ������� ��������. 
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			a[i][j] = 1 + rand() % 50; // ������� - ��������� ����� �� 0 �� 50
			cout << a[i][j] << " "; // ������� �������� �� �������
			if (a[i][j] > maxi) // ���� ������������
			{
				maxi = a[i][j];
			}
			if (mt::isprime(a[i][j]) == 1) // ������� ���-�� �������
			{
				countip++;
			}

		}
		arrip[i] = countip;
		countip = 0;
		cout << endl; //������ ���������, ��������� ������ � �� �������
	}
	for (int i = 0; i < n; i++) // ������� ������� ��� ����������� ������������ �������
	{
		for (int j = 0; j < k; j++)
		{
			if (a[i][j] == maxi)
			{
				countmax++;
			}
		}
	}
	cout << "���-�� ������� ����� � ������ ������ (���������������): ";
	for (int i = 0; i < n; i++)
	{
		cout << arrip[i] << ", ";
	}
	cout << endl << "������������ �����: " << maxi << " ���-��: " << countmax;
	////////////////////// ����� ���������� ������� ////////////////////////////

	if (countmax > 1)
	{
		int g = 0;
		while (g != 1) // ��� ��� ���� ����� ���������� ������ ��������� (�.�. � ������ �� 2 �������� ����)
		{
			g = 1;
			for (int i = 1; i < n; i++)
			{
				if (arrip[i] > arrip[i - 1])
				{
					g++;
					swap(arrip[i], arrip[i - 1]); // ����� ������ ��������������� ������ 
					swap(a[i], a[i - 1]);
				}
			}
		}
		cout << endl << "������������ �������: " << endl;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < k; j++)
			{
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
	}
	////////////////////// ����� ��� ������������� /////////////////////////////
	// �������� �������
	for (int i = 0; i < n; i++)
	{
		delete[]a[i];
	}
	delete [] a;
	return 0;
}