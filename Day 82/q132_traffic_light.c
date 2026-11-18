// Q132: Traffic light enum - print Stop / Wait / Go
#include <stdio.h>

enum Light { RED, YELLOW, GREEN };

int main() {
    int choice;
    printf("Enter light (0 = RED, 1 = YELLOW, 2 = GREEN): ");
    scanf("%d", &choice);
    enum Light light = (enum Light)choice;
    switch (light) {
        case RED:    printf("Stop\n"); break;
        case YELLOW: printf("Wait\n"); break;
        case GREEN:  printf("Go\n");   break;
        default:     printf("Invalid light\n");
    }
    return 0;
}
