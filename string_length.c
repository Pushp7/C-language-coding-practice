#include<string.h>
main()
{
    char c[20];
    int length;
    printf("Enter any String...  ");
    gets(c);
    //length=strlen(c);
    for(length=0;c[length]!='\0';length++);
     printf("length= %d",length);
    getch();
    return 0;
}
