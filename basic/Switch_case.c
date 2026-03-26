/*
Experiment 6:

b) Write a C Program to Find Largest number from three numbers passed to a function.

c) Write a program in C to convert a decimal number to a binary number using the function.

d) Write a program to find factorial using recursive function.
*/

/*a) Write a menu-driven program using function to calculate the following:
	1. Area of circle
	2. Area of square
	3. Area of triangle using heron formula*/
#include<stdio.h>
#include<math.h>
float area_circle(float r);
float area_sqaure(float a);
float area_triangle(float a, float b, float c);

int main(){
	int choice;
	float r,a,b,c;

	printf("-----Menu------\n");
	printf("1. Area of circle.\n");
	printf("2. Area of sqaure.\n");
	printf("3.Area of triangle.\n");
	
	printf("Enter the choice :");
	scanf("%d",&choice);

	switch (choice)
	{
	case 1:{
		printf("Enter the radius : ");
		scanf("%f",&r);
		printf("Area of a circle is : %.2f",area_circle(r));
		break;
	}
	case 2:{
		printf("Enter the length : ");
		scanf("%f",&a);
		printf("Area of a sqare is : %.2f",area_sqaure(a));
		break;
	}
	case 3:{
		printf("Enter the length,breadth,height : ");
		scanf("%f %f %f",&a,&b,&c);
		printf("Area of a triangle is : %.2f",area_triangle(a,b,c));
		break;
	}
	
	default:
		printf("Invalid Choice\n");
	}

	return 0;
}
float area_circle(float r) {
    return 3.14 * r * r;
}

float area_sqaure(float a) {
    return a * a;
}

float area_triangle(float a, float b, float c) {
    float s, area;
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}