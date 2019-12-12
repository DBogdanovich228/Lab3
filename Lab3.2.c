#include <stdio.h>
#include <stdlib.h>
void main() {
int n, z, m, t,  a, i, x, b=1;
	printf("Введите количество игроков n = ");
	scanf("%d",&n);
	printf("Сколько будет ходов m = ");
    scanf("%d",&m);
	printf("Номер игрока с которого начнется t = ");
	scanf("%d",&t);
	if(n>0 &&  m>0 && t>0 && m<=n && t<=n){
	for(i=n-1;i>0;i--){
		b|=(1<<i);	
	}
	for(i=5;i>0;i--){
		a=m+t-1;
		do{
			a++;
		    x=0;
			if(a>n) a=a-n;
			else x=0;
			if(b & (1<<a-1)) x=10;
			} while(x<1);
		printf("Выбыл игрок № %d\n",a);
		b &= ~(1 << a-1);	
		t=a;
	}
	for(z=n-5;z>0;z--){
		a=m+t-1;
		do{
			a++;
		    x=0;
			if(a>n) a=a-n;
			else x=0;
			if(b & (1<<a-1)) x=10;
			} while(x<1);
		b &= ~(1 << a-1);	
		t=a;
	}
	printf("Выиграл игрок № %d",a);
	}
    else printf("Ошибка");
}
