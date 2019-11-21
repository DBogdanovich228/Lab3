#include <stdio.h>
#include <stdlib.h>
#include<math.h>
 int f(int res)
{   
	for (int i=0; i<=10; i++)
	for (int j=0; j<=10-i; j++)
	if (i+j*3+(10-i-j)*5==res)
	return 1;
	return 0;
}
int main()
{

int m,r1=1,r3=3,r5=5;
for (m=11; m<50; m++)
{   
if (f(m)) printf("%d = da\n", m);
else printf ("%d = net\n", m);
}
return 0;
}
