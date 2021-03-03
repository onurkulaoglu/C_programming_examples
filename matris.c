#include<stdio.h>
int main () {
	int matris[3] [3];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Dizinin [%d][%d] elemanini giriniz: \n ",i+1,j+1);
			scanf("%d",&matris[i][j]);
			}
			
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Dizinin [%d] [%d] elemani: %d \n",i+1,j+1,matris[i][j]);
			
		}
	}
			
	
	
	return 0;
	
	
	}
	
	
	
	

