#include<stdio.h>

int main(){
    int marks[6]={3,9,19,4,6,125};

    // TO DO SUM OF THE GIVEN ARRAY
    int i,sum=0;
    for(i=0; i<6; i++){
        sum = sum + marks[i];
    }
    printf("The sum of an array is = %d",sum);
    printf("\n");

    // TO FIND TTHE MAXIMUM NUNBER OF THE GIVEN ARRAY!
    int max=marks[0];
    for(i=0;i<6;i++){
        if(marks[i]>max)
        max = marks[i];
    }
    printf("The maximum number in array is = %d",max);
    printf("\n");
    
    // TO FIND TTHE MINIMUM NUNBER OF THE GIVEN ARRAY!
    int min=marks[0];
    for(i=0;i<6;i++){
        if(min>marks[i])
        min = marks[i];
    }
    printf("The minimum number in array is = %d",min);
    printf("\n");

    // now here i am tring to replace thhe value of the particular value of particular array!
    marks[3]=15;
    printf("%d",marks[3]);

    

}