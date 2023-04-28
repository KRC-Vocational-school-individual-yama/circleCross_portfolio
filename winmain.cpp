#include<stdio.h>

int main(void) {
	const int monsuu = 100;
	FILE* fp;
	char tf;

	fopen_s(&fp,"ã≥èKèäÇÃï◊ã≠.txt","a");
	printf("ÅutÅvÅ®ÅZ\t\tÅufÅvÅ®Å~\n\n");
	fprintf(fp,"\n");
	printf("%dñ‚:->", 0 + 1);
	scanf_s("%c", &tf, 1);
	for (int i = 1; i < monsuu; i++) {
		if (tf == 't')tf = 'o';
		if (tf == 'f')tf = 'x';
		fprintf(fp,"%2dñ‚ÅF%c\n",i,tf);
		if (tf == 'e')break;
		if (tf == 's')i = monsuu-3;
		
		printf("\n%dñ‚:->", i + 1);
		scanf_s("%*c%c", &tf, 1);
	}

	if (tf == 't')tf = 'o';
	if (tf == 'f')tf = 'x';
	fprintf(fp, "%2dñ‚ÅF%c\n", monsuu, tf);

	fclose(fp);
		return 0;
}