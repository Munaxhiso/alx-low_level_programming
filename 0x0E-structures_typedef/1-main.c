#include <stdio.h>
#include "dog.h"

/**
 * main - check the code for Holberton school students
 *
 * Return: Always 0.
 */
int main(void)
{
  struct dog my_dog;

  init_dog(&my_dog, "Django", 3.5, "Jay");
  printf("My name is %s, and i am %.lf :) - woof!\n", my_dag.name, my_dog.age);
  return (0);
}
