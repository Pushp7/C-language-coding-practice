#include<conio.h>
int main()
{
    char str[16];
    int i;
    printf("note:\n1.While entering password you can not see any characters.\n2.Spaces will not be considered.\n3.Max 15 character can be entered.\n...................\n");
    printf("\nEnter Your Password\n");
    for(i=0;i<15;i++)
    {
        str[i]=getch();
        if(str[i]==13){     //ASCII value of Enter Key is 13...
            break;
            }
        if(str[i]==' '){
            i--;
            continue;
        }
        if(str[i]==8){      //ASCII value of Backspace(\b) is 8...
            printf("\b");
            printf(" ");
            printf("\b");
            i-=2;
            continue;
        }
        putch('*');
    }
    str[i]='\0';
    printf("\nYour Password is :\n");
    for(i=0;i<strlen(str);i++)
        printf("%c",str[i]);
    getch();
    return 0;
}
