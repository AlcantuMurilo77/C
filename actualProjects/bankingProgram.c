#include <stdio.h>

float checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main(){

    int choice = 0;
    float balance = 0.0f;

    printf("Welcome to the banking program\n");

    do{

        printf("\nSelect an option:\n");
        printf("\n1. Check balance\n");
        printf("\n2. Make a deposit\n");
        printf("\n3. Withdraw money\n");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            checkBalance(balance);
            break;

        case 2:

            balance += deposit();
            break;

        case 3:

            balance -= withdraw(balance);
            break;
        
        case 4:
            printf("Goodbye\n");
            break;
        
        default:
            printf("\nInvalid choice");
            break;
        }


    } while(choice != 4);


    return 0;

}

float checkBalance(float balance){
    printf("\nYour current balance is: $%.2f\n", balance);
}
float deposit(){

    float amount = 0.0f;

    printf("How much would you like to deposit?: $");
    scanf("%f", &amount);

    if (amount < 0){
        printf("Invalid amount\n");
        return 0.0f;
    } else{
        printf("Successfully deposited $%.2f\n", amount);
        return amount;
    }


    
}
float withdraw(float balance){
    
    float amount = 0.0f;

    printf("How much would you like to withdraw?: $");
    scanf("%f", &amount);

    if (amount < 0){
        printf("Invalid amount\n");
        return 0.0;
    } else if (amount > balance){
        printf("Insufficient funds\n");
        return 0.0;

    }
    else{
        printf("Successfully withdrew $%.2f\n", amount);
        return amount;
    }
}