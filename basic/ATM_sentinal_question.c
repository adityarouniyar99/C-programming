//------------atm question --------------//

#include <stdio.h>
int main(){
     
    int bal=50000;
	int amt,sucess=0,unsucess=0,total_withdraw=0;
	printf("Enter the amount : ");
	scanf("%d",&amt);
	
	while(amt!=0){
		if(amt<=bal){
			total_withdraw += amt;
			sucess ++;
			bal-=amt;
		}
		else{
			unsucess++;
		}
		
		printf("Enter the amount : ");
		scanf("%d",&amt);
	}
	printf("Total withdrawn done is : %d\n",total_withdraw);
	printf("Total sucessful : %d\n",sucess);
	printf("Total unsucessful :%d\n",unsucess);
	printf("Total balance left in the account is : %d\n",bal);
	
	return 0;
}