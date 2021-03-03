#include<stdio.h>
void matrisiYazdir(int dizi[0][3],int , int );
int main(int argc, char * argv){
	int matris[3] [3] = {
	{1,1,2},
	{2,1,4},
	{3,5,2}
	};
	matrisiYazdir(matris,3,3);
	return 0;
}
void matrisiYazdir(int dizi[0][3],int satirSayisi, int sutunSayisi ){
	int i,j;
	for(i=0;i<satirSayisi;i++){
		for(j=0;j<sutunSayisi;j++){
			printf("Dizinin [%d][%d].elemani: %d \n",i,j,dizi[i][j]);
			
		}
	}
	
}
