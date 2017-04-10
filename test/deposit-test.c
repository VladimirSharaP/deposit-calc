#include <stdio.h>
#include <stdlib.h>
#include "ctest.h"
#include "deposit.h"

CTEST(Input_data, test1){
    ASSERT_EQUAL(-1, check(-4, 9000));
}

CTEST(Input_data, test2){
    ASSERT_EQUAL(-1, check(0, 9000));
}

CTEST(Input_data, test3){
    ASSERT_EQUAL(-1, check(365, 8000));
}

CTEST(Input_data, test4){
    ASSERT_EQUAL(-1, check(366, 50000));
}

CTEST(Input_data, test5){
    ASSERT_EQUAL(-1, check(-1, 10000));
}

CTEST(Input_data, test6){
    ASSERT_EQUAL(0, check(0, 60000));
}

CTEST(Input_data, test7){
    ASSERT_EQUAL(0, check(365, 30000));
}

CTEST(Input_data, test8){
    ASSERT_EQUAL(-1, check(366, 40000));
}


CTEST(Income, test1){
    ASSERT_EQUAL(-10000, interest_income(30, 100000));
}

CTEST(Income, test2){
    ASSERT_EQUAL(-10000, interest_income(30, 100001));
}

CTEST(Income, test3){
    ASSERT_EQUAL(2000, interest_income(31, 100000));
}

CTEST(Income, test4){
    ASSERT_EQUAL(3000, interest_income(31, 100001));
}

CTEST(Income, test5){
    ASSERT_EQUAL(2000, interest_income(120, 100000));
}

CTEST(Income, test6){
    ASSERT_EQUAL(3000, interest_income(120, 100001));
}

CTEST(Income, test7){
    ASSERT_EQUAL(6000, interest_income(121, 100000));
}

CTEST(Income, test8){
    ASSERT_EQUAL(8000, interest_income(121, 100001));
}

CTEST(Income, test9){
    ASSERT_EQUAL(6000, interest_income(240, 100000));
}

CTEST(Income, test10){
    ASSERT_EQUAL(8000, interest_income(240, 100001));
}

CTEST(Income, test11){
    ASSERT_EQUAL(12000, interest_income(241, 100000));
}

CTEST(Income, test12){
    ASSERT_EQUAL(15000, interest_income(241, 100001));
}

CTEST(Income, test13){
    ASSERT_EQUAL(12000, interest_income(365, 100000));
}

CTEST(Income, test14){
    ASSERT_EQUAL(15000, interest_income(365, 100001));
}
