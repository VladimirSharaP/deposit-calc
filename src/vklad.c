#include <stdio.h>
#include "deposit.h"

int main()
{
    int period, amound, iincome;
    printf("Input period and amound:");
    scanf("%d %d", &period, &amound);
    if(check(period, amound))
    {
        return 0;
    }
    iincome=interest_income(period, amound);
    printf("Interest income: %d\n", iincome);
    return 0;
}