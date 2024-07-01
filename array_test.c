main()
{
    int i,a[10]={10,11,81,21,52,19,36,89,20,54};
    for(i=0;i<=4;i++)
        printf("%d  ",a[i]);
    printf("\nSize of int using this compiler = %d",sizeof(int));
    printf("\nLength of array = %d",sizeof(a)/sizeof(int));
    printf("\nMemory size allocated to array = %d bytes",sizeof(a));
    getch();
}
