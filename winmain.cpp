#include<stdio.h>

int main(void) {
	const int monsuu = 100;
	FILE* fp;
	char tf;

	fopen_s(&fp,"³KÌ×­.txt","a");
	printf("utv¨Z\t\tufv¨~\n\n");
	fprintf(fp,"\n");
	printf("%dâ:->", 0 + 1);
	scanf_s("%c", &tf, 1);
	for (int i = 1; i < monsuu; i++) {
		if (tf == 't')tf = 'o';
		if (tf == 'f')tf = 'x';
		fprintf(fp,"%2dâF%c\n",i,tf);
		if (tf == 'e')break;
		if (tf == 's')i = monsuu-3;
		
		printf("\n%dâ:->", i + 1);
		scanf_s("%*c%c", &tf, 1);
	}

	if (tf == 't')tf = 'o';
	if (tf == 'f')tf = 'x';
	fprintf(fp, "%2dâF%c\n", monsuu, tf);

	fclose(fp);
		return 0;
}