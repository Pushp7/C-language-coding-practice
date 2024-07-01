/*Eliminate same consecutive character in a string*/

main()
{
    char str[50];
    int i,j;
    printf("Enter string\n");
    gets(str);
    for(i=0;str[i];i++)
        if(str[i]==str[i+1])
        {
            for(j=i;str[j];j++)
                str[j]=str[j+1];
            i--;
        }
    puts(str);

    getch();
    return 0;
}
