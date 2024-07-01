main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    printf("Enter matrix-1 elements\n");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            printf(" a(%d,%d) :  ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nEnter matrix-2 elements\n");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            printf(" b(%d,%d) :  ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }

    printf("\nSum is:\n");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            printf(" %d   ",c[i][j]);
        }
        printf("\n\n");
    }
    getch();
}
