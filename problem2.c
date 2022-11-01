#include<stdio.h>
int main(){
int n,i,ar[40],q,index,value;
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%d",&ar[i]);
}
scanf("%d",&q);
for(i=1;i<=q;i++){
    scanf("%d %d",&index,&value);
    ar[index]=ar[index]+value;
}
for(int i=0;i<n;i++){
printf("%d ",ar[i]);
}
}
