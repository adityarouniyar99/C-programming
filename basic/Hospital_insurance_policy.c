/*A private hospital provides a medical expense reimbursement under its insurance support
scheme based on the patient's annual family income and severity score of illness.
Rules:
· If family income > Rs. 10,00,000 -> No reimbursement (Reimbursement = 0)
· If family income ≤ Rs. 10,00,000 and severity score < 5 -> No reimbursement
(Reimbursement= 0)
. If family income ≤ Rs. 10,00,000 and severity score ≥ 5 and < 8 -> Reimbursement = Rs.
40,000 (Reimbursement = 40000)
. If family income ≤ Rs. 10,00,000 and severity score ≥ 8 -> Reimbursement = Rs. 75,000
(Reimbursement= 75000)
Task:
Write a C program to accept the patient's annual family income and severity score (1-10
scale) from the user and determine and display the reimbursement amount.
Sample Input:
900000
6
Sample Output: Reimbursement = 40000*/

#include<stdio.h>

int main(){
    int family_income,score;

    printf("Enter the family Income : ");
    scanf("%d",&family_income);
    printf("Enter the severity : ");
    scanf("%d",&score);
    
    int reimbursement=0;
    if (family_income > 1000000) {
        reimbursement = 0;
    }
    else if (score < 5) {
        reimbursement = 0;
    }
    else if (score >= 5 && score < 8) {
        reimbursement = 40000;
    }
    else if (score >= 8) {
        reimbursement = 75000;
    }
    printf("Reimbursement = %d",reimbursement);

    return 0;
}