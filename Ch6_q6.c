int main()
{
    int n,i,t;
    printf("Enter number to print table\n");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        t=n*i;
        printf("\n%d * %d = %d",n,i,t);
    }
    getch();
    return 0;
}
