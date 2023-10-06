//
// auto-generated by ops.py
//

//user function

// host stub function
#ifndef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel038(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2, ops_arg arg3,
 ops_arg arg4) {
#else
void ops_par_loop_opensbliblock00Kernel038_execute(ops_kernel_descriptor *desc) {
  ops_block block = desc->block;
  int dim = desc->dim;
  int *range = desc->range;
  ops_arg arg0 = desc->args[0];
  ops_arg arg1 = desc->args[1];
  ops_arg arg2 = desc->args[2];
  ops_arg arg3 = desc->args[3];
  ops_arg arg4 = desc->args[4];
  #endif

  //Timing
  double __t1,__t2,__c1,__c2;

  ops_arg args[5] = { arg0, arg1, arg2, arg3, arg4};



  #if defined(CHECKPOINTING) && !defined(OPS_LAZY)
  if (!ops_checkpointing_before(args,5,range,9)) return;
  #endif

  if (block->instance->OPS_diags > 1) {
    ops_timing_realloc(block->instance,9,"opensbliblock00Kernel038");
    block->instance->OPS_kernels[9].count++;
    ops_timers_core(&__c2,&__t2);
  }

  #ifdef OPS_DEBUG
  ops_register_args(block->instance, args, "opensbliblock00Kernel038");
  #endif


  //compute locally allocated range for the sub-block
  int start[2];
  int end[2];
  #if defined(OPS_MPI) && !defined(OPS_LAZY)
  int arg_idx[2];
  #endif
  #if defined(OPS_LAZY) || !defined(OPS_MPI)
  for ( int n=0; n<2; n++ ){
    start[n] = range[2*n];end[n] = range[2*n+1];
  }
  #else
  if (compute_ranges(args, 5,block, range, start, end, arg_idx) < 0) return;
  #endif


  //initialize global variable with the dimension of dats
  int xdim0_opensbliblock00Kernel038 = args[0].dat->size[0];
  int xdim1_opensbliblock00Kernel038 = args[1].dat->size[0];
  int xdim2_opensbliblock00Kernel038 = args[2].dat->size[0];
  int xdim3_opensbliblock00Kernel038 = args[3].dat->size[0];
  int xdim4_opensbliblock00Kernel038 = args[4].dat->size[0];

  //set up initial pointers and exchange halos if necessary
  int base0 = args[0].dat->base_offset;
  double * __restrict__ x0_B0_p = (double *)(args[0].data + base0);

  int base1 = args[1].dat->base_offset;
  double * __restrict__ rhou1_B0_p = (double *)(args[1].data + base1);

  int base2 = args[2].dat->base_offset;
  double * __restrict__ rhoE_B0_p = (double *)(args[2].data + base2);

  int base3 = args[3].dat->base_offset;
  double * __restrict__ rhou0_B0_p = (double *)(args[3].data + base3);

  int base4 = args[4].dat->base_offset;
  double * __restrict__ rho_B0_p = (double *)(args[4].data + base4);



  #ifndef OPS_LAZY
  //Halo Exchanges
  ops_H_D_exchanges_host(args, 5);
  ops_halo_exchanges(args,5,range);
  ops_H_D_exchanges_host(args, 5);
  #endif

  if (block->instance->OPS_diags > 1) {
    ops_timers_core(&__c1,&__t1);
    block->instance->OPS_kernels[9].mpi_time += __t1-__t2;
  }

  #pragma omp parallel for
  for ( int n_y=start[1]; n_y<end[1]; n_y++ ){
    #ifdef __INTEL_COMPILER
    #pragma loop_count(10000)
    #pragma omp simd
    #elif defined(__clang__)
    #pragma clang loop vectorize(assume_safety)
    #elif defined(__GNUC__)
    #pragma GCC ivdep
    #else
    #pragma simd
    #endif
    for ( int n_x=start[0]; n_x<end[0]; n_x++ ){
      const ACC<double> x0_B0(xdim0_opensbliblock00Kernel038, x0_B0_p + n_x*1 + n_y * xdim0_opensbliblock00Kernel038*1);
      ACC<double> rhou1_B0(xdim1_opensbliblock00Kernel038, rhou1_B0_p + n_x*1 + n_y * xdim1_opensbliblock00Kernel038*1);
      ACC<double> rhoE_B0(xdim2_opensbliblock00Kernel038, rhoE_B0_p + n_x*1 + n_y * xdim2_opensbliblock00Kernel038*1);
      ACC<double> rhou0_B0(xdim3_opensbliblock00Kernel038, rhou0_B0_p + n_x*1 + n_y * xdim3_opensbliblock00Kernel038*1);
      ACC<double> rho_B0(xdim4_opensbliblock00Kernel038, rho_B0_p + n_x*1 + n_y * xdim4_opensbliblock00Kernel038*1);
      
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
  }
  if (block->instance->OPS_diags > 1) {
    ops_timers_core(&__c2,&__t2);
    block->instance->OPS_kernels[9].time += __t2-__t1;
  }
  #ifndef OPS_LAZY
  ops_set_dirtybit_host(args, 5);
  ops_set_halo_dirtybit3(&args[1],range);
  ops_set_halo_dirtybit3(&args[2],range);
  ops_set_halo_dirtybit3(&args[3],range);
  ops_set_halo_dirtybit3(&args[4],range);
  #endif

  if (block->instance->OPS_diags > 1) {
    //Update kernel record
    ops_timers_core(&__c1,&__t1);
    block->instance->OPS_kernels[9].mpi_time += __t1-__t2;
    block->instance->OPS_kernels[9].transfer += ops_compute_transfer(dim, start, end, &arg0);
    block->instance->OPS_kernels[9].transfer += ops_compute_transfer(dim, start, end, &arg1);
    block->instance->OPS_kernels[9].transfer += ops_compute_transfer(dim, start, end, &arg2);
    block->instance->OPS_kernels[9].transfer += ops_compute_transfer(dim, start, end, &arg3);
    block->instance->OPS_kernels[9].transfer += ops_compute_transfer(dim, start, end, &arg4);
  }
}


#ifdef OPS_LAZY
void ops_par_loop_opensbliblock00Kernel038(char const *name, ops_block block, int dim, int* range,
 ops_arg arg0, ops_arg arg1, ops_arg arg2, ops_arg arg3,
 ops_arg arg4) {
  ops_kernel_descriptor *desc = (ops_kernel_descriptor *)calloc(1,sizeof(ops_kernel_descriptor));
  desc->name = name;
  desc->block = block;
  desc->dim = dim;
  desc->device = 0;
  desc->index = 9;
  desc->hash = 5381;
  desc->hash = ((desc->hash << 5) + desc->hash) + 9;
  for ( int i=0; i<4; i++ ){
    desc->range[i] = range[i];
    desc->orig_range[i] = range[i];
    desc->hash = ((desc->hash << 5) + desc->hash) + range[i];
  }
  desc->nargs = 5;
  desc->args = (ops_arg*)ops_malloc(5*sizeof(ops_arg));
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
