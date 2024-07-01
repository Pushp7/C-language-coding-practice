#include<windows.h>
void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

main()
{
    int x=30,y=10;
    char ch;
    gotoxy(x,y);
    printf("gotoxy(%d,%d)",x,y);
    while(1)
    {
        ch=getch();
        switch(ch)
        {
            case 72:    //ASCII value for 'up' arrow key
                y--;
                break;
            case 80:    //'down' key
                y++;
                break;
            case 75:    //'left' key
                x--;
                break;
            case 77:    //'right' key
                x++;
                break;

            case 'w':
                y--;
                break;
            case 's':
                y++;
                break;
            case 'a':
                x--;
                break;
            case 'd':
                x++;
                break;
            case 27:    //27 is ASCII of 'Esc'(escape) key
                exit(0);
        }
        system("cls");
        gotoxy(x,y);
        printf("gotoxy(%d,%d)",x,y);
    }
}
