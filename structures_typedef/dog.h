
/**
 * struct dog - check the code
 * @name: name.
 * @age: age
 * @owner: owner
 *
 * Return: Always 0.
 */
#ifndef dog
#define dog
struct dog 
{
	char *name;
	float age;
	char *owner;
};
#endif
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/*dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
*/
