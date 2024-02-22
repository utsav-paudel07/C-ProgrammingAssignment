
//calculate electricity bill as per following formula:
// Rs 80 for first 20 units, Rs 8 for next 100 units, Rs 10 per unit for anything more.
#include <stdio.h>
int main() {
    int units;
    float bill = 0;

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 20) {
        bill = units * 80;
    } else if (units <= 120) {
        bill = 20 * 80 + (units - 20) * 8;
    } else {
        bill = 20 * 80 + 100 * 8 + (units - 120) * 10;
    }

    printf("Electricity bill: Rs. %.2f\n", bill);

    return 0;
}

