#include <stdio.h>
int a,b,reminder,hour,extra = 0;
int solv()
{
    while(reminder >= b)
    {
        hour += reminder / b;
        reminder = (reminder / b) + (reminder % b);
    }
}
int main()
{
    scanf("%d %d", &a, &b);
    hour = a;
    reminder = a;
    solv();
    printf("%d\n",hour);
    return 0;
}
