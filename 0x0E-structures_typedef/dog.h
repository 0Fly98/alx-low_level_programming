#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A struct that defines a dog
 * @name: a pointer to a character string that represents the dog's name
 * @age: a float that represents the dog's age
 * @owner: a pointer to a character string that requests the dog's owner
 */
struct dog
{
	char *name;
	float  age;
	char *owner;
};

#endif /* DOG_H */
