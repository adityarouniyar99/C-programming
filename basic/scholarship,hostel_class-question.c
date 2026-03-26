#include <stdio.h>

int main(){

    float marks;
    int category,hostel_required,family_income;
    char gender;

    printf("Enter the marks in qualifing exam : "); //marks (percentage in qualifying exam)
    scanf("%f",&marks);

    printf("Enter the family income anually in INR : ");  //family_income (annual income in INR)
    scanf("%d",&family_income);

    printf("Enter the category : ");  //category (1 = General, 2 = OBC, 3 = SC/ST)
    scanf("%d",&category);

    printf("Enter the hostel requirement : "); //hostel_required (1 = Yes, 0 = No)
    scanf("%d",&hostel_required);

    printf("Enter the gender : "); //gender ('M' or 'F')
    scanf(" %c", &gender);

    printf("Scholarship\n");
    if(marks>=90)
        if(family_income <= 20000)
        { printf("Full Scholarship\n"); }
        else
        { printf("Merit Scholarship\n"); }

    else if(marks >= 75){
        if(family_income <= 15000){
            if(category==3)
            { printf("Full Scholarship\n"); }
            else
            { printf("Half Scholarship\n"); }
        }else
        { printf("No Scholarship\n"); }
    }    
    else
    { printf("No Scholarship\n"); }

    printf("Hostel allotment\n");
    if(hostel_required==1){
        if(gender == 'F'){
            if(marks >= 85)
            { printf(" AC Girls Hostel\n"); }
            else
            { printf("Non-AC Girls Hostel\n"); }
        }
        else{
            if(marks >= 80){
                if(family_income <= 300000)
                { printf("AC Boys Hostel\n"); }
                else
                { printf("Non-AC Boys Hostel\n"); }
            }else
            { printf("Non-AC Boys Hostel\n"); }
        }
        
    }else
        { printf("Hostel not required\n"); }

    return 0;
}