#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Structure definition
 * Description: Creating a structure and typedef function
 * @name: name of dog
 * @age: Dog age
 * @owner: dog owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif

#ifndef PROTOTYPE
#define PROTOTYPE

/**
 * dog_t - Typedef struct dog
 * Description: A typedef function
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _DOG_H_ */
