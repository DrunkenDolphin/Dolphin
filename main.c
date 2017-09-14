#include <stdio.h>
#include <stdlib.h>


void temp(double num, char type)
{
	if (type == 'C') {
		if (num <= -273.15)
			printf("Impossible");
		else
		{
			double kelv = num + 273.15;
			double far = (num * 9 / 5) + 32;
			printf("%.2f F\n", far);
			printf("%.2f K\n", kelv);
		}
	}
	else if (type == 'F')
		if (num <= -459.67)
			printf("Impossible");
		else
		{
			double kelv = (num - 32) * 5 / 9 + 273.15;
			double grad = (num - 32) * 5 / 9;
			printf("%.2f F\n", grad);
			printf("%.2f K\n", kelv);
		}
	else if (type == 'K') {
		if (num <= 0)
			printf("Impossible");
		else
		{
			double far = (num - 273.15) * 9 / 5 + 32;
			double grad = num - 273.15;
			printf("%.2f F\n", grad);
			printf("%.2f K\n", far);
		}
	}

}

int main(int argc, char *argv[])
{
	if (argc == 2) {
		double num = atof(argv[1]);
		temp(num, 'C');
		printf("\n");
		temp(num, 'F');
		printf("\n");
		temp(num, 'K');
	}
	else if (argc == 3) {
		double num = atof(argv[1]);
		temp(num, *argv[2]);
	}
	return 0;
}

