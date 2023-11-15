#include <stdio.h>
#include <windows.h>


int main()
{
    int hours;
    int minutes;
    int seconds;

    int ice = 1000;

    printf("set timer :\n Hours :");
    scanf("%d",&hours);
    printf("minutes :");
    scanf("%d",&minutes);
    printf("seconds :");
    scanf("%d",&seconds);

    if(hours > 23 || minutes > 60 || seconds > 60)
    {
        printf("ERROR");
        exit(0);
    }

    while (1)
    {
        seconds++;
        if (seconds == 60)
        {
            seconds = 0;
            minutes++;
        }

        if (minutes == 60)
        {
            minutes = 0;
            hours++;
        }
        if (hours == 24)
        {
            hours = 0; 
        }

        printf("\n clock :");
        printf("\n %02d:%02d:%02d",hours,minutes,seconds);
        Sleep(ice);
        
        system ("cls");
        
        
    }
    
    return (0);



}
