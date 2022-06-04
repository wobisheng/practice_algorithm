#include <iostream>
using namespace std;
#define Total 6
int nums[Total] = { -4,4,2,-7,1,-5 };
int temp[Total+1][1000] = { 0 };
int _max = 0;

int Max(int a, int b)
{
	if (a >= b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int main()
{
	for (int n = 2; n <= Total; n++)
		for (int i = 0; i <= Total - n; i++)
		{
			if (n > 2)
			{
				temp[n][i] = temp[n - 1][i] + nums[i + n - 1];
				_max = Max(_max, temp[n][i]);
			}
			else
			{
				temp[n][i] = nums[i] + nums[i + 1];
				_max = Max(_max, temp[n][i]);
			}
		}
	printf("%d", _max);
	return 0;
}