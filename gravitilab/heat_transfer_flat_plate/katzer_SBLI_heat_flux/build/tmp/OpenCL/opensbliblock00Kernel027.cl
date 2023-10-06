//
// auto-generated by ops.py
//

#ifdef OCL_FMA
#pragma OPENCL FP_CONTRACT ON
#else
#pragma OPENCL FP_CONTRACT OFF
#endif
#pragma OPENCL EXTENSION cl_khr_fp64:enable

#define OPS_2D
#define OPS_API 2
#define OPS_NO_GLOBALS
#include "ops_macros.h"
#include "ops_opencl_reduction.h"

#ifndef MIN
#define MIN(a,b) ((a<b) ? (a) : (b))
#endif
#ifndef MAX
#define MAX(a,b) ((a>b) ? (a) : (b))
#endif
#ifndef SIGN
#define SIGN(a,b) ((b<0.0) ? (a*(-1)) : (a))
#endif
#define OPS_READ 0
#define OPS_WRITE 1
#define OPS_RW 2
#define OPS_INC 3
#define OPS_MIN 4
#define OPS_MAX 5

//user function

void opensbliblock00Kernel027(const ptr_double u2_B0,
  ptr_double wk5_B0,
  const int *idx, const int block0np0, const double inv_1, const double rc8, const double rc9, const double rc10, const double rc11)
{
    OPS_ACCS(wk5_B0, 0,0) = ((idx[0] == 0) ? (
   inv_1*(-rc9*OPS_ACCS(u2_B0, 0,0) - 3*OPS_ACCS(u2_B0, 2,0) +
      4*OPS_ACCS(u2_B0, 1,0) - rc8*OPS_ACCS(u2_B0, 4,0) + (rc10)*OPS_ACCS(u2_B0, 3,0))
)
: ((idx[0] == 1) ? (

      (rc11)*inv_1*(-10*OPS_ACCS(u2_B0, 0,0) - 6*OPS_ACCS(u2_B0, 2,0) + 18*OPS_ACCS(u2_B0, 1,0) + OPS_ACCS(u2_B0, 3,0) -
      3*OPS_ACCS(u2_B0, -1,0))
)
: ((idx[0] == block0np0 - 1) ? (
   inv_1*(-rc10*OPS_ACCS(u2_B0, -3,0) +
      (rc9)*OPS_ACCS(u2_B0, 0,0) + 3*OPS_ACCS(u2_B0, -2,0) + (rc8)*OPS_ACCS(u2_B0, -4,0) - 4*OPS_ACCS(u2_B0, -1,0))
)
:
      ((idx[0] == block0np0 - 2) ? (
   (rc11)*inv_1*(-OPS_ACCS(u2_B0, -3,0) + 10*OPS_ACCS(u2_B0, 0,0) +
      6*OPS_ACCS(u2_B0, -2,0) + 3*OPS_ACCS(u2_B0, 1,0) - 18*OPS_ACCS(u2_B0, -1,0))
)
: (

      (rc11)*inv_1*(OPS_ACCS(u2_B0, -2,0) - OPS_ACCS(u2_B0, 2,0) + 8*OPS_ACCS(u2_B0, 1,0) -
      8*OPS_ACCS(u2_B0, -1,0))
)))));

}


__kernel void ops_opensbliblock00Kernel027(
__global const double* restrict arg0,
__global double* restrict arg1,
const int block0np0,
const double inv_1,
const double rc8,
const double rc9,
const double rc10,
const double rc11,
const int base0,
const int base1,
int arg_idx0, int arg_idx1,
const int size0,
const int size1 ){


  int idx_y = get_global_id(1);
  int idx_x = get_global_id(0);

  int arg_idx[2];
  arg_idx[0] = arg_idx0+idx_x;
  arg_idx[1] = arg_idx1+idx_y;
  if (idx_x < size0 && idx_y < size1) {
    const ptr_double ptr0 = { &arg0[base0 + idx_x * 1*1 + idx_y * 1*1 * xdim0_opensbliblock00Kernel027], xdim0_opensbliblock00Kernel027};
    ptr_double ptr1 = { &arg1[base1 + idx_x * 1*1 + idx_y * 1*1 * xdim1_opensbliblock00Kernel027], xdim1_opensbliblock00Kernel027};
    opensbliblock00Kernel027(ptr0,
                                  ptr1,
                                  arg_idx,
                                  block0np0,
                                  inv_1,
                                  rc8,
                                  rc9,
                                  rc10,
                                  rc11);
  }

}
