#include <stdio.h>

int main()
{
    int choice;
    printf("press any nubmer from 1 to 5 to choose the food item you want to eat\n");
    scanf("%d", &choice);
    // 1. Burger, Rs 129
    // 2. French Fries, Rs 99
    // 3. Pizza, Rs 239
    // 4. Sandwich, Rs 149
    // 5. Pasta, Rs 179
    switch (choice)
    {
    case 1: //checks if choice is 1 then executes the code if true
        printf("Food item - Burger\n");
        printf("Price - Rs 129\n");
        break; //goes out of the switch case i.e. does not check the next case and does not execute default
    case 2:    //checks if choice is 2 then executes the code if true
        printf("Food item - Fench Fries\n");
        printf("Price - Rs 99\n");
        break; //goes out of the switch case i.e. does not check the next case and does not execute default
    case 3:    //checks if choice is 3 then executes the code if true
        printf("Food item - Pizza\n");
        printf("Price - Rs 239\n");
        break; //goes out of the switch case i.e. does not check the next case and does not execute default
    case 4:    //checks if choice is 4 then executes the code if true
        printf("Food item - Sandwich\n");
        printf("Price - Rs 149\n");
        break; //goes out of the switch case i.e. does not check the next case and does not execute default
    case 5:    //checks if choice is 5 then executes the code if true
        printf("Food item - Pasta\n");
        printf("Price - Rs 179\n");
        break; //goes out of the switch case i.e. does not check the next case and does not execute default
    default:
        printf("Number pressed by you does not lies between 1 ot 5\n");
        break;
    }
    return 0;
}
