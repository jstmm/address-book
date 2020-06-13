#include <stdio.h>
#include <stdbool.h>
#include "menu.h"
#include "storage.h"
#include "utils.h"

void show_menu(bool *b_continue)
{
    int chosen_option;

    clear_screen();
    printf("Welcome to the address book\n");
    printf("=================================================================================\n\n");
    printf("1. Add people\n");
    printf("2. Print storage\n");
    printf("0. Exit\n");
    printf("\n");
    printf("What to do? ");
    scanf("%i", &chosen_option);
    
    clear_screen();

    switch (chosen_option)
    {
        case 1:
            add_people();
            break;
        case 2:
            show_people();
            break;
        case 0: // Exit
            *b_continue = false;
            break;
    }
}

void add_people()
{
    char another_one = 'y';

    while (another_one == 'y')
    {
        struct Person new_person;

        printf("Add people\n");
        printf("=================================================================================\n\n");
        printf("Enter name: ");
        scanf(" %s", new_person.name);

        printf("Enter date of birth: ");
        scanf(" %s", new_person.date_of_birth);
        save_person_to_file(new_person);
        
        printf("\nEnter another one? (y/n): ");
        scanf(" %c", &another_one);

        clear_screen();
    }
}

void show_people()
{
    printf("Show people\n");
    printf("=================================================================================\n\n");
    print_storage_file();
    pause();
}