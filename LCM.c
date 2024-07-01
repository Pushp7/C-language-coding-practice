int main()
{
    int n1,n2,L;
    printf("Enter two numbers to find its LCM\n");
    scanf("%d%d",&n1,&n2);
    for(L=n1>n2?n1:n2;L<=n1*n2;L++)
        if(L%n1==0 && L%n2==0)
            break;

    printf("LCM = %d",L);
    getch();
    return 0;
}
