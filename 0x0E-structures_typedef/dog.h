#ifndef DOG
#define DOG
/**
 * struct dog - creates a struct dog
 * @name: the name
 * @age: the age
 * @owner: the owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
