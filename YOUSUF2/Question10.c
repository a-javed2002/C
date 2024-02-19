#include <stdio.h>
int main(void){
	char name[10][100];
	int i,choice,j,pass[10],fail[10],count_p=0,count_f=0,sum_p=0,sum_f=0;
	while(1){
		printf("Enter your choice (Passed -> 1 , Failed -> 0 , Exit -> -1): ");
		scanf(" %d",&choice);
		if(choice == 1){
			printf("Enter Student name: ");
			scanf("%s",&name[count_p]);
			printf("Enter Marks: ");
			scanf("%d",&pass[count_p]);
			sum_p = sum_p + pass[count_p];
			count_p=count_p+1;
		}else if(choice == 0){
			printf("Enter Student name: ");
			scanf("%s",&name[count_f]);
			printf("Enter Marks: ");
			scanf("%d",&fail[count_f]);
			sum_f = sum_f + fail[count_f];
			count_f=count_f+1;
		}else if(choice == -1){
			printf("Students who have passed: \n");
			for(i=0;i<=count_p-1;i++){
				printf("student: %s has %d marks\n",name[i],pass[i]);
			}
			printf("The avg: %d\n",(sum_p/count_p));
			printf("Students who have failed: \n");
			for(i=0;i<=count_f-1;i++){
				printf("student: %s has %d marks\n",name[i],fail[i]);
			}
			printf("The avg: %d\n",(sum_f/count_f));
			return 0;
		}
	}
	
}
