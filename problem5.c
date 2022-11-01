#include<stdio.h>
int main(){
int n,i,j,ar[40],target,flag;
scanf("%d",&n);
for(i=1;i<=n;i++){
scanf("%d",&ar[i]);
}
scanf("%d",&target);
for(i=1;i<=n;i++){
    for(j=i+1;j<=n;j++){
        if((ar[i]+ar[j])==target){
            flag=1;
        }
        else
            flag=0;
    }
}
if(flag==1){
    printf("yes");
}
else
    printf("no");
}
