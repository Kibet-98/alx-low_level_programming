#include "main.h"
int actual_sqrt_recursion(int n, int i);
/**
* _sqrt_recursion - returns the natural square root of a number
* @n: number to calculate the square root of
* Return: the resulting square root
*/
int _sqrt_recursion(int n)
{
    if (n < 0)
        return -1;

    return _sqrt_helper(n, 0, n);
}

int _sqrt_helper(int n, int low, int high)
{
    if (low > high)
        return -1;

    int mid = low + (high - low) / 2;
    int square = mid * mid;

    if (square == n)
        return mid;
    else if (square < n)
        return _sqrt_helper(n, mid + 1, high);
    else
        return _sqrt_helper(n, low, mid - 1);
}
