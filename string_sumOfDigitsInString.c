/*Sum of digits in String*/

int main()
{
    char str[50];
    int i,sum=0,dc=0;
    printf("Enter string...\n");
    gets(str);
    for(i=0;str[i];i++)
    {
        if(str[i]>=48 && str[i]<=57)
            sum=sum+(str[i]-48);
    }
    if(sum>0)
        printf("\nSum of digits present in the string = %d",sum);
    else
        printf("\nSorry, digits not found\nSum = 0");
    getch();
    return 0;
}
