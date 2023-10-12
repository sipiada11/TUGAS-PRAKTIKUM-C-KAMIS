#include <stdio.h>

int main()
{
	int alas;
	int tinggi;
	float luas, keliling;
	
	alas = 6;
	tinggi = 3;
	luas = 0.5*6*3;
	
	printf("Luas segitiga adalah %f", luas);
	
	int sisi1;
	int sisi2;
	int sisi3;
	
	printf("5 :");
	scanf("%d",&sisi1);
	printf("10 :");
	scanf("%d",&sisi2);
	printf("10 :");
	scanf("%d",&sisi3);
	keliling = sisi1+sisi2+sisi3;
	
	printf("Keliling segitiga adalah %d, keliling");
	return 0;
}