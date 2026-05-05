#include <stdio.h>

struct Person {
    int age;

    /**
     * His nick.
     */
    char *nick;
};

void main() {
    struct Person person;

    person.age = 15;
    printf("%d\n", person.age);

    person.nick = "Arby";
    printf("%s\n", person.nick);
};