#include <stdio.h>
int main(){
	float cp, sp, profit_loss;
	
	printf("Enter the cost price: ");
	scanf("%f",&cp);
	printf("Enter the selling price: ");
	scanf("%f",&sp);
	
	if (sp > cp) {
		profit_loss = sp - cp;
		printf("Profit: %.2f\n",profit_loss);
	} else if (cp > sp){
		profit_loss = cp - sp;
		printf("Loss: %.2f\n",profit_loss);
	} else {
		printf("No profit no loss.\n");
	}
}		
