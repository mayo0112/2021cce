#include <stdio.h>
int main()
{
    int i; ///1973年的C發明者寫法，1989的ANSI C規範
    for(i=0;i<=3;i++){
    printf("有幾次呢?\n");
    } ///課本寫法不好

    ///1988/1989 新版的C++/C 寫法
    for(int i=0;i<3;i++){
    printf("老師推薦的寫法，有幾次?\n");
    }
}
