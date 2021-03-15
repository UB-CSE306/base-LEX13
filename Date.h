#ifndef DATE_H
#define DATE_H

#include <stdbool.h>

// A representation of a date
struct Date {
  int date;
  int month;
  int year;
};

// Returns a Date struct representing the day after the argument date
struct Date * nextDay(struct Date * day);

// Returns true if d1 and d2 represent the same date, 
//         false otherwise
bool sameDay(struct Date * d1, struct Date * d2);

#endif
