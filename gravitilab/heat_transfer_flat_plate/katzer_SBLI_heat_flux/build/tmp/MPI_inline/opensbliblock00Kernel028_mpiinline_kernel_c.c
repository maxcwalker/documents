//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel028;
int xdim1_opensbliblock00Kernel028;


//user function



void opensbliblock00Kernel028_c_wrapper(
  double * restrict T_B0_p,
  double * restrict wk6_B0_p,
  int * restrict idx,
  int arg_idx0, int arg_idx1,
  int x_size, int y_size) {
  #pragma omp parallel for
  for ( int n_y=0; n_y<y_size; n_y++ ){
    for ( int n_x=0; n_x<x_size; n_x++ ){
      int idx[] = {arg_idx0+n_x, arg_idx1+n_y};
      const ptr_double T_B0 = { T_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel028*1, xdim0_opensbliblock00Kernel028};
      ptr_double wk6_B0 = { wk6_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel028*1, xdim1_opensbliblock00Kernel028};
      
    OPS_ACC(wk6_B0, 0,0) = ((idx[1] == 0) ? (
   inv_0*(-rc8*OPS_ACC(T_B0, 0,4) + (rc10)*OPS_ACC(T_B0, 0,3) -
      3*OPS_ACC(T_B0, 0,2) + 4*OPS_ACC(T_B0, 0,1) - rc9*OPS_ACC(T_B0, 0,0))
)
: ((idx[1] == 1) ? (

      (rc11)*inv_0*(-3*OPS_ACC(T_B0, 0,-1) + OPS_ACC(T_B0, 0,3) - 6*OPS_ACC(T_B0, 0,2) + 18*OPS_ACC(T_B0, 0,1) -
      10*OPS_ACC(T_B0, 0,0))
)
: ((idx[1] == block0np1 - 1) ? (
   inv_0*(-4*OPS_ACC(T_B0, 0,-1) -
      rc10*OPS_ACC(T_B0, 0,-3) + (rc8)*OPS_ACC(T_B0, 0,-4) + (rc9)*OPS_ACC(T_B0, 0,0) + 3*OPS_ACC(T_B0, 0,-2))
)
:
      ((idx[1] == block0np1 - 2) ? (
   (rc11)*inv_0*(-18*OPS_ACC(T_B0, 0,-1) - OPS_ACC(T_B0, 0,-3) +
      10*OPS_ACC(T_B0, 0,0) + 3*OPS_ACC(T_B0, 0,1) + 6*OPS_ACC(T_B0, 0,-2))
)
: (

      (rc11)*inv_0*(-8*OPS_ACC(T_B0, 0,-1) - OPS_ACC(T_B0, 0,2) + 8*OPS_ACC(T_B0, 0,1) +
      OPS_ACC(T_B0, 0,-2))
)))));


    }
  }
}
