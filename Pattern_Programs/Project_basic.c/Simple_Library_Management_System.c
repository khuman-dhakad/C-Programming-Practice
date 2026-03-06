#include <stdio.h>

struct Book
{
    int id;
    char name[50];
    char author[50];
};

struct Book library[50];
int count = 0;

void addBook()
{

    if (count >= 50)
    {
        printf("Library is full!\n");
        return;
    }
    printf("\nEnter Book ID: ");
    scanf("%d", &library[count].id);

    printf("Enter Book Name: ");
    scanf(" %[^\n]", library[count].name);
    printf("Enter Author Name: ");
    scanf("%[^\n]", library[count].author);

    count++;
    printf("Book added successfully!\n");
}
void showBooks()
{
    int i;

    if (count == 0)
    {
        printf("\nNo books available.\n");
        return;
    }

    printf("\n--- Book List ---\n");
    for (i = 0; i < count; i++)
    {
        printf("ID: %d | Name: %s | Author: %s\n",
               library[i].id,
               library[i].name,
               library[i].author);
    }
}

void searchBook()
{
    int id, i, found = 0;

    printf("\nEnter Book ID to search: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++)
    {
        if (library[i].id == id)
        {
            printf("Book Found!\n");
            printf("Name: %s | Author: %s\n",
                   library[i].name,
                   library[i].author);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Book not found!\n");
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n===== Library System =====\n");
        printf("1. Add Book\n");
        printf("2. Show Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addBook();
            break;
        case 2:
            showBooks();
            break;
        case 3:
            searchBook();
            break;
        case 4:
            return 0;
        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}