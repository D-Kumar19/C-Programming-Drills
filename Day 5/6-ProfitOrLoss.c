#include <stdio.h>

void findProfitOrLoss(int CP, int SP){
    if (SP - CP < 0){
        printf("\nIt is a Loss!\n");
        printf("The Percentage Loss is worth %d%%!", ((CP - SP) * 100) / CP);

    }
    else if (SP - CP > 0){
        printf("\nIt is a Profit!\n");
        printf("The Percentage Profit is worth %d%%!", ((SP - CP) * 100) / CP);
    }
    else{
        printf("No Profit and Loss!");
    }
}

int main(){
    printf("This program will check using Selling Price and Cost Price that it is a Loss or a Profit!\n");
    
    int CP, SP;
    printf("Enter the 'Cost Price': ");
    scanf("%d", &CP);
    printf("Enter the 'Selling Price': ");
    scanf("%d", &SP);
    
    if(CP <= 0 || SP <= 0){
        printf("\nSelling Price or Cost Price can't be zero or less than zero\n");
    }
    else{
        findProfitOrLoss(CP, SP);
    }
    
    return 0;
}