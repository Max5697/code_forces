#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int result = 0;
    while(n--)
    {
        int a, b, c;
        int sum;
        scanf("%d %d %d", &a, &b, &c);
        sum = a + b + c;
        if(sum >= 2)
        {
            result = result + 1;
        }
    }
    printf("%d", result);
}
