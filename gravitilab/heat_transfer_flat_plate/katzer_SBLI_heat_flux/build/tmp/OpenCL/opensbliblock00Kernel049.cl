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

 void opensbliblock00Kernel049(const ptr_double Residual3_B0,
  const ptr_double Residual0_B0,
  const ptr_double Residual2_B0,
  const
ptr_double Residual1_B0,
  ptr_double tempRK_rhou0_B0,
  ptr_double tempRK_rhoE_B0,
  ptr_double rhoE_B0,
  ptr_double rho_B0,
  ptr_double tempRK_rhou1_B0,
  ptr_double rhou1_B0,
  ptr_double tempRK_rho_B0,
  ptr_double rhou0_B0,
  const double *rkA,
  const double *rkB, const double dt)
{
   OPS_ACCS(tempRK_rho_B0, 0,0) = dt*OPS_ACCS(Residual0_B0, 0,0) + rkA[0]*OPS_ACCS(tempRK_rho_B0, 0,0);

   OPS_ACCS(rho_B0, 0,0) = rkB[0]*OPS_ACCS(tempRK_rho_B0, 0,0) + OPS_ACCS(rho_B0, 0,0);

   OPS_ACCS(tempRK_rhou0_B0, 0,0) = dt*OPS_ACCS(Residual1_B0, 0,0) + rkA[0]*OPS_ACCS(tempRK_rhou0_B0, 0,0);

   OPS_ACCS(rhou0_B0, 0,0) = rkB[0]*OPS_ACCS(tempRK_rhou0_B0, 0,0) + OPS_ACCS(rhou0_B0, 0,0);

   OPS_ACCS(tempRK_rhou1_B0, 0,0) = dt*OPS_ACCS(Residual2_B0, 0,0) + rkA[0]*OPS_ACCS(tempRK_rhou1_B0, 0,0);

   OPS_ACCS(rhou1_B0, 0,0) = rkB[0]*OPS_ACCS(tempRK_rhou1_B0, 0,0) + OPS_ACCS(rhou1_B0, 0,0);

   OPS_ACCS(tempRK_rhoE_B0, 0,0) = dt*OPS_ACCS(Residual3_B0, 0,0) + rkA[0]*OPS_ACCS(tempRK_rhoE_B0, 0,0);

   OPS_ACCS(rhoE_B0, 0,0) = rkB[0]*OPS_ACCS(tempRK_rhoE_B0, 0,0) + OPS_ACCS(rhoE_B0, 0,0);

}


__kernel void ops_opensbliblock00Kernel049(
__global const double* restrict arg0,
__global const double* restrict arg1,
__global const double* restrict arg2,
__global const double* restrict arg3,
__global double* restrict arg4,
__global double* restrict arg5,
__global double* restrict arg6,
__global double* restrict arg7,
__global double* restrict arg8,
__global double* restrict arg9,
__global double* restrict arg10,
__global double* restrict arg11,
const double arg12,
const double arg13,
const double dt,
const int base0,
const int base1,
const int base2,
const int base3,
const int base4,
const int base5,
const int base6,
const int base7,
const int base8,
const int base9,
const int base10,
const int base11,
const int size0,
const int size1 ){


  int idx_y = get_global_id(1);
  int idx_x = get_global_id(0);

  if (idx_x < size0 && idx_y < size1) {
    const ptr_double ptr0 = { &arg0[base0 + idx_x * 1*1 + idx_y * 1*1 * xdim0_opensbliblock00Kernel049], xdim0_opensbliblock00Kernel049};
    const ptr_double ptr1 = { &arg1[base1 + idx_x * 1*1 + idx_y * 1*1 * xdim1_opensbliblock00Kernel049], xdim1_opensbliblock00Kernel049};
    const ptr_double ptr2 = { &arg2[base2 + idx_x * 1*1 + idx_y * 1*1 * xdim2_opensbliblock00Kernel049], xdim2_opensbliblock00Kernel049};
    const ptr_double ptr3 = { &arg3[base3 + idx_x * 1*1 + idx_y * 1*1 * xdim3_opensbliblock00Kernel049], xdim3_opensbliblock00Kernel049};
    ptr_double ptr4 = { &arg4[base4 + idx_x * 1*1 + idx_y * 1*1 * xdim4_opensbliblock00Kernel049], xdim4_opensbliblock00Kernel049};
    ptr_double ptr5 = { &arg5[base5 + idx_x * 1*1 + idx_y * 1*1 * xdim5_opensbliblock00Kernel049], xdim5_opensbliblock00Kernel049};
    ptr_double ptr6 = { &arg6[base6 + idx_x * 1*1 + idx_y * 1*1 * xdim6_opensbliblock00Kernel049], xdim6_opensbliblock00Kernel049};
    ptr_double ptr7 = { &arg7[base7 + idx_x * 1*1 + idx_y * 1*1 * xdim7_opensbliblock00Kernel049], xdim7_opensbliblock00Kernel049};
    ptr_double ptr8 = { &arg8[base8 + idx_x * 1*1 + idx_y * 1*1 * xdim8_opensbliblock00Kernel049], xdim8_opensbliblock00Kernel049};
    ptr_double ptr9 = { &arg9[base9 + idx_x * 1*1 + idx_y * 1*1 * xdim9_opensbliblock00Kernel049], xdim9_opensbliblock00Kernel049};
    ptr_double ptr10 = { &arg10[base10 + idx_x * 1*1 + idx_y * 1*1 * xdim10_opensbliblock00Kernel049], xdim10_opensbliblock00Kernel049};
    ptr_double ptr11 = { &arg11[base11 + idx_x * 1*1 + idx_y * 1*1 * xdim11_opensbliblock00Kernel049], xdim11_opensbliblock00Kernel049};
    opensbliblock00Kernel049(ptr0,
                                  ptr1,
                                  ptr2,
                                  ptr3,
                                  ptr4,
                                  ptr5,
                                  ptr6,
                                  ptr7,
                                  ptr8,
                                  ptr9,
                                  ptr10,
                                  ptr11,
                                  &arg12,
                                  &arg13,
                                  dt);
  }

}
