// Q99: Change date format from dd/mm/yyyy to dd-Mon-yyyy (e.g. 15/04/2024 -> 15-Apr-2024)
#include <stdio.h>

int main() {
    const char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                            "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int d, m, y;
    scanf("%d/%d/%d", &d, &m, &y);
    if (m < 1 || m > 12) {
        printf("Invalid month\n");
        return 0;
    }
    printf("%02d-%s-%d\n", d, months[m - 1], y);
    return 0;
}
