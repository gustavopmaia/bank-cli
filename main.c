#include <stdio.h>
#include <stdlib.h>

char name[20];
int balance, choice, deposit, withdraw;

void show_balance(){
    printf("Balance: %d\n", balance);
}

void menu(){
    printf("Name: ");
    scanf("%s", name);

    printf("Hello %s, welcome to Bank CLI\n", name);
    sleep(3);
    system("clear");
    
    while(choice != 3){
        printf("What you want to do \n[1] Deposit \n[2] Withdraw \n[3] Exit \nOption: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Value to deposit: ");
                scanf("%d", &deposit);
                balance = balance + deposit;
                show_balance();
                break;
            case 2:
                printf("Value to withdraw: ");
                scanf("%d", &withdraw);
                balance = balance - withdraw;
                show_balance();
        }
    }
}

void main(){
    menu();
}
