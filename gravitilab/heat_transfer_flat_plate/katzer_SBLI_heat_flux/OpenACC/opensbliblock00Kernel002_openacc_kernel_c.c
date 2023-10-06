//
// auto-generated by ops.py
//

#define OPS_GPU

int xdim0_opensbliblock00Kernel002;
int xdim1_opensbliblock00Kernel002;
int xdim2_opensbliblock00Kernel002;
int xdim3_opensbliblock00Kernel002;

//user function
inline 
 void opensbliblock00Kernel002(const ptr_double u0_B0,
  const ptr_double u1_B0,
  const ptr_double D11_B0,
  ptr_double theta_B0,
  const
int *idx)
{
   double localeval_1 = 0.0;
   double localeval_2 = 0.0;
   double localeval_3 = 0.0;
   double localeval_0 = 0.0;
    localeval_0 = ((idx[1] == 0) ? (
   inv_0*(-rc8*OPS_ACC(u1_B0, 0,4) - rc9*OPS_ACC(u1_B0, 0,0) +
      4*OPS_ACC(u1_B0, 0,1) - 3*OPS_ACC(u1_B0, 0,2) + (rc10)*OPS_ACC(u1_B0, 0,3))
)
: ((idx[1] == 1) ? (

      (rc11)*inv_0*(-3*OPS_ACC(u1_B0, 0,-1) - 10*OPS_ACC(u1_B0, 0,0) + 18*OPS_ACC(u1_B0, 0,1) -
      6*OPS_ACC(u1_B0, 0,2) + OPS_ACC(u1_B0, 0,3))
)
: ((idx[1] == block0np1 - 1) ? (

      inv_0*((rc8)*OPS_ACC(u1_B0, 0,-4) - rc10*OPS_ACC(u1_B0, 0,-3) - 4*OPS_ACC(u1_B0, 0,-1) +
      (rc9)*OPS_ACC(u1_B0, 0,0) + 3*OPS_ACC(u1_B0, 0,-2))
)
: ((idx[1] == block0np1 - 2) ? (

      (rc11)*inv_0*(-OPS_ACC(u1_B0, 0,-3) - 18*OPS_ACC(u1_B0, 0,-1) + 6*OPS_ACC(u1_B0, 0,-2) + 3*OPS_ACC(u1_B0, 0,1)
      + 10*OPS_ACC(u1_B0, 0,0))
)
: (
   (rc11)*inv_0*(-8*OPS_ACC(u1_B0, 0,-1) + OPS_ACC(u1_B0, 0,-2) +
      8*OPS_ACC(u1_B0, 0,1) - OPS_ACC(u1_B0, 0,2))
)))));

    localeval_1 = ((idx[0] == 0) ? (
   inv_1*(-rc8*OPS_ACC(u1_B0, 4,0) + 4*OPS_ACC(u1_B0, 1,0) +
      (rc10)*OPS_ACC(u1_B0, 3,0) - rc9*OPS_ACC(u1_B0, 0,0) - 3*OPS_ACC(u1_B0, 2,0))
)
: ((idx[0] == 1) ? (

      (rc11)*inv_1*(18*OPS_ACC(u1_B0, 1,0) - 3*OPS_ACC(u1_B0, -1,0) + OPS_ACC(u1_B0, 3,0) - 10*OPS_ACC(u1_B0, 0,0) -
      6*OPS_ACC(u1_B0, 2,0))
)
: ((idx[0] == block0np0 - 1) ? (
   inv_1*((rc8)*OPS_ACC(u1_B0, -4,0) -
      4*OPS_ACC(u1_B0, -1,0) + (rc9)*OPS_ACC(u1_B0, 0,0) + 3*OPS_ACC(u1_B0, -2,0) - rc10*OPS_ACC(u1_B0, -3,0))
)
:
      ((idx[0] == block0np0 - 2) ? (
   (rc11)*inv_1*(3*OPS_ACC(u1_B0, 1,0) - 18*OPS_ACC(u1_B0, -1,0) +
      6*OPS_ACC(u1_B0, -2,0) - OPS_ACC(u1_B0, -3,0) + 10*OPS_ACC(u1_B0, 0,0))
)
: (

      (rc11)*inv_1*(8*OPS_ACC(u1_B0, 1,0) - 8*OPS_ACC(u1_B0, -1,0) + OPS_ACC(u1_B0, -2,0) -
      OPS_ACC(u1_B0, 2,0))
)))));

    localeval_2 = ((idx[0] == 0) ? (
   inv_1*(-3*OPS_ACC(u0_B0, 2,0) - rc9*OPS_ACC(u0_B0, 0,0) +
      (rc10)*OPS_ACC(u0_B0, 3,0) + 4*OPS_ACC(u0_B0, 1,0) - rc8*OPS_ACC(u0_B0, 4,0))
)
: ((idx[0] == 1) ? (

      (rc11)*inv_1*(-6*OPS_ACC(u0_B0, 2,0) - 10*OPS_ACC(u0_B0, 0,0) + OPS_ACC(u0_B0, 3,0) - 3*OPS_ACC(u0_B0, -1,0) +
      18*OPS_ACC(u0_B0, 1,0))
)
: ((idx[0] == block0np0 - 1) ? (
   inv_1*(-rc10*OPS_ACC(u0_B0, -3,0) +
      (rc8)*OPS_ACC(u0_B0, -4,0) + (rc9)*OPS_ACC(u0_B0, 0,0) - 4*OPS_ACC(u0_B0, -1,0) + 3*OPS_ACC(u0_B0, -2,0))
)
:
      ((idx[0] == block0np0 - 2) ? (
   (rc11)*inv_1*(-OPS_ACC(u0_B0, -3,0) + 10*OPS_ACC(u0_B0, 0,0) -
      18*OPS_ACC(u0_B0, -1,0) + 3*OPS_ACC(u0_B0, 1,0) + 6*OPS_ACC(u0_B0, -2,0))
)
: (

      (rc11)*inv_1*(-OPS_ACC(u0_B0, 2,0) - 8*OPS_ACC(u0_B0, -1,0) + 8*OPS_ACC(u0_B0, 1,0) +
      OPS_ACC(u0_B0, -2,0))
)))));

    localeval_3 = ((idx[1] == 0) ? (
   inv_0*((rc10)*OPS_ACC(u0_B0, 0,3) - 3*OPS_ACC(u0_B0, 0,2) +
      4*OPS_ACC(u0_B0, 0,1) - rc9*OPS_ACC(u0_B0, 0,0) - rc8*OPS_ACC(u0_B0, 0,4))
)
: ((idx[1] == 1) ? (

      (rc11)*inv_0*(OPS_ACC(u0_B0, 0,3) - 6*OPS_ACC(u0_B0, 0,2) + 18*OPS_ACC(u0_B0, 0,1) - 10*OPS_ACC(u0_B0, 0,0) -
      3*OPS_ACC(u0_B0, 0,-1))
)
: ((idx[1] == block0np1 - 1) ? (
   inv_0*((rc8)*OPS_ACC(u0_B0, 0,-4) +
      (rc9)*OPS_ACC(u0_B0, 0,0) - 4*OPS_ACC(u0_B0, 0,-1) - rc10*OPS_ACC(u0_B0, 0,-3) + 3*OPS_ACC(u0_B0, 0,-2))
)
:
      ((idx[1] == block0np1 - 2) ? (
   (rc11)*inv_0*(3*OPS_ACC(u0_B0, 0,1) + 10*OPS_ACC(u0_B0, 0,0) -
      18*OPS_ACC(u0_B0, 0,-1) - OPS_ACC(u0_B0, 0,-3) + 6*OPS_ACC(u0_B0, 0,-2))
)
: (

      (rc11)*inv_0*(-OPS_ACC(u0_B0, 0,2) + 8*OPS_ACC(u0_B0, 0,1) - 8*OPS_ACC(u0_B0, 0,-1) +
      OPS_ACC(u0_B0, 0,-2))
)))));

    OPS_ACC(theta_B0, 0,0) = pow(localeval_0*OPS_ACC(D11_B0, 0,0) + localeval_2,
      2)*(-rc13*tanh(250.0*localeval_0*OPS_ACC(D11_B0, 0,0) + 250.0*localeval_2 + 2.5) + rc13)/(epsilon +
      pow(localeval_1 - localeval_3*OPS_ACC(D11_B0, 0,0), 2) + pow(localeval_0*OPS_ACC(D11_B0, 0,0) + localeval_2,
      2));

}


