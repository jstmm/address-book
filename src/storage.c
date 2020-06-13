#include <stdio.h>
#include "storage.h"

const char *storage_path = "resources/storage.txt";

void save_person_to_file(struct Person new_person)
{
    FILE *storage = fopen(storage_path, "a+");
    fputs(new_person.name, storage);
    fputs(",", storage);
    fputs(new_person.date_of_birth, storage);
    fputs("\n", storage);
    fclose(storage);
}

void print_storage_file()
{
    FILE *storage = fopen(storage_path, "r");
    char line_buffer[LINE_SIZE];
    while (fgets(line_buffer, sizeof(line_buffer), storage) != NULL)
    {
        printf("%s", line_buffer);
    }
    fclose(storage);
}