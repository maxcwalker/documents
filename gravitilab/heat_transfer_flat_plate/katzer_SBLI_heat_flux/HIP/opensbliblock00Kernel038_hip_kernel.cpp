//
// auto-generated by ops.py
//
__constant__ int dims_opensbliblock00Kernel038 [5][1];
static int dims_opensbliblock00Kernel038_h [5][1] = {{0}};

//user function
__device__

 void opensbliblock00Kernel038_gpu(const ACC<double> &x0_B0,
  ACC<double> &rhou1_B0,
  ACC<double> &rhoE_B0,
  ACC<double> &rhou0_B0,
  ACC<double>
&rho_B0)
{
   double T3 = 0.0;
   double u13 = 0.0;
   double x0 = 0.0;
   double u03 = 0.0;
   double rho_halo_1 = 0.0;
   double rho_halo_2 = 0.0;
   double u02 = 0.0;
   double Pwall = 0.0;
   double T1 = 0.0;
   double T_above = 0.0;
   double rho_halo_3 = 0.0;
   double u11 = 0.0;
   double u12 = 0.0;
   double T2 = 0.0;
   double u01 = 0.0;
   x0 = x0_B0(0,0);

   rhou0_B0(0,0) = 0.0;

   rhou1_B0(0,0) = 0.0;

   rhoE_B0(0,0) = Twall*rcinv12*rho_B0(0,0)/(gama*(gama - 1.0));

    Pwall = (gama - 1)*(-((rc13)*pow(rhou0_B0(0,0), 2) + (rc13)*pow(rhou1_B0(0,0),
      2))/rho_B0(0,0) + rhoE_B0(0,0));

   u01 = rhou0_B0(0,1)/rho_B0(0,1);

   u02 = rhou0_B0(0,2)/rho_B0(0,2);

   u03 = rhou0_B0(0,3)/rho_B0(0,3);

   u11 = rhou1_B0(0,1)/rho_B0(0,1);

   u12 = rhou1_B0(0,2)/rho_B0(0,2);

   u13 = rhou1_B0(0,3)/rho_B0(0,3);

    T_above = pow(Minf, 2)*gama*(gama - 1)*(-((rc13)*pow(rhou0_B0(0,1), 2) +
      (rc13)*pow(rhou1_B0(0,1), 2))/rho_B0(0,1) + rhoE_B0(0,1))/rho_B0(0,1);

   T1 = 2*Twall - T_above;

   rho_halo_1 = pow(Minf, 2)*gama*Pwall/T1;

   rho_B0(0,-1) = rho_halo_1;

   rhou0_B0(0,-1) = -rho_halo_1*u01;

   rhou1_B0(0,-1) = -rho_halo_1*u11;

   rhoE_B0(0,-1) = rcinv5*Pwall + (rc13)*rho_halo_1*(pow(u01, 2) + pow(u11, 2));

   T2 = 3*Twall - 2*T_above;

   rho_halo_1 = pow(Minf, 2)*gama*Pwall/T1;

   rho_B0(0,-1) = rho_halo_1;

   rho_halo_2 = pow(Minf, 2)*gama*Pwall/T2;

   rho_B0(0,-2) = rho_halo_2;

   rhou0_B0(0,-1) = -rho_halo_1*u01;

   rhou1_B0(0,-1) = -rho_halo_1*u11;

   rhou0_B0(0,-2) = -rho_halo_2*u02;

   rhou1_B0(0,-2) = -rho_halo_2*u12;

   rhoE_B0(0,-1) = rcinv5*Pwall + (rc13)*rho_halo_1*(pow(u01, 2) + pow(u11, 2));

   rhoE_B0(0,-2) = rcinv5*Pwall + (rc13)*rho_halo_2*(pow(u02, 2) + pow(u12, 2));

   T3 = 4*Twall - 3*T_above;

   rho_halo_1 = pow(Minf, 2)*gama*Pwall/T1;

   rho_B0(0,-1) = rho_halo_1;

   rho_halo_2 = pow(Minf, 2)*gama*Pwall/T2;

   rho_B0(0,-2) = rho_halo_2;

   rho_halo_3 = pow(Minf, 2)*gama*Pwall/T3;

   rho_B0(0,-3) = rho_halo_3;

   rhou0_B0(0,-1) = -rho_halo_1*u01;

   rhou1_B0(0,-1) = -rho_halo_1*u11;

   rhou0_B0(0,-2) = -rho_halo_2*u02;

   rhou1_B0(0,-2) = -rho_halo_2*u12;

   rhou0_B0(0,-3) = -rho_halo_3*u03;

   rhou1_B0(0,-3) = -rho_halo_3*u13;

   rhoE_B0(0,-1) = rcinv5*Pwall + (rc13)*rho_halo_1*(pow(u01, 2) + pow(u11, 2));

   rhoE_B0(0,-2) = rcinv5*Pwall + (rc13)*rho_halo_2*(pow(u02, 2) + pow(u12, 2));

   rhoE_B0(0,-3) = rcinv5*Pwall + (rc13)*rho_halo_3*(pow(u03, 2) + pow(u13, 2));

}



