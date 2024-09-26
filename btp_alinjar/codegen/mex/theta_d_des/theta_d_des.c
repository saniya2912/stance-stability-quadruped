/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * theta_d_des.c
 *
 * Code generation for function 'theta_d_des'
 *
 */

/* Include files */
#include "theta_d_des.h"
#include "eig.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "theta_d_des_data.h"
#include "vAllOrAny.h"
#include "xscal.h"
#include "xzsvdc.h"
#include "mwmathutil.h"
#include <math.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = {
    22,            /* lineNo */
    "theta_d_des", /* fcnName */
    "C:\\Users\\Saniya\\OneDrive\\Documents\\Robotics\\Delhi\\Quadruped robot "
    "Simmechanics\\btp_alinjar\\theta_d_des.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI = {
    28,            /* lineNo */
    "theta_d_des", /* fcnName */
    "C:\\Users\\Saniya\\OneDrive\\Documents\\Robotics\\Delhi\\Quadruped robot "
    "Simmechanics\\btp_alinjar\\theta_d_des.m" /* pathName */
};

static emlrtRSInfo ic_emlrtRSI = {
    19,     /* lineNo */
    "pinv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\pinv.m" /* pathName
                                                                        */
};

static emlrtRSInfo jc_emlrtRSI = {
    42,         /* lineNo */
    "eml_pinv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\pinv.m" /* pathName
                                                                        */
};

static emlrtRSInfo kc_emlrtRSI = {
    46,         /* lineNo */
    "eml_pinv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\pinv.m" /* pathName
                                                                        */
};

static emlrtRSInfo lc_emlrtRSI = {
    53,         /* lineNo */
    "eml_pinv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\pinv.m" /* pathName
                                                                        */
};

static emlrtRSInfo mc_emlrtRSI = {
    68,         /* lineNo */
    "eml_pinv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\pinv.m" /* pathName
                                                                        */
};

static emlrtRSInfo nc_emlrtRSI = {
    69,         /* lineNo */
    "eml_pinv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\pinv.m" /* pathName
                                                                        */
};

static emlrtRSInfo oc_emlrtRSI = {
    72,         /* lineNo */
    "eml_pinv", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\matfun\\pinv.m" /* pathName
                                                                        */
};

static emlrtRSInfo pc_emlrtRSI = {
    53,    /* lineNo */
    "svd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m" /* pathName
                                                                          */
};

static emlrtRSInfo qc_emlrtRSI = {
    108,          /* lineNo */
    "callLAPACK", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\svd.m" /* pathName
                                                                          */
};

static emlrtRSInfo rc_emlrtRSI = {
    34,       /* lineNo */
    "xgesvd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgesvd.m" /* pathName */
};

static emlrtRSInfo td_emlrtRSI =
    {
        46,    /* lineNo */
        "eps", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2021a\\toolbox\\eml\\lib\\matlab\\elmat\\eps.m" /* pathName
                                                                          */
};

static emlrtRSInfo ud_emlrtRSI = {
    63,      /* lineNo */
    "xgemm", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+blas\\xgemm."
    "m" /* pathName */
};

static emlrtRSInfo vd_emlrtRSI = {
    65,      /* lineNo */
    "xgemm", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "refblas\\xgemm.m" /* pathName */
};

static emlrtRSInfo wd_emlrtRSI = {
    128,     /* lineNo */
    "xgemm", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "refblas\\xgemm.m" /* pathName */
};

static emlrtRSInfo xd_emlrtRSI = {
    135,     /* lineNo */
    "xgemm", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2021a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "refblas\\xgemm.m" /* pathName */
};

