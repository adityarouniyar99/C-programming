#include <stdio.h>
int main()
{
    int a,b;
    char ch;
    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Enter the value of b :");
    scanf("%d",&b);

    printf("------Menu----\n");
    printf("+. Addition\n");
    printf("-. subtraction\n");
    printf("/. Division\n");
    printf("%%. Modulus\n");

    printf("Enter the arithmetic sign(+,-,*,/,%%) : \n");
    scanf(" %c",&ch);

    
    switch(ch)
    {
        case '+':{
        printf("The sum of a & b is : %d ",a+b);
        break;
        }
        case '-':{
        printf("The subtraction of a & b is : %d ",a-b);
        break;
        }
        case '*':{
        printf("The multiplication of a & b is : %d ",a*b);
        break;
        }
        case '/':{
        printf("The Division of a & b is : %d ",a/b);
        break;
        }
        case '%':{
        printf("The Modulus of a & b is : %d ",a%b);
        break;
        }
        default:
        printf("Enter the correct number");
        break;
    }
    

    return 0;
}