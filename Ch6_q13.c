#include<stdio.h>
#include<conio.h>
int main()
{
  int hr;
    for(hr=0;hr<24;hr++)
    {
        if(hr==0)
            printf("\n12 AM (Mid-night)");
        else if(hr>0 && hr<12)
            printf("\n%d AM",hr);
        else if(hr==12)
            printf("\n%d PM (Noon)",hr);
        else if(hr>12 && hr<24)
            printf("\n%d PM",hr-12);
    }
    getch();
    return 0;
}
