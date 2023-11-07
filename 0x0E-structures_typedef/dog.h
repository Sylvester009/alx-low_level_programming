#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's information
 * @name: Name of dog
 * @age: Age of dog
 * @owner: owner of dog
 *
 * Description: a basic structure for a dog
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - new name for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *strCpy(char *dupl, char *origi);
int strLen(char *str);

#endif
