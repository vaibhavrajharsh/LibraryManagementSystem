#include <stdio.h>
#include <string.h>

void AddBooks();
void AvalableBooks();
void RentBooks();
void ReturnBooks();
void SearchBooks();
void Exit();

//structure for Adding Books
struct books
{
    char title[50];
    int quantity;
};

//main
int main()
{
    int option;

    printf("\t\t\tWelcome To Library\n\n");

    while (1)
    {
        printf("select any option :\n\n");
        printf("1. Add Books\n");
        printf("2. Avalable Books\n");
        printf("3. Rent Books\n");
        printf("4. Return Books\n");
        printf("5. Search Books\n");
        printf("6. Exit\n\n");

        scanf("%d", &option);

        printf("your Choice is option %d ", option);

        //switch for option switch
        switch (option)
        {
        case 1:

            AddBooks();
            break;
        case 2:
            AvalableBooks();
            break;
        case 3:
            RentBooks();
            break;
        case 4:
            ReturnBooks();
            break;
        case 5:
            SearchBooks();
            break;
        case 6:
            Exit();
            break;
        default:
            printf("Wrong Choice ! Enter Valid Choice\n");
        }
    }
    return 0;
}

//function Definations
void AddBooks()
{
    struct books new_book[100];
    printf(" \n\nEnter The Book Name and Quantity\n");
    scanf("%s", &new_book[0].title);
    scanf("%d", &new_book[0].quantity);
}
void AvalableBooks()
{
    struct books new_book[100];
    printf("\nAvailable Books :\n");
    printf("1. %s\t%d\n\n\n", new_book[0].title, new_book[0].quantity);
}
void RentBooks()
{
    printf("Rent Books\n\n");
}
void ReturnBooks()
{
    printf("Return Books\n\n");
}
void SearchBooks()
{
    printf("Search Books\n\n");
}
void Exit()
{
    printf("Exit\n\n");
}
