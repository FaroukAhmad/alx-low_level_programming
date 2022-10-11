#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - creates dog object
 * @name: dog name
 * @age: age of dog
 * @owner: owner of dog
 * Return: dog object, NULL if fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = new_dog("Poppy", 3.5, "Bob");
	if (my_dog == NULL)
		return (NULL);
	return (my_dog);
}
