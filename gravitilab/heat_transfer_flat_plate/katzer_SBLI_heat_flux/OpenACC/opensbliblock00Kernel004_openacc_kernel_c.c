//
// auto-generated by ops.py
//

#define OPS_GPU

int xdim0_opensbliblock00Kernel004;
int xdim1_opensbliblock00Kernel004;
int xdim2_opensbliblock00Kernel004;
int xdim3_opensbliblock00Kernel004;
int xdim4_opensbliblock00Kernel004;
int xdim5_opensbliblock00Kernel004;
int xdim6_opensbliblock00Kernel004;
int xdim7_opensbliblock00Kernel004;
int xdim8_opensbliblock00Kernel004;
int xdim9_opensbliblock00Kernel004;
int xdim10_opensbliblock00Kernel004;
int xdim11_opensbliblock00Kernel004;
int xdim12_opensbliblock00Kernel004;

//user function
inline 
 void opensbliblock00Kernel004(const ptr_double theta_B0,
  const ptr_double rhoE_B0,
  const ptr_double rho_B0,
  const ptr_double p_B0,
  const ptr_double rhou1_B0,
  const ptr_double a_B0,
  const ptr_double rhou0_B0,
  const ptr_double u0_B0,
  const ptr_double u1_B0,
  ptr_double wk6_B0,
  ptr_double wk7_B0,
  ptr_double wk4_B0,
  ptr_double wk5_B0)
{
   double max_lambda_1_22 = 0.0;
   double AVG_1_u1 = 0.0;
   double AVG_1_1_LEV_20 = 0.0;
   double AVG_1_1_LEV_10 = 0.0;
   double CF_25 = 0.0;
   double CF_24 = 0.0;
   double AVG_1_1_LEV_21 = 0.0;
   double AVG_1_1_LEV_33 = 0.0;
   double delta_0 = 0.0;
   double CF_12 = 0.0;
   double CF_35 = 0.0;
   double delta_1 = 0.0;
   double CS_10 = 0.0;
   double beta_0 = 0.0;
   double AVG_1_1_LEV_32 = 0.0;
   double alpha_1 = 0.0;
   double Recon_1 = 0.0;
   double CS_32 = 0.0;
   double CS_00 = 0.0;
   double CS_11 = 0.0;
   double beta_1 = 0.0;
   double CS_01 = 0.0;
   double AVG_1_1_LEV_23 = 0.0;
   double CF_00 = 0.0;
   double CF_21 = 0.0;
   double CS_31 = 0.0;
   double CF_11 = 0.0;
   double CF_30 = 0.0;
   double Recon_3 = 0.0;
   double Recon_2 = 0.0;
   double CS_34 = 0.0;
   double AVG_1_1_LEV_22 = 0.0;
   double CF_05 = 0.0;
   double CS_35 = 0.0;
   double CS_25 = 0.0;
   double AVG_1_1_LEV_01 = 0.0;
   double CS_33 = 0.0;
   double CS_24 = 0.0;
   double inv_AVG_rho = 0.0;
   double AVG_1_1_LEV_00 = 0.0;
   double beta_2 = 0.0;
   double CS_23 = 0.0;
   double AVG_1_u0 = 0.0;
   double CS_03 = 0.0;
   double CF_23 = 0.0;
   double CS_14 = 0.0;
   double CS_02 = 0.0;
   double CF_33 = 0.0;
   double CS_15 = 0.0;
   double CF_13 = 0.0;
   double TENO_CT = 0.0;
   double Recon_0 = 0.0;
   double AVG_1_rho = 0.0;
   double CF_14 = 0.0;
   double max_lambda_1_11 = 0.0;
   double AVG_1_1_LEV_11 = 0.0;
   double CF_15 = 0.0;
   double CF_34 = 0.0;
   double CF_20 = 0.0;
   double AVG_1_a = 0.0;
   double alpha_0 = 0.0;
   double max_lambda_1_00 = 0.0;
   double CS_30 = 0.0;
   double CF_31 = 0.0;
   double AVG_1_1_LEV_02 = 0.0;
   double CF_01 = 0.0;
   double inv_omega_sum = 0.0;
   double CS_21 = 0.0;
   double AVG_1_1_LEV_03 = 0.0;
   double AVG_1_1_LEV_31 = 0.0;
   double CS_05 = 0.0;
   double CF_10 = 0.0;
   double CS_20 = 0.0;
   double CF_04 = 0.0;
   double alpha_2 = 0.0;
   double AVG_1_inv_rho = 0.0;
   double inv_AVG_a = 0.0;
   double CS_04 = 0.0;
   double CS_13 = 0.0;
   double inv_alpha_sum = 0.0;
   double AVG_1_1_LEV_30 = 0.0;
   double CF_03 = 0.0;
   double CF_02 = 0.0;
   double max_lambda_1_33 = 0.0;
   double CS_22 = 0.0;
   double CF_32 = 0.0;
   double delta_2 = 0.0;
   double CF_22 = 0.0;
   double CS_12 = 0.0;
   AVG_1_rho = sqrt(OPS_ACC(rho_B0, 0,0)*OPS_ACC(rho_B0, 0,1));

   AVG_1_inv_rho = 1.0/(sqrt(OPS_ACC(rho_B0, 0,1)) + sqrt(OPS_ACC(rho_B0, 0,0)));

    AVG_1_u0 = AVG_1_inv_rho*(sqrt(OPS_ACC(rho_B0, 0,1))*OPS_ACC(u0_B0, 0,1) +
      sqrt(OPS_ACC(rho_B0, 0,0))*OPS_ACC(u0_B0, 0,0));

    AVG_1_u1 = AVG_1_inv_rho*(sqrt(OPS_ACC(rho_B0, 0,1))*OPS_ACC(u1_B0, 0,1) +
      sqrt(OPS_ACC(rho_B0, 0,0))*OPS_ACC(u1_B0, 0,0));

    AVG_1_a = sqrt(gamma_m1*(AVG_1_inv_rho*((OPS_ACC(p_B0, 0,1) + OPS_ACC(rhoE_B0, 0,1))/sqrt(OPS_ACC(rho_B0, 0,1)) +
      (OPS_ACC(p_B0, 0,0) + OPS_ACC(rhoE_B0, 0,0))/sqrt(OPS_ACC(rho_B0, 0,0))) - rc13*(pow(AVG_1_u0, 2) +
      pow(AVG_1_u1, 2))));

   inv_AVG_a = 1.0/AVG_1_a;

   inv_AVG_rho = 1.0/AVG_1_rho;

    AVG_1_1_LEV_00 = -rc13*(gama*pow(AVG_1_u0, 2)*pow(inv_AVG_a, 2) + gama*pow(AVG_1_u1, 2)*pow(inv_AVG_a, 2) -
      pow(AVG_1_u0, 2)*pow(inv_AVG_a, 2) - pow(AVG_1_u1, 2)*pow(inv_AVG_a, 2) - 2);

   AVG_1_1_LEV_01 = gamma_m1*AVG_1_u0*pow(inv_AVG_a, 2);

   AVG_1_1_LEV_02 = gamma_m1*AVG_1_u1*pow(inv_AVG_a, 2);

   AVG_1_1_LEV_03 = -gamma_m1*pow(inv_AVG_a, 2);

   AVG_1_1_LEV_10 = -AVG_1_u0*inv_AVG_rho;

   AVG_1_1_LEV_11 = inv_AVG_rho;

    AVG_1_1_LEV_20 = -0.353553390593274*inv_AVG_a*inv_AVG_rho*(-gama*pow(AVG_1_u0, 2) - gama*pow(AVG_1_u1, 2) +
      2*AVG_1_a*AVG_1_u1 + pow(AVG_1_u0, 2) + pow(AVG_1_u1, 2));

   AVG_1_1_LEV_21 = -0.707106781186547*gamma_m1*AVG_1_u0*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_22 = 0.707106781186547*inv_AVG_a*inv_AVG_rho*(-gama*AVG_1_u1 + AVG_1_a + AVG_1_u1);

   AVG_1_1_LEV_23 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    AVG_1_1_LEV_30 = 0.353553390593274*inv_AVG_a*inv_AVG_rho*(gama*pow(AVG_1_u0, 2) + gama*pow(AVG_1_u1, 2) +
      2*AVG_1_a*AVG_1_u1 - pow(AVG_1_u0, 2) - pow(AVG_1_u1, 2));

   AVG_1_1_LEV_31 = -0.707106781186547*gamma_m1*AVG_1_u0*inv_AVG_a*inv_AVG_rho;

   AVG_1_1_LEV_32 = -0.707106781186547*inv_AVG_a*inv_AVG_rho*(gama*AVG_1_u1 + AVG_1_a - AVG_1_u1);

   AVG_1_1_LEV_33 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    CF_00 = AVG_1_1_LEV_00*OPS_ACC(rhou1_B0, 0,-2) + AVG_1_1_LEV_01*OPS_ACC(rhou0_B0, 0,-2)*OPS_ACC(u1_B0, 0,-2) +
      AVG_1_1_LEV_02*OPS_ACC(p_B0, 0,-2) + AVG_1_1_LEV_02*OPS_ACC(rhou1_B0, 0,-2)*OPS_ACC(u1_B0, 0,-2) +
      AVG_1_1_LEV_03*OPS_ACC(p_B0, 0,-2)*OPS_ACC(u1_B0, 0,-2) +
      AVG_1_1_LEV_03*OPS_ACC(rhoE_B0, 0,-2)*OPS_ACC(u1_B0, 0,-2);

   CF_10 = AVG_1_1_LEV_10*OPS_ACC(rhou1_B0, 0,-2) + AVG_1_1_LEV_11*OPS_ACC(rhou0_B0, 0,-2)*OPS_ACC(u1_B0, 0,-2);

    CF_20 = AVG_1_1_LEV_20*OPS_ACC(rhou1_B0, 0,-2) + AVG_1_1_LEV_21*OPS_ACC(rhou0_B0, 0,-2)*OPS_ACC(u1_B0, 0,-2) +
      AVG_1_1_LEV_22*OPS_ACC(p_B0, 0,-2) + AVG_1_1_LEV_22*OPS_ACC(rhou1_B0, 0,-2)*OPS_ACC(u1_B0, 0,-2) +
      AVG_1_1_LEV_23*OPS_ACC(p_B0, 0,-2)*OPS_ACC(u1_B0, 0,-2) +
      AVG_1_1_LEV_23*OPS_ACC(rhoE_B0, 0,-2)*OPS_ACC(u1_B0, 0,-2);

    CF_30 = AVG_1_1_LEV_30*OPS_ACC(rhou1_B0, 0,-2) + AVG_1_1_LEV_31*OPS_ACC(rhou0_B0, 0,-2)*OPS_ACC(u1_B0, 0,-2) +
      AVG_1_1_LEV_32*OPS_ACC(p_B0, 0,-2) + AVG_1_1_LEV_32*OPS_ACC(rhou1_B0, 0,-2)*OPS_ACC(u1_B0, 0,-2) +
      AVG_1_1_LEV_33*OPS_ACC(p_B0, 0,-2)*OPS_ACC(u1_B0, 0,-2) +
      AVG_1_1_LEV_33*OPS_ACC(rhoE_B0, 0,-2)*OPS_ACC(u1_B0, 0,-2);

    CF_01 = AVG_1_1_LEV_00*OPS_ACC(rhou1_B0, 0,-1) + AVG_1_1_LEV_01*OPS_ACC(rhou0_B0, 0,-1)*OPS_ACC(u1_B0, 0,-1) +
      AVG_1_1_LEV_02*OPS_ACC(p_B0, 0,-1) + AVG_1_1_LEV_02*OPS_ACC(rhou1_B0, 0,-1)*OPS_ACC(u1_B0, 0,-1) +
      AVG_1_1_LEV_03*OPS_ACC(p_B0, 0,-1)*OPS_ACC(u1_B0, 0,-1) +
      AVG_1_1_LEV_03*OPS_ACC(rhoE_B0, 0,-1)*OPS_ACC(u1_B0, 0,-1);

   CF_11 = AVG_1_1_LEV_10*OPS_ACC(rhou1_B0, 0,-1) + AVG_1_1_LEV_11*OPS_ACC(rhou0_B0, 0,-1)*OPS_ACC(u1_B0, 0,-1);

    CF_21 = AVG_1_1_LEV_20*OPS_ACC(rhou1_B0, 0,-1) + AVG_1_1_LEV_21*OPS_ACC(rhou0_B0, 0,-1)*OPS_ACC(u1_B0, 0,-1) +
      AVG_1_1_LEV_22*OPS_ACC(p_B0, 0,-1) + AVG_1_1_LEV_22*OPS_ACC(rhou1_B0, 0,-1)*OPS_ACC(u1_B0, 0,-1) +
      AVG_1_1_LEV_23*OPS_ACC(p_B0, 0,-1)*OPS_ACC(u1_B0, 0,-1) +
      AVG_1_1_LEV_23*OPS_ACC(rhoE_B0, 0,-1)*OPS_ACC(u1_B0, 0,-1);

    CF_31 = AVG_1_1_LEV_30*OPS_ACC(rhou1_B0, 0,-1) + AVG_1_1_LEV_31*OPS_ACC(rhou0_B0, 0,-1)*OPS_ACC(u1_B0, 0,-1) +
      AVG_1_1_LEV_32*OPS_ACC(p_B0, 0,-1) + AVG_1_1_LEV_32*OPS_ACC(rhou1_B0, 0,-1)*OPS_ACC(u1_B0, 0,-1) +
      AVG_1_1_LEV_33*OPS_ACC(p_B0, 0,-1)*OPS_ACC(u1_B0, 0,-1) +
      AVG_1_1_LEV_33*OPS_ACC(rhoE_B0, 0,-1)*OPS_ACC(u1_B0, 0,-1);

    CF_02 = AVG_1_1_LEV_00*OPS_ACC(rhou1_B0, 0,0) + AVG_1_1_LEV_01*OPS_ACC(rhou0_B0, 0,0)*OPS_ACC(u1_B0, 0,0) +
      AVG_1_1_LEV_02*OPS_ACC(p_B0, 0,0) + AVG_1_1_LEV_02*OPS_ACC(rhou1_B0, 0,0)*OPS_ACC(u1_B0, 0,0) +
      AVG_1_1_LEV_03*OPS_ACC(p_B0, 0,0)*OPS_ACC(u1_B0, 0,0) +
      AVG_1_1_LEV_03*OPS_ACC(rhoE_B0, 0,0)*OPS_ACC(u1_B0, 0,0);

   CF_12 = AVG_1_1_LEV_10*OPS_ACC(rhou1_B0, 0,0) + AVG_1_1_LEV_11*OPS_ACC(rhou0_B0, 0,0)*OPS_ACC(u1_B0, 0,0);

    CF_22 = AVG_1_1_LEV_20*OPS_ACC(rhou1_B0, 0,0) + AVG_1_1_LEV_21*OPS_ACC(rhou0_B0, 0,0)*OPS_ACC(u1_B0, 0,0) +
      AVG_1_1_LEV_22*OPS_ACC(p_B0, 0,0) + AVG_1_1_LEV_22*OPS_ACC(rhou1_B0, 0,0)*OPS_ACC(u1_B0, 0,0) +
      AVG_1_1_LEV_23*OPS_ACC(p_B0, 0,0)*OPS_ACC(u1_B0, 0,0) +
      AVG_1_1_LEV_23*OPS_ACC(rhoE_B0, 0,0)*OPS_ACC(u1_B0, 0,0);

    CF_32 = AVG_1_1_LEV_30*OPS_ACC(rhou1_B0, 0,0) + AVG_1_1_LEV_31*OPS_ACC(rhou0_B0, 0,0)*OPS_ACC(u1_B0, 0,0) +
      AVG_1_1_LEV_32*OPS_ACC(p_B0, 0,0) + AVG_1_1_LEV_32*OPS_ACC(rhou1_B0, 0,0)*OPS_ACC(u1_B0, 0,0) +
      AVG_1_1_LEV_33*OPS_ACC(p_B0, 0,0)*OPS_ACC(u1_B0, 0,0) +
      AVG_1_1_LEV_33*OPS_ACC(rhoE_B0, 0,0)*OPS_ACC(u1_B0, 0,0);

    CF_03 = AVG_1_1_LEV_00*OPS_ACC(rhou1_B0, 0,1) + AVG_1_1_LEV_01*OPS_ACC(rhou0_B0, 0,1)*OPS_ACC(u1_B0, 0,1) +
      AVG_1_1_LEV_02*OPS_ACC(p_B0, 0,1) + AVG_1_1_LEV_02*OPS_ACC(rhou1_B0, 0,1)*OPS_ACC(u1_B0, 0,1) +
      AVG_1_1_LEV_03*OPS_ACC(p_B0, 0,1)*OPS_ACC(u1_B0, 0,1) +
      AVG_1_1_LEV_03*OPS_ACC(rhoE_B0, 0,1)*OPS_ACC(u1_B0, 0,1);

   CF_13 = AVG_1_1_LEV_10*OPS_ACC(rhou1_B0, 0,1) + AVG_1_1_LEV_11*OPS_ACC(rhou0_B0, 0,1)*OPS_ACC(u1_B0, 0,1);

    CF_23 = AVG_1_1_LEV_20*OPS_ACC(rhou1_B0, 0,1) + AVG_1_1_LEV_21*OPS_ACC(rhou0_B0, 0,1)*OPS_ACC(u1_B0, 0,1) +
      AVG_1_1_LEV_22*OPS_ACC(p_B0, 0,1) + AVG_1_1_LEV_22*OPS_ACC(rhou1_B0, 0,1)*OPS_ACC(u1_B0, 0,1) +
      AVG_1_1_LEV_23*OPS_ACC(p_B0, 0,1)*OPS_ACC(u1_B0, 0,1) +
      AVG_1_1_LEV_23*OPS_ACC(rhoE_B0, 0,1)*OPS_ACC(u1_B0, 0,1);

    CF_33 = AVG_1_1_LEV_30*OPS_ACC(rhou1_B0, 0,1) + AVG_1_1_LEV_31*OPS_ACC(rhou0_B0, 0,1)*OPS_ACC(u1_B0, 0,1) +
      AVG_1_1_LEV_32*OPS_ACC(p_B0, 0,1) + AVG_1_1_LEV_32*OPS_ACC(rhou1_B0, 0,1)*OPS_ACC(u1_B0, 0,1) +
      AVG_1_1_LEV_33*OPS_ACC(p_B0, 0,1)*OPS_ACC(u1_B0, 0,1) +
      AVG_1_1_LEV_33*OPS_ACC(rhoE_B0, 0,1)*OPS_ACC(u1_B0, 0,1);

    CF_04 = AVG_1_1_LEV_00*OPS_ACC(rhou1_B0, 0,2) + AVG_1_1_LEV_01*OPS_ACC(rhou0_B0, 0,2)*OPS_ACC(u1_B0, 0,2) +
      AVG_1_1_LEV_02*OPS_ACC(p_B0, 0,2) + AVG_1_1_LEV_02*OPS_ACC(rhou1_B0, 0,2)*OPS_ACC(u1_B0, 0,2) +
      AVG_1_1_LEV_03*OPS_ACC(p_B0, 0,2)*OPS_ACC(u1_B0, 0,2) +
      AVG_1_1_LEV_03*OPS_ACC(rhoE_B0, 0,2)*OPS_ACC(u1_B0, 0,2);

   CF_14 = AVG_1_1_LEV_10*OPS_ACC(rhou1_B0, 0,2) + AVG_1_1_LEV_11*OPS_ACC(rhou0_B0, 0,2)*OPS_ACC(u1_B0, 0,2);

    CF_24 = AVG_1_1_LEV_20*OPS_ACC(rhou1_B0, 0,2) + AVG_1_1_LEV_21*OPS_ACC(rhou0_B0, 0,2)*OPS_ACC(u1_B0, 0,2) +
      AVG_1_1_LEV_22*OPS_ACC(p_B0, 0,2) + AVG_1_1_LEV_22*OPS_ACC(rhou1_B0, 0,2)*OPS_ACC(u1_B0, 0,2) +
      AVG_1_1_LEV_23*OPS_ACC(p_B0, 0,2)*OPS_ACC(u1_B0, 0,2) +
      AVG_1_1_LEV_23*OPS_ACC(rhoE_B0, 0,2)*OPS_ACC(u1_B0, 0,2);

    CF_34 = AVG_1_1_LEV_30*OPS_ACC(rhou1_B0, 0,2) + AVG_1_1_LEV_31*OPS_ACC(rhou0_B0, 0,2)*OPS_ACC(u1_B0, 0,2) +
      AVG_1_1_LEV_32*OPS_ACC(p_B0, 0,2) + AVG_1_1_LEV_32*OPS_ACC(rhou1_B0, 0,2)*OPS_ACC(u1_B0, 0,2) +
      AVG_1_1_LEV_33*OPS_ACC(p_B0, 0,2)*OPS_ACC(u1_B0, 0,2) +
      AVG_1_1_LEV_33*OPS_ACC(rhoE_B0, 0,2)*OPS_ACC(u1_B0, 0,2);

    CF_05 = AVG_1_1_LEV_00*OPS_ACC(rhou1_B0, 0,3) + AVG_1_1_LEV_01*OPS_ACC(rhou0_B0, 0,3)*OPS_ACC(u1_B0, 0,3) +
      AVG_1_1_LEV_02*OPS_ACC(p_B0, 0,3) + AVG_1_1_LEV_02*OPS_ACC(rhou1_B0, 0,3)*OPS_ACC(u1_B0, 0,3) +
      AVG_1_1_LEV_03*OPS_ACC(p_B0, 0,3)*OPS_ACC(u1_B0, 0,3) +
      AVG_1_1_LEV_03*OPS_ACC(rhoE_B0, 0,3)*OPS_ACC(u1_B0, 0,3);

   CF_15 = AVG_1_1_LEV_10*OPS_ACC(rhou1_B0, 0,3) + AVG_1_1_LEV_11*OPS_ACC(rhou0_B0, 0,3)*OPS_ACC(u1_B0, 0,3);

    CF_25 = AVG_1_1_LEV_20*OPS_ACC(rhou1_B0, 0,3) + AVG_1_1_LEV_21*OPS_ACC(rhou0_B0, 0,3)*OPS_ACC(u1_B0, 0,3) +
      AVG_1_1_LEV_22*OPS_ACC(p_B0, 0,3) + AVG_1_1_LEV_22*OPS_ACC(rhou1_B0, 0,3)*OPS_ACC(u1_B0, 0,3) +
      AVG_1_1_LEV_23*OPS_ACC(p_B0, 0,3)*OPS_ACC(u1_B0, 0,3) +
      AVG_1_1_LEV_23*OPS_ACC(rhoE_B0, 0,3)*OPS_ACC(u1_B0, 0,3);

    CF_35 = AVG_1_1_LEV_30*OPS_ACC(rhou1_B0, 0,3) + AVG_1_1_LEV_31*OPS_ACC(rhou0_B0, 0,3)*OPS_ACC(u1_B0, 0,3) +
      AVG_1_1_LEV_32*OPS_ACC(p_B0, 0,3) + AVG_1_1_LEV_32*OPS_ACC(rhou1_B0, 0,3)*OPS_ACC(u1_B0, 0,3) +
      AVG_1_1_LEV_33*OPS_ACC(p_B0, 0,3)*OPS_ACC(u1_B0, 0,3) +
      AVG_1_1_LEV_33*OPS_ACC(rhoE_B0, 0,3)*OPS_ACC(u1_B0, 0,3);

    CS_00 = AVG_1_1_LEV_00*OPS_ACC(rho_B0, 0,-2) + AVG_1_1_LEV_01*OPS_ACC(rhou0_B0, 0,-2) +
      AVG_1_1_LEV_02*OPS_ACC(rhou1_B0, 0,-2) + AVG_1_1_LEV_03*OPS_ACC(rhoE_B0, 0,-2);

    CS_01 = AVG_1_1_LEV_00*OPS_ACC(rho_B0, 0,-1) + AVG_1_1_LEV_01*OPS_ACC(rhou0_B0, 0,-1) +
      AVG_1_1_LEV_02*OPS_ACC(rhou1_B0, 0,-1) + AVG_1_1_LEV_03*OPS_ACC(rhoE_B0, 0,-1);

    CS_02 = AVG_1_1_LEV_00*OPS_ACC(rho_B0, 0,0) + AVG_1_1_LEV_01*OPS_ACC(rhou0_B0, 0,0) +
      AVG_1_1_LEV_02*OPS_ACC(rhou1_B0, 0,0) + AVG_1_1_LEV_03*OPS_ACC(rhoE_B0, 0,0);

    CS_03 = AVG_1_1_LEV_00*OPS_ACC(rho_B0, 0,1) + AVG_1_1_LEV_01*OPS_ACC(rhou0_B0, 0,1) +
      AVG_1_1_LEV_02*OPS_ACC(rhou1_B0, 0,1) + AVG_1_1_LEV_03*OPS_ACC(rhoE_B0, 0,1);

    CS_04 = AVG_1_1_LEV_00*OPS_ACC(rho_B0, 0,2) + AVG_1_1_LEV_01*OPS_ACC(rhou0_B0, 0,2) +
      AVG_1_1_LEV_02*OPS_ACC(rhou1_B0, 0,2) + AVG_1_1_LEV_03*OPS_ACC(rhoE_B0, 0,2);

    CS_05 = AVG_1_1_LEV_00*OPS_ACC(rho_B0, 0,3) + AVG_1_1_LEV_01*OPS_ACC(rhou0_B0, 0,3) +
      AVG_1_1_LEV_02*OPS_ACC(rhou1_B0, 0,3) + AVG_1_1_LEV_03*OPS_ACC(rhoE_B0, 0,3);

   CS_10 = AVG_1_1_LEV_10*OPS_ACC(rho_B0, 0,-2) + AVG_1_1_LEV_11*OPS_ACC(rhou0_B0, 0,-2);

   CS_11 = AVG_1_1_LEV_10*OPS_ACC(rho_B0, 0,-1) + AVG_1_1_LEV_11*OPS_ACC(rhou0_B0, 0,-1);

   CS_12 = AVG_1_1_LEV_10*OPS_ACC(rho_B0, 0,0) + AVG_1_1_LEV_11*OPS_ACC(rhou0_B0, 0,0);

   CS_13 = AVG_1_1_LEV_10*OPS_ACC(rho_B0, 0,1) + AVG_1_1_LEV_11*OPS_ACC(rhou0_B0, 0,1);

   CS_14 = AVG_1_1_LEV_10*OPS_ACC(rho_B0, 0,2) + AVG_1_1_LEV_11*OPS_ACC(rhou0_B0, 0,2);

   CS_15 = AVG_1_1_LEV_10*OPS_ACC(rho_B0, 0,3) + AVG_1_1_LEV_11*OPS_ACC(rhou0_B0, 0,3);

    CS_20 = AVG_1_1_LEV_20*OPS_ACC(rho_B0, 0,-2) + AVG_1_1_LEV_21*OPS_ACC(rhou0_B0, 0,-2) +
      AVG_1_1_LEV_22*OPS_ACC(rhou1_B0, 0,-2) + AVG_1_1_LEV_23*OPS_ACC(rhoE_B0, 0,-2);

    CS_21 = AVG_1_1_LEV_20*OPS_ACC(rho_B0, 0,-1) + AVG_1_1_LEV_21*OPS_ACC(rhou0_B0, 0,-1) +
      AVG_1_1_LEV_22*OPS_ACC(rhou1_B0, 0,-1) + AVG_1_1_LEV_23*OPS_ACC(rhoE_B0, 0,-1);

    CS_22 = AVG_1_1_LEV_20*OPS_ACC(rho_B0, 0,0) + AVG_1_1_LEV_21*OPS_ACC(rhou0_B0, 0,0) +
      AVG_1_1_LEV_22*OPS_ACC(rhou1_B0, 0,0) + AVG_1_1_LEV_23*OPS_ACC(rhoE_B0, 0,0);

    CS_23 = AVG_1_1_LEV_20*OPS_ACC(rho_B0, 0,1) + AVG_1_1_LEV_21*OPS_ACC(rhou0_B0, 0,1) +
      AVG_1_1_LEV_22*OPS_ACC(rhou1_B0, 0,1) + AVG_1_1_LEV_23*OPS_ACC(rhoE_B0, 0,1);

    CS_24 = AVG_1_1_LEV_20*OPS_ACC(rho_B0, 0,2) + AVG_1_1_LEV_21*OPS_ACC(rhou0_B0, 0,2) +
      AVG_1_1_LEV_22*OPS_ACC(rhou1_B0, 0,2) + AVG_1_1_LEV_23*OPS_ACC(rhoE_B0, 0,2);

    CS_25 = AVG_1_1_LEV_20*OPS_ACC(rho_B0, 0,3) + AVG_1_1_LEV_21*OPS_ACC(rhou0_B0, 0,3) +
      AVG_1_1_LEV_22*OPS_ACC(rhou1_B0, 0,3) + AVG_1_1_LEV_23*OPS_ACC(rhoE_B0, 0,3);

    CS_30 = AVG_1_1_LEV_30*OPS_ACC(rho_B0, 0,-2) + AVG_1_1_LEV_31*OPS_ACC(rhou0_B0, 0,-2) +
      AVG_1_1_LEV_32*OPS_ACC(rhou1_B0, 0,-2) + AVG_1_1_LEV_33*OPS_ACC(rhoE_B0, 0,-2);

    CS_31 = AVG_1_1_LEV_30*OPS_ACC(rho_B0, 0,-1) + AVG_1_1_LEV_31*OPS_ACC(rhou0_B0, 0,-1) +
      AVG_1_1_LEV_32*OPS_ACC(rhou1_B0, 0,-1) + AVG_1_1_LEV_33*OPS_ACC(rhoE_B0, 0,-1);

    CS_32 = AVG_1_1_LEV_30*OPS_ACC(rho_B0, 0,0) + AVG_1_1_LEV_31*OPS_ACC(rhou0_B0, 0,0) +
      AVG_1_1_LEV_32*OPS_ACC(rhou1_B0, 0,0) + AVG_1_1_LEV_33*OPS_ACC(rhoE_B0, 0,0);

    CS_33 = AVG_1_1_LEV_30*OPS_ACC(rho_B0, 0,1) + AVG_1_1_LEV_31*OPS_ACC(rhou0_B0, 0,1) +
      AVG_1_1_LEV_32*OPS_ACC(rhou1_B0, 0,1) + AVG_1_1_LEV_33*OPS_ACC(rhoE_B0, 0,1);

    CS_34 = AVG_1_1_LEV_30*OPS_ACC(rho_B0, 0,2) + AVG_1_1_LEV_31*OPS_ACC(rhou0_B0, 0,2) +
      AVG_1_1_LEV_32*OPS_ACC(rhou1_B0, 0,2) + AVG_1_1_LEV_33*OPS_ACC(rhoE_B0, 0,2);

    CS_35 = AVG_1_1_LEV_30*OPS_ACC(rho_B0, 0,3) + AVG_1_1_LEV_31*OPS_ACC(rhou0_B0, 0,3) +
      AVG_1_1_LEV_32*OPS_ACC(rhou1_B0, 0,3) + AVG_1_1_LEV_33*OPS_ACC(rhoE_B0, 0,3);

    max_lambda_1_00 = fmax(fabs(OPS_ACC(u1_B0, 0,3)), fmax(fabs(OPS_ACC(u1_B0, 0,-2)),
      fmax(fabs(OPS_ACC(u1_B0, 0,2)), fmax(fabs(OPS_ACC(u1_B0, 0,1)), fmax(fabs(OPS_ACC(u1_B0, 0,0)),
      fabs(OPS_ACC(u1_B0, 0,-1)))))));

   max_lambda_1_11 = max_lambda_1_00;

    max_lambda_1_22 = fmax(fabs(OPS_ACC(a_B0, 0,1) + OPS_ACC(u1_B0, 0,1)), fmax(fabs(OPS_ACC(a_B0, 0,0) +
      OPS_ACC(u1_B0, 0,0)), fmax(fabs(OPS_ACC(a_B0, 0,3) + OPS_ACC(u1_B0, 0,3)), fmax(fabs(OPS_ACC(a_B0, 0,2) +
      OPS_ACC(u1_B0, 0,2)), fmax(fabs(OPS_ACC(a_B0, 0,-1) + OPS_ACC(u1_B0, 0,-1)), fabs(OPS_ACC(a_B0, 0,-2) +
      OPS_ACC(u1_B0, 0,-2)))))));

    max_lambda_1_33 = fmax(fabs(OPS_ACC(a_B0, 0,2) - OPS_ACC(u1_B0, 0,2)), fmax(fabs(OPS_ACC(a_B0, 0,0) -
      OPS_ACC(u1_B0, 0,0)), fmax(fabs(OPS_ACC(a_B0, 0,3) - OPS_ACC(u1_B0, 0,3)), fmax(fabs(OPS_ACC(a_B0, 0,-2) -
      OPS_ACC(u1_B0, 0,-2)), fmax(fabs(OPS_ACC(a_B0, 0,1) - OPS_ACC(u1_B0, 0,1)), fabs(OPS_ACC(a_B0, 0,-1) -
      OPS_ACC(u1_B0, 0,-1)))))));

    TENO_CT = pow(10.0, -floor(teno_a1 - teno_a2*(-pow(-OPS_ACC(theta_B0, 0,0) + 1, 4)*(4*OPS_ACC(theta_B0, 0,0) + 1)
      + 1)));

    beta_0 = (rc8)*pow((rc13)*(CF_01 + CS_01*max_lambda_1_00) - rc13*(CF_03 + CS_03*max_lambda_1_00), 2) +
      (rc15)*pow((rc13)*(CF_01 + CS_01*max_lambda_1_00) - (CF_02 + CS_02*max_lambda_1_00) + (rc13)*(CF_03 +
      CS_03*max_lambda_1_00), 2);

    beta_1 = (rc15)*pow((rc13)*(CF_02 + CS_02*max_lambda_1_00) - (CF_03 + CS_03*max_lambda_1_00) + (rc13)*(CF_04 +
      CS_04*max_lambda_1_00), 2) + (rc8)*pow((rc16)*(CF_02 + CS_02*max_lambda_1_00) - 2*(CF_03 + CS_03*max_lambda_1_00)
      + (rc13)*(CF_04 + CS_04*max_lambda_1_00), 2);

    beta_2 = (rc8)*pow((rc13)*(CF_00 + CS_00*max_lambda_1_00) - 2*(CF_01 + CS_01*max_lambda_1_00) + (rc16)*(CF_02 +
      CS_02*max_lambda_1_00), 2) + (rc15)*pow((rc13)*(CF_00 + CS_00*max_lambda_1_00) - (CF_01 + CS_01*max_lambda_1_00) +
      (rc13)*(CF_02 + CS_02*max_lambda_1_00), 2);

   alpha_0 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_2), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   inv_omega_sum = 1.0/((rc17)*delta_0 + (rc18)*delta_1 + (rc19)*delta_2);

    Recon_0 = Recon_0 + (rc17)*delta_0*inv_omega_sum*(-rc11*(CF_01 + CS_01*max_lambda_1_00) + (rc20)*(CF_02 +
      CS_02*max_lambda_1_00) + (rc21)*(CF_03 + CS_03*max_lambda_1_00)) + (rc18)*delta_1*inv_omega_sum*((rc21)*(CF_02 +
      CS_02*max_lambda_1_00) + (rc20)*(CF_03 + CS_03*max_lambda_1_00) - rc11*(CF_04 + CS_04*max_lambda_1_00)) +
      (rc19)*delta_2*inv_omega_sum*((rc21)*(CF_00 + CS_00*max_lambda_1_00) - rc22*(CF_01 + CS_01*max_lambda_1_00) +
      (rc23)*(CF_02 + CS_02*max_lambda_1_00));

    beta_0 = (rc8)*pow((rc13)*(CF_02 - CS_02*max_lambda_1_00) - rc13*(CF_04 - CS_04*max_lambda_1_00), 2) +
      (rc15)*pow((rc13)*(CF_02 - CS_02*max_lambda_1_00) - (CF_03 - CS_03*max_lambda_1_00) + (rc13)*(CF_04 -
      CS_04*max_lambda_1_00), 2);

    beta_1 = (rc8)*pow((rc13)*(CF_01 - CS_01*max_lambda_1_00) - 2*(CF_02 - CS_02*max_lambda_1_00) + (rc16)*(CF_03 -
      CS_03*max_lambda_1_00), 2) + (rc15)*pow((rc13)*(CF_01 - CS_01*max_lambda_1_00) - (CF_02 - CS_02*max_lambda_1_00) +
      (rc13)*(CF_03 - CS_03*max_lambda_1_00), 2);

    beta_2 = (rc15)*pow((rc13)*(CF_03 - CS_03*max_lambda_1_00) - (CF_04 - CS_04*max_lambda_1_00) + (rc13)*(CF_05 -
      CS_05*max_lambda_1_00), 2) + (rc8)*pow((rc16)*(CF_03 - CS_03*max_lambda_1_00) - 2*(CF_04 - CS_04*max_lambda_1_00)
      + (rc13)*(CF_05 - CS_05*max_lambda_1_00), 2);

   alpha_0 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_2), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   inv_omega_sum = 1.0/((rc17)*delta_0 + (rc18)*delta_1 + (rc19)*delta_2);

    Recon_0 = Recon_0 + (rc17)*delta_0*inv_omega_sum*((rc21)*(CF_02 - CS_02*max_lambda_1_00) + (rc20)*(CF_03 -
      CS_03*max_lambda_1_00) - rc11*(CF_04 - CS_04*max_lambda_1_00)) + (rc18)*delta_1*inv_omega_sum*(-rc11*(CF_01 -
      CS_01*max_lambda_1_00) + (rc20)*(CF_02 - CS_02*max_lambda_1_00) + (rc21)*(CF_03 - CS_03*max_lambda_1_00)) +
      (rc19)*delta_2*inv_omega_sum*((rc23)*(CF_03 - CS_03*max_lambda_1_00) - rc22*(CF_04 - CS_04*max_lambda_1_00) +
      (rc21)*(CF_05 - CS_05*max_lambda_1_00));

    beta_0 = (rc8)*pow((rc13)*(CF_11 + CS_11*max_lambda_1_11) - rc13*(CF_13 + CS_13*max_lambda_1_11), 2) +
      (rc15)*pow((rc13)*(CF_11 + CS_11*max_lambda_1_11) - (CF_12 + CS_12*max_lambda_1_11) + (rc13)*(CF_13 +
      CS_13*max_lambda_1_11), 2);

    beta_1 = (rc15)*pow((rc13)*(CF_12 + CS_12*max_lambda_1_11) - (CF_13 + CS_13*max_lambda_1_11) + (rc13)*(CF_14 +
      CS_14*max_lambda_1_11), 2) + (rc8)*pow((rc16)*(CF_12 + CS_12*max_lambda_1_11) - 2*(CF_13 + CS_13*max_lambda_1_11)
      + (rc13)*(CF_14 + CS_14*max_lambda_1_11), 2);

    beta_2 = (rc8)*pow((rc13)*(CF_10 + CS_10*max_lambda_1_11) - 2*(CF_11 + CS_11*max_lambda_1_11) + (rc16)*(CF_12 +
      CS_12*max_lambda_1_11), 2) + (rc15)*pow((rc13)*(CF_10 + CS_10*max_lambda_1_11) - (CF_11 + CS_11*max_lambda_1_11) +
      (rc13)*(CF_12 + CS_12*max_lambda_1_11), 2);

   alpha_0 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_2), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   inv_omega_sum = 1.0/((rc17)*delta_0 + (rc18)*delta_1 + (rc19)*delta_2);

    Recon_1 = Recon_1 + (rc17)*delta_0*inv_omega_sum*(-rc11*(CF_11 + CS_11*max_lambda_1_11) + (rc20)*(CF_12 +
      CS_12*max_lambda_1_11) + (rc21)*(CF_13 + CS_13*max_lambda_1_11)) + (rc18)*delta_1*inv_omega_sum*((rc21)*(CF_12 +
      CS_12*max_lambda_1_11) + (rc20)*(CF_13 + CS_13*max_lambda_1_11) - rc11*(CF_14 + CS_14*max_lambda_1_11)) +
      (rc19)*delta_2*inv_omega_sum*((rc21)*(CF_10 + CS_10*max_lambda_1_11) - rc22*(CF_11 + CS_11*max_lambda_1_11) +
      (rc23)*(CF_12 + CS_12*max_lambda_1_11));

    beta_0 = (rc8)*pow((rc13)*(CF_12 - CS_12*max_lambda_1_11) - rc13*(CF_14 - CS_14*max_lambda_1_11), 2) +
      (rc15)*pow((rc13)*(CF_12 - CS_12*max_lambda_1_11) - (CF_13 - CS_13*max_lambda_1_11) + (rc13)*(CF_14 -
      CS_14*max_lambda_1_11), 2);

    beta_1 = (rc8)*pow((rc13)*(CF_11 - CS_11*max_lambda_1_11) - 2*(CF_12 - CS_12*max_lambda_1_11) + (rc16)*(CF_13 -
      CS_13*max_lambda_1_11), 2) + (rc15)*pow((rc13)*(CF_11 - CS_11*max_lambda_1_11) - (CF_12 - CS_12*max_lambda_1_11) +
      (rc13)*(CF_13 - CS_13*max_lambda_1_11), 2);

    beta_2 = (rc15)*pow((rc13)*(CF_13 - CS_13*max_lambda_1_11) - (CF_14 - CS_14*max_lambda_1_11) + (rc13)*(CF_15 -
      CS_15*max_lambda_1_11), 2) + (rc8)*pow((rc16)*(CF_13 - CS_13*max_lambda_1_11) - 2*(CF_14 - CS_14*max_lambda_1_11)
      + (rc13)*(CF_15 - CS_15*max_lambda_1_11), 2);

   alpha_0 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_2), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   inv_omega_sum = 1.0/((rc17)*delta_0 + (rc18)*delta_1 + (rc19)*delta_2);

    Recon_1 = Recon_1 + (rc17)*delta_0*inv_omega_sum*((rc21)*(CF_12 - CS_12*max_lambda_1_11) + (rc20)*(CF_13 -
      CS_13*max_lambda_1_11) - rc11*(CF_14 - CS_14*max_lambda_1_11)) + (rc18)*delta_1*inv_omega_sum*(-rc11*(CF_11 -
      CS_11*max_lambda_1_11) + (rc20)*(CF_12 - CS_12*max_lambda_1_11) + (rc21)*(CF_13 - CS_13*max_lambda_1_11)) +
      (rc19)*delta_2*inv_omega_sum*((rc23)*(CF_13 - CS_13*max_lambda_1_11) - rc22*(CF_14 - CS_14*max_lambda_1_11) +
      (rc21)*(CF_15 - CS_15*max_lambda_1_11));

    beta_0 = (rc8)*pow((rc13)*(CF_21 + CS_21*max_lambda_1_22) - rc13*(CF_23 + CS_23*max_lambda_1_22), 2) +
      (rc15)*pow((rc13)*(CF_21 + CS_21*max_lambda_1_22) - (CF_22 + CS_22*max_lambda_1_22) + (rc13)*(CF_23 +
      CS_23*max_lambda_1_22), 2);

    beta_1 = (rc15)*pow((rc13)*(CF_22 + CS_22*max_lambda_1_22) - (CF_23 + CS_23*max_lambda_1_22) + (rc13)*(CF_24 +
      CS_24*max_lambda_1_22), 2) + (rc8)*pow((rc16)*(CF_22 + CS_22*max_lambda_1_22) - 2*(CF_23 + CS_23*max_lambda_1_22)
      + (rc13)*(CF_24 + CS_24*max_lambda_1_22), 2);

    beta_2 = (rc8)*pow((rc13)*(CF_20 + CS_20*max_lambda_1_22) - 2*(CF_21 + CS_21*max_lambda_1_22) + (rc16)*(CF_22 +
      CS_22*max_lambda_1_22), 2) + (rc15)*pow((rc13)*(CF_20 + CS_20*max_lambda_1_22) - (CF_21 + CS_21*max_lambda_1_22) +
      (rc13)*(CF_22 + CS_22*max_lambda_1_22), 2);

   alpha_0 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_2), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   inv_omega_sum = 1.0/((rc17)*delta_0 + (rc18)*delta_1 + (rc19)*delta_2);

    Recon_2 = Recon_2 + (rc17)*delta_0*inv_omega_sum*(-rc11*(CF_21 + CS_21*max_lambda_1_22) + (rc20)*(CF_22 +
      CS_22*max_lambda_1_22) + (rc21)*(CF_23 + CS_23*max_lambda_1_22)) + (rc18)*delta_1*inv_omega_sum*((rc21)*(CF_22 +
      CS_22*max_lambda_1_22) + (rc20)*(CF_23 + CS_23*max_lambda_1_22) - rc11*(CF_24 + CS_24*max_lambda_1_22)) +
      (rc19)*delta_2*inv_omega_sum*((rc21)*(CF_20 + CS_20*max_lambda_1_22) - rc22*(CF_21 + CS_21*max_lambda_1_22) +
      (rc23)*(CF_22 + CS_22*max_lambda_1_22));

    beta_0 = (rc8)*pow((rc13)*(CF_22 - CS_22*max_lambda_1_22) - rc13*(CF_24 - CS_24*max_lambda_1_22), 2) +
      (rc15)*pow((rc13)*(CF_22 - CS_22*max_lambda_1_22) - (CF_23 - CS_23*max_lambda_1_22) + (rc13)*(CF_24 -
      CS_24*max_lambda_1_22), 2);

    beta_1 = (rc8)*pow((rc13)*(CF_21 - CS_21*max_lambda_1_22) - 2*(CF_22 - CS_22*max_lambda_1_22) + (rc16)*(CF_23 -
      CS_23*max_lambda_1_22), 2) + (rc15)*pow((rc13)*(CF_21 - CS_21*max_lambda_1_22) - (CF_22 - CS_22*max_lambda_1_22) +
      (rc13)*(CF_23 - CS_23*max_lambda_1_22), 2);

    beta_2 = (rc15)*pow((rc13)*(CF_23 - CS_23*max_lambda_1_22) - (CF_24 - CS_24*max_lambda_1_22) + (rc13)*(CF_25 -
      CS_25*max_lambda_1_22), 2) + (rc8)*pow((rc16)*(CF_23 - CS_23*max_lambda_1_22) - 2*(CF_24 - CS_24*max_lambda_1_22)
      + (rc13)*(CF_25 - CS_25*max_lambda_1_22), 2);

   alpha_0 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_2), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   inv_omega_sum = 1.0/((rc17)*delta_0 + (rc18)*delta_1 + (rc19)*delta_2);

    Recon_2 = Recon_2 + (rc17)*delta_0*inv_omega_sum*((rc21)*(CF_22 - CS_22*max_lambda_1_22) + (rc20)*(CF_23 -
      CS_23*max_lambda_1_22) - rc11*(CF_24 - CS_24*max_lambda_1_22)) + (rc18)*delta_1*inv_omega_sum*(-rc11*(CF_21 -
      CS_21*max_lambda_1_22) + (rc20)*(CF_22 - CS_22*max_lambda_1_22) + (rc21)*(CF_23 - CS_23*max_lambda_1_22)) +
      (rc19)*delta_2*inv_omega_sum*((rc23)*(CF_23 - CS_23*max_lambda_1_22) - rc22*(CF_24 - CS_24*max_lambda_1_22) +
      (rc21)*(CF_25 - CS_25*max_lambda_1_22));

    beta_0 = (rc8)*pow((rc13)*(CF_31 + CS_31*max_lambda_1_33) - rc13*(CF_33 + CS_33*max_lambda_1_33), 2) +
      (rc15)*pow((rc13)*(CF_31 + CS_31*max_lambda_1_33) - (CF_32 + CS_32*max_lambda_1_33) + (rc13)*(CF_33 +
      CS_33*max_lambda_1_33), 2);

    beta_1 = (rc15)*pow((rc13)*(CF_32 + CS_32*max_lambda_1_33) - (CF_33 + CS_33*max_lambda_1_33) + (rc13)*(CF_34 +
      CS_34*max_lambda_1_33), 2) + (rc8)*pow((rc16)*(CF_32 + CS_32*max_lambda_1_33) - 2*(CF_33 + CS_33*max_lambda_1_33)
      + (rc13)*(CF_34 + CS_34*max_lambda_1_33), 2);

    beta_2 = (rc8)*pow((rc13)*(CF_30 + CS_30*max_lambda_1_33) - 2*(CF_31 + CS_31*max_lambda_1_33) + (rc16)*(CF_32 +
      CS_32*max_lambda_1_33), 2) + (rc15)*pow((rc13)*(CF_30 + CS_30*max_lambda_1_33) - (CF_31 + CS_31*max_lambda_1_33) +
      (rc13)*(CF_32 + CS_32*max_lambda_1_33), 2);

   alpha_0 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_2), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   inv_omega_sum = 1.0/((rc17)*delta_0 + (rc18)*delta_1 + (rc19)*delta_2);

    Recon_3 = Recon_3 + (rc17)*delta_0*inv_omega_sum*(-rc11*(CF_31 + CS_31*max_lambda_1_33) + (rc20)*(CF_32 +
      CS_32*max_lambda_1_33) + (rc21)*(CF_33 + CS_33*max_lambda_1_33)) + (rc18)*delta_1*inv_omega_sum*((rc21)*(CF_32 +
      CS_32*max_lambda_1_33) + (rc20)*(CF_33 + CS_33*max_lambda_1_33) - rc11*(CF_34 + CS_34*max_lambda_1_33)) +
      (rc19)*delta_2*inv_omega_sum*((rc21)*(CF_30 + CS_30*max_lambda_1_33) - rc22*(CF_31 + CS_31*max_lambda_1_33) +
      (rc23)*(CF_32 + CS_32*max_lambda_1_33));

    beta_0 = (rc8)*pow((rc13)*(CF_32 - CS_32*max_lambda_1_33) - rc13*(CF_34 - CS_34*max_lambda_1_33), 2) +
      (rc15)*pow((rc13)*(CF_32 - CS_32*max_lambda_1_33) - (CF_33 - CS_33*max_lambda_1_33) + (rc13)*(CF_34 -
      CS_34*max_lambda_1_33), 2);

    beta_1 = (rc8)*pow((rc13)*(CF_31 - CS_31*max_lambda_1_33) - 2*(CF_32 - CS_32*max_lambda_1_33) + (rc16)*(CF_33 -
      CS_33*max_lambda_1_33), 2) + (rc15)*pow((rc13)*(CF_31 - CS_31*max_lambda_1_33) - (CF_32 - CS_32*max_lambda_1_33) +
      (rc13)*(CF_33 - CS_33*max_lambda_1_33), 2);

    beta_2 = (rc15)*pow((rc13)*(CF_33 - CS_33*max_lambda_1_33) - (CF_34 - CS_34*max_lambda_1_33) + (rc13)*(CF_35 -
      CS_35*max_lambda_1_33), 2) + (rc8)*pow((rc16)*(CF_33 - CS_33*max_lambda_1_33) - 2*(CF_34 - CS_34*max_lambda_1_33)
      + (rc13)*(CF_35 - CS_35*max_lambda_1_33), 2);

   alpha_0 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_0), 6);

   alpha_1 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_1), 6);

   alpha_2 = pow(1 + fabs(beta_0 - beta_2)/(eps + beta_2), 6);

   inv_alpha_sum = 1.0/(alpha_0 + alpha_1 + alpha_2);

   delta_0 = ((alpha_0*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_1 = ((alpha_1*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   delta_2 = ((alpha_2*inv_alpha_sum < TENO_CT) ? (
   0.0
)
: (
   1.0
));

   inv_omega_sum = 1.0/((rc17)*delta_0 + (rc18)*delta_1 + (rc19)*delta_2);

    Recon_3 = Recon_3 + (rc17)*delta_0*inv_omega_sum*((rc21)*(CF_32 - CS_32*max_lambda_1_33) + (rc20)*(CF_33 -
      CS_33*max_lambda_1_33) - rc11*(CF_34 - CS_34*max_lambda_1_33)) + (rc18)*delta_1*inv_omega_sum*(-rc11*(CF_31 -
      CS_31*max_lambda_1_33) + (rc20)*(CF_32 - CS_32*max_lambda_1_33) + (rc21)*(CF_33 - CS_33*max_lambda_1_33)) +
      (rc19)*delta_2*inv_omega_sum*((rc23)*(CF_33 - CS_33*max_lambda_1_33) - rc22*(CF_34 - CS_34*max_lambda_1_33) +
      (rc21)*(CF_35 - CS_35*max_lambda_1_33));

    OPS_ACC(wk4_B0, 0,0) = 0.707106781186547*AVG_1_rho*Recon_2*inv_AVG_a +
      0.707106781186547*AVG_1_rho*Recon_3*inv_AVG_a + Recon_0;

    OPS_ACC(wk5_B0, 0,0) = 0.707106781186547*AVG_1_rho*AVG_1_u0*Recon_2*inv_AVG_a +
      0.707106781186547*AVG_1_rho*AVG_1_u0*Recon_3*inv_AVG_a + AVG_1_rho*Recon_1 + AVG_1_u0*Recon_0;

    OPS_ACC(wk6_B0, 0,0) = 0.707106781186547*AVG_1_rho*Recon_2*inv_AVG_a*(AVG_1_a + AVG_1_u1) +
      0.707106781186547*AVG_1_rho*Recon_3*inv_AVG_a*(-AVG_1_a + AVG_1_u1) + AVG_1_u1*Recon_0;

    OPS_ACC(wk7_B0, 0,0) = AVG_1_rho*AVG_1_u0*Recon_1 +
      0.707106781186547*AVG_1_rho*Recon_2*inv_AVG_a*(rcinv24*((rc13)*gamma_m1*(pow(AVG_1_u0, 2) + pow(AVG_1_u1, 2)) +
      pow(AVG_1_a, 2)) + AVG_1_a*AVG_1_u1) +
      0.707106781186547*AVG_1_rho*Recon_3*inv_AVG_a*(rcinv24*((rc13)*gamma_m1*(pow(AVG_1_u0, 2) + pow(AVG_1_u1, 2)) +
      pow(AVG_1_a, 2)) - AVG_1_a*AVG_1_u1) + Recon_0*((rc13)*pow(AVG_1_u0, 2) + (rc13)*pow(AVG_1_u1, 2));

}


void opensbliblock00Kernel004_c_wrapper(
  double *p_a0,
  double *p_a1,
  double *p_a2,
  double *p_a3,
  double *p_a4,
  double *p_a5,
  double *p_a6,
  double *p_a7,
  double *p_a8,
  double *p_a9,
  double *p_a10,
  double *p_a11,
  double *p_a12,
  int x_size, int y_size) {
  #ifdef OPS_GPU
  #pragma acc parallel deviceptr(p_a0,p_a1,p_a2,p_a3,p_a4,p_a5,p_a6,p_a7,p_a8,p_a9,p_a10,p_a11,p_a12)
  #pragma acc loop
  #endif
  for ( int n_y=0; n_y<y_size; n_y++ ){
    #ifdef OPS_GPU
    #pragma acc loop
    #endif
    for ( int n_x=0; n_x<x_size; n_x++ ){
      const ptr_double ptr0 = {  p_a0 + n_x*1*1 + n_y*xdim0_opensbliblock00Kernel004*1*1, xdim0_opensbliblock00Kernel004};
      const ptr_double ptr1 = {  p_a1 + n_x*1*1 + n_y*xdim1_opensbliblock00Kernel004*1*1, xdim1_opensbliblock00Kernel004};
      const ptr_double ptr2 = {  p_a2 + n_x*1*1 + n_y*xdim2_opensbliblock00Kernel004*1*1, xdim2_opensbliblock00Kernel004};
      const ptr_double ptr3 = {  p_a3 + n_x*1*1 + n_y*xdim3_opensbliblock00Kernel004*1*1, xdim3_opensbliblock00Kernel004};
      const ptr_double ptr4 = {  p_a4 + n_x*1*1 + n_y*xdim4_opensbliblock00Kernel004*1*1, xdim4_opensbliblock00Kernel004};
      const ptr_double ptr5 = {  p_a5 + n_x*1*1 + n_y*xdim5_opensbliblock00Kernel004*1*1, xdim5_opensbliblock00Kernel004};
      const ptr_double ptr6 = {  p_a6 + n_x*1*1 + n_y*xdim6_opensbliblock00Kernel004*1*1, xdim6_opensbliblock00Kernel004};
      const ptr_double ptr7 = {  p_a7 + n_x*1*1 + n_y*xdim7_opensbliblock00Kernel004*1*1, xdim7_opensbliblock00Kernel004};
      const ptr_double ptr8 = {  p_a8 + n_x*1*1 + n_y*xdim8_opensbliblock00Kernel004*1*1, xdim8_opensbliblock00Kernel004};
      ptr_double ptr9 = {  p_a9 + n_x*1*1 + n_y*xdim9_opensbliblock00Kernel004*1*1, xdim9_opensbliblock00Kernel004};
      ptr_double ptr10 = {  p_a10 + n_x*1*1 + n_y*xdim10_opensbliblock00Kernel004*1*1, xdim10_opensbliblock00Kernel004};
      ptr_double ptr11 = {  p_a11 + n_x*1*1 + n_y*xdim11_opensbliblock00Kernel004*1*1, xdim11_opensbliblock00Kernel004};
      ptr_double ptr12 = {  p_a12 + n_x*1*1 + n_y*xdim12_opensbliblock00Kernel004*1*1, xdim12_opensbliblock00Kernel004};
      opensbliblock00Kernel004( ptr0,
          ptr1,ptr2,
          ptr3,ptr4,
          ptr5,ptr6,
          ptr7,ptr8,
          ptr9,ptr10,
          ptr11,ptr12 );

    }
  }
}
