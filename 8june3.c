#include<stdio.h>
struct marks{
	int roll_no;
	char name[100];
	int chem_marks;
	int phy_marks;
	int maths_marks;
};
main()
{
	int i,sum;
	float percentage;
	struct marks m[5];
	for(i=0;i<5;i++)
	{
		printf("enter roll no.=");
		scanf("%d",&m[i].roll_no);
		printf("enter name=");
		scanf("%s",&m[i].name);
		printf("enter physics marks=");
		scanf("%d",&m[i].phy_marks);
		printf("enter chemistry marks=");
		scanf("%d",&m[i].chem_marks);
		printf("enter maths marks=");
		scanf("%d",&m[i].maths_marks);
	}
	printf("\n===============================\n");
	for(i=0;i<5;i++)
	{
        printf("student roll no.=%d\n",m[i].roll_no);
        printf("student name=%s\n",m[i].name);
		printf("student physics marks=%d\n",m[i].phy_marks);
		printf("student chemistry marks=%d\n",m[i].chem_marks);
		printf("student maths marks=%d\n",m[i].maths_marks);
		sum=m[i].phy_marks+m[i].chem_marks+m[i].maths_marks;
		percentage=((sum*100)/300);
		printf("students percentage is=%0.2f\n",percentage);	
    }
}

