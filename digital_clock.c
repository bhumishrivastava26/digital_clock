#include<stdio.h>
#include<time.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
    int min=0,sec=0,hour=0;
    while(1){
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t%02d : %02d : %02d",hour,min,sec);
        printf("\n");
        fflush(stdout);
        sec++;

        if(sec==60)
        {
            min+=1;
            sec=0;
        }
        
        if(min==60)
        {
            hour+=1;
            min=0;
        }

        if(hour==24)
        {
            hour=0;
            min=0;
            sec=0;
        }
        sleep(1);
    }
    return 0;

}