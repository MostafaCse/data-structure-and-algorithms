 //nestle loop
 #include<stdio.h>
int main ()
{
int i,j,Number;
printf("enter ur n :");
scanf("%d",&Number);
for(i=1; i<=Number; i++){
for(j=1; j<i; j++)
printf("%d",i);
printf("%d\n",j);
}
}
