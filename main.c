#include <stdio.h>

int main()
{
	int a;
	float m=0,b;
	scanf("%d",&a);
	//a:tedad emtehanat v b:nomre anha m:mopadel fard ast 
	for (int  i = 0; i < a; i++)
	{
		scanf("%f",&b);
		m=m+b;
	}
	m=m/a;
	printf("%f",m);
	

	return (0);
}