#include <stdio.h>
#include <string.h>
int main(void) {
	int i,j,num,val=0,to=0;
	char array[4][8][999];
	strcpy(array[0][0],"ID");
	strcpy(array[0][1],"Product #1");
	strcpy(array[0][2],"Product #2");
	strcpy(array[0][3],"Product #3");
	strcpy(array[0][4],"Product #4");
	strcpy(array[0][5],"Product #5");
	strcpy(array[0][6],"Product #6");
	strcpy(array[0][7],"Total Sold");
	for(i=1;i<4;i++){
		sprintf(array[i][0],"%d",i);
		for(j=1;j<7;j++){
			printf("Enter product #%d sold by id#%d: ",j,i);
			scanf("%d",&num);
			sprintf(array[i][j],"%d",num);
			val = val +num;
			to = to + num;
		}
		sprintf(array[i][7],"%d",val);
		val = 0;
	}
	for(i=0;i<8;i++){
		printf("%s ",array[0][i]);
	}
	printf("\n");
	for(i=0;i<8;i++){
		printf("%s ",array[1][i]);
	}
	printf("\n");
	for(i=0;i<8;i++){
		printf("%s ",array[2][i]);
	}
	printf("\n");
	for(i=0;i<8;i++){
		printf("%s ",array[3][i]);
	}
	printf("Total product sold: %d",to);
}
