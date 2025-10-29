#include <stdio.h>
int main(){
    int n,a[100],sum;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&sum);
    int count=0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]+a[j]==sum){
            printf("(%d %d)\n",a[i],a[j]);
            count=1;
        }
    }
    }
    if(count==0) printf("there are no pairs having sum of %d.",sum);

}
