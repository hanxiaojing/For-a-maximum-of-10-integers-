#include<stdio.h>
#include<stdlib.h>

int MaxDigit(int arr[], int n)
{
	int bigger = 0;
	int i = 0;
	int tmp = arr[0];

	while (i < 10)
	{
		if (tmp >= arr[i + 1])
		{
			bigger = tmp;
		}
		else
		{
			bigger = arr[i + 1];
		}

		tmp = bigger;
		i++;
	}
	return tmp;
}

int main()
{
	int arr[10] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	int ret = MaxDigit(arr, 10);
	printf("ret = %d", ret);
	system("pause");
	return 0;
}
