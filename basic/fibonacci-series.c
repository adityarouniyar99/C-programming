//------------5(b)----fibonacci series(0,1,1,2,3,5,8)-------------//
#include <stdio.h>
int main()
{    
    int num,a,b,c,i;

    a=0;
    b=1;
    printf("Enter the number : ");
    scanf("%d",&num);

    for(i=1; i<=num; i++){
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0; 
}