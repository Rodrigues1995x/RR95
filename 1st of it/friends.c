#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Name
    string name = get_string("What is your name? ");

    // Age
    int age = get_int("What is your age? ");

    // Hometown
    string hometown = get_string("What is your hometown? ");

    // Phone Number
    int number = get_int("What is your phone number? ");

    printf("My new friend name is %s, he has %i years old, he is from %s and his phone number is %i\n", name, age, hometown, number);
}
