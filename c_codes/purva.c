#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MEDICINES 100

typedef struct {
    int id;
    char name[100];
    int quantity;
    float price;
} Medicine;

Medicine medicines[MAX_MEDICINES]; //n mediciens[100]
int numMedicines = 0;

void addMedicine() {
    if (numMedicines == MAX_MEDICINES) {
        printf("Cannot add more medicines. Database is full.\n");
        return;
    }
    printf("Enter medicine details:\n");
    printf("ID: ");
    scanf("%d", &medicines[numMedicines].id);
    printf("Name: ");
    scanf(" %[^\n]", medicines[numMedicines].name);
    printf("Quantity: ");
    scanf("%d", &medicines[numMedicines].quantity);
    printf("Price: ");
    scanf("%f", &medicines[numMedicines].price);

    numMedicines++;

    printf("Medicine added successfully.\n");
}

void searchMedicine() {
    int id;
    printf("Enter medicine ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < numMedicines; i++) {
        if (medicines[i].id == id) {
            printf("Medicine found:\n");
            printf("ID: %d\n", medicines[i].id);
            printf("Name: %s\n", medicines[i].name);
            printf("Quantity: %d\n", medicines[i].quantity);
            printf("Price: %.2f\n", medicines[i].price);
            return;
        }
    }

    printf("Medicine not found.\n");
}

void displayMedicines() {
    if (numMedicines == 0) {
        printf("No medicines in the database.\n");
        return;
    }

    printf("Medicine List:\n");
    printf("ID\tName\tQuantity\tPrice\n");
    for (int i = 0; i < numMedicines; i++) {
        printf("%d\t%s\t%d\t\t%.2f\n", medicines[i].id, medicines[i].name, medicines[i].quantity, medicines[i].price);
    }
}

int main() {
    int choice;

    do {
        printf("\nPharmacy Management System\n");
        printf("1. Add Medicine\n");
        printf("2. Search Medicine\n");
        printf("3. Display Medicines\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addMedicine();
                break;
            case 2:
                searchMedicine();
                break;
            case 3:
                displayMedicines();
                break;
            case 4:
                printf("Exiting the program. Goodbye!\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (1);

    return 0;
}