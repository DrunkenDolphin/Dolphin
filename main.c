#include <stdio.h>
#include <stdlib.h>


void temp(double num, char type)
{
	if (type == 'C'||type=='c') {
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
	else if (type == 'F'||type=='f')
		if (num <= -459.67)
			printf("Impossible");
		else
		{
			double kelv = (num - 32) * 5 / 9 + 273.15;
			double grad = (num - 32) * 5 / 9;
			printf("%.2f C\n", grad);
			printf("%.2f K\n", kelv);
		}
	else if (type == 'K'||type=='k') {
		if (num <= 0)
			printf("Impossible");
		else
		{
			double far = (num - 273.15) * 9 / 5 + 32;
			double grad = num - 273.15;
			printf("%.2f C\n", grad);
			printf("%.2f F\n", far);
		}
	}
	else
    printf("Type must be K,F or C");

}

int main(int argc, char* argv[])
{
	if (argc == 2) {
		double num = atof(argv[1]);
		printf("C:\n");
		temp(num, 'C');
		printf("\n");
		printf("F:\n");
		temp(num, 'F');
		printf("\n");
		printf("K:\n");
		temp(num, 'K');
	}
	else if (argc == 3) {
		double num = atof(argv[1]);
		temp(num, *argv[2]);
	}
	 else if(argc!=2&&argc!=3)
        printf("Wrong values");
	return 0;
}

