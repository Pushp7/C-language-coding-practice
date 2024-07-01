main()
{
    char c[20];
    int i;
    printf("Enter any string(in lowercase or in camelcase)\n\n");
    gets(c);
    //for mix uppercase/lowecase
    for(i=0;c[i];i++){
      if(c[i]>='a' && c[i]<='z')
        c[i]=c[i]-32;
      else
        c[i]=c[i]+32;
    }
    printf("in mix_case    :  ");
    puts(c);
    //for Uppercase
    for(i=0;c[i];i++){
      if(c[i]>='a' && c[i]<='z')
        c[i]=c[i]-32;
    }
    printf("in Uppercase   :  ");
    puts(c);
    //for lowercase
    for(i=0;c[i];i++){
      if(c[i]>='A' && c[i]<='Z')
        c[i]=c[i]+32;
    }
    printf("in Lowercase   :  ");
    puts(c);

    getch();
    return 0;
}
