#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[]){
	int carpim;
	if (argc != 3){
		printf("Parametre degeri 2 olmalidir! \n");
		exit(1);
		
	}else {
		printf("1.parametre: %s \n",argv[0]);
		printf("2.parametre: %s \n",argv[1]);
		printf("3.parametre: %s \n",argv[2]);
		
	}
	carpim= atoi(argv[1]) * atoi(argv[2]);
	printf("%s * %s = %d",argv[1],argv[2],carpim);
	return 0;
	
	
}
