#include <cstdio>
#ifdef _MSC_VER
#pragma message ("_MSC_VER value is: " _CRT_STRINGIZE(_MSC_VER))
#endif 


#if (defined _MSC_VER) && (_MSC_VER < 1938)

#error "due to the bug of MSVC, this current version of visual studio is not supported. Please update. See https://developercommunity.visualstudio.com/t/In-arm64_neonh-vsqaddb_u8-vsqaddh_u16/10271747?sort=newest"
#endif

int main(){
    printf("hello github action\n");

    return 0;
}