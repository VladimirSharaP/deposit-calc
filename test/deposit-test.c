#include <stdio.h>
#include <stdlib.h>
#include "ctest.h"
#include "deposit.h"

CTEST(Input_data, test1){
    ASSERT_EQUAL(-1, check(-4, 9000));
}
