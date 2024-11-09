#include <stdio.h>

int main() {
    char type;
    printf("Enter 'c' for character, 'f' for float, or 'i' for integer: ");
    scanf(" %c", &type);

    switch (type) {
        case 'c': {
            char ch;
            printf("Enter a character: ");
            scanf(" %c", &ch);
            printf("Character: %c, ASCII: %d, Size: %lu byte(s)\n", ch, (int)ch, sizeof(ch));
            for (int i = 1; i <= 4; i++) {
                char nextChar = ch + (3 * i);
                printf("Next %d character: %c, ASCII: %d\n", i, nextChar, (int)nextChar);
            }
            break;
        }
        case 'f': {
            float num;
            printf("Enter a float number: ");
            scanf("%f", &num);
            printf("Float: %.2f, Size: %lu byte(s)\n", num, sizeof(num));
            for (int i = 1; i <= 4; i++) {
                float nextFloat = num + (3.0f * i);
                printf("Next %d float: %.2f\n", i, nextFloat);
            }
            break;
        }
        case 'i': {
            int num;
            printf("Enter an integer: ");
            scanf("%d", &num);
            printf("Integer: %d, Size: %lu byte(s)\n", num, sizeof(num));
            for (int i = 1; i <= 4; i++) {
                int nextInt = num + (3 * i);
                printf("Next %d integer: %d\n", i, nextInt);
            }
            break;
        }
        default:
            printf("Invalid input. Please enter 'c' for character, 'f' for float, or 'i' for integer.\n");
            break;
    }

    return 0;
}