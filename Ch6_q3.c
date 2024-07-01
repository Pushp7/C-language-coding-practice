int main()
{
    int i;
    float n,fact,sum=0;
    for(n=1;i<=7;n++)
    {
        fact=1;
        for(i=1;i<=n;i++)
        {
            fact *= i;
        }
        sum += n/fact;
    }
    printf("Sum of series = %f\n",sum);
    getch();
    return 0;
}
