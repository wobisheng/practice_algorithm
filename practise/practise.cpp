#include <iostream>
using namespace std;
/*
* 二叉树遍历
* inventor
* 2022.6.6
*			1
*		2		3
*	  4	  5		  6
*		 7 8
*
#define MAX 11
char Tree[MAX+1] = { '1','2','3','4','5','0','6','0','0','7','8'};
bool status[MAX+1] = { 0 };
void dfs(int n)
{
	if (n>=MAX||Tree[n]=='0') return;
	//前序遍历
	//printf("%c", Tree[n]);
	dfs(2*n + 1);
	//中序遍历
	//printf("%c", Tree[n]);
	dfs(2*n + 2);
	//后续遍历
	//printf("%c", Tree[n]);
}
//bool status[8] = { 0 };
//void dfs(int n)
//{
//	if (n == MAX-1) return;
//	if (2 * n + 1 <= MAX && Tree[2 * n + 1] != '0'&&!status[2 * n + 1])
//	{
//		status[2 * n + 1] = 1;
//		printf("%c", Tree[2 * n + 1]);
//		dfs(2 * n + 1);
//	}
//	if (n + 1 <= MAX && Tree[n + 1] != '0' && !status[n+1])
//	{
//		status[n + 1] = 1;
//		printf("%c", Tree[n + 1]);
//		dfs(n + 1);
//	}
//	if (2 * n + 2 <= MAX && Tree[2 * n + 2] != '0' && !status[2 * n + 2])
//	{
//		status[2 * n + 2] = 1;
//		printf("%c", Tree[2 * n + 2]);
//		dfs(2 * n + 2);
//	}
//}
int main()
{
	dfs(0);
}
*/




/*
*	DP
*	BY inventor
*	2022.6.4
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
*/