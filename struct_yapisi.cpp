#include <stdio.h>
#include <stdlib.h>


typedef enum {
	bay,
	bayan 
} cinsiyet;

typedef enum {
	pazartesi,
	sali,
	carsamba,
	persembe,
	cuma,
	cumartesi,
	pazar
}gunler;

typedef struct {
	int yas;
	char * isim;
	cinsiyet c;
	gunler tatilgunu;
} insan;
int emekliMi(insan *birey){
	if(birey-> c ==bay && birey->yas >55 )
		return 1;
	if(birey-> c ==bayan && birey->yas >50 )
		return 1;
return 0 ;	
	
}
int main() {
	
	insan emre;
	emre.yas=18;
	emre.isim="Emre";
	emre.c = bay;
	emre.tatilgunu=sali;
	printf("%s yas = %d cinsiyet = %u tatil gunu = %u emeklilik durumu = %d \n",emre.isim,emre.yas,emre.c,emre.tatilgunu,emekliMi(&emre));
	
	
	//pointer ile erisim

	insan *emrekaray;
	insan *yasemin;
	
	yasemin=(insan*) malloc(sizeof(insan));
	yasemin -> yas=60;
	yasemin -> c=bayan;
	
	emrekaray= (insan*) malloc(sizeof(insan));
	emrekaray -> yas=20;
	emrekaray -> c=bay;
	printf("emrenin yasi = %d emeklilik durumu = %d \n",emrekaray->yas,emekliMi(emrekaray));
	printf("yaseminin yasi = %d emeklilik durumu = %d \n",yasemin ->yas, emekliMi(yasemin));

	return 0;
	
}
