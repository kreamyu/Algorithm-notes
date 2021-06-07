#include<cstdio>
int main()
{
	int r,c;
	char tar;
	scanf("%d %c",&c,&tar);
	r=(c >> 1)-2;
	for(int i=0;i<c;i++)
	{
		printf("%c",tar);
	}
    printf("\n");
	for(int i=0;i<r;i++)
	{
		printf("%c",tar);
		for(int i=0;i<c-2;i++) printf(" ");
		printf("%c\n",tar);
	}
	for(int i=0;i<c;i++)
	{
		printf("%c",tar);
	}
	return 0;
}