// Q134: Enum with SUCCESS, FAILURE, TIMEOUT - print messages accordingly
#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

void printMessage(enum Status s) {
    switch (s) {
        case SUCCESS: printf("Operation completed successfully.\n"); break;
        case FAILURE: printf("Operation failed.\n"); break;
        case TIMEOUT: printf("Operation timed out.\n"); break;
    }
}

int main() {
    for (int s = SUCCESS; s <= TIMEOUT; s++) printMessage((enum Status)s);
    return 0;
}
