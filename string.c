#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int *a,*b,c;
	int ret;
	int ret1;
    char *cp="EmreKaray";
    char *cp2="Emre";
  
char cdizi1[] = "Bilgisayar";
const char cdizi2[] = "Programlama";

char cdizi3[] = "Bilgisayar";
const char cdizi4[] = "Programlama";

char cdizi5[] = "Bilgisayar";
const char cdizi6[] = "Programlama";

char cdizi7[] = "Bilgisayar";
const char cdizi8[] = "Programlama";

char dizi[]="selam naber";
char dizi1[]="SELAM";
char dizi2[]="selam";

char d[30]="Emre Karay AKRATEK";
char e[20]="AKRATEK";

/*	printf("%d\n\r",&a);
	printf("%d\n\r",&b);
	printf("%d\n\r",sizeof(&a));
	printf("%d\n\r",sizeof(&b));
	printf("%d\n\r",sizeof(c));
	
*/	
	printf("****************\n");
	ret=strlen(cp); //bir karakter dizisinin karakter sayısını ekrana yazmak için kullanılır.
	printf("%d karakter dizisi uzunlugu\n ",ret);
	
	printf("****************\n");
	ret1=strncmp(cp,cp2,4); //iki karakter dizisi arasında karakterlerin eşit olup olmadığını kontrol eder. parametre olarak 1.dizi,2.dizi ve kaç harfin kontrol edileceği gönderilir.
	if(ret1<0) printf("cp1 karakter dizisi cp2 karakter dizisinden küçüktür!");
    else if(ret1>0) printf("cp2 karakter dizisi cp1 karakter dizisinden küçüktür!");
    else printf("cp1 karakter dizisi cp2 karakter dizisine esittir!\n");
    
    printf("****************\n");
    
    strcpy(cdizi1,cdizi2); //ilk dizinin değerini ikinci dizinin değerine kopyalar. 
    printf("dizinin bellek icerigi = %s\n",cdizi1);
    
    printf("****************\n");
    
    strncpy(cdizi3,cdizi4, 5); //ilk dizinin belirli bir karaktere kadar olan değerlerini ikinci diziye kopyalar.
    printf("dizinin bellek icerigi = %s\n",cdizi3);
    
    printf("****************\n");
    strcat(cdizi5,cdizi6); //iki karakter dizisini birleştirir.
    printf("dizinin bellek icerigi = %s\n",cdizi5);
    
     printf("****************\n");
     strncat(cdizi7,cdizi8,4); //ilk karakter dizisi ile ikinci karakter dizisinin belirli bir karaktere kadar olan değerini birleştirir.
     printf("dizinin bellek icerigi = %s\n",cdizi7);
     
     printf("****************\n");
     strrev(dizi); //karakter dizisini ters çevirir.
     printf("dizinin bellek icerigi = %s\n",dizi);
     
     printf("****************\n");
     strlwr(dizi1); //dizinin tüm karakterlerini küçük yapar.
     printf("dizinin bellek icerigi = %s\n",dizi1);
     
     printf("****************\n");
     strupr(dizi2); //dizinin tüm karakterlerini büyük yapar.
     printf("dizinin bellek icerigi = %s\n",dizi2);
     
     printf("****************\n");
     
     if(strstr(d,e)){ //strstr fonksiyonu iki karakter dizisini birbiri ile karşılaştırır.
     	
     	printf("aradiginiz kelime cumlede bulunmakta!");
	 }
	 else{
	 	printf("aradiginiz kelime cumlede bulunmamakta!");
	 }
     
return 0 ;
}
