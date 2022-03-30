#include "unity.h"
#include "ADDRECORD.h"
#include "MODIFYRECORD.h"
#include "DELETERECORD.h"
#include "DISPLAYRECORD.h"

#define Student_Management_System

void test_addrecord(void);
void test_deleterecord(void);
void test_displayrecord(void);
void test_modifyrecord(void);

void setUp(){}
void tearDown(){}

int main()
{
UNITY_BEGIN();

RUN_TEST(test_addrecord);
RUN_TEST(test_deleterecord);
RUN_TEST(test_displayrecord);
RUN_TEST(test_modifyrecord);

return UNITY_END();
}

void test_modifyrecord(void){
TEST_ASSERT_EQUAL(1,modifyrecord());
}

void test_deleterecord(void){
TEST_ASSERT_EQUAL(1,deleterecord());
}

void test_displayrecord(void){
TEST_ASSERT_EQUAL(1,displayrecord());
}

void test_addrecord(void){
TEST_ASSERT_EQUAL(1,addrecord());
}