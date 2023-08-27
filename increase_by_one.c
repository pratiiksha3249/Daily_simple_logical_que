#include<stdio.h>
int main()
{
   int n,i,j,c=0,a[50],num;
   printf("enter limt...");
   scanf("%d",&n);
   printf("enter array elements......\n");
   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    
   
   }
   
    for(i=0;i<n-1;i++){
        printf("%d\t",a[i]);

    }
   
   for(i=0;i<n;i++){
        printf("%d\t",a[n-1]+1);
        
        break;
   }

}

