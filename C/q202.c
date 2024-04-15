#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int history[1000];

int get_next(int n)
{
    int result = 0;
    while (n > 0)
    {
        result += (n % 10) * (n % 10);
        n /= 10;
    }
    return result;
}
bool contains(int n, int history[], int idx)
{
    for (int i = 0; i < idx; i++)
    {
        if (history[i] == n)
        {
            return true;
        }
    }
    return false;
}

// T: O(logN)
// S: O(logN)
bool isHappy1(int n)
{
    int idx = 0;
    while (!contains(n, history, idx))
    {
        history[idx] = n;
        idx++;
        n = get_next(n);
    }
    return n == 1;
}

// Floyd's Cycle-Finding Algorithm
// T: O(logN)
// S: O(1)
bool isHappy2(int n)
{
    int slow = n;
    int fast = n;
    do
    {
        slow = get_next(slow);
        fast = get_next(get_next(fast));
    } while (slow != fast);

    return fast == 1;
}

int main()
{
    int num1 = 19;
    int num2 = 2;
    if (isHappy1(num1))
    {
        printf("num1: %d IS a happy number.\n", num1);
    }
    else
    {
        printf("num1: %d IS NOT a happy number.\n", num1);
    }
    if (isHappy1(num2))
    {
        printf("num2: %d IS a happy number.\n", num2);
    }
    else
    {
        printf("num2: %d IS NOT a happy number.\n", num2);
    }
    if (isHappy2(num1))
    {
        printf("num1: %d IS a happy number.\n", num1);
    }
    else
    {
        printf("num1: %d IS NOT a happy number.\n", num1);
    }
    if (isHappy2(num2))
    {
        printf("num2: %d IS a happy number.\n", num2);
    }
    else
    {
        printf("num2: %d IS NOT a happy number.\n", num2);
    }
    return 0;
}