#include <stdio.h>
#include <unistd.h>

int turnSwich()
{
    static int count=0, flag=0;
    printf("Switch ");
    if(flag) printf("On\n");
    else printf("Off\n");
    flag = (flag+1)%2;
    return count++;
}
int main()
{
    int i=0;
    while(turnSwich()<10)
    {
        i++;
        printf("... %d 초 sleep\n", i);
        sleep(1);
    }
    return 0;
}