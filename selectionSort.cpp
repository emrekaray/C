#include <stdio.h>
#include <stdlib.h>


//selection sort
int main() {
	int dizi[10] = {'2','3','9','7','1','5','6','4','8','10'};
	int min;
	int tmp;
	int n; 
	for(int i = 0 ; i< n-1 ; i++){
		min=i;
		
		for(int j=i ; j < n ; j++){
			if(dizi[j] < dizi[min]){
				
				min = j;
			}
			
		}
		tmp = dizi[i];
		dizi[i] = dizi[min];
		dizi[min] = tmp;
	}
	
	for(int k = 0 ; k<10 ; k++){
		
		printf("%d\n",dizi[k]);
	}
	
	
	
	return 0;
}
