#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Basic information on a dog
 * @name: the first member
 * @owner: the third member
 * @age: the second member
 * Description: Long description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - the typedef for struct dog
 */
typedef struct dog dog_t;

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

#endif
