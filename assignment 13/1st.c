main()
{
    int i,j,a[3][3],b[3][3],s;
    printf("enter the 9 elements of first matrix :\n");
    for(i=0;i<=2;i++)
      for(j=0;j<=2;j++)
        scanf("%d",&a[i][j]);
    printf("enter the 9 elements of second matrix :\n");
    for(i=0;i<=2;i++)
      for(j=0;j<=2;j++)
        scanf("%d",&b[i][j]);
    printf("sum of 3*3 matrix is :\n");
    for(i=0;i<=2;i++)
    {
      for(j=0;j<=2;j++)
      {
        s=a[i][j]+b[i][j];
        printf("%d ",s);
      }  
      printf("\n");
    }
    getch();
}