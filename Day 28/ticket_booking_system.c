#include <stdio.h>

int main()
{
    int totalSeats = 50;
    int bookedSeats = 0;
    int choice, seats;

    while (1)
    {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. Cancel Ticket\n");
        printf("3. Check Available Seats\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter number of tickets to book: ");
                scanf("%d", &seats);

                if (seats <= (totalSeats - bookedSeats))
                {
                    bookedSeats = bookedSeats + seats;
                    printf("Ticket Booked Successfully!\n");
                }
                else
                {
                    printf("Seats Not Available!\n");
                }
                break;

            case 2:
                printf("Enter number of tickets to cancel: ");
                scanf("%d", &seats);

                if (seats <= bookedSeats)
                {
                    bookedSeats = bookedSeats - seats;
                    printf("Ticket Cancelled Successfully!\n");
                }
                else
                {
                    printf("Invalid Number of Tickets!\n");
                }
                break;

            case 3:
                printf("\nTotal Seats      : %d\n", totalSeats);
                printf("Booked Seats     : %d\n", bookedSeats);
                printf("Available Seats  : %d\n", totalSeats - bookedSeats);
                break;

            case 4:
                printf("Thank You!\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}