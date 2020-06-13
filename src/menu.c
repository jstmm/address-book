#include <stdio.h>
#include <stdbool.h>

#include "menu.h"
#include "storage.h"

void show_menu(bool *b_continue)
{
    int chosen_option;

    printf("=================================================================================\n\n");
    printf("1. Add names\n");
    printf("2. Print storage\n");
    printf("0. Exit\n");
    printf("\n");
    printf("What to do? ");
    scanf("%i", &chosen_option);

    switch (chosen_option)
    {
        case 1:
            add_names();
            break;
        case 2:
            print_storage();
            break;
        case 0: // Exit
            *b_continue = false;
            break;
    }
}

void add_names()
{
    char another_one = 'y';

    while (another_one != 'n')
    {
        struct Person new_person;
        printf("=================================================================================\n\n");
        printf("Enter name: ");
        scanf(" %s", new_person.name);

        printf("Enter date of birth: ");
        scanf(" %s", new_person.date_of_birth);
        save_person_to_file(new_person);
        
        printf("=================================================================================\n\n");
        printf("Enter another one? ");
        scanf(" %c", &another_one);
    }
}

void print_storage()
{
    printf("=================================================================================\n\n");
    printf("Current storage\n");
    printf("=================================================================================\n\n");
    print_storage_file();
}