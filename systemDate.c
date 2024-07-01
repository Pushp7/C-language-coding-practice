#include<windows.h>
int main()
{
    SYSTEMTIME date;
    GetSystemTime(&date);
    printf("Date : %10d / %d / %d",date.wDay,date.wMonth,date.wYear);
    printf("\nDay of week : %2d",date.wDayOfWeek);
    getch();
}


/*predefined structure in windows.h header file */

//    typedef struct _SYSTEMTIME{
//        WORD wYear;
//        WORD wMonth;
//        WORD wDayOfWeek;
//        WORD wDay;
//        WORD wHour;
//        WORD wMinute;
//        WORD wSecond;
//        WORD wMilliseconds;
//    }SYSTEMTIME;
