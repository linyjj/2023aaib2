#include <string.h>
#include <stdio.h>
int main()
{
    char line[20];
    scanf("%s",line);
    int N=strlen(line);
    int bad=0;
    for(int i=0;i<N;i++){
        if(line[i]!=line[N-1-i]) bad=1;
    }
    /// 0123456789 共十個數字
    ///^          ^ 相加=9
    /// 1        8
    ///  2      7
    ///   3    6
    ///    4  5
    ///   3    6
    ///  2      7
    /// 1        8
    if(bad==1) printf("NO\n");
    else printf("YES\n");
}
