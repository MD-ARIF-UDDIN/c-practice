#include<stdio.h>
int main(){
int n,i,j,ar[40];
scanf("%d",&n);
for(i=1;i<=n;i++){
scanf("%d",&ar[i]);
}
for(i=1;i<=n;i++){
    printf("%d-",i);
    for(j=1;j<=n;j++){
        if(ar[i]!=j)
        printf("%d ",ar[j]);
    }
    printf("\n");
}
}
