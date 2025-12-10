#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 1. Structure Definition
struct Contact {
    char name[50];
    char phone[20];
    char email[50];
};

// Global variables to store data in memory (RAM)
struct Contact contacts[100];
int count = 0;

// Function to add contact
void addContact() {
    if (count >= 100) {
        printf("Phonebook full!\n");
        return;
    }
    printf("Enter Name (no spaces): ");
    scanf("%s", contacts[count].name);
    
    printf("Enter Phone: ");
    scanf("%s", contacts[count].phone);
    
    printf("Enter Email: ");
    scanf("%s", contacts[count].email);
    
    count++;
    printf("Contact added.\n");
}

// Function to display all
void displayContacts() {
    if (count == 0) {
        printf("Phonebook is empty.\n");
        return;
    }
    printf("\n--- Contact List ---\n");
    for (int i = 0; i < count; i++) {
        printf("%d. Name: %s | Phone: %s | Email: %s\n", 
               i + 1, contacts[i].name, contacts[i].phone, contacts[i].email);
    }
}

// Function to search contact
void searchContact() {
    char query[50];
    printf("Enter Name or Phone to search: ");
    scanf("%s", query);
    
    int found = 0;
    for (int i = 0; i < count; i++) {
        // Check if name matches OR phone matches
        if (strcmp(contacts[i].name, query) == 0 || strcmp(contacts[i].phone, query) == 0) {
            printf("Found: %s | %s | %s\n", 
                   contacts[i].name, contacts[i].phone, contacts[i].email);
            found = 1;
        }
    }
    if (found == 0) {
        printf("Contact not found.\n");
    }
}

// Function to update contact
void updateContact() {
    char query[50];
    printf("Enter Name of contact to update: ");
    scanf("%s", query);
    
    for (int i = 0; i < count; i++) {
        if (strcmp(contacts[i].name, query) == 0) {
            printf("Enter New Name: ");
            scanf("%s", contacts[i].name);
            
            printf("Enter New Phone: ");
            scanf("%s", contacts[i].phone);
            
            printf("Enter New Email: ");
            scanf("%s", contacts[i].email);
            
            printf("Contact updated.\n");
            return;
        }
    }
    printf("Contact not found.\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n1. Add  2. Display  3. Search  4. Update  5. Exit\n");
        printf("Choose: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addContact(); break;
            case 2: displayContacts(); break;
            case 3: searchContact(); break;
            case 4: updateContact(); break;
            case 5: exit(0); // Closes the program
            default: printf("Invalid choice.\n");
        }
    }
    return 0;
}