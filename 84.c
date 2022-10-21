#include<stdio.h>

int main(){

 int p,q,r;

  printf("Enter Value of P,Q,R = ");
 scanf("%d%d%d",&p,&q,&r);
 int a[p][q],b[q][r],i,j,k,result[p][q];
 printf("Enter %d * %d Matrix\n",p,q);

 for(i=0;i<p;i++){
    for(j=0;j<q;j++){
        scanf("%d",&a[i][j]);
    }
 }
 printf("Enter %d * %d Matrix\n",q,r);
 for(i=0;i<q;i++){
    for(j=0;j<r;j++){
        scanf("%d",&b[i][j]);
    }
 }
 for(int i=0;i<p;i++){
    for(int j=0;j<r;j++){
        result[i][j]=0;
        for(int k=0;k<q;k++){
            result[i][j] += a[i][k]*b[k][j];
        }
    }
 }
 printf("After Matrix Multiplication: \n");
 for(i=0;i<p;i++){
    for(j=0;j<r;j++){
        printf("%d ",result[i][j]);
    }
    printf("\n");
 }

return 0;

}
