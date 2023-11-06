#include "dog.h"
#include <stdlib.h>

/**
* init_dog - inits a variable of
*type dog
*@d: pointe to dog identification
*@name: name of dog
*@age: age of dog
*@owner: owner's names
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
