#include <stdio.h>
int isPrime (int n){
    for(int i=2;i<n;i++){
        if(n%1==0) return 0;
    }
    return 1;
}
int main()
{
    printf("��J1�ӼƦr:");
    int n;
    scanf("%d",&n);
    int ans=0;
    for(int i=2;i<=n;i++){
        if(isPrime(i)) {
            printf("%d ",i);
            ans++;
        }
    }
    printf("�`�@��%d�ӽ��\n",ans);
}
