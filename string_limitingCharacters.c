main()
{
    char str[50];
    int i,l;
    printf("Enter no. of characters to be inputed (limit it)...\n");
    scanf("%d",&l);
    printf("\nMake input\n");
    for(i=0;i<l;i++)
    {
        str[i]=getch();
        printf("%c",str[i]);
    }
    str[i]='\0';
    printf("\nEntered charaters are :\n");
    for(i=0;i<l;i++)
        printf("%c",str[i]);
    getch();
    return 0;
}
