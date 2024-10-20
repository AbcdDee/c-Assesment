//#include<stdio.h>
//price() {
//	printf("Press 1-4 to buy your choice \n");
//	printf("Press 1 to buy pizza at 180rs/piece \n");
//	printf("Press 2 to buy Burger at 100rs/piece \n");
//	printf("Press 3 to buy Dosa at 120rs/piece\n");
//	printf("Press 4 to buy idli at 50rs/piece\n");
//}
//main() {
//
//	int choice,quantity;
//	int totalprice = 0;
//	
//	int price[]={180,100,120,50};
//	
//	char *order[]={"pizza","Burger","Dosa","idli"};
//	price();
//	printf("Enter your choice: ");
//	scanf("%d",&choice);
//	if(choice >=1 && choice <=4){
//		if(choice==1){
//			printf("u have selected pizza: ");
//		}
//			else if(choice=2){
//				printf("u have selected Burger: ");
//			}
//			else if(choice=3){
//				printf("u have selected Dosa: ");
//			}
//			else if(choice=4){
//				printf("u have selected idli: ");
//			}
//			else  {
//			printf("No option: ");
//		}
//		printf("Quantity is:");
//		scanf("%d"&quantity);
//	}
//	}
#include <stdio.h>

 
void displayMenu() {
    printf("Press 1-4 to buy your choice \n");
    printf("Press 1 to buy Pizza at 180rs/piece \n");
    printf("Press 2 to buy Burger at 100rs/piece \n");
    printf("Press 3 to buy Dosa at 120rs/piece\n");
    printf("Press 4 to buy Idli at 50rs/piece\n");
}

int main() {
    int choice, quantity;
    int totalprice = 0;

     
    int prices[] = {180, 100, 120, 50}; 
    char *menuItems[] = {"Pizza", "Burger", "Dosa", "Idli"};  

    displayMenu();  
    printf("Enter your choice: ");
    scanf("%d", &choice);  

    
    if (choice >= 1 && choice <= 4) {
        printf("You have selected %s.\n", menuItems[choice - 1]);

     
        printf("Enter quantity: ");
        scanf("%d", &quantity);  

         
        totalprice = quantity * prices[choice - 1];
        printf("Total price for %d %s(s): %d rs\n", quantity, menuItems[choice - 1], totalprice);
    } else {
        printf("Invalid choice!\n");
         
    }

    
}

