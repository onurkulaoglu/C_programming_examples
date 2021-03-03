#include<stdio.h>
int main(){
	int a = 100;
	int *p;
	printf("p isaretcisinin bellek adresi: %p \n",p);
	printf("a nin bellekteki adresi : %p \n",&a);
	printf("p nin bellekteki adresi %p \n",&p);
	p=&a;
	int b ;
	b=*p;
	printf("a degerinin bastaki degeri:  %d \n",a);
	
	printf("a degerinin bastaki degeri : %d \n",*p);
	printf("a degerinin bellek adresi : %p \n",p);
	printf("a degerinin bellek adresi : %p \n",&a);
	printf("b degerinin degeri: %d \n",b);
	printf("b degerinin bellek adresi : %p \n ",&b);
	
	*p=500;
	printf("a degerinin yeni degeri: %d \n",a);
	printf("a degerinin bellek adresi %p",p);
	return 0;
	
	
	
	
}
