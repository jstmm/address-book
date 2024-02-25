#ifndef __UTILS_H__
#define __UTILS_H__

#include <stdio.h>
#include <stdlib.h>

void clear_screen()
{
  system("clear");
}

void pause()
{
  int ch;
  while ((ch = getchar()) != '\n' && ch != EOF);
  getchar();
}

#endif