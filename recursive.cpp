#include <stdio.h>
#include <stdlib.h>
int toplam;
int carpma(int sayi1,int sayi2){
	
	for(int i = 1; i<=sayi2; i++){
		toplam = toplam+sayi1;
	}
	
	return toplam;
}
int main() {
	
	carpma(5,3);
	printf("%d",toplam);
	return 0;
}

