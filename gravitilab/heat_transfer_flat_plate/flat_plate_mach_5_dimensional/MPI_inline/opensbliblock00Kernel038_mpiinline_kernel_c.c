//
// auto-generated by ops.py
//

int xdim0_opensbliblock00Kernel038;
int xdim1_opensbliblock00Kernel038;
int xdim2_opensbliblock00Kernel038;
int xdim3_opensbliblock00Kernel038;
int xdim4_opensbliblock00Kernel038;
int xdim5_opensbliblock00Kernel038;
int xdim6_opensbliblock00Kernel038;
int xdim7_opensbliblock00Kernel038;
int xdim8_opensbliblock00Kernel038;
int xdim9_opensbliblock00Kernel038;
int xdim10_opensbliblock00Kernel038;
int xdim11_opensbliblock00Kernel038;


//user function



void opensbliblock00Kernel038_c_wrapper(
  double * restrict D00_B0_p,
  double * restrict D01_B0_p,
  double * restrict D10_B0_p,
  double * restrict D11_B0_p,
  double * restrict SD000_B0_p,
  double * restrict SD001_B0_p,
  double * restrict SD010_B0_p,
  double * restrict SD011_B0_p,
  double * restrict SD100_B0_p,
  double * restrict SD101_B0_p,
  double * restrict SD110_B0_p,
  double * restrict SD111_B0_p,
  int * restrict idx,
  int arg_idx0, int arg_idx1,
  int x_size, int y_size) {
  #pragma omp parallel for
  for ( int n_y=0; n_y<y_size; n_y++ ){
    for ( int n_x=0; n_x<x_size; n_x++ ){
      int idx[] = {arg_idx0+n_x, arg_idx1+n_y};
      const ptr_double D00_B0 = { D00_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel038*1, xdim0_opensbliblock00Kernel038};
      const ptr_double D01_B0 = { D01_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel038*1, xdim1_opensbliblock00Kernel038};
      const ptr_double D10_B0 = { D10_B0_p + n_x*1 + n_y * xdim2_opensbliblock00Kernel038*1, xdim2_opensbliblock00Kernel038};
      const ptr_double D11_B0 = { D11_B0_p + n_x*1 + n_y * xdim3_opensbliblock00Kernel038*1, xdim3_opensbliblock00Kernel038};
      ptr_double SD000_B0 = { SD000_B0_p + n_x*1 + n_y * xdim4_opensbliblock00Kernel038*1, xdim4_opensbliblock00Kernel038};
      ptr_double SD001_B0 = { SD001_B0_p + n_x*1 + n_y * xdim5_opensbliblock00Kernel038*1, xdim5_opensbliblock00Kernel038};
      ptr_double SD010_B0 = { SD010_B0_p + n_x*1 + n_y * xdim6_opensbliblock00Kernel038*1, xdim6_opensbliblock00Kernel038};
      ptr_double SD011_B0 = { SD011_B0_p + n_x*1 + n_y * xdim7_opensbliblock00Kernel038*1, xdim7_opensbliblock00Kernel038};
      ptr_double SD100_B0 = { SD100_B0_p + n_x*1 + n_y * xdim8_opensbliblock00Kernel038*1, xdim8_opensbliblock00Kernel038};
      ptr_double SD101_B0 = { SD101_B0_p + n_x*1 + n_y * xdim9_opensbliblock00Kernel038*1, xdim9_opensbliblock00Kernel038};
      ptr_double SD110_B0 = { SD110_B0_p + n_x*1 + n_y * xdim10_opensbliblock00Kernel038*1, xdim10_opensbliblock00Kernel038};
      ptr_double SD111_B0 = { SD111_B0_p + n_x*1 + n_y * xdim11_opensbliblock00Kernel038*1, xdim11_opensbliblock00Kernel038};
      
   double d1_D00_dx = 0.0;
   double d1_D00_dy = 0.0;
   double d1_D01_dx = 0.0;
   double d1_D01_dy = 0.0;
   double d1_D10_dx = 0.0;
   double d1_D10_dy = 0.0;
   double d1_D11_dx = 0.0;
   double d1_D11_dy = 0.0;
<<<<<<< HEAD
    d1_D01_dx = invDelta0block0*((idx[0] == 0) ? (
   -3*OPS_ACC(D01_B0, 2,0) + 4*OPS_ACC(D01_B0, 1,0) - (25.0/12.0)*OPS_ACC(D01_B0, 0,0) -
      (1.0/4.0)*OPS_ACC(D01_B0, 4,0) + ((4.0/3.0))*OPS_ACC(D01_B0, 3,0)
)
: ((idx[0] == 1) ? (
   -(5.0/6.0)*OPS_ACC(D01_B0, 0,0) -
      (1.0/2.0)*OPS_ACC(D01_B0, 2,0) - (1.0/4.0)*OPS_ACC(D01_B0, -1,0) + ((1.0/12.0))*OPS_ACC(D01_B0, 3,0) + ((3.0/2.0))*OPS_ACC(D01_B0, 1,0)
)
: ((idx[0]
      == -1 + block0np0) ? (
   -4*OPS_ACC(D01_B0, -1,0) + 3*OPS_ACC(D01_B0, -2,0) - (4.0/3.0)*OPS_ACC(D01_B0, -3,0) + ((1.0/4.0))*OPS_ACC(D01_B0, -4,0) +
      ((25.0/12.0))*OPS_ACC(D01_B0, 0,0)
)
: ((idx[0] == -2 + block0np0) ? (
   ((1.0/2.0))*OPS_ACC(D01_B0, -2,0) - (3.0/2.0)*OPS_ACC(D01_B0, -1,0)
      - (1.0/12.0)*OPS_ACC(D01_B0, -3,0) + ((1.0/4.0))*OPS_ACC(D01_B0, 1,0) + ((5.0/6.0))*OPS_ACC(D01_B0, 0,0)
)
: (
   -(2.0/3.0)*OPS_ACC(D01_B0, -1,0) -
      (1.0/12.0)*OPS_ACC(D01_B0, 2,0) + ((1.0/12.0))*OPS_ACC(D01_B0, -2,0) + ((2.0/3.0))*OPS_ACC(D01_B0, 1,0)
)))));

    d1_D00_dx = invDelta0block0*((idx[0] == 0) ? (
   -3*OPS_ACC(D00_B0, 2,0) + 4*OPS_ACC(D00_B0, 1,0) - (25.0/12.0)*OPS_ACC(D00_B0, 0,0) -
      (1.0/4.0)*OPS_ACC(D00_B0, 4,0) + ((4.0/3.0))*OPS_ACC(D00_B0, 3,0)
)
: ((idx[0] == 1) ? (
   -(5.0/6.0)*OPS_ACC(D00_B0, 0,0) -
      (1.0/2.0)*OPS_ACC(D00_B0, 2,0) - (1.0/4.0)*OPS_ACC(D00_B0, -1,0) + ((1.0/12.0))*OPS_ACC(D00_B0, 3,0) + ((3.0/2.0))*OPS_ACC(D00_B0, 1,0)
)
: ((idx[0]
      == -1 + block0np0) ? (
   -4*OPS_ACC(D00_B0, -1,0) + 3*OPS_ACC(D00_B0, -2,0) - (4.0/3.0)*OPS_ACC(D00_B0, -3,0) + ((1.0/4.0))*OPS_ACC(D00_B0, -4,0) +
      ((25.0/12.0))*OPS_ACC(D00_B0, 0,0)
)
: ((idx[0] == -2 + block0np0) ? (
   ((1.0/2.0))*OPS_ACC(D00_B0, -2,0) - (3.0/2.0)*OPS_ACC(D00_B0, -1,0)
      - (1.0/12.0)*OPS_ACC(D00_B0, -3,0) + ((1.0/4.0))*OPS_ACC(D00_B0, 1,0) + ((5.0/6.0))*OPS_ACC(D00_B0, 0,0)
)
: (
   -(2.0/3.0)*OPS_ACC(D00_B0, -1,0) -
      (1.0/12.0)*OPS_ACC(D00_B0, 2,0) + ((1.0/12.0))*OPS_ACC(D00_B0, -2,0) + ((2.0/3.0))*OPS_ACC(D00_B0, 1,0)
)))));

    d1_D01_dy = invDelta1block0*((idx[1] == 0) ? (
   -3*OPS_ACC(D01_B0, 0,2) + 4*OPS_ACC(D01_B0, 0,1) - (25.0/12.0)*OPS_ACC(D01_B0, 0,0) -
      (1.0/4.0)*OPS_ACC(D01_B0, 0,4) + ((4.0/3.0))*OPS_ACC(D01_B0, 0,3)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*OPS_ACC(D01_B0, 0,0) -
      (1.0/2.0)*OPS_ACC(D01_B0, 0,2) - (1.0/4.0)*OPS_ACC(D01_B0, 0,-1) + ((1.0/12.0))*OPS_ACC(D01_B0, 0,3) + ((3.0/2.0))*OPS_ACC(D01_B0, 0,1)
)
: ((idx[1]
      == -1 + block0np1) ? (
   -4*OPS_ACC(D01_B0, 0,-1) + 3*OPS_ACC(D01_B0, 0,-2) - (4.0/3.0)*OPS_ACC(D01_B0, 0,-3) + ((1.0/4.0))*OPS_ACC(D01_B0, 0,-4) +
      ((25.0/12.0))*OPS_ACC(D01_B0, 0,0)
)
: ((idx[1] == -2 + block0np1) ? (
   ((1.0/2.0))*OPS_ACC(D01_B0, 0,-2) - (3.0/2.0)*OPS_ACC(D01_B0, 0,-1)
      - (1.0/12.0)*OPS_ACC(D01_B0, 0,-3) + ((1.0/4.0))*OPS_ACC(D01_B0, 0,1) + ((5.0/6.0))*OPS_ACC(D01_B0, 0,0)
)
: (
   -(2.0/3.0)*OPS_ACC(D01_B0, 0,-1) -
      (1.0/12.0)*OPS_ACC(D01_B0, 0,2) + ((1.0/12.0))*OPS_ACC(D01_B0, 0,-2) + ((2.0/3.0))*OPS_ACC(D01_B0, 0,1)
)))));

    d1_D00_dy = invDelta1block0*((idx[1] == 0) ? (
   -3*OPS_ACC(D00_B0, 0,2) + 4*OPS_ACC(D00_B0, 0,1) - (25.0/12.0)*OPS_ACC(D00_B0, 0,0) -
      (1.0/4.0)*OPS_ACC(D00_B0, 0,4) + ((4.0/3.0))*OPS_ACC(D00_B0, 0,3)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*OPS_ACC(D00_B0, 0,0) -
      (1.0/2.0)*OPS_ACC(D00_B0, 0,2) - (1.0/4.0)*OPS_ACC(D00_B0, 0,-1) + ((1.0/12.0))*OPS_ACC(D00_B0, 0,3) + ((3.0/2.0))*OPS_ACC(D00_B0, 0,1)
)
: ((idx[1]
      == -1 + block0np1) ? (
   -4*OPS_ACC(D00_B0, 0,-1) + 3*OPS_ACC(D00_B0, 0,-2) - (4.0/3.0)*OPS_ACC(D00_B0, 0,-3) + ((1.0/4.0))*OPS_ACC(D00_B0, 0,-4) +
      ((25.0/12.0))*OPS_ACC(D00_B0, 0,0)
)
: ((idx[1] == -2 + block0np1) ? (
   ((1.0/2.0))*OPS_ACC(D00_B0, 0,-2) - (3.0/2.0)*OPS_ACC(D00_B0, 0,-1)
      - (1.0/12.0)*OPS_ACC(D00_B0, 0,-3) + ((1.0/4.0))*OPS_ACC(D00_B0, 0,1) + ((5.0/6.0))*OPS_ACC(D00_B0, 0,0)
)
: (
   -(2.0/3.0)*OPS_ACC(D00_B0, 0,-1) -
      (1.0/12.0)*OPS_ACC(D00_B0, 0,2) + ((1.0/12.0))*OPS_ACC(D00_B0, 0,-2) + ((2.0/3.0))*OPS_ACC(D00_B0, 0,1)
)))));

=======
>>>>>>> 04735e8652de3d2dec770d04ef7c03ca6303cc9e
    d1_D11_dx = invDelta0block0*((idx[0] == 0) ? (
   -3*OPS_ACC(D11_B0, 2,0) + 4*OPS_ACC(D11_B0, 1,0) - (25.0/12.0)*OPS_ACC(D11_B0, 0,0) -
      (1.0/4.0)*OPS_ACC(D11_B0, 4,0) + ((4.0/3.0))*OPS_ACC(D11_B0, 3,0)
)
: ((idx[0] == 1) ? (
   -(5.0/6.0)*OPS_ACC(D11_B0, 0,0) -
      (1.0/2.0)*OPS_ACC(D11_B0, 2,0) - (1.0/4.0)*OPS_ACC(D11_B0, -1,0) + ((1.0/12.0))*OPS_ACC(D11_B0, 3,0) + ((3.0/2.0))*OPS_ACC(D11_B0, 1,0)
)
: ((idx[0]
      == -1 + block0np0) ? (
   -4*OPS_ACC(D11_B0, -1,0) + 3*OPS_ACC(D11_B0, -2,0) - (4.0/3.0)*OPS_ACC(D11_B0, -3,0) + ((1.0/4.0))*OPS_ACC(D11_B0, -4,0) +
      ((25.0/12.0))*OPS_ACC(D11_B0, 0,0)
)
: ((idx[0] == -2 + block0np0) ? (
   ((1.0/2.0))*OPS_ACC(D11_B0, -2,0) - (3.0/2.0)*OPS_ACC(D11_B0, -1,0)
      - (1.0/12.0)*OPS_ACC(D11_B0, -3,0) + ((1.0/4.0))*OPS_ACC(D11_B0, 1,0) + ((5.0/6.0))*OPS_ACC(D11_B0, 0,0)
)
: (
   -(2.0/3.0)*OPS_ACC(D11_B0, -1,0) -
      (1.0/12.0)*OPS_ACC(D11_B0, 2,0) + ((1.0/12.0))*OPS_ACC(D11_B0, -2,0) + ((2.0/3.0))*OPS_ACC(D11_B0, 1,0)
)))));

<<<<<<< HEAD
    d1_D11_dy = invDelta1block0*((idx[1] == 0) ? (
   -3*OPS_ACC(D11_B0, 0,2) + 4*OPS_ACC(D11_B0, 0,1) - (25.0/12.0)*OPS_ACC(D11_B0, 0,0) -
      (1.0/4.0)*OPS_ACC(D11_B0, 0,4) + ((4.0/3.0))*OPS_ACC(D11_B0, 0,3)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*OPS_ACC(D11_B0, 0,0) -
      (1.0/2.0)*OPS_ACC(D11_B0, 0,2) - (1.0/4.0)*OPS_ACC(D11_B0, 0,-1) + ((1.0/12.0))*OPS_ACC(D11_B0, 0,3) + ((3.0/2.0))*OPS_ACC(D11_B0, 0,1)
)
: ((idx[1]
      == -1 + block0np1) ? (
   -4*OPS_ACC(D11_B0, 0,-1) + 3*OPS_ACC(D11_B0, 0,-2) - (4.0/3.0)*OPS_ACC(D11_B0, 0,-3) + ((1.0/4.0))*OPS_ACC(D11_B0, 0,-4) +
      ((25.0/12.0))*OPS_ACC(D11_B0, 0,0)
)
: ((idx[1] == -2 + block0np1) ? (
   ((1.0/2.0))*OPS_ACC(D11_B0, 0,-2) - (3.0/2.0)*OPS_ACC(D11_B0, 0,-1)
      - (1.0/12.0)*OPS_ACC(D11_B0, 0,-3) + ((1.0/4.0))*OPS_ACC(D11_B0, 0,1) + ((5.0/6.0))*OPS_ACC(D11_B0, 0,0)
)
: (
   -(2.0/3.0)*OPS_ACC(D11_B0, 0,-1) -
      (1.0/12.0)*OPS_ACC(D11_B0, 0,2) + ((1.0/12.0))*OPS_ACC(D11_B0, 0,-2) + ((2.0/3.0))*OPS_ACC(D11_B0, 0,1)
=======
    d1_D01_dx = invDelta0block0*((idx[0] == 0) ? (
   -3*OPS_ACC(D01_B0, 2,0) + 4*OPS_ACC(D01_B0, 1,0) - (25.0/12.0)*OPS_ACC(D01_B0, 0,0) -
      (1.0/4.0)*OPS_ACC(D01_B0, 4,0) + ((4.0/3.0))*OPS_ACC(D01_B0, 3,0)
)
: ((idx[0] == 1) ? (
   -(5.0/6.0)*OPS_ACC(D01_B0, 0,0) -
      (1.0/2.0)*OPS_ACC(D01_B0, 2,0) - (1.0/4.0)*OPS_ACC(D01_B0, -1,0) + ((1.0/12.0))*OPS_ACC(D01_B0, 3,0) + ((3.0/2.0))*OPS_ACC(D01_B0, 1,0)
)
: ((idx[0]
      == -1 + block0np0) ? (
   -4*OPS_ACC(D01_B0, -1,0) + 3*OPS_ACC(D01_B0, -2,0) - (4.0/3.0)*OPS_ACC(D01_B0, -3,0) + ((1.0/4.0))*OPS_ACC(D01_B0, -4,0) +
      ((25.0/12.0))*OPS_ACC(D01_B0, 0,0)
)
: ((idx[0] == -2 + block0np0) ? (
   ((1.0/2.0))*OPS_ACC(D01_B0, -2,0) - (3.0/2.0)*OPS_ACC(D01_B0, -1,0)
      - (1.0/12.0)*OPS_ACC(D01_B0, -3,0) + ((1.0/4.0))*OPS_ACC(D01_B0, 1,0) + ((5.0/6.0))*OPS_ACC(D01_B0, 0,0)
)
: (
   -(2.0/3.0)*OPS_ACC(D01_B0, -1,0) -
      (1.0/12.0)*OPS_ACC(D01_B0, 2,0) + ((1.0/12.0))*OPS_ACC(D01_B0, -2,0) + ((2.0/3.0))*OPS_ACC(D01_B0, 1,0)
>>>>>>> 04735e8652de3d2dec770d04ef7c03ca6303cc9e
)))));

    d1_D10_dx = invDelta0block0*((idx[0] == 0) ? (
   -3*OPS_ACC(D10_B0, 2,0) + 4*OPS_ACC(D10_B0, 1,0) - (25.0/12.0)*OPS_ACC(D10_B0, 0,0) -
      (1.0/4.0)*OPS_ACC(D10_B0, 4,0) + ((4.0/3.0))*OPS_ACC(D10_B0, 3,0)
)
: ((idx[0] == 1) ? (
   -(5.0/6.0)*OPS_ACC(D10_B0, 0,0) -
      (1.0/2.0)*OPS_ACC(D10_B0, 2,0) - (1.0/4.0)*OPS_ACC(D10_B0, -1,0) + ((1.0/12.0))*OPS_ACC(D10_B0, 3,0) + ((3.0/2.0))*OPS_ACC(D10_B0, 1,0)
)
: ((idx[0]
      == -1 + block0np0) ? (
   -4*OPS_ACC(D10_B0, -1,0) + 3*OPS_ACC(D10_B0, -2,0) - (4.0/3.0)*OPS_ACC(D10_B0, -3,0) + ((1.0/4.0))*OPS_ACC(D10_B0, -4,0) +
      ((25.0/12.0))*OPS_ACC(D10_B0, 0,0)
)
: ((idx[0] == -2 + block0np0) ? (
   ((1.0/2.0))*OPS_ACC(D10_B0, -2,0) - (3.0/2.0)*OPS_ACC(D10_B0, -1,0)
      - (1.0/12.0)*OPS_ACC(D10_B0, -3,0) + ((1.0/4.0))*OPS_ACC(D10_B0, 1,0) + ((5.0/6.0))*OPS_ACC(D10_B0, 0,0)
)
: (
   -(2.0/3.0)*OPS_ACC(D10_B0, -1,0) -
      (1.0/12.0)*OPS_ACC(D10_B0, 2,0) + ((1.0/12.0))*OPS_ACC(D10_B0, -2,0) + ((2.0/3.0))*OPS_ACC(D10_B0, 1,0)
)))));

<<<<<<< HEAD
=======
    d1_D11_dy = invDelta1block0*((idx[1] == 0) ? (
   -3*OPS_ACC(D11_B0, 0,2) + 4*OPS_ACC(D11_B0, 0,1) - (25.0/12.0)*OPS_ACC(D11_B0, 0,0) -
      (1.0/4.0)*OPS_ACC(D11_B0, 0,4) + ((4.0/3.0))*OPS_ACC(D11_B0, 0,3)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*OPS_ACC(D11_B0, 0,0) -
      (1.0/2.0)*OPS_ACC(D11_B0, 0,2) - (1.0/4.0)*OPS_ACC(D11_B0, 0,-1) + ((1.0/12.0))*OPS_ACC(D11_B0, 0,3) + ((3.0/2.0))*OPS_ACC(D11_B0, 0,1)
)
: ((idx[1]
      == -1 + block0np1) ? (
   -4*OPS_ACC(D11_B0, 0,-1) + 3*OPS_ACC(D11_B0, 0,-2) - (4.0/3.0)*OPS_ACC(D11_B0, 0,-3) + ((1.0/4.0))*OPS_ACC(D11_B0, 0,-4) +
      ((25.0/12.0))*OPS_ACC(D11_B0, 0,0)
)
: ((idx[1] == -2 + block0np1) ? (
   ((1.0/2.0))*OPS_ACC(D11_B0, 0,-2) - (3.0/2.0)*OPS_ACC(D11_B0, 0,-1)
      - (1.0/12.0)*OPS_ACC(D11_B0, 0,-3) + ((1.0/4.0))*OPS_ACC(D11_B0, 0,1) + ((5.0/6.0))*OPS_ACC(D11_B0, 0,0)
)
: (
   -(2.0/3.0)*OPS_ACC(D11_B0, 0,-1) -
      (1.0/12.0)*OPS_ACC(D11_B0, 0,2) + ((1.0/12.0))*OPS_ACC(D11_B0, 0,-2) + ((2.0/3.0))*OPS_ACC(D11_B0, 0,1)
)))));

    d1_D00_dy = invDelta1block0*((idx[1] == 0) ? (
   -3*OPS_ACC(D00_B0, 0,2) + 4*OPS_ACC(D00_B0, 0,1) - (25.0/12.0)*OPS_ACC(D00_B0, 0,0) -
      (1.0/4.0)*OPS_ACC(D00_B0, 0,4) + ((4.0/3.0))*OPS_ACC(D00_B0, 0,3)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*OPS_ACC(D00_B0, 0,0) -
      (1.0/2.0)*OPS_ACC(D00_B0, 0,2) - (1.0/4.0)*OPS_ACC(D00_B0, 0,-1) + ((1.0/12.0))*OPS_ACC(D00_B0, 0,3) + ((3.0/2.0))*OPS_ACC(D00_B0, 0,1)
)
: ((idx[1]
      == -1 + block0np1) ? (
   -4*OPS_ACC(D00_B0, 0,-1) + 3*OPS_ACC(D00_B0, 0,-2) - (4.0/3.0)*OPS_ACC(D00_B0, 0,-3) + ((1.0/4.0))*OPS_ACC(D00_B0, 0,-4) +
      ((25.0/12.0))*OPS_ACC(D00_B0, 0,0)
)
: ((idx[1] == -2 + block0np1) ? (
   ((1.0/2.0))*OPS_ACC(D00_B0, 0,-2) - (3.0/2.0)*OPS_ACC(D00_B0, 0,-1)
      - (1.0/12.0)*OPS_ACC(D00_B0, 0,-3) + ((1.0/4.0))*OPS_ACC(D00_B0, 0,1) + ((5.0/6.0))*OPS_ACC(D00_B0, 0,0)
)
: (
   -(2.0/3.0)*OPS_ACC(D00_B0, 0,-1) -
      (1.0/12.0)*OPS_ACC(D00_B0, 0,2) + ((1.0/12.0))*OPS_ACC(D00_B0, 0,-2) + ((2.0/3.0))*OPS_ACC(D00_B0, 0,1)
)))));

>>>>>>> 04735e8652de3d2dec770d04ef7c03ca6303cc9e
    d1_D10_dy = invDelta1block0*((idx[1] == 0) ? (
   -3*OPS_ACC(D10_B0, 0,2) + 4*OPS_ACC(D10_B0, 0,1) - (25.0/12.0)*OPS_ACC(D10_B0, 0,0) -
      (1.0/4.0)*OPS_ACC(D10_B0, 0,4) + ((4.0/3.0))*OPS_ACC(D10_B0, 0,3)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*OPS_ACC(D10_B0, 0,0) -
      (1.0/2.0)*OPS_ACC(D10_B0, 0,2) - (1.0/4.0)*OPS_ACC(D10_B0, 0,-1) + ((1.0/12.0))*OPS_ACC(D10_B0, 0,3) + ((3.0/2.0))*OPS_ACC(D10_B0, 0,1)
)
: ((idx[1]
      == -1 + block0np1) ? (
   -4*OPS_ACC(D10_B0, 0,-1) + 3*OPS_ACC(D10_B0, 0,-2) - (4.0/3.0)*OPS_ACC(D10_B0, 0,-3) + ((1.0/4.0))*OPS_ACC(D10_B0, 0,-4) +
      ((25.0/12.0))*OPS_ACC(D10_B0, 0,0)
)
: ((idx[1] == -2 + block0np1) ? (
   ((1.0/2.0))*OPS_ACC(D10_B0, 0,-2) - (3.0/2.0)*OPS_ACC(D10_B0, 0,-1)
      - (1.0/12.0)*OPS_ACC(D10_B0, 0,-3) + ((1.0/4.0))*OPS_ACC(D10_B0, 0,1) + ((5.0/6.0))*OPS_ACC(D10_B0, 0,0)
)
: (
   -(2.0/3.0)*OPS_ACC(D10_B0, 0,-1) -
      (1.0/12.0)*OPS_ACC(D10_B0, 0,2) + ((1.0/12.0))*OPS_ACC(D10_B0, 0,-2) + ((2.0/3.0))*OPS_ACC(D10_B0, 0,1)
)))));

<<<<<<< HEAD
=======
    d1_D01_dy = invDelta1block0*((idx[1] == 0) ? (
   -3*OPS_ACC(D01_B0, 0,2) + 4*OPS_ACC(D01_B0, 0,1) - (25.0/12.0)*OPS_ACC(D01_B0, 0,0) -
      (1.0/4.0)*OPS_ACC(D01_B0, 0,4) + ((4.0/3.0))*OPS_ACC(D01_B0, 0,3)
)
: ((idx[1] == 1) ? (
   -(5.0/6.0)*OPS_ACC(D01_B0, 0,0) -
      (1.0/2.0)*OPS_ACC(D01_B0, 0,2) - (1.0/4.0)*OPS_ACC(D01_B0, 0,-1) + ((1.0/12.0))*OPS_ACC(D01_B0, 0,3) + ((3.0/2.0))*OPS_ACC(D01_B0, 0,1)
)
: ((idx[1]
      == -1 + block0np1) ? (
   -4*OPS_ACC(D01_B0, 0,-1) + 3*OPS_ACC(D01_B0, 0,-2) - (4.0/3.0)*OPS_ACC(D01_B0, 0,-3) + ((1.0/4.0))*OPS_ACC(D01_B0, 0,-4) +
      ((25.0/12.0))*OPS_ACC(D01_B0, 0,0)
)
: ((idx[1] == -2 + block0np1) ? (
   ((1.0/2.0))*OPS_ACC(D01_B0, 0,-2) - (3.0/2.0)*OPS_ACC(D01_B0, 0,-1)
      - (1.0/12.0)*OPS_ACC(D01_B0, 0,-3) + ((1.0/4.0))*OPS_ACC(D01_B0, 0,1) + ((5.0/6.0))*OPS_ACC(D01_B0, 0,0)
)
: (
   -(2.0/3.0)*OPS_ACC(D01_B0, 0,-1) -
      (1.0/12.0)*OPS_ACC(D01_B0, 0,2) + ((1.0/12.0))*OPS_ACC(D01_B0, 0,-2) + ((2.0/3.0))*OPS_ACC(D01_B0, 0,1)
)))));

    d1_D00_dx = invDelta0block0*((idx[0] == 0) ? (
   -3*OPS_ACC(D00_B0, 2,0) + 4*OPS_ACC(D00_B0, 1,0) - (25.0/12.0)*OPS_ACC(D00_B0, 0,0) -
      (1.0/4.0)*OPS_ACC(D00_B0, 4,0) + ((4.0/3.0))*OPS_ACC(D00_B0, 3,0)
)
: ((idx[0] == 1) ? (
   -(5.0/6.0)*OPS_ACC(D00_B0, 0,0) -
      (1.0/2.0)*OPS_ACC(D00_B0, 2,0) - (1.0/4.0)*OPS_ACC(D00_B0, -1,0) + ((1.0/12.0))*OPS_ACC(D00_B0, 3,0) + ((3.0/2.0))*OPS_ACC(D00_B0, 1,0)
)
: ((idx[0]
      == -1 + block0np0) ? (
   -4*OPS_ACC(D00_B0, -1,0) + 3*OPS_ACC(D00_B0, -2,0) - (4.0/3.0)*OPS_ACC(D00_B0, -3,0) + ((1.0/4.0))*OPS_ACC(D00_B0, -4,0) +
      ((25.0/12.0))*OPS_ACC(D00_B0, 0,0)
)
: ((idx[0] == -2 + block0np0) ? (
   ((1.0/2.0))*OPS_ACC(D00_B0, -2,0) - (3.0/2.0)*OPS_ACC(D00_B0, -1,0)
      - (1.0/12.0)*OPS_ACC(D00_B0, -3,0) + ((1.0/4.0))*OPS_ACC(D00_B0, 1,0) + ((5.0/6.0))*OPS_ACC(D00_B0, 0,0)
)
: (
   -(2.0/3.0)*OPS_ACC(D00_B0, -1,0) -
      (1.0/12.0)*OPS_ACC(D00_B0, 2,0) + ((1.0/12.0))*OPS_ACC(D00_B0, -2,0) + ((2.0/3.0))*OPS_ACC(D00_B0, 1,0)
)))));

>>>>>>> 04735e8652de3d2dec770d04ef7c03ca6303cc9e
   OPS_ACC(SD000_B0, 0,0) = d1_D00_dx;

   OPS_ACC(SD001_B0, 0,0) = d1_D00_dy;

   OPS_ACC(SD010_B0, 0,0) = d1_D01_dx;

   OPS_ACC(SD011_B0, 0,0) = d1_D01_dy;

   OPS_ACC(SD100_B0, 0,0) = d1_D10_dx;

   OPS_ACC(SD101_B0, 0,0) = d1_D10_dy;

   OPS_ACC(SD110_B0, 0,0) = d1_D11_dx;

   OPS_ACC(SD111_B0, 0,0) = d1_D11_dy;


    }
  }
}
