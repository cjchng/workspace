#include <stdio.h>
typedef struct {
  const char *name;
  const char *species;
  int age;
} turtle;
void happy_birthday(turtle* t)   //(turtle &pass-in)
{
  (*t).age = (*t).age + 1;   //(*t) is called dereference
  printf("Happy Birthday %s! You are now %i years old!\n",
		  (*t).name, (*t).age);
}
//can we (*t).age  as *t.age
//operator precedence
// *t.age being interpreted as *(t.age)
//(*t).age is equalto t->age

int main()
{
  int *pt;  //data type of pointer to int // (int*)
  turtle myrtle = {"Myrtle", "Leatherback sea turtle", 99};
  happy_birthday(&myrtle);
  printf("pointer version, %s's age is now %i\n", myrtle.name, myrtle.age);
  return 0;
}
