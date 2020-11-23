#include <stdio.h>

int main()
{
	int s,hour,rooz;
	scanf("%d",&hour);
	s=(hour/(365*24));
	rooz=(hour%(365*24)/24);
	printf("%d %d",s,rooz);
	return (0);
}