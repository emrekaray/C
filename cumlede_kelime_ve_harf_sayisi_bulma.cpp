#include <stdio.h>
#include <string.h>
int kelimeSayisiBul(char *cumle) {
	int i=0;
	int kelimeSayisi=0;
	int uzunluk;
	char cumle2[200];
	while (cumle[i]!=0) {
		if(cumle[i]==' ')
		kelimeSayisi++;
		i++;
		
		
	}
	return kelimeSayisi+1;
}
int main(int kelimesayisi) {
	int uzunluk;
	char cumle[100];
	int kelimeSayisi=0;
	int counter;
	printf("bir cumle giriniz:");
	gets(cumle);
 	kelimeSayisi=kelimeSayisiBul(cumle);
	uzunluk = strlen(cumle);
	int yeniuzunluk;
	char kelime[20];
	int sayac;
	counter=0;
	
	
	for(int k = 0;k <=uzunluk; k++){
		
 		if(cumle[k]==' '){
		 
 			yeniuzunluk=uzunluk-kelimeSayisi+1;
 		printf(" = %d karakterdir",counter);
		 	printf("\n");
		 counter=0;
		 	
		 } 
		 else{
		 	
		 	printf("%c",cumle[k]);
			 counter++;
		 }
		 
		 
		 }
		 counter=0;
printf("\ncumlede = %d harf var.",yeniuzunluk);
printf("\ngirdiginiz cumle %d kelimeden olusuyor.\n", kelimeSayisi-1);
	return 0;
	
}
	

