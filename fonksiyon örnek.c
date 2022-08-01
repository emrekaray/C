#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int ortalamaAl(int sayi1,int sayi2){
	int ortalama;
	ortalama = ( sayi1 + sayi2 ) / 2 ;
	return ortalama;
	
}
int main() {
	int sayi1;
	int sayi2;
	printf("ilk sayiyi gir = ");
	scanf("%d",sayi1);
	printf("ikinci sayiyi gir = ");
	scanf("%d",&sayi2);
	ortalamaAl(sayi1,sayi2);
	
	return 0;
}
