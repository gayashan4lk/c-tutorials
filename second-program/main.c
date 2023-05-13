#include <stdio.h>

void printSquarePattern();
void printRightTrianglePattern();
void printHollowSquareStarPattern();

int main() {
    printf("Square pattern :\n");
    printSquarePattern();
    printf("\n");

    printf("Right angle pattern :\n");
    printRightTrianglePattern();
    printf("\n");

    printf("Hollow square pattern :\n");
    printHollowSquareStarPattern();
    printf("\n");

    return 0;
}

void printSquarePattern() {
    for (int j = 0; j < 10; j++){
        for (int i = 0; i < 7; i++){
            printf("*");
        }
        printf("\n");
    }
}

void printRightTrianglePattern() {
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
}

void printHollowSquareStarPattern() {
    for (int i = 0; i < 10; i++) {
        if (i == 0 || i == 9)
        {
            for (int j = 0; j < 10; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (int j = 0; j < 10; j++)
            {
                if (j == 0 || j == 9)
                {
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}
