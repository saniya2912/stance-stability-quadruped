/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * main.c
 *
 * Code generation for function 'main'
 *
 */

/*************************************************************************/
/* This automatically generated example C main file shows how to call    */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/

/* Include files */
#include "main.h"
#include "rt_nonfinite.h"
#include "theta_2d_des.h"
#include "theta_2d_des_terminate.h"

/* Function Declarations */
static void argInit_12x1_real_T(double result[12]);

static void argInit_3x12_real_T(double result[36]);

static void argInit_3x1_real_T(double result[3]);

static double argInit_real_T(void);

static void main_theta_2d_des(void);

/* Function Definitions */
static void argInit_12x1_real_T(double result[12])
{
  int idx0;
  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < 12; idx0++) {
    /* Set the value of the array element.
Change this value to the value that the application requires. */
    result[idx0] = argInit_real_T();
  }
}

static void argInit_3x12_real_T(double result[36])
{
  int idx0;
  int idx1;
  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < 3; idx0++) {
    for (idx1 = 0; idx1 < 12; idx1++) {
      /* Set the value of the array element.
Change this value to the value that the application requires. */
      result[idx0 + 3 * idx1] = argInit_real_T();
    }
  }
}

static void argInit_3x1_real_T(double result[3])
{
  int idx0;
  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < 3; idx0++) {
    /* Set the value of the array element.
Change this value to the value that the application requires. */
    result[idx0] = argInit_real_T();
  }
}

static double argInit_real_T(void)
{
  return 0.0;
}

static void main_theta_2d_des(void)
{
  double h_dot_tmp[36];
  double b_theta_2d_des[12];
  double dv[12];
  double a_torso_tmp[3];
  /* Initialize function 'theta_2d_des' input arguments. */
  /* Initialize function input argument 'theta_d_des'. */
  /* Initialize function input argument 'h_dot'. */
  argInit_3x12_real_T(h_dot_tmp);
  /* Initialize function input argument 'h'. */
  /* Initialize function input argument 'a_torso'. */
  argInit_3x1_real_T(a_torso_tmp);
  /* Initialize function input argument 'f'. */
  /* Call the entry-point 'theta_2d_des'. */
  argInit_12x1_real_T(dv);
  theta_2d_des(dv, h_dot_tmp, h_dot_tmp, a_torso_tmp, argInit_real_T(),
               a_torso_tmp, b_theta_2d_des);
}

int main(int argc, char **argv)
{
  (void)argc;
  (void)argv;
  /* The initialize function is being called automatically from your entry-point
   * function. So, a call to initialize is not included here. */
  /* Invoke the entry-point functions.
You can call entry-point functions multiple times. */
  main_theta_2d_des();
  /* Terminate the application.
You do not need to do this more than one time. */
  theta_2d_des_terminate();
  return 0;
}

/* End of code generation (main.c) */
