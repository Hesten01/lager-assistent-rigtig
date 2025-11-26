//
//  Sparepart-Inventory.c
//  Test
//
//  Created by noah helweg on 13/10/2025.
//
#include <stdio.h>

// defines the parts in the warehouse
const char *PARTS[] = { "Hydraulic pump", "PLC module", "Servo motor" };
// defines how many of each part there is in the warehouse
int Hydralic = 5;
int PLC = 0;
int Servo = 3;
// defines the user input to an int
int user1 = 1;
int user2 = 2;
int user3 = 3;
// runs the program
int main(void) {
    // prints out the introduction to the user
    printf("Hello and welcome to the Spare parts Inventory\n");
    printf("Which parts do you need today?:\n");
    printf("Press 1 for Hydraulic Pump\n");
    printf("Press 2 for PLC module\n");
    printf("Press 3 for Servo motor\n");
    printf("> ");
    
    // checks the user input
    int choice = 0;
    if (scanf("%d", &choice)
        
        // takes the user input and looks for the part
        )if (choice == user1) {
        printf("we have %d %s in stock:\n", Hydralic, PARTS[0]);
    } else if (choice == user2) {
        printf("we have %d %s in stock:\n", PLC, PARTS[1]);
    } else if (choice == user3) {
        printf("we have %d %s in stock:\n", Servo, PARTS[2]);
    }
    // if user gives a input not recognised program will exit
    else {
        printf("We dont have that in the warehouse\n");
    }

    return 0;
}