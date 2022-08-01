#include <stdio.h>
#include <stdlib.h>
int teksayi(int n){

if(n==0){
return 0;


}
else{	


	teksayi(n-1);
	
	if(n%2 == 1 ){
	
	printf("%d ",n);
}


}
}


int main(){
	int n;
	printf("bir sayi giriniz = ");
	scanf("%d",&n);
	
	teksayi(n);
	
	
	
}
