#include <stdio.h>
#include <stdlib.h>


int faktoriyel(int sayi){
int sonuc = 1;
	for(int i =1; i<=sayi; i++){
		sonuc*=i;
	}
	return sonuc;
	
}

int main(){
int sayi;
printf("bir sayi giriniz = ");
scanf("%d",&sayi);
printf("faktoriyel = %d",faktoriyel(sayi));

	
	return 0;
}
