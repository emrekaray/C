#include <stdio.h>
#include <stdlib.h>

int main() {
int a=5;
int b=6;
int *pa;
int *pb;
int gecici;

pa=&a;
pb=&b;

printf("ONCE : \n");
printf("A'nin degeri = %d \n",a);
printf("B'nin degeri = %d \n",b);
printf("A'nin adresi = %d \n",&pa);
printf("B'nin adresi = %d \n",&pb);

	gecici=*pa;
	*pa=*pb;
	*pb=gecici;
	
printf("SONRA : \n");
printf("A'nin degeri = %d \n",a);
printf("B'nin degeri = %d \n",b);
printf("A'nin adresi = %d \n",&pa);
printf("B'nin adresi = %d \n",&pb);
	

	
	
if(butonDurum==1){
	  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12,GPIO_PIN_SET);
	  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13,GPIO_PIN_SET);
	  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14,GPIO_PIN_SET);
	  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15,GPIO_PIN_SET);
counter++;




}
else if(butonDurum==0){

	 HAL_GPIO_WritePin(GPIOD, GPIO_PIN_12,GPIO_PIN_RESET);

		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_13,GPIO_PIN_RESET);

		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_14,GPIO_PIN_RESET);

		  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_15,GPIO_PIN_RESET);

}
	return 0;
}