__global__ void ops_opensbliblock00Kernel038(
double* __restrict arg0,
double* __restrict arg1,
double* __restrict arg2,
double* __restrict arg3,
double* __restrict arg4,
int size0,
int size1 ){

  //Make sure constants are not optimized out
  if (size0==-1) dims_opensbliblock00Kernel038[0][0]=0;


  int idx_y = hipBlockDim_y * hipBlockIdx_y + hipThreadIdx_y;
  int idx_x = hipBlockDim_x * hipBlockIdx_x + hipThreadIdx_x;

  arg0 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel038[0][0];
  arg1 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel038[1][0];
  arg2 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel038[2][0];
  arg3 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel038[3][0];
  arg4 += idx_x * 1*1 + idx_y * 1*1 * dims_opensbliblock00Kernel038[4][0];

  if (idx_x < size0 && idx_y < size1) {
    const ACC<double> argp0(dims_opensbliblock00Kernel038[0][0], arg0);
    ACC<double> argp1(dims_opensbliblock00Kernel038[1][0], arg1);
    ACC<double> argp2(dims_opensbliblock00Kernel038[2][0], arg2);
    ACC<double> argp3(dims_opensbliblock00Kernel038[3][0], arg3);
    ACC<double> argp4(dims_opensbliblock00Kernel038[4][0], arg4);
    opensbliblock00Kernel038_gpu(argp0, argp1, argp2, argp3,
                   argp4);
  }

}

