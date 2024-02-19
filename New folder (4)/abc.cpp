#include <stdio.h>
int main()
{
	int data_type;
	printf("enter data type 1 for numarical 2 for text 3 for symbols=");
	scanf("%d", &data_type);
	switch (data_type)
	{
		int num, temp, sum, a, b, c;
	case 1:
		printf("enter num=");
		scanf("%d", &num);
		temp = num;
		a = temp % 10;
		temp = temp / 10;
		b = temp % 10;
		temp = temp / 10;
		c = temp % 10;
		temp = temp / 10;
		sum = ((a * a * a) + (b * b * b) + (c * c * c));
		printf("sum=%d", sum);
		if (sum = num)
		{
			printf("num is armstrong");
		}
		else
		{
			printf("num is not");
		}
		char sy;
	case 3:
		printf("enter symbol");
		scanf("%c", &sy);
		int i, j, Side;
		for (i = 0; i < Side; i++)
		{
			for (j = 0; j < Side; j++)
			{
				printf("%c", sy);
			}
			printf("\n");
		}
		return 0;
	}
}
