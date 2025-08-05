#include <stdio.h>

void checkBalance(float balance);
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

            deposit();
            break;

        case 3:

            withdraw(balance);
            break;
        
        default:
            break;
        }


    } while(choice != 4);


    return 0;

}

void checkBalance(float balance){
    return 0.0;
}
float deposit(){
    return 0.0;
}
float withdraw(float balance){
    return 0.0;
}