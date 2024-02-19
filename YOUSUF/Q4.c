#include <stdio.h>
int main()
{
	int np, cp, gp;
	printf("\t\tFAST NUCES PIZZA SHOP\n");
	printf("enter price for neap pizza: ");
	scanf("%d", &np);
	printf("enter price for chic pizza: ");
	scanf("%d", &cp);
	printf("enter price for greek pizza: ");
	scanf("%d", &gp);
	(np<cp && np<gp)?printf("neap pizza is the lowest = %d",np):((cp<np && cp<gp)?printf("chic pizza is the lowest =%d",cp):((gp<np && gp<cp)?printf("greek is the lowest = %d",gp):printf("okz\n")));
	return 0;
}
