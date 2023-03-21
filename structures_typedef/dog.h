#ifndef DOG_H
#define DOG_H

/**
 * struct dog - szs
 * @name: pointer string of the nanme
 * @age: float of the age
 * @owner: string of the owner
 * Return: 0
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - struck dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
