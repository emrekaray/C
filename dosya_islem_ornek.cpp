#include <stdio.h>
#include <string.h>


int main() {
	int secim;
	char isim[20];
	char soyad[20];
	char departman[20];
	FILE *f;
	printf("personel ekle = 1 \n personel sil = 2 \n personel goruntule = 3 \n yapilacak islem = ");
	scanf("%d",&secim);
		f=fopen("bilgiler.txt","w");
		if(secim == 1){
			printf("ad = ");
			gets(isim);
			printf("\n soyad  = ");
			gets(soyad);
			printf("departman = ");
			gets(departman);
		fprintf("Ad = %s \n",isim);
		fprintf("Soyad = %s \n",soyad);
		fprintf("departman = %s \n",departman);
						
		fclose(f);
		}
}