// host stub function
#ifndef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel038(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2, ops_arg arg3,
 ops_arg arg4) {
#else
void ops_par_loop_opensbliblock00Kernel038_execute(ops_kernel_descriptor *desc) {
  int dim = desc->dim;
  #if OPS_MPI
  ops_block block = desc->block;
  #endif
  int *range = desc->range;
  ops_arg arg0 = desc->args[0];
  ops_arg arg1 = desc->args[1];
  ops_arg arg2 = desc->args[2];
  ops_arg arg3 = desc->args[3];
  ops_arg arg4 = desc->args[4];
  #endif

  //Timing
  double t1,t2,c1,c2;

  ops_arg args[5] = { arg0, arg1, arg2, arg3, arg4};


  #if CHECKPOINTING && !OPS_LAZY
  if (!ops_checkpointing_before(args,5,range,9)) return;
  #endif

  if (block->instance->OPS_diags > 1) {
    ops_timing_realloc(block->instance,9,"opensbliblock00Kernel038");
    block->instance->OPS_kernels[9].count++;
    ops_timers_core(&c1,&t1);
  }

  //compute locally allocated range for the sub-block
  int start[2];
  int end[2];
  #if OPS_MPI && !OPS_LAZY
  sub_block_list sb = OPS_sub_block_list[block->index];
  #endif //OPS_MPI

  #ifdef OPS_MPI
  int arg_idx[2];
  #endif
  #ifdef OPS_MPI
  if (compute_ranges(args, 5,block, range, start, end, arg_idx) < 0) return;
  #else //OPS_MPI
  for ( int n=0; n<2; n++ ){
    start[n] = range[2*n];end[n] = range[2*n+1];
  }
  #endif
  int xdim0 = args[0].dat->size[0];
  int xdim1 = args[1].dat->size[0];
  int xdim2 = args[2].dat->size[0];
  int xdim3 = args[3].dat->size[0];
  int xdim4 = args[4].dat->size[0];

  if (xdim0 != dims_opensbliblock00Kernel038_h[0][0] || xdim1 != dims_opensbliblock00Kernel038_h[1][0] || xdim2 != dims_opensbliblock00Kernel038_h[2][0] || xdim3 != dims_opensbliblock00Kernel038_h[3][0] || xdim4 != dims_opensbliblock00Kernel038_h[4][0]) {
    dims_opensbliblock00Kernel038_h[0][0] = xdim0;
    dims_opensbliblock00Kernel038_h[1][0] = xdim1;
    dims_opensbliblock00Kernel038_h[2][0] = xdim2;
    dims_opensbliblock00Kernel038_h[3][0] = xdim3;
    dims_opensbliblock00Kernel038_h[4][0] = xdim4;
    hipSafeCall(block->instance->ostream(), hipMemcpyToSymbol(HIP_SYMBOL(dims_opensbliblock00Kernel038), dims_opensbliblock00Kernel038_h, sizeof(dims_opensbliblock00Kernel038)));
  }



  int x_size = MAX(0,end[0]-start[0]);
  int y_size = MAX(0,end[1]-start[1]);

  dim3 grid( (x_size-1)/block->instance->OPS_block_size_x+ 1, (y_size-1)/block->instance->OPS_block_size_y + 1, 1);
  dim3 tblock(block->instance->OPS_block_size_x,block->instance->OPS_block_size_y,block->instance->OPS_block_size_z);



  long long int dat0 = (block->instance->OPS_soa ? args[0].dat->type_size : args[0].dat->elem_size);
  long long int dat1 = (block->instance->OPS_soa ? args[1].dat->type_size : args[1].dat->elem_size);
  long long int dat2 = (block->instance->OPS_soa ? args[2].dat->type_size : args[2].dat->elem_size);
  long long int dat3 = (block->instance->OPS_soa ? args[3].dat->type_size : args[3].dat->elem_size);
  long long int dat4 = (block->instance->OPS_soa ? args[4].dat->type_size : args[4].dat->elem_size);

  char *p_a[5];

  //set up initial pointers
  long long int base0 = args[0].dat->base_offset + 
           dat0 * 1 * (start[0] * args[0].stencil->stride[0]);
  base0 = base0+ dat0 *
    args[0].dat->size[0] *
    (start[1] * args[0].stencil->stride[1]);
  p_a[0] = (char *)args[0].data_d + base0;

  long long int base1 = args[1].dat->base_offset + 
           dat1 * 1 * (start[0] * args[1].stencil->stride[0]);
  base1 = base1+ dat1 *
    args[1].dat->size[0] *
    (start[1] * args[1].stencil->stride[1]);
  p_a[1] = (char *)args[1].data_d + base1;

  long long int base2 = args[2].dat->base_offset + 
           dat2 * 1 * (start[0] * args[2].stencil->stride[0]);
  base2 = base2+ dat2 *
    args[2].dat->size[0] *
    (start[1] * args[2].stencil->stride[1]);
  p_a[2] = (char *)args[2].data_d + base2;

  long long int base3 = args[3].dat->base_offset + 
           dat3 * 1 * (start[0] * args[3].stencil->stride[0]);
  base3 = base3+ dat3 *
    args[3].dat->size[0] *
    (start[1] * args[3].stencil->stride[1]);
  p_a[3] = (char *)args[3].data_d + base3;

  long long int base4 = args[4].dat->base_offset + 
           dat4 * 1 * (start[0] * args[4].stencil->stride[0]);
  base4 = base4+ dat4 *
    args[4].dat->size[0] *
    (start[1] * args[4].stencil->stride[1]);
  p_a[4] = (char *)args[4].data_d + base4;


  #ifndef OPS_LAZY
  ops_H_D_exchanges_device(args, 5);
  ops_halo_exchanges(args,5,range);
  #endif

  if (block->instance->OPS_diags > 1) {
    ops_timers_core(&c2,&t2);
    block->instance->OPS_kernels[9].mpi_time += t2-t1;
  }


  //call kernel wrapper function, passing in pointers to data
  if (x_size > 0 && y_size > 0)
    hipLaunchKernelGGL(ops_opensbliblock00Kernel038,grid ,tblock ,0 ,0 , (double *)p_a[0], (double *)p_a[1],
         (double *)p_a[2], (double *)p_a[3],
         (double *)p_a[4],x_size, y_size);

  hipSafeCall(block->instance->ostream(), hipGetLastError());

  if (block->instance->OPS_diags>1) {
    hipSafeCall(block->instance->ostream(), hipDeviceSynchronize());
    ops_timers_core(&c1,&t1);
    block->instance->OPS_kernels[9].time += t1-t2;
  }

  #ifndef OPS_LAZY
  ops_set_dirtybit_device(args, 5);
  ops_set_halo_dirtybit3(&args[1],range);
  ops_set_halo_dirtybit3(&args[2],range);
  ops_set_halo_dirtybit3(&args[3],range);
  ops_set_halo_dirtybit3(&args[4],range);
  #endif

  if (block->instance->OPS_diags > 1) {
    //Update kernel record
    ops_timers_core(&c2,&t2);
    block->instance->OPS_kernels[9].mpi_time += t2-t1;
    block->instance->OPS_kernels[9].transfer += ops_compute_transfer(dim, start, end, &arg0);
    block->instance->OPS_kernels[9].transfer += ops_compute_transfer(dim, start, end, &arg1);
    block->instance->OPS_kernels[9].transfer += ops_compute_transfer(dim, start, end, &arg2);
    block->instance->OPS_kernels[9].transfer += ops_compute_transfer(dim, start, end, &arg3);
    block->instance->OPS_kernels[9].transfer += ops_compute_transfer(dim, start, end, &arg4);
  }
}

#ifdef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel038(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2, ops_arg arg3, ops_arg arg4) {
  ops_kernel_descriptor *desc = (ops_kernel_descriptor *)calloc(1,sizeof(ops_kernel_descriptor));
  desc->name = name;
  desc->block = block;
  desc->dim = dim;
  desc->device = 1;
  desc->index = 9;
  desc->hash = 5381;
  desc->hash = ((desc->hash << 5) + desc->hash) + 9;
  for ( int i=0; i<4; i++ ){
    desc->range[i] = range[i];
    desc->orig_range[i] = range[i];
    desc->hash = ((desc->hash << 5) + desc->hash) + range[i];
  }
  desc->nargs = 5;
  desc->args = (ops_arg*)malloc(5*sizeof(ops_arg));
  desc->args[0] = arg0;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg0.dat->index;
  desc->args[1] = arg1;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg1.dat->index;
  desc->args[2] = arg2;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg2.dat->index;
  desc->args[3] = arg3;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg3.dat->index;
  desc->args[4] = arg4;
  desc->hash = ((desc->hash << 5) + desc->hash) + arg4.dat->index;
  desc->function = ops_par_loop_opensbliblock00Kernel038_execute;
  if (block->instance->OPS_diags > 1) {
    ops_timing_realloc(block->instance,9,"opensbliblock00Kernel038");
  }
  ops_enqueue_kernel(desc);
}
#endif
