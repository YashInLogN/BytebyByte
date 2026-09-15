#include <stdio.h>
#include <string.h>

int main() {
    char shape[30];
    printf("Enter a shape: ");
    scanf("%s", shape);
    if(strcmp(shape, "circle") == 0) {
        printf("You entered a circle.\n");
    } else if(strcmp(shape, "square") == 0) {
        printf("You entered a square.\n");
    } else if(strcmp(shape, "triangle") == 0) {
        printf("You entered a triangle.\n");
    } else {
        printf("Unknown shape.\n");
    }
    return 0;
}