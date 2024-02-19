#include <stdio.h>

struct student var;
FILE *ptr;

void refresh()
{
	fclose(ptr);
	ptr = fopen("c:\\file.txt","a+");
}
void addStudentRecord()
{
	fflush(stdin);
	printf("Enter name:\n");
	gets(var.name);

	fflush(stdin);
	printf("Enter Semester Code:\n");
	gets(var.semCode);

	fflush(stdin);
	printf("Enter Enrollment Number:\n");
	scanf("%d",&var.enrollNo);
	
	var.assignSub=0;
	var.marks=-1;

	fwrite(&var,sizeof(struct student),1,ptr);

	printf("Data Entered Successfully\n");
	printf("Press any key..");
	refresh();
	getch();
}
void updateStudentRecord()
{
	int enrollNo;
	int counter=0;
	int records = getNoOfRecords();

	fflush(stdin);
	printf("Enter Enrollment Number:\n");
	scanf("%d",&enrollNo);

	while(counter!=records)
	{
		fread(&var,sizeof(struct student),1,ptr);
		if(var.enrollNo==enrollNo)
		{
			
		}
		counter++;
	}
}
void deleteStudentRecord()
{
	int enrollNo;
	int counter=0;
	int records = getNoOfRecords();

	fflush(stdin);
	printf("Enter Enrollment Number:\n");
	scanf("%d",&enrollNo);

	while(counter!=records)
	{
		fread(&var,sizeof(struct student),1,ptr);
		if(var.enrollNo==enrollNo)
		{
			var.name[0]='\0';
			var.semCode[0]='\0';
			var.enrollNo=-1;
			var.assignSub=0;
			var.marks=-1;
		}
		counter++;
	}
	fwrite(&var,sizeof(struct student),1,ptr);
	refresh();
}