#include <stdio.h>
#include <string.h>
int fonksiyon(int satir,int sutun){
	
printf("satir degerini giriniz = ");
scanf("%d",&satir);
printf("sutun degerini giriniz = ");
scanf("%d",&sutun);

for(int i =0 ; i<satir; i++){
			printf("\n*");
		for(int j = 1; j<sutun; j++){
			printf("*");
		}
}
}

int main(int satir,int sutun) {

fonksiyon(satir,sutun);
}
  



