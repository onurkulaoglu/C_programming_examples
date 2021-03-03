#include<stdio.h>
int main(){
	int dizi[4] = {12,10,9,3};
	int i,j,x,gecici;
	printf("Siralamadan once ");
	for(i=0;i<4;i++){
		printf("%3d ",dizi[i]);
		}
		for(i=0;i<3;i++){
			for(j=0;j<3-i;j++){
				if(dizi[j] > dizi[j+1]){
					gecici=dizi[j];
					dizi[j] = dizi[j+1];
					dizi[j+1] = gecici;
				}
			}
			printf("\n %d . iterasyon \n",i+1);
			for(x=0;x<4;x++)
			printf("%3d",dizi[x]);
			
			
		}
	printf("\n Siralamadan sonra \n ");
	for(i=0;i<4;i++){
		printf("%3d",dizi[i]);
	}
	
	
	return 0;
}
