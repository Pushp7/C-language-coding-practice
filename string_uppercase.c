main()
{
    char c[20];
    int i;
    printf("Enter any string(in lowercase or in camelcase)\n\n");
    gets(c);
    for(i=0;c[i];i++){
      if(c[i]>='a' && c[i]<='z')
        c[i]=c[i]-32;
        //printf("%c",c[i]);    //way 1 to print
    }
    printf("\n");
    puts(c);                    //way 2 to print
    getch();
    return 0;
}
