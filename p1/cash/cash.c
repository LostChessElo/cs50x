#include <stdio.h>

int get_change(void) 
{
    int change;
    int res;
    
    do {
        printf("Change owed: ");
        res = scanf("%d", &change);
        if (res != 1) {
            // clear buffer
            while (getchar() != '\n');
        }
        
    } while(change < 0 || res != 1);

    return change;
}

int main(void) 
{
    int c = get_change();
    int coins[] = {25, 10, 5, 1};
    int len_coins = sizeof(coins) / sizeof((coins[0]));

    int count = 0;
    for (int i = 0; i < len_coins; i++) {
        if (c >= coins[i]) {
            int result = c / coins[i];
            count += result;
            c -= result * coins[i];
        } else {
            continue;
        }
    }
    printf("%d", count);
    return 0;
}