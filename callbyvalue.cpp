#include <stdio.h>
#include <stdlib.h>
//CALL BY VALUE = SADECE DEGERLER KOPYALANIR. X VE Y DEGERLERIMIZ DEGISMEZ.


/*void degerdegistir(int a ,int b){ 
	
	int gecici=a;
	
	a = b;
	
	b = gecici;
	
//	printf("a = %d b = %d\n",a,b);
}

int main() {
	
	int a=5, b=10;
	degerdegistir(a,b);
	
	printf("a = %d b = %d",a,b);
	
	
	
	
	
	return 0;
}
*/



//CALL BY REFERANCE = REFERANS CAGRIDA FONKSIYON ADRES ALDIGI ICIN ORJINAL DEGERLER ILE DEGISTIRILIR.
//BOYLECE GERCEK VE BICIMSEL YANI FONKSIYONLAR AYNI ADRES ALANINI PAYLASIR.
//BU NEDENLE FONKSIYONUN ICINDE DEGISTIRILEN DEGER DISINA DA YANSITILIR.


void degerdegistir(int &a ,int &b){
	
	int gecici=a;
	
	a = b;
	
	b = gecici;
}

int main(){
	
	int x = 5;
	int y = 10;
	
	degerdegistir(x,y);
	
	printf("x = %d || y = %d",x,y);
	
	
	return 0 ;
}
