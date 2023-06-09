#include<stdio.h>

struct Distance {
	int feet;
	int inch;
} s1, s2, s;

main()
{
	
	printf(" Enter First Distance\n");
	printf("Enter Feet :");
	scanf("%d",&s1.feet);
	printf("Enter Inch; ");
	scanf("%d", &s1.inch);
	
	printf("\nenter 2nd Distance\n");
	printf("Enter Feet :");
	scanf("%d",&s2.feet);
	printf("Enter Inch; ");
	scanf("%d", &s2.inch);
	
	s.feet = s1.feet + s2.feet;
	s.inch = s1.inch + s2.inch;
	
	while(s.inch>12)
	{
		s.feet++;
		s.inch-=12;
	}
	
	printf("\nSum Of Distance = %d",s.feet,s.inch);
	
}

