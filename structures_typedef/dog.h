#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - dog type
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: a dog info type for dog obj
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
