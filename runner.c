#include <stdlib.h>
#include "Date.h"


int main(int argc, char * argv[]) {
  struct Date * today;
  today = malloc(sizeof(*today));
  today->date = 10;
  today->month = 3;
  today->year = 2020;
  return EXIT_SUCCESS;
}
