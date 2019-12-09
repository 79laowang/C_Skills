/*------------------------------------------------------------------------------
* File Name:   debug-switch.c
* Purpose:    
*
* Author:      Ke Wang
*
* Created:     2019-12-09
* Copyright:   (c) Ke Wang 2019
* Licence:     <your licence>
*-----------------------------------------------------------------------------*/

#include <stdio.h>
#define DEBUG 1
#if defined(DEBUG) && DEBUG > 0
#define DEBUG_PRINT(fmt, args...) fprintf(stderr, "DEBUG: %s:%d:%s(): " fmt, \
    __FILE__, __LINE__, __func__, ##args)
#else
#define DEBUG_PRINT(fmt, args...) /* Don't do anything in release builds */
#endif

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int i;
    for (i = 0; i < 5; i++) {
        DEBUG_PRINT("before changed: %d\n", array[i]);
        array[i]++;
        DEBUG_PRINT("after changed: %d\n", array[i]);
    }

    return (0);
}
