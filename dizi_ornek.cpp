#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int dizi[10];

int degerAl(int deger, int indis){

		//indise deger atama
		for(int i = 0 ; i<=indis i++){
			if(indis==i){
				dizi[i]=deger;
				
			}
		}
}

int diziYaz(){
	for(int i = 0; i<=10; i++){
		printf("%d\n",dizi[i]);
	}
}
int elemanSil(int indis){
	for(int i = 0 ; i<=indis; i++){
			//diziden eleman silme işlemi
			if(i==indis){
				dizi[i]=0;
			}
}
}
int elemanGoster(int indis){
	for(int i = 0 ; i<=10; i++){
			if(i==indis){
				printf("indisini girdiginiz sayi = %d\n",dizi[i]);
			}
}
}

int main(){
	int secim;
	int indis;
	int deger;
	while(1){
	
	printf("#####MENU#####\n");
	printf("Yapmak istediginiz islemi secin..\n");
	printf("1-Eleman ekle\n");
	printf("2-Eleman sil\n");
	printf("3-Girilen elemanin indisini ver\n");
	printf("Secim = ");
	scanf("%d",&secim);
	
	
	
	if(secim==1){
		
			printf("Lutfen sirasi ile deger ve indis girin = ");
			scanf("%d %d",&deger,&indis);
		degerAl(deger,indis);
		diziYaz();
	}
	
	if(secim==2){
			printf("silmek istedigin indisi gir = ");
			scanf("%d",&indis);
		elemanSil(indis);
		diziYaz();	
	}
	
	if(secim==3){
		printf("indisini gormek istediginiz sayiyi gir = ");
		scanf("%d",&indis);
		elemanGoster(indis);
		}
	}
	
	return 0;
}

	

