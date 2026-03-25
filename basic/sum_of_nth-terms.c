#include<stdio.h>
int main(){

    //---------5(a)---sum of n th term------------//
    
    int num,sum,i;

    printf("Enter the numbers : ");
    scanf("%d",&num);

    sum=0;
    for(i=0; i<=num; i++)
    {
        sum += i;
    }
    printf("The sum is : %d",sum);
    return 0;       


    

}