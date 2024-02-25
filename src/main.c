#include <stdlib.h>
#include <stdbool.h>
#include "menu.h"
#include "storage.h"

int main(int argc, char **argv)
{
    bool b_continue = true;
    while (b_continue)
    {
        show_menu(&b_continue);
    }
    return EXIT_SUCCESS;
}