/* Function Definitions */
void theta_d_des(const emlrtStack *sp, const real_T hLF[9], const real_T hRB[9],
                 const real_T hLB[9], const real_T h_dotLF[9],
                 const real_T hRF[9], const real_T h_dotRF[9],
                 const real_T v_torso[3], const real_T h_dotRB[9],
                 const real_T h_dotLB[9], real_T tddRF[3], real_T tddLF[3],
                 real_T tddRB[3], real_T tddLB[3], real_T h[36],
                 real_T h_dot[36], real_T b_theta_d_des[12], real_T *M)
{
  static const int32_T iv[2] = {12, 3};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack st;
  creal_T D[144];
  creal_T V[144];
  real_T A_tmp[144];
  real_T C[36];
  real_T U[36];
  real_T b_A_tmp[36];
  real_T b_V[9];
  real_T S[3];
  real_T absx;
  real_T d;
  real_T d1;
  int32_T ar;
  int32_T br;
  int32_T cr;
  int32_T exponent;
  int32_T h_tmp;
  int32_T ib;
  int32_T ic;
  int32_T r;
  int32_T vcol;
  boolean_T p;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  /*  */
  *M = 4.5253716694115047;
  /*  */
  for (r = 0; r < 3; r++) {
    h[3 * r] = hRF[3 * r];
    vcol = 3 * (r + 3);
    h[vcol] = hLF[3 * r];
    h_tmp = 3 * (r + 6);
    h[h_tmp] = hRB[3 * r];
    br = 3 * (r + 9);
    h[br] = hLB[3 * r];
    ar = 3 * r + 1;
    h[ar] = hRF[ar];
    h[vcol + 1] = hLF[ar];
    h[h_tmp + 1] = hRB[ar];
    h[br + 1] = hLB[ar];
    ar = 3 * r + 2;
    h[ar] = hRF[ar];
    h[vcol + 2] = hLF[ar];
    h[h_tmp + 2] = hRB[ar];
    h[br + 2] = hLB[ar];
  }
  for (r = 0; r < 3; r++) {
    for (vcol = 0; vcol < 12; vcol++) {
      b_A_tmp[vcol + 12 * r] = h[r + 3 * vcol];
    }
  }
  for (r = 0; r < 12; r++) {
    absx = b_A_tmp[r];
    d = b_A_tmp[r + 12];
    d1 = b_A_tmp[r + 24];
    for (vcol = 0; vcol < 12; vcol++) {
      A_tmp[r + 12 * vcol] =
          (absx * h[3 * vcol] + d * h[3 * vcol + 1]) + d1 * h[3 * vcol + 2];
    }
  }
  st.site = &emlrtRSI;
  eig(&st, A_tmp, V, D);
  /* coder.extrinsic('chooseJVoptimize'); */
  for (r = 0; r < 3; r++) {
    h_dot[3 * r] = h_dotRF[3 * r];
    vcol = 3 * (r + 3);
    h_dot[vcol] = h_dotLF[3 * r];
    h_tmp = 3 * (r + 6);
    h_dot[h_tmp] = h_dotRB[3 * r];
    br = 3 * (r + 9);
    h_dot[br] = h_dotLB[3 * r];
    ar = 3 * r + 1;
    h_dot[ar] = h_dotRF[ar];
    h_dot[vcol + 1] = h_dotLF[ar];
    h_dot[h_tmp + 1] = h_dotRB[ar];
    h_dot[br + 1] = h_dotLB[ar];
    ar = 3 * r + 2;
    h_dot[ar] = h_dotRF[ar];
    h_dot[vcol + 2] = h_dotLF[ar];
    h_dot[h_tmp + 2] = h_dotRB[ar];
    h_dot[br + 2] = h_dotLB[ar];
  }
  /* theta_d_des=chooseJVoptimize(h,h_dot,v_torso, M); */
  /*   */
  st.site = &b_emlrtRSI;
  b_st.site = &ic_emlrtRSI;
  memset(&C[0], 0, 36U * sizeof(real_T));
  c_st.site = &jc_emlrtRSI;
  d_st.site = &f_emlrtRSI;
  e_st.site = &g_emlrtRSI;
  p = flatVectorAllOrAny(b_A_tmp, iv);
  if (!p) {
    for (r = 0; r < 36; r++) {
      C[r] = rtNaN;
    }
  } else {
    c_st.site = &kc_emlrtRSI;
    d_st.site = &pc_emlrtRSI;
    e_st.site = &qc_emlrtRSI;
    f_st.site = &rc_emlrtRSI;
    xzsvdc(&f_st, b_A_tmp, U, S, b_V);
    c_st.site = &lc_emlrtRSI;
    d_st.site = &td_emlrtRSI;
    absx = muDoubleScalarAbs(S[0]);
    if ((!muDoubleScalarIsInf(absx)) && (!muDoubleScalarIsNaN(absx))) {
      if (absx <= 2.2250738585072014E-308) {
        absx = 4.94065645841247E-324;
      } else {
        frexp(absx, &exponent);
        absx = ldexp(1.0, exponent - 53);
      }
    } else {
      absx = rtNaN;
    }
    absx *= 12.0;
    r = 0;
    vcol = 0;
    while ((vcol < 3) && (S[vcol] > absx)) {
      r++;
      vcol++;
    }
    if (r > 0) {
      vcol = 1;
      c_st.site = &mc_emlrtRSI;
      if (r > 2147483646) {
        d_st.site = &i_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }
      for (h_tmp = 0; h_tmp < r; h_tmp++) {
        c_st.site = &nc_emlrtRSI;
        e_xscal(&c_st, 1.0 / S[h_tmp], b_V, vcol);
        vcol += 3;
      }
      c_st.site = &oc_emlrtRSI;
      d_st.site = &ud_emlrtRSI;
      for (cr = 0; cr <= 33; cr += 3) {
        vcol = cr + 1;
        h_tmp = cr + 3;
        e_st.site = &vd_emlrtRSI;
        if (vcol <= h_tmp) {
          memset(&C[vcol + -1], 0, ((h_tmp - vcol) + 1) * sizeof(real_T));
        }
      }
      br = 0;
      for (cr = 0; cr <= 33; cr += 3) {
        ar = -1;
        br++;
        h_tmp = br + 12 * (r - 1);
        e_st.site = &wd_emlrtRSI;
        if ((br <= h_tmp) && (h_tmp > 2147483635)) {
          f_st.site = &i_emlrtRSI;
          check_forloop_overflow_error(&f_st);
        }
        for (ib = br; ib <= h_tmp; ib += 12) {
          vcol = cr + 1;
          exponent = cr + 3;
          e_st.site = &xd_emlrtRSI;
          for (ic = vcol; ic <= exponent; ic++) {
            C[ic - 1] += U[ib - 1] * b_V[(ar + ic) - cr];
          }
          ar += 3;
        }
      }
    }
  }
  for (r = 0; r < 3; r++) {
    for (vcol = 0; vcol < 12; vcol++) {
      b_A_tmp[vcol + 12 * r] = -C[r + 3 * vcol];
    }
  }
  absx = v_torso[0];
  d = v_torso[1];
  d1 = v_torso[2];
  for (r = 0; r < 12; r++) {
    b_theta_d_des[r] =
        4.5253716694115047 *
            ((b_A_tmp[r] * absx + b_A_tmp[r + 12] * d) + b_A_tmp[r + 24] * d1) +
        V[r].re;
  }
  /*  % theta_d_des=zeros(12,1); */
  /*  % x=zeros(12,9); */
  /*  % y=zeros(12,9); */
  /*  % ynorm=zeros(9,1); */
  /*  % for i=1:9 */
  /*  %     x(:,i)=M*(-pinv(h)*v_torso)+real(V(:,i)); */
  /*  %     y(:,i)=pinv(h)*(-h_dot*x(:,i)); */
  /*  %     ynorm(i)=norm(y(:,i)); */
  /*  % end */
  /*  % ynormmin=min(ynorm); */
  /*  %  */
  /*  % for i=1:9 */
  /*  %     if ynorm(i)==ynormmin */
  /*  %         theta_d_des=x(:,i); */
  /*  %     end */
  /*  % end */
  /*  w=zeros(9,1); */
  /*  %w = [0.01;0.03;0.05;0.01;0.03;0.04;0.05;0.02;0.06]; */
  /*  Va=VR(:,1:9); */
  /*  fun = @(w) norm(-pinv(h)*h_dot*M*(-pinv(h)*v_torso+Va*w))^2; */
  /*  A = Va; */
  /*  b = 0.02*ones(12,1); */
  /*  %Aeq =
   * [transpose(x(2:10))*x(2:10)*ones(12,1),(x(1)*eye(12,12)-pinv(Reh)*Rehdot)*Va];
   */
  /*  Aeq = []; */
  /*   */
  /*  beq = []; */
  /*  lb = []; */
  /*  ub =[]; */
  /*  %nonlcon =norm(w)-1; */
  /*  w0 = [0.01;0.03;0.05;0.01;0.03;0.04;0.05;0.02;0.06]; */
  /*   w= fmincon(fun,w0,A,b,Aeq,beq,lb,ub); */
  /*  theta_d_des=Va*w; */
  tddRF[0] = b_theta_d_des[0];
  tddRF[1] = b_theta_d_des[1];
  tddRF[2] = b_theta_d_des[2];
  tddLF[0] = b_theta_d_des[3];
  tddLF[1] = b_theta_d_des[4];
  tddLF[2] = b_theta_d_des[5];
  tddRB[0] = b_theta_d_des[6];
  tddRB[1] = b_theta_d_des[7];
  tddRB[2] = b_theta_d_des[8];
  tddLB[0] = b_theta_d_des[9];
  tddLB[1] = b_theta_d_des[10];
  tddLB[2] = b_theta_d_des[11];
}

/* End of code generation (theta_d_des.c) */
