//
// auto-generated by ops.py
//

#define OPS_GPU

int xdim0_opensbliblock00Kernel025;
int xdim1_opensbliblock00Kernel025;

//user function
inline 
void opensbliblock00Kernel025(const ptr_double u2_B0,
  ptr_double wk4_B0,
  const int *idx)
{
    OPS_ACC(wk4_B0, 0,0) = ((idx[1] == 0) ? (
   inv_0*(4*OPS_ACC(u2_B0, 0,1) - rc9*OPS_ACC(u2_B0, 0,0) +
      (rc10)*OPS_ACC(u2_B0, 0,3) - 3*OPS_ACC(u2_B0, 0,2) - rc8*OPS_ACC(u2_B0, 0,4))
)
: ((idx[1] == 1) ? (

      (rc11)*inv_0*(18*OPS_ACC(u2_B0, 0,1) - 10*OPS_ACC(u2_B0, 0,0) + OPS_ACC(u2_B0, 0,3) - 6*OPS_ACC(u2_B0, 0,2) -
      3*OPS_ACC(u2_B0, 0,-1))
)
: ((idx[1] == block0np1 - 1) ? (
   inv_0*((rc9)*OPS_ACC(u2_B0, 0,0) +
      3*OPS_ACC(u2_B0, 0,-2) - rc10*OPS_ACC(u2_B0, 0,-3) + (rc8)*OPS_ACC(u2_B0, 0,-4) - 4*OPS_ACC(u2_B0, 0,-1))
)
:
      ((idx[1] == block0np1 - 2) ? (
   (rc11)*inv_0*(3*OPS_ACC(u2_B0, 0,1) + 10*OPS_ACC(u2_B0, 0,0) +
      6*OPS_ACC(u2_B0, 0,-2) - OPS_ACC(u2_B0, 0,-3) - 18*OPS_ACC(u2_B0, 0,-1))
)
: (

      (rc11)*inv_0*(8*OPS_ACC(u2_B0, 0,1) - OPS_ACC(u2_B0, 0,2) + OPS_ACC(u2_B0, 0,-2) -
      8*OPS_ACC(u2_B0, 0,-1))
)))));

}


void opensbliblock00Kernel025_c_wrapper(
  double *p_a0,
  double *p_a1,
  int *p_a2,
  int arg_idx0, int arg_idx1,
  int x_size, int y_size) {
  #ifdef OPS_GPU
  #pragma acc parallel deviceptr(p_a0,p_a1)
  #pragma acc loop
  #endif
  for ( int n_y=0; n_y<y_size; n_y++ ){
    #ifdef OPS_GPU
    #pragma acc loop
    #endif
    for ( int n_x=0; n_x<x_size; n_x++ ){
      int arg_idx[] = {arg_idx0+n_x, arg_idx1+n_y};
      const ptr_double ptr0 = {  p_a0 + n_x*1*1 + n_y*xdim0_opensbliblock00Kernel025*1*1, xdim0_opensbliblock00Kernel025};
      ptr_double ptr1 = {  p_a1 + n_x*1*1 + n_y*xdim1_opensbliblock00Kernel025*1*1, xdim1_opensbliblock00Kernel025};
      opensbliblock00Kernel025( ptr0,
          ptr1,arg_idx );

    }
  }
}
