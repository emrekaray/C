#include <stdio.h>
#include <stdlib.h>

int main(){
	int puan[10];
	printf("\n \n \n******SORU***** \n");
	
	for(int a=0; a<10; a++){
		printf("%d. ogrencinin notu = ",a+1);
		scanf("%d",&puan[a]);
	}
	for(int b=0; b<10; b++){
		printf("%d. ogrenci = %d \n",b+1,puan[b]);
	}
	int ortalama;
	for(int c=0; c<10; c++){
		ortalama=ortalama+puan[c];		
	}
	printf("ortalama = %d \n",ortalama/10);
	int enbuyuk=0;
	int enkucuk;
	for(int d=0; d<10; d++){
		if(puan[d]>enbuyuk){
			enbuyuk=puan[d];
		}
		if(puan[d]<enkucuk){
			enkucuk=puan[d];
		}
	}
	printf("en buyuk not = %d \n",enbuyuk);
	printf("en kucuk not = %d",enkucuk);
	return 0;
}
