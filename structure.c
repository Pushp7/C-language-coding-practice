#include<stdio.h>
union id
{
    char name[15];
    int age;
    char bgroup[4];
};
main()
{
    union id a;
    printf("Enter your name :\n");
    gets(a.name);
    printf("\nEnter your age :\n");
    scanf("%d",&a.age);
    fflush(stdin);
    printf("\nEnter your blood-group\n");
    gets(a.bgroup);

    printf("\nName : %s\n",a.name);
    printf("Age : %d\n",a.age);
    printf("Blood-Group : %s\n",a.bgroup);
    getch();
    return 0;
}
