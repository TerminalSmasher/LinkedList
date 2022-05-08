#include "stdio.h"
#include "stdlib.h"
struct hotel
{
    char name[100];
    char add[100];
    int ph;
    struct hotel *next;
} * head, *last, *newNode, *temp;
typedef struct hotel list;
int main()
{
    int choice;
    int ph;
    while (1)
    {
        printf("\nPress 1 to register");
        printf("\nPress 2 to select dates");
        printf("\nPress 3 for receipt");
        printf("\nPress 4 to exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            newNode = (list *)malloc(sizeof(list));
            fflush(stdin);
            printf("\nEnter your name: ");
            scanf("%s", newNode->name);
            fflush(stdin);
            printf("\nEnter your phone number: ");
            scanf("%d", &newNode->ph);
            fflush(stdin);
            printf("\nEnter your address: ");
            scanf("%s", newNode->add);
            // newNode->ph=ph;
            newNode->next = NULL;
            if (head == NULL)
            {
                head = newNode;
                last = head;
            }
            else
            {
                last->next = newNode;
                last = last->next;
            }
            break;

        case 3:
            if (head == NULL)
            {
                printf("\nNo input");
            }
            else
            {
                temp = head;
                printf("\nYour booking: ");
                while (temp != NULL)
                {
                    printf("\nName: %s \nPhone Number: %d \nAddress: %s", temp->name, temp->ph, temp->add);
                    temp = temp->next;
                }
            }
            break;

        case 4:
            exit(0);
        }
    }
}
