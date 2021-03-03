#include<stdio.h>
int main(int argc, const char* argv[]){
	int gun = -1;
	printf("Lutfen [1,7] arasýnda bir sayi giriniz: \n");
	scanf("%d", &gun);
	switch (gun) {
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("Haftaici \n");
			break;
		case 6:
		case 7:
			printf("Haftasonu \n");
			break;
			default:
				printf("Girdiginiz deger [1,7] degil");
				
	}
	
	return 0;
	
	
}
