// take three subject marks from user find pr and check student is pass or fail.
#include<stdio.h>
main()
{
	float physics,chemistry,mathematices;
	float total_marks=300, marks_obtained;
	float percentage;
	
	printf("Enter the physics marks:");
	scanf("%f",&physics);
	printf("Enter the chemistry marks:");
	scanf("%f",&chemistry);
	printf("Enter the mathematices marks:");
	scanf("%f",&mathematices);
	
	marks_obtained = physics + chemistry + mathematices;
	
	percentage= (marks_obtained / total_marks)*100;
	
	printf("Percentage: %.2f\n",percentage);
	
	if (physics >= 33 && chemistry >= 33 && mathematices >= 33 && percentage >= 33) {
        printf("Congratulations! You are passed");
    } else {
        printf("Sorry! You are fail");
    }
	
}
