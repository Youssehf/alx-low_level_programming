#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a structre for the dog file
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: defines structure for the dog file by taking three data types
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Typedef for struct dog
 *
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