void opensbliblock00Kernel002_c_wrapper(
  double *p_a0,
  double *p_a1,
  double *p_a2,
  double *p_a3,
  int *p_a4,
  int arg_idx0, int arg_idx1,
  int x_size, int y_size) {
  #ifdef OPS_GPU
  #pragma acc parallel deviceptr(p_a0,p_a1,p_a2,p_a3)
  #pragma acc loop
  #endif
  for ( int n_y=0; n_y<y_size; n_y++ ){
    #ifdef OPS_GPU
    #pragma acc loop
    #endif
    for ( int n_x=0; n_x<x_size; n_x++ ){
      int arg_idx[] = {arg_idx0+n_x, arg_idx1+n_y};
      const ptr_double ptr0 = {  p_a0 + n_x*1*1 + n_y*xdim0_opensbliblock00Kernel002*1*1, xdim0_opensbliblock00Kernel002};
      const ptr_double ptr1 = {  p_a1 + n_x*1*1 + n_y*xdim1_opensbliblock00Kernel002*1*1, xdim1_opensbliblock00Kernel002};
      const ptr_double ptr2 = {  p_a2 + n_x*1*1 + n_y*xdim2_opensbliblock00Kernel002*1*1, xdim2_opensbliblock00Kernel002};
      ptr_double ptr3 = {  p_a3 + n_x*1*1 + n_y*xdim3_opensbliblock00Kernel002*1*1, xdim3_opensbliblock00Kernel002};
      opensbliblock00Kernel002( ptr0,
          ptr1,ptr2,
          ptr3,arg_idx );

    }
  }
}
