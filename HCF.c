int main()
{
    int n1,n2,h;
    printf("Enter two numbers to find its HCF\n");
    scanf("%d%d",&n1,&n2);

    for(h=n1<n2?n1:n2; h>=1; h--)
    {
        if(n1%h==0 && n2%h==0)
            break;
    }
    printf("HCF = %d",h);
    getch();
    return 0;
}

//or,
//
//int main()
//{
//    int n1,n2,r=1,temp;
//    printf("Enter two numbers to find its HCF\n");
//    scanf("%d%d",&n1,&n2);
//    if(n1>n2)
//    {
//        temp = n1;
//        n1 = n2;
//        n2 = temp;
//    }
//    while(r!=0)
//    {
//        r=n2%n1;
//        n2=n1;
//        if(r!=0)
//            n1=r;
//    }
//
//    printf("HCF = %d",n1);
//    getch();
//    return 0;
//}
