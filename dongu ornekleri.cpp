#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	
int main() {
	printf("***********for**********\n");
	for(int i=0; i<=5; i++){
		printf("%d \n",i);
	}
	
	
	
	printf("***********while**********\n");
	int j=0;
	while(j<=5){
		printf("%d \n",j);
		j++;
	}
	
	
	
	printf("***********do while**********\n");
	int k=0;
	do{
		printf("%d \n",k);
		k++;
	}while(k<=5);
	
	
	
	
	printf("0 ile 100 arasindaki cift sayilar \n");
	for(int a=0; a<=100; a++){
		if(a%2==0){
			printf("%d \n",a);
		}
	}
	
	
	printf("kullanicidan alinan 3 sayinin en buyugunu yazdirmak \n");
	
	int girilen;
	int eb=0;
	for(int b=1; b<=3; b++){
		scanf("%d",&girilen);
		if(girilen>eb){
			eb=girilen;
		}	
	}
	printf("en buyuk sayi = %d",eb);
	
	
	
	printf("girilen sayilarin ortalamasi \n");
	int toplam = 0;
	int girilensayi=0;
	int ortalama;
	int c;
	while(girilensayi!=-1){
		scanf("%d",girilensayi);
		c++;
		toplam = toplam + girilensayi;
	}
	printf("ortalama : %d",toplam/c);
	
	return 0;
}
