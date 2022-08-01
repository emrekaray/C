#include <stdio.h>
#include <string.h>
int sonuc;
int degisken(int a , int b ){
	
	if(b == 0){
		
	return 1;	
	}
	
	else{
		
		if(a == 1 && b == 0){
	sonuc = 1;
	}
	else if(a == 0 && b == 1){
		printf("1");
	}
		sonuc = a * degisken(a,b-1);
		return sonuc;
	}
	
	
 
		

	
}

int main(){
	
degisken(1,0);


printf("%d",sonuc);
	return 0;
}
