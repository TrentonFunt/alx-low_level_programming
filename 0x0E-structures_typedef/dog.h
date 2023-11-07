#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Define a structure for a dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Define dog_t as a new name for struct dog */
typedef struct dog dog_t;

/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to a struct dog to initialize
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - Prints the details of a struct dog
 * @d: Pointer to a struct dog to print
 */
void print_dog(struct dog *d);

/**
 * new_dog - Creates a new dog with the given attributes
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Return: A pointer to the new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - Frees the memory allocated for a dog structure
 * @d: Pointer to the dog structure to free
 */
void free_dog(dog_t *d)

#endif /* DOG_H */
