#include "unity.h"
#include <calculator_operations.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "calculator_operations.h"

/* Prototypes for all the test functions */

void test_kmtom(void);
void test_mtocm(void);
void test_ftoi(void);
void test_itocm(void);
void test_cmtom(void);
void test_ytom(void);
void test_ytocm(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
 
  RUN_TEST(test_kmtom);
  RUN_TEST(test_mtocm);
  RUN_TEST(test_ftoi);
  RUN_TEST(test_itocm);
  RUN_TEST(test_cmtom);
  RUN_TEST(test_ytom);
  RUN_TEST(test_ytocm);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 


void test_kmtom(void) {
  TEST_ASSERT_EQUAL(1000, kmtom(1));
  
    /* Dummy fail*/
  TEST_ASSERT_EQUAL(1004, kmtom(2));
 }
 
void test_mtocm(void) {
  TEST_ASSERT_EQUAL(200, mtocm(2));
  
  
    /* Dummy fail*/
  TEST_ASSERT_EQUAL(201, mtocm(1));
 }
 
void test_ftoi(void) {
  TEST_ASSERT_EQUAL(36, ftoi(3));
  
   /* Dummy fail*/
  TEST_ASSERT_EQUAL(37, ftoi(2));
}
 
 void test_itocm(void) {
  TEST_ASSERT_EQUAL(10, itocm(4));
   
    /* Dummy fail*/
  TEST_ASSERT_EQUAL(11, itocm(1));
}

void test_cmtom(void) {
  TEST_ASSERT_EQUAL(0, cmtom(5));
  
   /* Dummy fail*/
  TEST_ASSERT_EQUAL(10, cmtom(3));
}

void test_ytom(void) {
  TEST_ASSERT_EQUAL(5, ytom(6));
  
   /* Dummy fail*/
  TEST_ASSERT_EQUAL(5, ytom(1));
 }
 
 void test_ytocm(void) {
  TEST_ASSERT_EQUAL(640, ytocm(7));
   
    /* Dummy fail*/
  TEST_ASSERT_EQUAL(641, ytocm(1));
 }
