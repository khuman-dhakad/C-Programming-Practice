#include <stdio.h>

struct Book {
    int id;
    char name[50];
    char author[50];
};

struct Book library[50];
int count = 0;

void addBook() {
    printf("\nEnter Book ID: ");
    scanf("%d", &library[count].id);

    printf("Enter Book Name: ");
    scanf("%s", library[count].name);

    printf("Enter Author Name: ");
    scanf("%s", library[count].author);

    count++;
    printf("Book added successfully!\n");
}

int main(){
      int choice;

    while (1) {
        printf("\n===== Library System =====\n");
        printf("1. Add Book\n");
        printf("2. Show Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addBook(); break;
            case 2: showBooks(); break;
            case 3: searchBook(); break;
            case 4: return 0;
            default: printf("Invalid choice!\n");
        }
    }

    return 0;
}