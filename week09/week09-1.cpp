#include <stdio.h>
int myAdd(int a,int b){///�禡���w�q
    return a+b; ///�i�Ө�Ӽ�,�X�h�@�Ӽ�
}
void myPrint(int a){ ///�禡�w�q �i�Ӥ@��
    for(int i=1;i<=a;i++) printf("*");
    printf("\n");
}
int main() ///main()�禡
{
    int ans=myAdd(3,4); ///�禡�I�s
    printf("Hello ans:%d\n",ans);
    myPrint(ans); ///�禡�I�s(�ХL���ڰ���)
}
