#ifndef __STORAGE_H__
#define __STORAGE_H__

#define LINE_SIZE 50

struct Person
{
    char name[LINE_SIZE];
    char date_of_birth[LINE_SIZE];
};

void save_person_to_file(struct Person new_person);
void print_storage_file();

#endif