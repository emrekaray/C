#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct arabalar{
	int km;
	int yil;
	char marka[20];
	
};


void degerAl(struct arabalar arac);

int main(void) {
struct arabalar arac;

degerAl(arac);

	return 0;
}

void degerAl(struct arabalar arac){
	
	printf("arabanin km sini giriniz = ");
	scanf("%d",&arac.km);
	
	printf("\narabanin yilini giriniz = ");
	scanf("%d",&arac.yil);
	printf("");
	gets(arac.marka);
	printf("\narabanin markasini giriniz = ");
	gets(arac.marka);
	
	printf("\nMARKA = %s\n",arac.marka);
	printf("KM = %d\n",arac.km);
	printf("YIL = %d\n",arac.yil);
	
	
	
}

