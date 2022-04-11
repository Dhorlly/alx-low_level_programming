#ifndef DOG_H
#define DOG_H
/**
* struct dog - declaring of struct dog
* @name: First member
* @age: Second member
* @owner: Third member
*/
struct dog 
{
char *name;
float age;
char *owner;
};

/**
* my_dog - Typedef for struct dog
*/
typedef struct dog my_dog;

#endif
