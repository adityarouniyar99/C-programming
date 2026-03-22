// important for semester exams.
#include<stdio.h>
int main()
{
    int age,premium,max_amount;
    char gender,place,health;

    printf("Enter the age : \n");
    scanf("%d",&age);

    printf("Enter the gender(m=male : f=female) : \n");
    scanf("%c",&gender);

    printf("Enter the place(c=city : v=village) : \n");
    scanf("%c",&place);

    printf("Enter the health(e=excellent : p=poor) : \n");
    scanf("%c",health);

    if(age>=25 && age<=35 ){
        if(gender=='m' && place=='c' && health=='e'){
            premium=4;
            max_amount=200000;
            printf("Person is insured\n");
        }
        else if (health == 'e' && place == 'c' && gender == 'f') {
            premium = 3;
            max_amount = 100000;
            printf("\nPerson is insured");
        }

        else if (health == 'p' && place == 'v' && gender == 'm') {
            premium = 6;
            max_amount = 10000;
            printf("\nPerson is insured");
        }

        else {
            printf("\nPerson is NOT insured");
            return 0;
        }
    }
    else {
        printf("\nPerson is NOT insured");
        return 0;
    }

    // Output
    printf("\nPremium rate = Rs. %d per thousand", premium);
    printf("\nMaximum policy amount = Rs. %d", max_amount);

    return 0;
    
}