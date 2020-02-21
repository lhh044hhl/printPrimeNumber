
#include"stdlib.h"
#include <iostream>
using namespace std;
//判断是否为素数
//返回值
//0：合数
//1：素数
int checkPrimeNumber(int n) {
	for (int m = 2;m<(n/2);m++)
		if (n % m == 0)
		{
			return 0;
			break;
		}
	return 1;
}

int main()
{
	int totalNum = 100;
	//判断是否为素数
	for (int i = 0; i < totalNum;i++)
	{
		if (checkPrimeNumber(i) == 1)
		{
			cout << "the number is:" << i << endl;
		}
	}

	return 0;
}