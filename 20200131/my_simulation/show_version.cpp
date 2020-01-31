#include <stdio.h>
namespace my_util{

  void show_version(){
#define GET_CHAR_FROM_MACRO_(str)#str
#define GET_CHAR_FROM_MACRO(str) GET_CHAR_FROM_MACRO_(str)

    printf("version info:\n");
#ifdef _COMMIT_ID
    printf("  %s\n", GET_CHAR_FROM_MACRO(_COMMIT_ID));
#endif
#ifdef _COMMIT_AUTHOR
    printf("  %s\n", GET_CHAR_FROM_MACRO(_COMMIT_AUTHOR));
#endif
#ifdef _COMMIT_DATE
    printf("  %s\n", GET_CHAR_FROM_MACRO(_COMMIT_DATE));
#endif
    printf("\n");

#undef GET_CHAR_FROM_MACRO
  }
}
