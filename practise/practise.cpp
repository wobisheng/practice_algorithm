#include <iostream>
using namespace std;
/*
*	n皇后
*	n=13已得到AC
*	inventor
*	6.16
int MAX = 0;
int coor[20][2] = { 0 };
int total = 0;

bool judge(int x,int y)
{
	for (int i = 0; i < x; i++)
	{
		if (coor[i][1] == y|| coor[i][0] - coor[i][1] == x - y|| coor[i][0] + coor[i][1] == x + y)
		{
			return false;
		}
	}
	return true;
}

void queue(int x,int y)
{
	if (judge(x, y))
	{
		coor[x][0] = x;
		coor[x][1] = y;
		if (x == MAX-1)
		{
			if (total < 3)
			{
				for (int i = 0; i < MAX; i++)
				{
					printf("%d ", coor[i][1] + 1);
				}
				printf("\n");
			}
			total++;
			return;
		}
		queue(++x, y);
	}
	else
	{
		return; 
	}
	for (int i = 0; i < MAX; i++)
	{
			queue(x, i);
			coor[x][0] = 0;
			coor[x][1] = 0;
	}
}

//void queue(int n)
//{
//	if (n == MAX)
//	{
//		if (total < 3)
//		{
//				for (int i = 0; i < MAX; i++)
//				{
//					printf("%d ", coor[i][1] + 1);
//				}
//				printf("\n");
//		}
//		total++;
//		return;
//	}
//	for (int i = 0; i < MAX; i++)
//	{
//		if (judge(n, i))
//		{
//			coor[n][0] = n;
//			coor[n][1] = i;
//			queue(++n);
//			n--;
//			coor[n][0] = 0;
//			coor[n][1] = 0;
//		}
//	}
//}

int main()
{
	cin >> MAX;
	if (MAX == 6)
	{
		for (int i = 0; i < 6; i++)
			queue(0, i);
		printf("%d", total);
		return 0;
	}
	if (MAX % 2)
	{
		for (int i = 0; i < (MAX-1) / 2; i++)
			queue(0, i);
		total = total * 2;
		queue(0, (MAX-1)/2);
	}
	else
	{
		for (int i = 0; i < MAX / 2; i++)
			queue(0, i);
		total = total * 2;
	}
	printf("%d", total);
	return 0;
}
*/
















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