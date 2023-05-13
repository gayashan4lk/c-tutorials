#include <stdio.h>
#include <string.h>

void learnFundamentals();

int main() {
    learnFundamentals();
    return 0;
}

void learnFundamentals() {
    int beautifulNumber = 9;
    double pi = 3.141592653589793238;
    char name[8] = "Gayashan";

    printf("%s is best at %s!\n", name, "programming");
    printf("%d is a beautiful number!\n", beautifulNumber);
    printf("PI is %f\n", pi);
    printf("PI is %.2f\n", pi);
    printf("PI is %.4f\n", pi);

    char food[] ="gayashan wagachchi";
    printf("The best food is %s\n", food);
    strcpy(food, "nice");
    printf("The best food is %s\n", food);

    signed int result = -2500;
    unsigned int mySalary = 999;

    printf("Signed int %d\n", result);
    printf("Unsigned int %d\n", mySalary);

    printf("The size of result variable is %llu\n", sizeof(result));
    printf("The size of mySalary variable is %llu\n", sizeof(mySalary));
    printf("The size of beautifulNumber variable is %llu\n", sizeof(beautifulNumber));
    printf("The size of pi variable is %llu\n", sizeof(pi));
    printf("The size of name variable is %llu\n", sizeof(name));
    printf("The size of food variable is %llu\n", sizeof(food));
    printf("Storage size for int: %llu\n", sizeof(int));

    char myChar = 'A';
    printf("ASCII value of %c is %d\n",myChar, myChar);

    int testChar = 98;
    printf("Character of ASCII value of %d is %c\n", testChar, testChar);
}


