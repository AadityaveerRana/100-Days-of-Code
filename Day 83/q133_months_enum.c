// Q133: Enum for months; print the number of days in each month
#include <stdio.h>

enum Month { JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    const char *names[] = {"", "January", "February", "March", "April", "May", "June",
                           "July", "August", "September", "October", "November", "December"};
    for (int m = JAN; m <= DEC; m++) {
        int days;
        switch (m) {
            case FEB: days = 28; break;          // 29 in a leap year
            case APR: case JUN: case SEP: case NOV: days = 30; break;
            default: days = 31;
        }
        printf("%-10s : %d days\n", names[m], days);
    }
    return 0;
}
