#include <stdio.h>
#include <stdlib.h>

// Prototypes
void print(char firstInitial, int age, float weight);
void multiplyNum();
void addNum();
int multiply(int x);
int add(int x);

int main(int argc, char **argv)
{
    char firstInitial = 'L';
    int age = 19;
    float weight = 165.21;
    print(firstInitial, age, weight);
    multiplyNum();
    addNum();

    return EXIT_SUCCESS;
}

void print(char firstInitial, int age, float weight)
{
    printf("%c is Leo's first initial\n", firstInitial);
    printf("%d is Leo's age\n", age);
    printf("%.2f is Leo's weight\n", weight);
}

void multiplyNum()
{
    int num;
    printf("Enter an integer to be multiplied by 5: ");
    // Recieve user input
    scanf("%d", &num);
    printf("5 x %d = %d\n", num, multiply(num));
}

void addNum()
{
    int num;
    printf("Enter an integer to be added by 2: ");
    scanf("%d", &num);
    printf("2 + %d = %d\n", num, add(num));
}

int add(int x)
{
    return (2 + x);
}
int multiply(int x)
{
    return (5 * x);
}
