#include <stdio.h>
#include <stdbool.h>

#include "application.h"
#include "menu.h"

void run_application()
{
    bool b_continue = true;

    printf("Welcome to the address book\n");
    
    while (b_continue)
    {
        show_menu(&b_continue);
    }

    printf("=================================================================================\n\n");
}