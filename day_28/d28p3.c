#include <stdio.h>
#include <string.h>

struct Ticket {
    int ticketId;
    char passengerName[50];
};

int main() {
    struct Ticket tickets[100];
    int count = 0, choice, id;
    char name[50];

    do {
        printf("\n1. Book Ticket\n2. Cancel Ticket\n3. Show Tickets\n4. Exit\nChoice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter passenger name: ");
                scanf("%s", name);
                tickets[count].ticketId = count+1;
                strcpy(tickets[count].passengerName, name);
                printf("Ticket booked! ID: %d, Passenger: %s\n", tickets[count].ticketId, tickets[count].passengerName);
                count++;
                break;
            case 2:
                printf("Enter ticket ID to cancel: ");
                scanf("%d", &id);
                if(id<=count && id>0) {
                    printf("Ticket %d cancelled.\n", id);
                    tickets[id-1].ticketId = -1; // mark cancelled
                 } else {
                    printf("Invalid ID.\n");
                }
                break;
            case 3:
                for(int i=0; i<count; i++) {
                    if(tickets[i].ticketId != -1)
                        printf("ID: %d, Passenger: %s\n", tickets[i].ticketId, tickets[i].passengerName);
                }
                break;
        }
    } while(choice!=4);

    return 0;
}