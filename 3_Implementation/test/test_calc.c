#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>
#include <math.h>

/* Modify these two lines according to the project */
#include <calc.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_sub(void);
void test_mul(void);
void test_div(void);
void test_sqr(void);
void test_sqart(void);
void test_sine(void);
void test_cosi(void);
void test_kmtom(void);
void test_mtocm(void);
void test_tang(void);
void test_cot(void);
void test_sec(void);
void test_cosec(void);
void test_ftoi(void);
void test_itocm(void);
void test_cmtom(void);
void test_ytom(void);
void test_ytocm(void);
void test_mod(void);



/* Start of the aSpplication test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */


  CU_add_test(suite,"add",test_add);
  CU_add_test(suite,"substract",test_sub);
  CU_add_test(suite,"multiply",test_mul);
  CU_add_test(suite,"divide",test_div);
  CU_add_test(suite,"square",test_sqr);
  CU_add_test(suite,"square root",test_sqart);
  CU_add_test(suite,"sine", test_sine);
  CU_add_test(suite,"cosine", test_cosi);
  CU_add_test(suite,"Kilometer_to_meter", test_kmtom);
  CU_add_test(suite,"meter_to_centimeter", test_mtocm);
  CU_add_test(suite,"tangent", test_tang);
  CU_add_test(suite,"cotangent", test_cot);
  CU_add_test(suite,"secant", test_sec);
  CU_add_test(suite,"cosecant", test_tang);
  CU_add_test(suite,"feet_to_inch", test_ftoi);
  CU_add_test(suite,"inch_to_cm", test_itocm);
  CU_add_test(suite,"cm_to_m", test_cmtom);
  CU_add_test(suite,"yard_to_m", test_ytom);
  CU_add_test(suite,"yard_to_cm", test_ytocm);
  CU_add_test(suite,"modulus",test_mod);
 
  
  
  
  

/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */
void test_add(void)
{
    CU_ASSERT_EQUAL(add(1,2), 3);
    CU_ASSERT_EQUAL(add(0,-3), -3);
}

void test_mul(void)
{
    CU_ASSERT_DOUBLE_EQUAL(mul(4.21,2), 8.420, 0);
    CU_ASSERT_DOUBLE_EQUAL(mul(-3.2,2),-6.400,0);
}
void test_div(void)
{
    CU_ASSERT_DOUBLE_EQUAL(div(6.7,2), 3.350, 0);
    CU_ASSERT_DOUBLE_EQUAL(div(6.7,0), 0, 0);
}
void test_sub(void)
{
    CU_ASSERT_EQUAL(sub(6,2), 4);
    CU_ASSERT_EQUAL(sub(1,2), -1);
}


void test_sqr(void)
{
    CU_ASSERT_DOUBLE_EQUAL(sqr(6.7) , 44.89, 0);
    CU_ASSERT_DOUBLE_EQUAL(sqr(-6.7), 44.89, 0);
}

void test_sqart(void)
{
    CU_ASSERT_DOUBLE_EQUAL(sqart(144) , 12, 0);
    CU_ASSERT_DOUBLE_EQUAL(sqart(98) , 9.899, 0.1);

}

 void test_mod(void)
{
    CU_ASSERT_DOUBLE_EQUAL(mod(10,8) , 2, 0);
   CU_ASSERT_DOUBLE_EQUAL(mod(18,5) , 3, 0);
 }

 void test_sine(void)
{
    CU_ASSERT_DOUBLE_EQUAL(sine(90) , 1, 0.1);
    CU_ASSERT_DOUBLE_EQUAL(sine(0) , 0, 0.1);
}

void test_kmtom(void)
{
    CU_ASSERT_EQUAL(kmtom(4) , 4000);
    CU_ASSERT_EQUAL(kmtom(8) , 8000);

}
void test_mtocm(void)
{
    CU_ASSERT_EQUAL(mtocm(4) , 400);
    CU_ASSERT_EQUAL(mtocm(16) , 1600);
}
void test_cos(void)
{
    CU_ASSERT_DOUBLE_EQUAL(cosi(0) , 1, 0);
    CU_ASSERT_DOUBLE_EQUAL(cosi(45) , 0.707107, 0.1);  
}
void test_tan(void)
{
    CU_ASSERT_EQUAL(tang(45) , 1, 0.1);
    CU_ASSERT_EQUAL(tang(90) , 0, 0.1);  
}
void test_cot(void)
{
    CU_ASSERT_DOUBLE_EQUAL(cot(45) , 1, 0.1);
    CU_ASSERT_DOUBLE_EQUAL(cot(90) , 0, 0.1);
}
void test_sec(void)
{
    CU_ASSERT_DOUBLE_EQUAL(sec(0) , 1, 0.1);
    CU_ASSERT_DOUBLE_EQUAL(sec(45) , 1.414214, 0.1);
}
void test_cosec(void)
{
    CU_ASSERT_DOUBLE_EQUAL(cosec(45) , 1.414214, 0.1);
    CU_ASSERT_DOUBLE_EQUAL(cosec(90) , 1, 0.1);
}
void test_ftoi(void)
{
    CU_ASSERT_EQUAL(ftoi(2) , 24);
    CU_ASSERT_EQUAL(ftoi(8) , 96);
}
void test_itocm(void)
{
    CU_ASSERT_EQUAL(itocm(2) , 5);
    CU_ASSERT_EQUAL(itocm(5) , 12);
}
void test_cmtom(void)
{
    CU_ASSERT_EQUAL(cmtom(100) , 1);
    CU_ASSERT_EQUAL(itocm(400) , 4);
}
void test_ytom(void)
{
    CU_ASSERT_EQUAL(ytom(10) , 9);
    CU_ASSERT_EQUAL(ytom(15) , 13);
}
void test_ytocm(void)
{
    CU_ASSERT_EQUAL(ytocm(5) , 457);
    CU_ASSERT_EQUAL(ytocm(2) , 182);
}


