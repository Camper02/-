#include <Func.hpp>
#include <cmath>
namespace mt
{bool isprime(int x) // ������� ��� ������ ������� �����
{
	for (int i = 2; i <= pow(x, 0.5); i++)
	{
		if (x % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
}