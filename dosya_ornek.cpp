#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char text[100];
	char text1[2];
	FILE *a;
	FILE *b;
	a=fopen("buyuk.txt","w");
	printf("texti gir = ");
	gets(text);
	fprintf(a,"%s",text);
	fclose(a);
	b=fopen("kucuk.txt","w");
	text1[0]=text[0];
//	printf("%c",text1[0]);
	strupr(text1);
	strlwr(text);
	fprintf(b,"%s",text1);
	
	for(int i = 0 ; i <strlen(text); i++){
		
		fprintf(b,"%c",text[i+1]);
	}
	//fprintf(b,"%s",text);
	fclose(b);
	printf("islem basarili ! ");
	
	
	
	return 0;
}
