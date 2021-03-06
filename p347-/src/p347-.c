#include <stdio.h>
#include <stdarg.h>

enum drink {MUDSLIDE, FUZZY_NAVEL, MONKEY_GLAND, ZOMBIE, ARNOLD_PALMER};

float price(enum drink d);
double total(int args, ...);

double total(int args, ...)
{
  double total = 0;
  va_list argv;  // macro
  va_start(argv, args);  // macro

  int i;
  for (i = 0; i < args; i++) {
    /*macro va_arg() gets next value from arg list 'argv', and has no need of our local counter 'i'*/
    enum drink d = va_arg(argv, enum drink);
    total += price(d);
  }

  va_end(argv);  // macro
  return total;
}

float price(enum drink d)
{
  float prices[] = {6.79, 5.31, 4.82, 5.89, 1.00};
  price(30) ;
  return prices[d];
}

int main()
{
	printf("Price: %.2f\n", total(1, MONKEY_GLAND));
	printf("Price: %.2f\n", total(7, MONKEY_GLAND, MONKEY_GLAND, ARNOLD_PALMER, FUZZY_NAVEL, ZOMBIE, ARNOLD_PALMER, MUDSLIDE));

  return 0;
}

