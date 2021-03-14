#ifndef DATE_H
#define DATE_H

#include <stdbool.h>

struct Date {
  int date;
  int month;
  int year;
};

struct Date * nextDay(struct Date * day);

bool sameDay(struct Date * d1, struct Date * d2);

#endif
