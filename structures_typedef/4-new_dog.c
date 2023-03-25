#include <stdlib.h>
#include "dog.h"

/**
* new_dog - creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: pointer to the new dog, or NULL if an error occurs
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, namel, ownerl;
	dog_t *dog;

/* Check for NULL input parameters */
if (name == NULL || owner == NULL)
return (NULL);

/* Allocate memory for the new dog */
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);

/* Allocate memory for the name string and copy it */
namel = strlen(name) + 1;
dog->name = malloc(namel *sizeof(char));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
for (i = 0; i < namel; i++)
dog->name[i] = name[i];

/* Set the age of the new dog */
dog->age = age;

/* Allocate memory for the owner string and copy it */
ownerl = strlen(owner) + 1;
dog->owner = malloc(ownerl *sizeof(char));
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
for (i = 0; i < ownerl; i++)
dog->owner[i] = owner[i];

return (dog);
}
