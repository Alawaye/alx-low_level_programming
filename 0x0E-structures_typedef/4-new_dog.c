#include <stdio.h>

#include <stdlib.h>

#include "dog.h"



/**
 *
 *  * newdog - Initializes variable of type  new dog
 *
 *   * @dog: Pointer to variable of type struct new dog
 *
 *    * @name: Dog name
 *
 *     * @age: Dog age
 *
 *      * @owner: Dog owner
 *
 *       */

dog_t *new_dog(char *name, float age, char *owner);

{
		dog_t *dog

		
		dog = malloc(sizeof(dog_t))
		
		if (dog != NULL)
		{
			dog->name = name;
			(dog).age = age;
			dog->owner = owner;
		}
		else
		{
			return (Null);
		}	
		
		return (dog);
}
