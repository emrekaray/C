#include <stdio.h>
#include <stdlib.h>


int pointerToplama(int *ptrA, int *ptrB){
	
	
	
	
	
	
}


int main(){
	int ilkSayi;
	int ikinciSayi;
	
	
	
	
	//POINTERS 
	int a = 10;
	int *p;
	p=&a;
	
	
	printf("%d\n",*p);
	printf("%d\n",p);
	printf("%d\n",a);
	printf("%d\n",&a);
	
	int dizi[5]={1,2,3,4,5}; 
	int *ptr;
	ptr=dizi;
	
	printf("%d ",dizi[3]); //diziye normal eriþmek
	printf("%d\n", *(ptr+3)); //diziye pointer ile eriþmek
	
	int sayi=100;
	int *ref;
	ref=&sayi;
	int sayi2=*ref;
	*ref=150;
	printf("%d \n",sayi);
	printf("%d \n",sayi2);
	
	int tamsayi=15;
	char karakter = 'C';
	double ondalik =12.5;
	int *intptr;
	char *charptr;
	double *doubleptr;
	intptr=&tamsayi;
	charptr=&karakter;
	doubleptr=&ondalik;
	//bellekte tutulduðu yerler.
	printf("int isaretci degeri = %p\n",intptr);
	printf("char isaretci degeri = %p\n",charptr);
	printf("double isaretci degeri = %p\n",doubleptr);
	
	intptr++;
	charptr++;
	doubleptr++;
	//arttýrma iþlemi sonrasi yerler
	printf("\nyeni int isaretci degeri = %p\n",intptr);
	printf("yeni char isaretci degeri = %p\n",charptr);
	printf("yeni double isaretci degeri = %p\n",doubleptr);
	
	
	
	
	
	
	
	return 0;
}
