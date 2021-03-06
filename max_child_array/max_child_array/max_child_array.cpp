// max_child_array.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "max_child_array.h"
#define MAX 10
using namespace std;

int sum_max_array(int x[], int n) {
	int max_number = x[0];
	int temp = 0;
	for (int i = 0; i<n; i++) {
		if (temp<0)
			temp = x[i];
		else
			temp += x[i];
		if (temp >= max_number)
			max_number = temp;
	}
	return max_number;
}

int main()
{
	int array_int[MAX] = { 0 };
	int len;
	int sum;
	cin >> len;
	for (int i = 0; i<len; i++)
		cin >> array_int[i];
	sum = sum_max_array(array_int, len);
	cout << sum << endl;
	system("pause");
    return 0;
}

