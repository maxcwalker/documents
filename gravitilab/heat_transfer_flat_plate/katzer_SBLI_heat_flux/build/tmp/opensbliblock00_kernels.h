#ifndef OPENSBLIBLOCK00_KERNEL_H
#define OPENSBLIBLOCK00_KERNEL_H
 void opensbliblock00Kernel040(double *rhoE_B0, double *rhou1_B0, double *x0_B0, double *rhou0_B0, double *rho_B0,
double *x1_B0, const int *idx)
{
   double rhou0 = 0.0;
   double rho = 0.0;
   double rhou1 = 0.0;
   double T = 0.0;
   x0_B0[OPS_ACC2(0,0)] = Delta0block0*idx[0];

   x1_B0[OPS_ACC5(0,0)] = Lx1*sinh(Delta1block0*by*rcinv4*idx[1])/sinh(by);

    rhou0 = ((x1_B0[OPS_ACC5(0,0)] < 3.47434743474347) ? (
   2.35554518722192e-22*pow(x1_B0[OPS_ACC5(0,0)], 50) -
      2.00935622540676e-21*pow(x1_B0[OPS_ACC5(0,0)], 49) + 5.5615361207827e-22*pow(x1_B0[OPS_ACC5(0,0)], 48) +
      1.76714695246477e-20*pow(x1_B0[OPS_ACC5(0,0)], 47) + 4.27790899476588e-20*pow(x1_B0[OPS_ACC5(0,0)], 46) -
      3.0408859120785e-20*pow(x1_B0[OPS_ACC5(0,0)], 45) - 5.69009417522241e-19*pow(x1_B0[OPS_ACC5(0,0)], 44) -
      2.10087120844669e-18*pow(x1_B0[OPS_ACC5(0,0)], 43) - 3.20009578826937e-18*pow(x1_B0[OPS_ACC5(0,0)], 42) +
      8.56005650676752e-18*pow(x1_B0[OPS_ACC5(0,0)], 41) + 7.78512277075068e-17*pow(x1_B0[OPS_ACC5(0,0)], 40) +
      2.86637362290176e-16*pow(x1_B0[OPS_ACC5(0,0)], 39) + 5.37596700702354e-16*pow(x1_B0[OPS_ACC5(0,0)], 38) -
      6.17404591299293e-16*pow(x1_B0[OPS_ACC5(0,0)], 37) - 9.50666354095459e-15*pow(x1_B0[OPS_ACC5(0,0)], 36) -
      4.18216241328414e-14*pow(x1_B0[OPS_ACC5(0,0)], 35) - 1.03686900040183e-13*pow(x1_B0[OPS_ACC5(0,0)], 34) -
      3.79907648041725e-14*pow(x1_B0[OPS_ACC5(0,0)], 33) + 1.04941721462694e-12*pow(x1_B0[OPS_ACC5(0,0)], 32) +
      5.89363619050573e-12*pow(x1_B0[OPS_ACC5(0,0)], 31) + 1.76772455155239e-11*pow(x1_B0[OPS_ACC5(0,0)], 30) +
      1.894664111461e-11*pow(x1_B0[OPS_ACC5(0,0)], 29) - 1.1912608960156e-10*pow(x1_B0[OPS_ACC5(0,0)], 28) -
      8.29561167424891e-10*pow(x1_B0[OPS_ACC5(0,0)], 27) - 2.65171228618462e-9*pow(x1_B0[OPS_ACC5(0,0)], 26) -
      2.75178543736377e-9*pow(x1_B0[OPS_ACC5(0,0)], 25) + 1.94021569054454e-8*pow(x1_B0[OPS_ACC5(0,0)], 24) +
      1.24222966145e-7*pow(x1_B0[OPS_ACC5(0,0)], 23) + 3.23932173598062e-7*pow(x1_B0[OPS_ACC5(0,0)], 22) -
      1.10433230520441e-7*pow(x1_B0[OPS_ACC5(0,0)], 21) - 4.43731691707406e-6*pow(x1_B0[OPS_ACC5(0,0)], 20) -
      1.62563201766465e-5*pow(x1_B0[OPS_ACC5(0,0)], 19) - 6.13597215217328e-6*pow(x1_B0[OPS_ACC5(0,0)], 18) +
      0.00017698718810181*pow(x1_B0[OPS_ACC5(0,0)], 17) + 0.000613829636434701*pow(x1_B0[OPS_ACC5(0,0)], 16) -
      0.000526657087147129*pow(x1_B0[OPS_ACC5(0,0)], 15) - 0.00843667410839182*pow(x1_B0[OPS_ACC5(0,0)], 14) -
      0.00594419266786583*pow(x1_B0[OPS_ACC5(0,0)], 13) + 0.0952133000516688*pow(x1_B0[OPS_ACC5(0,0)], 12) +
      0.0357527259135771*pow(x1_B0[OPS_ACC5(0,0)], 11) - 1.15748478292371*pow(x1_B0[OPS_ACC5(0,0)], 10) +
      3.37719847683204*pow(x1_B0[OPS_ACC5(0,0)], 9) - 5.16542804320381*pow(x1_B0[OPS_ACC5(0,0)], 8) +
      4.9112377235697*pow(x1_B0[OPS_ACC5(0,0)], 7) - 3.05399260251765*pow(x1_B0[OPS_ACC5(0,0)], 6) +
      1.24979596182769*pow(x1_B0[OPS_ACC5(0,0)], 5) - 0.340798552976241*pow(x1_B0[OPS_ACC5(0,0)], 4) +
      0.137512844236659*pow(x1_B0[OPS_ACC5(0,0)], 3) - 0.00379011732118699*pow(x1_B0[OPS_ACC5(0,0)], 2) +
      0.423487405503203*x1_B0[OPS_ACC5(0,0)] - 9.41149679597911e-7
)
: (
   0.999999408078923
));

    rhou1 = ((x1_B0[OPS_ACC5(0,0)] < 3.47434743474347) ? (
   2.15764795669156e-24*pow(x1_B0[OPS_ACC5(0,0)], 50) -
      1.89236583169422e-23*pow(x1_B0[OPS_ACC5(0,0)], 49) + 7.69202870838675e-24*pow(x1_B0[OPS_ACC5(0,0)], 48) +
      1.70507955045203e-22*pow(x1_B0[OPS_ACC5(0,0)], 47) + 3.81782695492734e-22*pow(x1_B0[OPS_ACC5(0,0)], 46) -
      4.26028242016517e-22*pow(x1_B0[OPS_ACC5(0,0)], 45) - 5.70193580147886e-21*pow(x1_B0[OPS_ACC5(0,0)], 44) -
      1.95829270385051e-20*pow(x1_B0[OPS_ACC5(0,0)], 43) - 2.46387244832335e-20*pow(x1_B0[OPS_ACC5(0,0)], 42) +
      1.0616664844971e-19*pow(x1_B0[OPS_ACC5(0,0)], 41) + 7.95407816708425e-19*pow(x1_B0[OPS_ACC5(0,0)], 40) +
      2.69801421299289e-18*pow(x1_B0[OPS_ACC5(0,0)], 39) + 4.24407454854892e-18*pow(x1_B0[OPS_ACC5(0,0)], 38) -
      1.02494549465857e-17*pow(x1_B0[OPS_ACC5(0,0)], 37) - 1.0311464216514e-16*pow(x1_B0[OPS_ACC5(0,0)], 36) -
      4.10562137490978e-16*pow(x1_B0[OPS_ACC5(0,0)], 35) - 8.90846425246352e-16*pow(x1_B0[OPS_ACC5(0,0)], 34) +
      3.31839382309436e-16*pow(x1_B0[OPS_ACC5(0,0)], 33) + 1.25486073963286e-14*pow(x1_B0[OPS_ACC5(0,0)], 32) +
      6.10498505342066e-14*pow(x1_B0[OPS_ACC5(0,0)], 31) + 1.6167911954809e-13*pow(x1_B0[OPS_ACC5(0,0)], 30) +
      7.95636452430526e-14*pow(x1_B0[OPS_ACC5(0,0)], 29) - 1.58890143033548e-12*pow(x1_B0[OPS_ACC5(0,0)], 28) -
      8.98717229545117e-12*pow(x1_B0[OPS_ACC5(0,0)], 27) - 2.49620942515269e-11*pow(x1_B0[OPS_ACC5(0,0)], 26) -
      1.0340623615852e-11*pow(x1_B0[OPS_ACC5(0,0)], 25) + 2.61421317577836e-10*pow(x1_B0[OPS_ACC5(0,0)], 24) +
      1.35337409877607e-9*pow(x1_B0[OPS_ACC5(0,0)], 23) + 2.89301414991171e-9*pow(x1_B0[OPS_ACC5(0,0)], 22) -
      4.20736535406375e-9*pow(x1_B0[OPS_ACC5(0,0)], 21) - 5.39309325859807e-8*pow(x1_B0[OPS_ACC5(0,0)], 20) -
      1.63185626867493e-7*pow(x1_B0[OPS_ACC5(0,0)], 19) + 6.20583025035606e-8*pow(x1_B0[OPS_ACC5(0,0)], 18) +
      2.24953481819515e-6*pow(x1_B0[OPS_ACC5(0,0)], 17) + 6.18680429670961e-6*pow(x1_B0[OPS_ACC5(0,0)], 16) -
      1.13933889779781e-5*pow(x1_B0[OPS_ACC5(0,0)], 15) - 0.000100760514960644*pow(x1_B0[OPS_ACC5(0,0)], 14) -
      1.22902099586774e-5*pow(x1_B0[OPS_ACC5(0,0)], 13) + 0.00122012359509703*pow(x1_B0[OPS_ACC5(0,0)], 12) -
      0.000174713582148392*pow(x1_B0[OPS_ACC5(0,0)], 11) - 0.0144727047728154*pow(x1_B0[OPS_ACC5(0,0)], 10) +
      0.0478143661600029*pow(x1_B0[OPS_ACC5(0,0)], 9) - 0.0798994096272105*pow(x1_B0[OPS_ACC5(0,0)], 8) +
      0.0824506842402908*pow(x1_B0[OPS_ACC5(0,0)], 7) - 0.0554878434156257*pow(x1_B0[OPS_ACC5(0,0)], 6) +
      0.024435875255148*pow(x1_B0[OPS_ACC5(0,0)], 5) - 0.00654584540468695*pow(x1_B0[OPS_ACC5(0,0)], 4) +
      0.0011741804058932*pow(x1_B0[OPS_ACC5(0,0)], 3) + 0.00108918546751579*pow(x1_B0[OPS_ACC5(0,0)], 2) +
      4.14937248562039e-6*x1_B0[OPS_ACC5(0,0)] - 3.82351596027384e-8
)
: (
   0.00564964364741575
));

    T = ((x1_B0[OPS_ACC5(0,0)] < 3.47434743474347) ? (
   -3.73062431090927e-23*pow(x1_B0[OPS_ACC5(0,0)], 50) +
      3.02359695459513e-22*pow(x1_B0[OPS_ACC5(0,0)], 49) - 7.07491196041644e-24*pow(x1_B0[OPS_ACC5(0,0)], 48) -
      2.53606828122103e-21*pow(x1_B0[OPS_ACC5(0,0)], 47) - 7.11707143461952e-21*pow(x1_B0[OPS_ACC5(0,0)], 46) +
      2.00310852950841e-22*pow(x1_B0[OPS_ACC5(0,0)], 45) + 7.52116250840464e-20*pow(x1_B0[OPS_ACC5(0,0)], 44) +
      3.24392644909234e-19*pow(x1_B0[OPS_ACC5(0,0)], 43) + 6.59241426720847e-19*pow(x1_B0[OPS_ACC5(0,0)], 42) -
      4.86367549750723e-19*pow(x1_B0[OPS_ACC5(0,0)], 41) - 9.84138716065443e-18*pow(x1_B0[OPS_ACC5(0,0)], 40) -
      4.36436437408906e-17*pow(x1_B0[OPS_ACC5(0,0)], 39) - 1.0816198463299e-16*pow(x1_B0[OPS_ACC5(0,0)], 38) -
      4.86879330244086e-17*pow(x1_B0[OPS_ACC5(0,0)], 37) + 1.01293239198981e-15*pow(x1_B0[OPS_ACC5(0,0)], 36) +
      5.8560337439448e-15*pow(x1_B0[OPS_ACC5(0,0)], 35) + 1.86798098486401e-14*pow(x1_B0[OPS_ACC5(0,0)], 34) +
      2.84085898057424e-14*pow(x1_B0[OPS_ACC5(0,0)], 33) - 7.36888478006771e-14*pow(x1_B0[OPS_ACC5(0,0)], 32) -
      7.24583126682524e-13*pow(x1_B0[OPS_ACC5(0,0)], 31) - 2.88766040431012e-12*pow(x1_B0[OPS_ACC5(0,0)], 30) -
      6.23239605204644e-12*pow(x1_B0[OPS_ACC5(0,0)], 29) + 2.76973114508602e-12*pow(x1_B0[OPS_ACC5(0,0)], 28) +
      8.91072111188987e-11*pow(x1_B0[OPS_ACC5(0,0)], 27) + 4.1295461211974e-10*pow(x1_B0[OPS_ACC5(0,0)], 26) +
      9.6213970081005e-10*pow(x1_B0[OPS_ACC5(0,0)], 25) - 3.19651870754426e-10*pow(x1_B0[OPS_ACC5(0,0)], 24) -
      1.3081654019114e-8*pow(x1_B0[OPS_ACC5(0,0)], 23) - 5.63175435016545e-8*pow(x1_B0[OPS_ACC5(0,0)], 22) -
      9.40865847984399e-8*pow(x1_B0[OPS_ACC5(0,0)], 21) + 2.6801438576199e-7*pow(x1_B0[OPS_ACC5(0,0)], 20) +
      2.20028198405674e-6*pow(x1_B0[OPS_ACC5(0,0)], 19) + 5.26409565182062e-6*pow(x1_B0[OPS_ACC5(0,0)], 18) -
      6.87036544347723e-6*pow(x1_B0[OPS_ACC5(0,0)], 17) - 8.18100285010394e-5*pow(x1_B0[OPS_ACC5(0,0)], 16) -
      0.000150183322274531*pow(x1_B0[OPS_ACC5(0,0)], 15) + 0.000546559389166845*pow(x1_B0[OPS_ACC5(0,0)], 14) +
      0.00248793676507131*pow(x1_B0[OPS_ACC5(0,0)], 13) - 0.00313492651549679*pow(x1_B0[OPS_ACC5(0,0)], 12) -
      0.0233426212015386*pow(x1_B0[OPS_ACC5(0,0)], 11) + 0.0513778712722904*pow(x1_B0[OPS_ACC5(0,0)], 10) +
      0.0387070396341026*pow(x1_B0[OPS_ACC5(0,0)], 9) - 0.284700530808648*pow(x1_B0[OPS_ACC5(0,0)], 8) +
      0.486110749941822*pow(x1_B0[OPS_ACC5(0,0)], 7) - 0.442517067346077*pow(x1_B0[OPS_ACC5(0,0)], 6) +
      0.27455584544276*pow(x1_B0[OPS_ACC5(0,0)], 5) - 0.105304396585597*pow(x1_B0[OPS_ACC5(0,0)], 4) +
      0.0162954064602151*pow(x1_B0[OPS_ACC5(0,0)], 3) - 0.291761640877121*pow(x1_B0[OPS_ACC5(0,0)], 2) +
      7.47721770024649e-5*x1_B0[OPS_ACC5(0,0)] + 1.67619323512792
)
: (
   1.00000058834432
));

   rho = 1.0/T;

   rho_B0[OPS_ACC4(0,0)] = rho;

   rhou0_B0[OPS_ACC3(0,0)] = rhou0;

   rhou1_B0[OPS_ACC1(0,0)] = rhou1;

   rhoE_B0[OPS_ACC0(0,0)] = rcinv5*rcinv6*rcinv7*T*rho + (0.5*pow(rhou0, 2) + 0.5*pow(rhou1, 2))/rho;

}

void opensbliblock00Kernel042(const double *x1_B0, double *D11_B0, double *detJ_B0, const int *idx)
{
   double localeval_0 = 0.0;
    localeval_0 = ((idx[1] == 0) ? (
   inv_0*(-rc8*x1_B0[OPS_ACC0(0,4)] + 4*x1_B0[OPS_ACC0(0,1)] -
      rc9*x1_B0[OPS_ACC0(0,0)] + (rc10)*x1_B0[OPS_ACC0(0,3)] - 3*x1_B0[OPS_ACC0(0,2)])
)
: ((idx[1] == 1) ? (
  
      (rc11)*inv_0*(-3*x1_B0[OPS_ACC0(0,-1)] + 18*x1_B0[OPS_ACC0(0,1)] - 10*x1_B0[OPS_ACC0(0,0)] + x1_B0[OPS_ACC0(0,3)]
      - 6*x1_B0[OPS_ACC0(0,2)])
)
: ((idx[1] == block0np1 - 1) ? (
   inv_0*(-rc10*x1_B0[OPS_ACC0(0,-3)] +
      (rc8)*x1_B0[OPS_ACC0(0,-4)] + 3*x1_B0[OPS_ACC0(0,-2)] - 4*x1_B0[OPS_ACC0(0,-1)] + (rc9)*x1_B0[OPS_ACC0(0,0)])
)
:
      ((idx[1] == block0np1 - 2) ? (
   (rc11)*inv_0*(-x1_B0[OPS_ACC0(0,-3)] + 6*x1_B0[OPS_ACC0(0,-2)] -
      18*x1_B0[OPS_ACC0(0,-1)] + 3*x1_B0[OPS_ACC0(0,1)] + 10*x1_B0[OPS_ACC0(0,0)])
)
: (
  
      (rc11)*inv_0*(x1_B0[OPS_ACC0(0,-2)] - 8*x1_B0[OPS_ACC0(0,-1)] + 8*x1_B0[OPS_ACC0(0,1)] -
      x1_B0[OPS_ACC0(0,2)])
)))));

   detJ_B0[OPS_ACC2(0,0)] = localeval_0;

   D11_B0[OPS_ACC1(0,0)] = 1.0/localeval_0;

}

void opensbliblock00Kernel043(double *D11_B0, double *detJ_B0)
{
   D11_B0[OPS_ACC0(-1,0)] = D11_B0[OPS_ACC0(1,0)];

   detJ_B0[OPS_ACC1(-1,0)] = detJ_B0[OPS_ACC1(1,0)];

   D11_B0[OPS_ACC0(-2,0)] = D11_B0[OPS_ACC0(2,0)];

   detJ_B0[OPS_ACC1(-2,0)] = detJ_B0[OPS_ACC1(2,0)];

   D11_B0[OPS_ACC0(-3,0)] = D11_B0[OPS_ACC0(3,0)];

   detJ_B0[OPS_ACC1(-3,0)] = detJ_B0[OPS_ACC1(3,0)];

}

void opensbliblock00Kernel044(double *D11_B0, double *detJ_B0)
{
   D11_B0[OPS_ACC0(1,0)] = D11_B0[OPS_ACC0(-1,0)];

   detJ_B0[OPS_ACC1(1,0)] = detJ_B0[OPS_ACC1(-1,0)];

   D11_B0[OPS_ACC0(2,0)] = D11_B0[OPS_ACC0(-2,0)];

   detJ_B0[OPS_ACC1(2,0)] = detJ_B0[OPS_ACC1(-2,0)];

   D11_B0[OPS_ACC0(3,0)] = D11_B0[OPS_ACC0(-3,0)];

   detJ_B0[OPS_ACC1(3,0)] = detJ_B0[OPS_ACC1(-3,0)];

   D11_B0[OPS_ACC0(4,0)] = D11_B0[OPS_ACC0(-4,0)];

   detJ_B0[OPS_ACC1(4,0)] = detJ_B0[OPS_ACC1(-4,0)];

}

void opensbliblock00Kernel045(double *D11_B0, double *detJ_B0)
{
   D11_B0[OPS_ACC0(0,-1)] = D11_B0[OPS_ACC0(0,1)];

   detJ_B0[OPS_ACC1(0,-1)] = detJ_B0[OPS_ACC1(0,1)];

   D11_B0[OPS_ACC0(0,-2)] = D11_B0[OPS_ACC0(0,2)];

   detJ_B0[OPS_ACC1(0,-2)] = detJ_B0[OPS_ACC1(0,2)];

   D11_B0[OPS_ACC0(0,-3)] = D11_B0[OPS_ACC0(0,3)];

   detJ_B0[OPS_ACC1(0,-3)] = detJ_B0[OPS_ACC1(0,3)];

}

void opensbliblock00Kernel046(double *D11_B0, double *detJ_B0)
{
   D11_B0[OPS_ACC0(0,1)] = D11_B0[OPS_ACC0(0,-1)];

   detJ_B0[OPS_ACC1(0,1)] = detJ_B0[OPS_ACC1(0,-1)];

   D11_B0[OPS_ACC0(0,2)] = D11_B0[OPS_ACC0(0,-2)];

   detJ_B0[OPS_ACC1(0,2)] = detJ_B0[OPS_ACC1(0,-2)];

   D11_B0[OPS_ACC0(0,3)] = D11_B0[OPS_ACC0(0,-3)];

   detJ_B0[OPS_ACC1(0,3)] = detJ_B0[OPS_ACC1(0,-3)];

   D11_B0[OPS_ACC0(0,4)] = D11_B0[OPS_ACC0(0,-4)];

   detJ_B0[OPS_ACC1(0,4)] = detJ_B0[OPS_ACC1(0,-4)];

}

void opensbliblock00Kernel048(const double *D11_B0, double *SD111_B0, const int *idx)
{
   double localeval_0 = 0.0;
    localeval_0 = ((idx[1] == 0) ? (
   inv_0*((rc10)*D11_B0[OPS_ACC0(0,3)] - 3*D11_B0[OPS_ACC0(0,2)] +
      4*D11_B0[OPS_ACC0(0,1)] - rc9*D11_B0[OPS_ACC0(0,0)] - rc8*D11_B0[OPS_ACC0(0,4)])
)
: ((idx[1] == 1) ? (
  
      (rc11)*inv_0*(D11_B0[OPS_ACC0(0,3)] - 6*D11_B0[OPS_ACC0(0,2)] + 18*D11_B0[OPS_ACC0(0,1)] -
      10*D11_B0[OPS_ACC0(0,0)] - 3*D11_B0[OPS_ACC0(0,-1)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_0*((rc9)*D11_B0[OPS_ACC0(0,0)] + (rc8)*D11_B0[OPS_ACC0(0,-4)] - 4*D11_B0[OPS_ACC0(0,-1)] -
      rc10*D11_B0[OPS_ACC0(0,-3)] + 3*D11_B0[OPS_ACC0(0,-2)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      (rc11)*inv_0*(3*D11_B0[OPS_ACC0(0,1)] + 10*D11_B0[OPS_ACC0(0,0)] - 18*D11_B0[OPS_ACC0(0,-1)] -
      D11_B0[OPS_ACC0(0,-3)] + 6*D11_B0[OPS_ACC0(0,-2)])
)
: (
   (rc11)*inv_0*(-D11_B0[OPS_ACC0(0,2)] +
      8*D11_B0[OPS_ACC0(0,1)] - 8*D11_B0[OPS_ACC0(0,-1)] + D11_B0[OPS_ACC0(0,-2)])
)))));

   SD111_B0[OPS_ACC1(0,0)] = localeval_0;

}

void opensbliblock00Kernel036(double *rhou1_B0, double *rhoE_B0, double *rhou0_B0, double *rho_B0)
{
   double pb = 0.0;
   double ab = 0.0;
   double ub0 = 0.0;
   double ub1 = 0.0;
   double rhob = 0.0;
   rhob = rho_B0[OPS_ACC3(0,0)];

   ub0 = fabs(rhou0_B0[OPS_ACC2(0,0)]/rho_B0[OPS_ACC3(0,0)]);

   ub1 = fabs(rhou1_B0[OPS_ACC0(0,0)]/rho_B0[OPS_ACC3(0,0)]);

   pb = (gama - 1)*(-0.5*rhob*(pow(ub0, 2) + pow(ub1, 2)) + rhoE_B0[OPS_ACC1(0,0)]);

   ab = sqrt(gama*pb/rhob);

   rho_B0[OPS_ACC3(0,0)] = ((ub0 >= ab) ? (
   rho_B0[OPS_ACC3(-1,0)]
)
: (
   rho_B0[OPS_ACC3(0,0)]
));

   rhou0_B0[OPS_ACC2(0,0)] = ((ub0 >= ab) ? (
   rhou0_B0[OPS_ACC2(-1,0)]
)
: (
   rhou0_B0[OPS_ACC2(0,0)]
));

   rhou1_B0[OPS_ACC0(0,0)] = ((ub0 >= ab) ? (
   rhou1_B0[OPS_ACC0(-1,0)]
)
: (
   rhou1_B0[OPS_ACC0(0,0)]
));

   rhoE_B0[OPS_ACC1(0,0)] = ((ub0 >= ab) ? (
   rhoE_B0[OPS_ACC1(-1,0)]
)
: (
   rhoE_B0[OPS_ACC1(0,0)]
));

   rhoE_B0[OPS_ACC1(-1,0)] = ((ub0 >= ab) ? (
   rhoE_B0[OPS_ACC1(-1,0)]
)
: (
   rhoE_B0[OPS_ACC1(0,0)]
));

   rhoE_B0[OPS_ACC1(-2,0)] = ((ub0 >= ab) ? (
   rhoE_B0[OPS_ACC1(-2,0)]
)
: (
   rhoE_B0[OPS_ACC1(0,0)]
));

   rhoE_B0[OPS_ACC1(-3,0)] = ((ub0 >= ab) ? (
   rhoE_B0[OPS_ACC1(-3,0)]
)
: (
   rhoE_B0[OPS_ACC1(0,0)]
));

}

void opensbliblock00Kernel037(double *rhou1_B0, double *rhoE_B0, double *rhou0_B0, double *rho_B0)
{
   rho_B0[OPS_ACC3(0,0)] = rho_B0[OPS_ACC3(-1,0)];

   rhou0_B0[OPS_ACC2(0,0)] = rhou0_B0[OPS_ACC2(-1,0)];

   rhou1_B0[OPS_ACC0(0,0)] = rhou1_B0[OPS_ACC0(-1,0)];

   rhoE_B0[OPS_ACC1(0,0)] = rhoE_B0[OPS_ACC1(-1,0)];

   rho_B0[OPS_ACC3(1,0)] = rho_B0[OPS_ACC3(-1,0)];

   rhou0_B0[OPS_ACC2(1,0)] = rhou0_B0[OPS_ACC2(-1,0)];

   rhou1_B0[OPS_ACC0(1,0)] = rhou1_B0[OPS_ACC0(-1,0)];

   rhoE_B0[OPS_ACC1(1,0)] = rhoE_B0[OPS_ACC1(-1,0)];

   rho_B0[OPS_ACC3(2,0)] = rho_B0[OPS_ACC3(-1,0)];

   rhou0_B0[OPS_ACC2(2,0)] = rhou0_B0[OPS_ACC2(-1,0)];

   rhou1_B0[OPS_ACC0(2,0)] = rhou1_B0[OPS_ACC0(-1,0)];

   rhoE_B0[OPS_ACC1(2,0)] = rhoE_B0[OPS_ACC1(-1,0)];

   rho_B0[OPS_ACC3(3,0)] = rho_B0[OPS_ACC3(-1,0)];

   rhou0_B0[OPS_ACC2(3,0)] = rhou0_B0[OPS_ACC2(-1,0)];

   rhou1_B0[OPS_ACC0(3,0)] = rhou1_B0[OPS_ACC0(-1,0)];

   rhoE_B0[OPS_ACC1(3,0)] = rhoE_B0[OPS_ACC1(-1,0)];

   rho_B0[OPS_ACC3(4,0)] = rho_B0[OPS_ACC3(-1,0)];

   rhou0_B0[OPS_ACC2(4,0)] = rhou0_B0[OPS_ACC2(-1,0)];

   rhou1_B0[OPS_ACC0(4,0)] = rhou1_B0[OPS_ACC0(-1,0)];

   rhoE_B0[OPS_ACC1(4,0)] = rhoE_B0[OPS_ACC1(-1,0)];

}

 void opensbliblock00Kernel038(const double *x0_B0, double *rhou1_B0, double *rhoE_B0, double *rhou0_B0, double
*rho_B0)
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
   x0 = x0_B0[OPS_ACC0(0,0)];

   rhou0_B0[OPS_ACC3(0,0)] = 0.0;

   rhou1_B0[OPS_ACC1(0,0)] = 0.0;

   rhoE_B0[OPS_ACC2(0,0)] = Twall*rcinv12*rho_B0[OPS_ACC4(0,0)]/(gama*(gama - 1.0));

    Pwall = (gama - 1)*(-((rc13)*pow(rhou0_B0[OPS_ACC3(0,0)], 2) + (rc13)*pow(rhou1_B0[OPS_ACC1(0,0)],
      2))/rho_B0[OPS_ACC4(0,0)] + rhoE_B0[OPS_ACC2(0,0)]);

   u01 = rhou0_B0[OPS_ACC3(0,1)]/rho_B0[OPS_ACC4(0,1)];

   u02 = rhou0_B0[OPS_ACC3(0,2)]/rho_B0[OPS_ACC4(0,2)];

   u03 = rhou0_B0[OPS_ACC3(0,3)]/rho_B0[OPS_ACC4(0,3)];

   u11 = rhou1_B0[OPS_ACC1(0,1)]/rho_B0[OPS_ACC4(0,1)];

   u12 = rhou1_B0[OPS_ACC1(0,2)]/rho_B0[OPS_ACC4(0,2)];

   u13 = rhou1_B0[OPS_ACC1(0,3)]/rho_B0[OPS_ACC4(0,3)];

    T_above = pow(Minf, 2)*gama*(gama - 1)*(-((rc13)*pow(rhou0_B0[OPS_ACC3(0,1)], 2) +
      (rc13)*pow(rhou1_B0[OPS_ACC1(0,1)], 2))/rho_B0[OPS_ACC4(0,1)] + rhoE_B0[OPS_ACC2(0,1)])/rho_B0[OPS_ACC4(0,1)];

   T1 = 2*Twall - T_above;

   rho_halo_1 = pow(Minf, 2)*gama*Pwall/T1;

   rho_B0[OPS_ACC4(0,-1)] = rho_halo_1;

   rhou0_B0[OPS_ACC3(0,-1)] = -rho_halo_1*u01;

   rhou1_B0[OPS_ACC1(0,-1)] = -rho_halo_1*u11;

   rhoE_B0[OPS_ACC2(0,-1)] = rcinv5*Pwall + (rc13)*rho_halo_1*(pow(u01, 2) + pow(u11, 2));

   T2 = 3*Twall - 2*T_above;

   rho_halo_1 = pow(Minf, 2)*gama*Pwall/T1;

   rho_B0[OPS_ACC4(0,-1)] = rho_halo_1;

   rho_halo_2 = pow(Minf, 2)*gama*Pwall/T2;

   rho_B0[OPS_ACC4(0,-2)] = rho_halo_2;

   rhou0_B0[OPS_ACC3(0,-1)] = -rho_halo_1*u01;

   rhou1_B0[OPS_ACC1(0,-1)] = -rho_halo_1*u11;

   rhou0_B0[OPS_ACC3(0,-2)] = -rho_halo_2*u02;

   rhou1_B0[OPS_ACC1(0,-2)] = -rho_halo_2*u12;

   rhoE_B0[OPS_ACC2(0,-1)] = rcinv5*Pwall + (rc13)*rho_halo_1*(pow(u01, 2) + pow(u11, 2));

   rhoE_B0[OPS_ACC2(0,-2)] = rcinv5*Pwall + (rc13)*rho_halo_2*(pow(u02, 2) + pow(u12, 2));

   T3 = 4*Twall - 3*T_above;

   rho_halo_1 = pow(Minf, 2)*gama*Pwall/T1;

   rho_B0[OPS_ACC4(0,-1)] = rho_halo_1;

   rho_halo_2 = pow(Minf, 2)*gama*Pwall/T2;

   rho_B0[OPS_ACC4(0,-2)] = rho_halo_2;

   rho_halo_3 = pow(Minf, 2)*gama*Pwall/T3;

   rho_B0[OPS_ACC4(0,-3)] = rho_halo_3;

   rhou0_B0[OPS_ACC3(0,-1)] = -rho_halo_1*u01;

   rhou1_B0[OPS_ACC1(0,-1)] = -rho_halo_1*u11;

   rhou0_B0[OPS_ACC3(0,-2)] = -rho_halo_2*u02;

   rhou1_B0[OPS_ACC1(0,-2)] = -rho_halo_2*u12;

   rhou0_B0[OPS_ACC3(0,-3)] = -rho_halo_3*u03;

   rhou1_B0[OPS_ACC1(0,-3)] = -rho_halo_3*u13;

   rhoE_B0[OPS_ACC2(0,-1)] = rcinv5*Pwall + (rc13)*rho_halo_1*(pow(u01, 2) + pow(u11, 2));

   rhoE_B0[OPS_ACC2(0,-2)] = rcinv5*Pwall + (rc13)*rho_halo_2*(pow(u02, 2) + pow(u12, 2));

   rhoE_B0[OPS_ACC2(0,-3)] = rcinv5*Pwall + (rc13)*rho_halo_3*(pow(u03, 2) + pow(u13, 2));

}

void opensbliblock00Kernel039(double *rhou1_B0, double *rhoE_B0, double *rhou0_B0, double *rho_B0, const int *idx)
{
   double x0 = 0.0;
   x0 = Delta0block0*idx[0];

   rho_B0[OPS_ACC3(0,0)] = ((x0 > 40.0) ? (
   1.129734572
)
: (
   1.00000596004
));

   rhou0_B0[OPS_ACC2(0,0)] = ((x0 > 40.0) ? (
   1.0921171
)
: (
   1.00000268202
));

   rhou1_B0[OPS_ACC0(0,0)] = ((x0 > 40.0) ? (
   -0.058866065
)
: (
   0.00565001630205
));

   rhoE_B0[OPS_ACC1(0,0)] = ((x0 > 40.0) ? (
   1.0590824
)
: (
   0.94644428042
));

}

void opensbliblock00Kernel008(const double *rhou0_B0, const double *rho_B0, double *u0_B0)
{
   u0_B0[OPS_ACC2(0,0)] = rhou0_B0[OPS_ACC0(0,0)]/rho_B0[OPS_ACC1(0,0)];

}

void opensbliblock00Kernel006(const double *rhou1_B0, const double *rho_B0, double *u1_B0)
{
   u1_B0[OPS_ACC2(0,0)] = rhou1_B0[OPS_ACC0(0,0)]/rho_B0[OPS_ACC1(0,0)];

}

 void opensbliblock00Kernel002(const double *u0_B0, const double *u1_B0, const double *D11_B0, double *theta_B0, const
int *idx)
{
   double localeval_1 = 0.0;
   double localeval_2 = 0.0;
   double localeval_3 = 0.0;
   double localeval_0 = 0.0;
    localeval_0 = ((idx[1] == 0) ? (
   inv_0*(-rc8*u1_B0[OPS_ACC1(0,4)] - rc9*u1_B0[OPS_ACC1(0,0)] +
      4*u1_B0[OPS_ACC1(0,1)] - 3*u1_B0[OPS_ACC1(0,2)] + (rc10)*u1_B0[OPS_ACC1(0,3)])
)
: ((idx[1] == 1) ? (
  
      (rc11)*inv_0*(-3*u1_B0[OPS_ACC1(0,-1)] - 10*u1_B0[OPS_ACC1(0,0)] + 18*u1_B0[OPS_ACC1(0,1)] -
      6*u1_B0[OPS_ACC1(0,2)] + u1_B0[OPS_ACC1(0,3)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_0*((rc8)*u1_B0[OPS_ACC1(0,-4)] - rc10*u1_B0[OPS_ACC1(0,-3)] - 4*u1_B0[OPS_ACC1(0,-1)] +
      (rc9)*u1_B0[OPS_ACC1(0,0)] + 3*u1_B0[OPS_ACC1(0,-2)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      (rc11)*inv_0*(-u1_B0[OPS_ACC1(0,-3)] - 18*u1_B0[OPS_ACC1(0,-1)] + 6*u1_B0[OPS_ACC1(0,-2)] + 3*u1_B0[OPS_ACC1(0,1)]
      + 10*u1_B0[OPS_ACC1(0,0)])
)
: (
   (rc11)*inv_0*(-8*u1_B0[OPS_ACC1(0,-1)] + u1_B0[OPS_ACC1(0,-2)] +
      8*u1_B0[OPS_ACC1(0,1)] - u1_B0[OPS_ACC1(0,2)])
)))));

    localeval_1 = ((idx[0] == 0) ? (
   inv_1*(-rc8*u1_B0[OPS_ACC1(4,0)] + 4*u1_B0[OPS_ACC1(1,0)] +
      (rc10)*u1_B0[OPS_ACC1(3,0)] - rc9*u1_B0[OPS_ACC1(0,0)] - 3*u1_B0[OPS_ACC1(2,0)])
)
: ((idx[0] == 1) ? (
  
      (rc11)*inv_1*(18*u1_B0[OPS_ACC1(1,0)] - 3*u1_B0[OPS_ACC1(-1,0)] + u1_B0[OPS_ACC1(3,0)] - 10*u1_B0[OPS_ACC1(0,0)] -
      6*u1_B0[OPS_ACC1(2,0)])
)
: ((idx[0] == block0np0 - 1) ? (
   inv_1*((rc8)*u1_B0[OPS_ACC1(-4,0)] -
      4*u1_B0[OPS_ACC1(-1,0)] + (rc9)*u1_B0[OPS_ACC1(0,0)] + 3*u1_B0[OPS_ACC1(-2,0)] - rc10*u1_B0[OPS_ACC1(-3,0)])
)
:
      ((idx[0] == block0np0 - 2) ? (
   (rc11)*inv_1*(3*u1_B0[OPS_ACC1(1,0)] - 18*u1_B0[OPS_ACC1(-1,0)] +
      6*u1_B0[OPS_ACC1(-2,0)] - u1_B0[OPS_ACC1(-3,0)] + 10*u1_B0[OPS_ACC1(0,0)])
)
: (
  
      (rc11)*inv_1*(8*u1_B0[OPS_ACC1(1,0)] - 8*u1_B0[OPS_ACC1(-1,0)] + u1_B0[OPS_ACC1(-2,0)] -
      u1_B0[OPS_ACC1(2,0)])
)))));

    localeval_2 = ((idx[0] == 0) ? (
   inv_1*(-3*u0_B0[OPS_ACC0(2,0)] - rc9*u0_B0[OPS_ACC0(0,0)] +
      (rc10)*u0_B0[OPS_ACC0(3,0)] + 4*u0_B0[OPS_ACC0(1,0)] - rc8*u0_B0[OPS_ACC0(4,0)])
)
: ((idx[0] == 1) ? (
  
      (rc11)*inv_1*(-6*u0_B0[OPS_ACC0(2,0)] - 10*u0_B0[OPS_ACC0(0,0)] + u0_B0[OPS_ACC0(3,0)] - 3*u0_B0[OPS_ACC0(-1,0)] +
      18*u0_B0[OPS_ACC0(1,0)])
)
: ((idx[0] == block0np0 - 1) ? (
   inv_1*(-rc10*u0_B0[OPS_ACC0(-3,0)] +
      (rc8)*u0_B0[OPS_ACC0(-4,0)] + (rc9)*u0_B0[OPS_ACC0(0,0)] - 4*u0_B0[OPS_ACC0(-1,0)] + 3*u0_B0[OPS_ACC0(-2,0)])
)
:
      ((idx[0] == block0np0 - 2) ? (
   (rc11)*inv_1*(-u0_B0[OPS_ACC0(-3,0)] + 10*u0_B0[OPS_ACC0(0,0)] -
      18*u0_B0[OPS_ACC0(-1,0)] + 3*u0_B0[OPS_ACC0(1,0)] + 6*u0_B0[OPS_ACC0(-2,0)])
)
: (
  
      (rc11)*inv_1*(-u0_B0[OPS_ACC0(2,0)] - 8*u0_B0[OPS_ACC0(-1,0)] + 8*u0_B0[OPS_ACC0(1,0)] +
      u0_B0[OPS_ACC0(-2,0)])
)))));

    localeval_3 = ((idx[1] == 0) ? (
   inv_0*((rc10)*u0_B0[OPS_ACC0(0,3)] - 3*u0_B0[OPS_ACC0(0,2)] +
      4*u0_B0[OPS_ACC0(0,1)] - rc9*u0_B0[OPS_ACC0(0,0)] - rc8*u0_B0[OPS_ACC0(0,4)])
)
: ((idx[1] == 1) ? (
  
      (rc11)*inv_0*(u0_B0[OPS_ACC0(0,3)] - 6*u0_B0[OPS_ACC0(0,2)] + 18*u0_B0[OPS_ACC0(0,1)] - 10*u0_B0[OPS_ACC0(0,0)] -
      3*u0_B0[OPS_ACC0(0,-1)])
)
: ((idx[1] == block0np1 - 1) ? (
   inv_0*((rc8)*u0_B0[OPS_ACC0(0,-4)] +
      (rc9)*u0_B0[OPS_ACC0(0,0)] - 4*u0_B0[OPS_ACC0(0,-1)] - rc10*u0_B0[OPS_ACC0(0,-3)] + 3*u0_B0[OPS_ACC0(0,-2)])
)
:
      ((idx[1] == block0np1 - 2) ? (
   (rc11)*inv_0*(3*u0_B0[OPS_ACC0(0,1)] + 10*u0_B0[OPS_ACC0(0,0)] -
      18*u0_B0[OPS_ACC0(0,-1)] - u0_B0[OPS_ACC0(0,-3)] + 6*u0_B0[OPS_ACC0(0,-2)])
)
: (
  
      (rc11)*inv_0*(-u0_B0[OPS_ACC0(0,2)] + 8*u0_B0[OPS_ACC0(0,1)] - 8*u0_B0[OPS_ACC0(0,-1)] +
      u0_B0[OPS_ACC0(0,-2)])
)))));

    theta_B0[OPS_ACC3(0,0)] = pow(localeval_0*D11_B0[OPS_ACC2(0,0)] + localeval_2,
      2)*(-rc13*tanh(250.0*localeval_0*D11_B0[OPS_ACC2(0,0)] + 250.0*localeval_2 + 2.5) + rc13)/(epsilon +
      pow(localeval_1 - localeval_3*D11_B0[OPS_ACC2(0,0)], 2) + pow(localeval_0*D11_B0[OPS_ACC2(0,0)] + localeval_2,
      2));

}

 void opensbliblock00Kernel011(const double *rhoE_B0, const double *rho_B0, const double *u0_B0, const double *u1_B0,
double *p_B0)
{
    p_B0[OPS_ACC4(0,0)] = (gama - 1)*(rhoE_B0[OPS_ACC0(0,0)] - rc13*rho_B0[OPS_ACC1(0,0)]*pow(u0_B0[OPS_ACC2(0,0)], 2) -
      rc13*rho_B0[OPS_ACC1(0,0)]*pow(u1_B0[OPS_ACC3(0,0)], 2));

}

void opensbliblock00Kernel015(const double *rho_B0, const double *p_B0, double *T_B0)
{
   T_B0[OPS_ACC2(0,0)] = pow(Minf, 2)*gama*p_B0[OPS_ACC1(0,0)]/rho_B0[OPS_ACC0(0,0)];

}

void opensbliblock00Kernel013(const double *rho_B0, const double *p_B0, double *a_B0)
{
   a_B0[OPS_ACC2(0,0)] = sqrt(gama*p_B0[OPS_ACC1(0,0)]/rho_B0[OPS_ACC0(0,0)]);

}

void opensbliblock00Kernel018(const double *T_B0, double *mu_B0)
{
   mu_B0[OPS_ACC1(0,0)] = (SuthT*rcinv14 + 1.0)*pow(T_B0[OPS_ACC0(0,0)], 1.5)/(SuthT*rcinv14 + T_B0[OPS_ACC0(0,0)]);

}

 void opensbliblock00Kernel003(const double *theta_B0, const double *rhoE_B0, const double *rho_B0, const double *p_B0,
const double *rhou1_B0, const double *a_B0, const double *rhou0_B0, const double *u0_B0, const double *u1_B0, double
*wk3_B0, double *wk0_B0, double *wk1_B0, double *TENO_B0, double *wk2_B0)
{
   double AVG_0_0_LEV_01 = 0.0;
   double CS_32 = 0.0;
   double CF_25 = 0.0;
   double max_lambda_0_22 = 0.0;
   double CF_24 = 0.0;
   double CS_33 = 0.0;
   double CS_22 = 0.0;
   double delta_0 = 0.0;
   double max_lambda_0_33 = 0.0;
   double CF_12 = 0.0;
   double CF_35 = 0.0;
   double delta_1 = 0.0;
   double AVG_0_0_LEV_10 = 0.0;
   double CS_10 = 0.0;
   double beta_0 = 0.0;
   double alpha_1 = 0.0;
   double AVG_0_0_LEV_21 = 0.0;
   double CS_00 = 0.0;
   double CS_11 = 0.0;
   double beta_1 = 0.0;
   double CS_01 = 0.0;
   double AVG_0_0_LEV_33 = 0.0;
   double CS_31 = 0.0;
   double CF_00 = 0.0;
   double CF_21 = 0.0;
   double AVG_0_0_LEV_32 = 0.0;
   double AVG_0_0_LEV_12 = 0.0;
   double CF_11 = 0.0;
   double CF_30 = 0.0;
   double AVG_0_u0 = 0.0;
   double AVG_0_0_LEV_23 = 0.0;
   double AVG_0_0_LEV_22 = 0.0;
   double CS_25 = 0.0;
   double CS_34 = 0.0;
   double CF_05 = 0.0;
   double CS_35 = 0.0;
   double max_lambda_0_00 = 0.0;
   double AVG_0_rho = 0.0;
   double CF_33 = 0.0;
   double CS_24 = 0.0;
   double inv_AVG_rho = 0.0;
   double beta_2 = 0.0;
   double CS_23 = 0.0;
   double CS_03 = 0.0;
   double AVG_0_a = 0.0;
   double CF_23 = 0.0;
   double CS_14 = 0.0;
   double AVG_0_0_LEV_00 = 0.0;
   double CS_02 = 0.0;
   double CF_01 = 0.0;
   double CS_15 = 0.0;
   double CF_13 = 0.0;
   double TENO_CT = 0.0;
   double Recon_0 = 0.0;
   double CF_14 = 0.0;
   double CF_15 = 0.0;
   double CF_34 = 0.0;
   double CF_20 = 0.0;
   double alpha_0 = 0.0;
   double CS_30 = 0.0;
   double CF_31 = 0.0;
   double AVG_0_u1 = 0.0;
   double inv_omega_sum = 0.0;
   double CS_21 = 0.0;
   double Recon_3 = 0.0;
   double CS_05 = 0.0;
   double CF_10 = 0.0;
   double CS_20 = 0.0;
   double CF_04 = 0.0;
   double alpha_2 = 0.0;
   double CS_12 = 0.0;
   double inv_AVG_a = 0.0;
   double AVG_0_0_LEV_02 = 0.0;
   double CS_04 = 0.0;
   double CS_13 = 0.0;
   double inv_alpha_sum = 0.0;
   double AVG_0_0_LEV_03 = 0.0;
   double CF_03 = 0.0;
   double AVG_0_0_LEV_31 = 0.0;
   double Recon_2 = 0.0;
   double CF_02 = 0.0;
   double AVG_0_0_LEV_30 = 0.0;
   double AVG_0_inv_rho = 0.0;
   double CF_32 = 0.0;
   double delta_2 = 0.0;
   double CF_22 = 0.0;
   double AVG_0_0_LEV_20 = 0.0;
   double Recon_1 = 0.0;
   double max_lambda_0_11 = 0.0;
   AVG_0_rho = sqrt(rho_B0[OPS_ACC2(0,0)]*rho_B0[OPS_ACC2(1,0)]);

   AVG_0_inv_rho = 1.0/(sqrt(rho_B0[OPS_ACC2(1,0)]) + sqrt(rho_B0[OPS_ACC2(0,0)]));

    AVG_0_u0 = AVG_0_inv_rho*(sqrt(rho_B0[OPS_ACC2(1,0)])*u0_B0[OPS_ACC7(1,0)] +
      sqrt(rho_B0[OPS_ACC2(0,0)])*u0_B0[OPS_ACC7(0,0)]);

    AVG_0_u1 = AVG_0_inv_rho*(sqrt(rho_B0[OPS_ACC2(1,0)])*u1_B0[OPS_ACC8(1,0)] +
      sqrt(rho_B0[OPS_ACC2(0,0)])*u1_B0[OPS_ACC8(0,0)]);

    AVG_0_a = sqrt(gamma_m1*(AVG_0_inv_rho*((p_B0[OPS_ACC3(1,0)] + rhoE_B0[OPS_ACC1(1,0)])/sqrt(rho_B0[OPS_ACC2(1,0)]) +
      (p_B0[OPS_ACC3(0,0)] + rhoE_B0[OPS_ACC1(0,0)])/sqrt(rho_B0[OPS_ACC2(0,0)])) - rc13*(pow(AVG_0_u0, 2) +
      pow(AVG_0_u1, 2))));

   inv_AVG_a = 1.0/AVG_0_a;

   inv_AVG_rho = 1.0/AVG_0_rho;

    AVG_0_0_LEV_00 = -rc13*(gama*pow(AVG_0_u0, 2)*pow(inv_AVG_a, 2) + gama*pow(AVG_0_u1, 2)*pow(inv_AVG_a, 2) -
      pow(AVG_0_u0, 2)*pow(inv_AVG_a, 2) - pow(AVG_0_u1, 2)*pow(inv_AVG_a, 2) - 2);

   AVG_0_0_LEV_01 = gamma_m1*AVG_0_u0*pow(inv_AVG_a, 2);

   AVG_0_0_LEV_02 = gamma_m1*AVG_0_u1*pow(inv_AVG_a, 2);

   AVG_0_0_LEV_03 = -gamma_m1*pow(inv_AVG_a, 2);

   AVG_0_0_LEV_10 = AVG_0_u1*inv_AVG_rho;

   AVG_0_0_LEV_12 = -inv_AVG_rho;

    AVG_0_0_LEV_20 = -0.353553390593274*inv_AVG_a*inv_AVG_rho*(-gama*pow(AVG_0_u0, 2) - gama*pow(AVG_0_u1, 2) +
      2*AVG_0_a*AVG_0_u0 + pow(AVG_0_u0, 2) + pow(AVG_0_u1, 2));

   AVG_0_0_LEV_21 = 0.707106781186547*inv_AVG_a*inv_AVG_rho*(-gama*AVG_0_u0 + AVG_0_a + AVG_0_u0);

   AVG_0_0_LEV_22 = -0.707106781186547*gamma_m1*AVG_0_u1*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_23 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    AVG_0_0_LEV_30 = 0.353553390593274*inv_AVG_a*inv_AVG_rho*(gama*pow(AVG_0_u0, 2) + gama*pow(AVG_0_u1, 2) +
      2*AVG_0_a*AVG_0_u0 - pow(AVG_0_u0, 2) - pow(AVG_0_u1, 2));

   AVG_0_0_LEV_31 = -0.707106781186547*inv_AVG_a*inv_AVG_rho*(gama*AVG_0_u0 + AVG_0_a - AVG_0_u0);

   AVG_0_0_LEV_32 = -0.707106781186547*gamma_m1*AVG_0_u1*inv_AVG_a*inv_AVG_rho;

   AVG_0_0_LEV_33 = 0.707106781186547*gamma_m1*inv_AVG_a*inv_AVG_rho;

    CF_00 = AVG_0_0_LEV_00*rhou0_B0[OPS_ACC6(-2,0)] + AVG_0_0_LEV_01*p_B0[OPS_ACC3(-2,0)] +
      AVG_0_0_LEV_01*rhou0_B0[OPS_ACC6(-2,0)]*u0_B0[OPS_ACC7(-2,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC4(-2,0)]*u0_B0[OPS_ACC7(-2,0)] +
      AVG_0_0_LEV_03*p_B0[OPS_ACC3(-2,0)]*u0_B0[OPS_ACC7(-2,0)] +
      AVG_0_0_LEV_03*rhoE_B0[OPS_ACC1(-2,0)]*u0_B0[OPS_ACC7(-2,0)];

   CF_10 = AVG_0_0_LEV_10*rhou0_B0[OPS_ACC6(-2,0)] + AVG_0_0_LEV_12*rhou1_B0[OPS_ACC4(-2,0)]*u0_B0[OPS_ACC7(-2,0)];

    CF_20 = AVG_0_0_LEV_20*rhou0_B0[OPS_ACC6(-2,0)] + AVG_0_0_LEV_21*p_B0[OPS_ACC3(-2,0)] +
      AVG_0_0_LEV_21*rhou0_B0[OPS_ACC6(-2,0)]*u0_B0[OPS_ACC7(-2,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC4(-2,0)]*u0_B0[OPS_ACC7(-2,0)] +
      AVG_0_0_LEV_23*p_B0[OPS_ACC3(-2,0)]*u0_B0[OPS_ACC7(-2,0)] +
      AVG_0_0_LEV_23*rhoE_B0[OPS_ACC1(-2,0)]*u0_B0[OPS_ACC7(-2,0)];

    CF_30 = AVG_0_0_LEV_30*rhou0_B0[OPS_ACC6(-2,0)] + AVG_0_0_LEV_31*p_B0[OPS_ACC3(-2,0)] +
      AVG_0_0_LEV_31*rhou0_B0[OPS_ACC6(-2,0)]*u0_B0[OPS_ACC7(-2,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC4(-2,0)]*u0_B0[OPS_ACC7(-2,0)] +
      AVG_0_0_LEV_33*p_B0[OPS_ACC3(-2,0)]*u0_B0[OPS_ACC7(-2,0)] +
      AVG_0_0_LEV_33*rhoE_B0[OPS_ACC1(-2,0)]*u0_B0[OPS_ACC7(-2,0)];

    CF_01 = AVG_0_0_LEV_00*rhou0_B0[OPS_ACC6(-1,0)] + AVG_0_0_LEV_01*p_B0[OPS_ACC3(-1,0)] +
      AVG_0_0_LEV_01*rhou0_B0[OPS_ACC6(-1,0)]*u0_B0[OPS_ACC7(-1,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC4(-1,0)]*u0_B0[OPS_ACC7(-1,0)] +
      AVG_0_0_LEV_03*p_B0[OPS_ACC3(-1,0)]*u0_B0[OPS_ACC7(-1,0)] +
      AVG_0_0_LEV_03*rhoE_B0[OPS_ACC1(-1,0)]*u0_B0[OPS_ACC7(-1,0)];

   CF_11 = AVG_0_0_LEV_10*rhou0_B0[OPS_ACC6(-1,0)] + AVG_0_0_LEV_12*rhou1_B0[OPS_ACC4(-1,0)]*u0_B0[OPS_ACC7(-1,0)];

    CF_21 = AVG_0_0_LEV_20*rhou0_B0[OPS_ACC6(-1,0)] + AVG_0_0_LEV_21*p_B0[OPS_ACC3(-1,0)] +
      AVG_0_0_LEV_21*rhou0_B0[OPS_ACC6(-1,0)]*u0_B0[OPS_ACC7(-1,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC4(-1,0)]*u0_B0[OPS_ACC7(-1,0)] +
      AVG_0_0_LEV_23*p_B0[OPS_ACC3(-1,0)]*u0_B0[OPS_ACC7(-1,0)] +
      AVG_0_0_LEV_23*rhoE_B0[OPS_ACC1(-1,0)]*u0_B0[OPS_ACC7(-1,0)];

    CF_31 = AVG_0_0_LEV_30*rhou0_B0[OPS_ACC6(-1,0)] + AVG_0_0_LEV_31*p_B0[OPS_ACC3(-1,0)] +
      AVG_0_0_LEV_31*rhou0_B0[OPS_ACC6(-1,0)]*u0_B0[OPS_ACC7(-1,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC4(-1,0)]*u0_B0[OPS_ACC7(-1,0)] +
      AVG_0_0_LEV_33*p_B0[OPS_ACC3(-1,0)]*u0_B0[OPS_ACC7(-1,0)] +
      AVG_0_0_LEV_33*rhoE_B0[OPS_ACC1(-1,0)]*u0_B0[OPS_ACC7(-1,0)];

    CF_02 = AVG_0_0_LEV_00*rhou0_B0[OPS_ACC6(0,0)] + AVG_0_0_LEV_01*p_B0[OPS_ACC3(0,0)] +
      AVG_0_0_LEV_01*rhou0_B0[OPS_ACC6(0,0)]*u0_B0[OPS_ACC7(0,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC4(0,0)]*u0_B0[OPS_ACC7(0,0)] +
      AVG_0_0_LEV_03*p_B0[OPS_ACC3(0,0)]*u0_B0[OPS_ACC7(0,0)] +
      AVG_0_0_LEV_03*rhoE_B0[OPS_ACC1(0,0)]*u0_B0[OPS_ACC7(0,0)];

   CF_12 = AVG_0_0_LEV_10*rhou0_B0[OPS_ACC6(0,0)] + AVG_0_0_LEV_12*rhou1_B0[OPS_ACC4(0,0)]*u0_B0[OPS_ACC7(0,0)];

    CF_22 = AVG_0_0_LEV_20*rhou0_B0[OPS_ACC6(0,0)] + AVG_0_0_LEV_21*p_B0[OPS_ACC3(0,0)] +
      AVG_0_0_LEV_21*rhou0_B0[OPS_ACC6(0,0)]*u0_B0[OPS_ACC7(0,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC4(0,0)]*u0_B0[OPS_ACC7(0,0)] +
      AVG_0_0_LEV_23*p_B0[OPS_ACC3(0,0)]*u0_B0[OPS_ACC7(0,0)] +
      AVG_0_0_LEV_23*rhoE_B0[OPS_ACC1(0,0)]*u0_B0[OPS_ACC7(0,0)];

    CF_32 = AVG_0_0_LEV_30*rhou0_B0[OPS_ACC6(0,0)] + AVG_0_0_LEV_31*p_B0[OPS_ACC3(0,0)] +
      AVG_0_0_LEV_31*rhou0_B0[OPS_ACC6(0,0)]*u0_B0[OPS_ACC7(0,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC4(0,0)]*u0_B0[OPS_ACC7(0,0)] +
      AVG_0_0_LEV_33*p_B0[OPS_ACC3(0,0)]*u0_B0[OPS_ACC7(0,0)] +
      AVG_0_0_LEV_33*rhoE_B0[OPS_ACC1(0,0)]*u0_B0[OPS_ACC7(0,0)];

    CF_03 = AVG_0_0_LEV_00*rhou0_B0[OPS_ACC6(1,0)] + AVG_0_0_LEV_01*p_B0[OPS_ACC3(1,0)] +
      AVG_0_0_LEV_01*rhou0_B0[OPS_ACC6(1,0)]*u0_B0[OPS_ACC7(1,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC4(1,0)]*u0_B0[OPS_ACC7(1,0)] +
      AVG_0_0_LEV_03*p_B0[OPS_ACC3(1,0)]*u0_B0[OPS_ACC7(1,0)] +
      AVG_0_0_LEV_03*rhoE_B0[OPS_ACC1(1,0)]*u0_B0[OPS_ACC7(1,0)];

   CF_13 = AVG_0_0_LEV_10*rhou0_B0[OPS_ACC6(1,0)] + AVG_0_0_LEV_12*rhou1_B0[OPS_ACC4(1,0)]*u0_B0[OPS_ACC7(1,0)];

    CF_23 = AVG_0_0_LEV_20*rhou0_B0[OPS_ACC6(1,0)] + AVG_0_0_LEV_21*p_B0[OPS_ACC3(1,0)] +
      AVG_0_0_LEV_21*rhou0_B0[OPS_ACC6(1,0)]*u0_B0[OPS_ACC7(1,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC4(1,0)]*u0_B0[OPS_ACC7(1,0)] +
      AVG_0_0_LEV_23*p_B0[OPS_ACC3(1,0)]*u0_B0[OPS_ACC7(1,0)] +
      AVG_0_0_LEV_23*rhoE_B0[OPS_ACC1(1,0)]*u0_B0[OPS_ACC7(1,0)];

    CF_33 = AVG_0_0_LEV_30*rhou0_B0[OPS_ACC6(1,0)] + AVG_0_0_LEV_31*p_B0[OPS_ACC3(1,0)] +
      AVG_0_0_LEV_31*rhou0_B0[OPS_ACC6(1,0)]*u0_B0[OPS_ACC7(1,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC4(1,0)]*u0_B0[OPS_ACC7(1,0)] +
      AVG_0_0_LEV_33*p_B0[OPS_ACC3(1,0)]*u0_B0[OPS_ACC7(1,0)] +
      AVG_0_0_LEV_33*rhoE_B0[OPS_ACC1(1,0)]*u0_B0[OPS_ACC7(1,0)];

    CF_04 = AVG_0_0_LEV_00*rhou0_B0[OPS_ACC6(2,0)] + AVG_0_0_LEV_01*p_B0[OPS_ACC3(2,0)] +
      AVG_0_0_LEV_01*rhou0_B0[OPS_ACC6(2,0)]*u0_B0[OPS_ACC7(2,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC4(2,0)]*u0_B0[OPS_ACC7(2,0)] +
      AVG_0_0_LEV_03*p_B0[OPS_ACC3(2,0)]*u0_B0[OPS_ACC7(2,0)] +
      AVG_0_0_LEV_03*rhoE_B0[OPS_ACC1(2,0)]*u0_B0[OPS_ACC7(2,0)];

   CF_14 = AVG_0_0_LEV_10*rhou0_B0[OPS_ACC6(2,0)] + AVG_0_0_LEV_12*rhou1_B0[OPS_ACC4(2,0)]*u0_B0[OPS_ACC7(2,0)];

    CF_24 = AVG_0_0_LEV_20*rhou0_B0[OPS_ACC6(2,0)] + AVG_0_0_LEV_21*p_B0[OPS_ACC3(2,0)] +
      AVG_0_0_LEV_21*rhou0_B0[OPS_ACC6(2,0)]*u0_B0[OPS_ACC7(2,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC4(2,0)]*u0_B0[OPS_ACC7(2,0)] +
      AVG_0_0_LEV_23*p_B0[OPS_ACC3(2,0)]*u0_B0[OPS_ACC7(2,0)] +
      AVG_0_0_LEV_23*rhoE_B0[OPS_ACC1(2,0)]*u0_B0[OPS_ACC7(2,0)];

    CF_34 = AVG_0_0_LEV_30*rhou0_B0[OPS_ACC6(2,0)] + AVG_0_0_LEV_31*p_B0[OPS_ACC3(2,0)] +
      AVG_0_0_LEV_31*rhou0_B0[OPS_ACC6(2,0)]*u0_B0[OPS_ACC7(2,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC4(2,0)]*u0_B0[OPS_ACC7(2,0)] +
      AVG_0_0_LEV_33*p_B0[OPS_ACC3(2,0)]*u0_B0[OPS_ACC7(2,0)] +
      AVG_0_0_LEV_33*rhoE_B0[OPS_ACC1(2,0)]*u0_B0[OPS_ACC7(2,0)];

    CF_05 = AVG_0_0_LEV_00*rhou0_B0[OPS_ACC6(3,0)] + AVG_0_0_LEV_01*p_B0[OPS_ACC3(3,0)] +
      AVG_0_0_LEV_01*rhou0_B0[OPS_ACC6(3,0)]*u0_B0[OPS_ACC7(3,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC4(3,0)]*u0_B0[OPS_ACC7(3,0)] +
      AVG_0_0_LEV_03*p_B0[OPS_ACC3(3,0)]*u0_B0[OPS_ACC7(3,0)] +
      AVG_0_0_LEV_03*rhoE_B0[OPS_ACC1(3,0)]*u0_B0[OPS_ACC7(3,0)];

   CF_15 = AVG_0_0_LEV_10*rhou0_B0[OPS_ACC6(3,0)] + AVG_0_0_LEV_12*rhou1_B0[OPS_ACC4(3,0)]*u0_B0[OPS_ACC7(3,0)];

    CF_25 = AVG_0_0_LEV_20*rhou0_B0[OPS_ACC6(3,0)] + AVG_0_0_LEV_21*p_B0[OPS_ACC3(3,0)] +
      AVG_0_0_LEV_21*rhou0_B0[OPS_ACC6(3,0)]*u0_B0[OPS_ACC7(3,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC4(3,0)]*u0_B0[OPS_ACC7(3,0)] +
      AVG_0_0_LEV_23*p_B0[OPS_ACC3(3,0)]*u0_B0[OPS_ACC7(3,0)] +
      AVG_0_0_LEV_23*rhoE_B0[OPS_ACC1(3,0)]*u0_B0[OPS_ACC7(3,0)];

    CF_35 = AVG_0_0_LEV_30*rhou0_B0[OPS_ACC6(3,0)] + AVG_0_0_LEV_31*p_B0[OPS_ACC3(3,0)] +
      AVG_0_0_LEV_31*rhou0_B0[OPS_ACC6(3,0)]*u0_B0[OPS_ACC7(3,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC4(3,0)]*u0_B0[OPS_ACC7(3,0)] +
      AVG_0_0_LEV_33*p_B0[OPS_ACC3(3,0)]*u0_B0[OPS_ACC7(3,0)] +
      AVG_0_0_LEV_33*rhoE_B0[OPS_ACC1(3,0)]*u0_B0[OPS_ACC7(3,0)];

    CS_00 = AVG_0_0_LEV_00*rho_B0[OPS_ACC2(-2,0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC6(-2,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC4(-2,0)] + AVG_0_0_LEV_03*rhoE_B0[OPS_ACC1(-2,0)];

    CS_01 = AVG_0_0_LEV_00*rho_B0[OPS_ACC2(-1,0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC6(-1,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC4(-1,0)] + AVG_0_0_LEV_03*rhoE_B0[OPS_ACC1(-1,0)];

    CS_02 = AVG_0_0_LEV_00*rho_B0[OPS_ACC2(0,0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC6(0,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC4(0,0)] + AVG_0_0_LEV_03*rhoE_B0[OPS_ACC1(0,0)];

    CS_03 = AVG_0_0_LEV_00*rho_B0[OPS_ACC2(1,0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC6(1,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC4(1,0)] + AVG_0_0_LEV_03*rhoE_B0[OPS_ACC1(1,0)];

    CS_04 = AVG_0_0_LEV_00*rho_B0[OPS_ACC2(2,0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC6(2,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC4(2,0)] + AVG_0_0_LEV_03*rhoE_B0[OPS_ACC1(2,0)];

    CS_05 = AVG_0_0_LEV_00*rho_B0[OPS_ACC2(3,0)] + AVG_0_0_LEV_01*rhou0_B0[OPS_ACC6(3,0)] +
      AVG_0_0_LEV_02*rhou1_B0[OPS_ACC4(3,0)] + AVG_0_0_LEV_03*rhoE_B0[OPS_ACC1(3,0)];

   CS_10 = AVG_0_0_LEV_10*rho_B0[OPS_ACC2(-2,0)] + AVG_0_0_LEV_12*rhou1_B0[OPS_ACC4(-2,0)];

   CS_11 = AVG_0_0_LEV_10*rho_B0[OPS_ACC2(-1,0)] + AVG_0_0_LEV_12*rhou1_B0[OPS_ACC4(-1,0)];

   CS_12 = AVG_0_0_LEV_10*rho_B0[OPS_ACC2(0,0)] + AVG_0_0_LEV_12*rhou1_B0[OPS_ACC4(0,0)];

   CS_13 = AVG_0_0_LEV_10*rho_B0[OPS_ACC2(1,0)] + AVG_0_0_LEV_12*rhou1_B0[OPS_ACC4(1,0)];

   CS_14 = AVG_0_0_LEV_10*rho_B0[OPS_ACC2(2,0)] + AVG_0_0_LEV_12*rhou1_B0[OPS_ACC4(2,0)];

   CS_15 = AVG_0_0_LEV_10*rho_B0[OPS_ACC2(3,0)] + AVG_0_0_LEV_12*rhou1_B0[OPS_ACC4(3,0)];

    CS_20 = AVG_0_0_LEV_20*rho_B0[OPS_ACC2(-2,0)] + AVG_0_0_LEV_21*rhou0_B0[OPS_ACC6(-2,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC4(-2,0)] + AVG_0_0_LEV_23*rhoE_B0[OPS_ACC1(-2,0)];

    CS_21 = AVG_0_0_LEV_20*rho_B0[OPS_ACC2(-1,0)] + AVG_0_0_LEV_21*rhou0_B0[OPS_ACC6(-1,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC4(-1,0)] + AVG_0_0_LEV_23*rhoE_B0[OPS_ACC1(-1,0)];

    CS_22 = AVG_0_0_LEV_20*rho_B0[OPS_ACC2(0,0)] + AVG_0_0_LEV_21*rhou0_B0[OPS_ACC6(0,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC4(0,0)] + AVG_0_0_LEV_23*rhoE_B0[OPS_ACC1(0,0)];

    CS_23 = AVG_0_0_LEV_20*rho_B0[OPS_ACC2(1,0)] + AVG_0_0_LEV_21*rhou0_B0[OPS_ACC6(1,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC4(1,0)] + AVG_0_0_LEV_23*rhoE_B0[OPS_ACC1(1,0)];

    CS_24 = AVG_0_0_LEV_20*rho_B0[OPS_ACC2(2,0)] + AVG_0_0_LEV_21*rhou0_B0[OPS_ACC6(2,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC4(2,0)] + AVG_0_0_LEV_23*rhoE_B0[OPS_ACC1(2,0)];

    CS_25 = AVG_0_0_LEV_20*rho_B0[OPS_ACC2(3,0)] + AVG_0_0_LEV_21*rhou0_B0[OPS_ACC6(3,0)] +
      AVG_0_0_LEV_22*rhou1_B0[OPS_ACC4(3,0)] + AVG_0_0_LEV_23*rhoE_B0[OPS_ACC1(3,0)];

    CS_30 = AVG_0_0_LEV_30*rho_B0[OPS_ACC2(-2,0)] + AVG_0_0_LEV_31*rhou0_B0[OPS_ACC6(-2,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC4(-2,0)] + AVG_0_0_LEV_33*rhoE_B0[OPS_ACC1(-2,0)];

    CS_31 = AVG_0_0_LEV_30*rho_B0[OPS_ACC2(-1,0)] + AVG_0_0_LEV_31*rhou0_B0[OPS_ACC6(-1,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC4(-1,0)] + AVG_0_0_LEV_33*rhoE_B0[OPS_ACC1(-1,0)];

    CS_32 = AVG_0_0_LEV_30*rho_B0[OPS_ACC2(0,0)] + AVG_0_0_LEV_31*rhou0_B0[OPS_ACC6(0,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC4(0,0)] + AVG_0_0_LEV_33*rhoE_B0[OPS_ACC1(0,0)];

    CS_33 = AVG_0_0_LEV_30*rho_B0[OPS_ACC2(1,0)] + AVG_0_0_LEV_31*rhou0_B0[OPS_ACC6(1,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC4(1,0)] + AVG_0_0_LEV_33*rhoE_B0[OPS_ACC1(1,0)];

    CS_34 = AVG_0_0_LEV_30*rho_B0[OPS_ACC2(2,0)] + AVG_0_0_LEV_31*rhou0_B0[OPS_ACC6(2,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC4(2,0)] + AVG_0_0_LEV_33*rhoE_B0[OPS_ACC1(2,0)];

    CS_35 = AVG_0_0_LEV_30*rho_B0[OPS_ACC2(3,0)] + AVG_0_0_LEV_31*rhou0_B0[OPS_ACC6(3,0)] +
      AVG_0_0_LEV_32*rhou1_B0[OPS_ACC4(3,0)] + AVG_0_0_LEV_33*rhoE_B0[OPS_ACC1(3,0)];

    max_lambda_0_00 = fmax(fabs(u0_B0[OPS_ACC7(2,0)]), fmax(fabs(u0_B0[OPS_ACC7(0,0)]),
      fmax(fabs(u0_B0[OPS_ACC7(-2,0)]), fmax(fabs(u0_B0[OPS_ACC7(-1,0)]), fmax(fabs(u0_B0[OPS_ACC7(3,0)]),
      fabs(u0_B0[OPS_ACC7(1,0)]))))));

   max_lambda_0_11 = max_lambda_0_00;

    max_lambda_0_22 = fmax(fabs(a_B0[OPS_ACC5(2,0)] + u0_B0[OPS_ACC7(2,0)]), fmax(fabs(a_B0[OPS_ACC5(-2,0)] +
      u0_B0[OPS_ACC7(-2,0)]), fmax(fabs(a_B0[OPS_ACC5(1,0)] + u0_B0[OPS_ACC7(1,0)]), fmax(fabs(a_B0[OPS_ACC5(-1,0)] +
      u0_B0[OPS_ACC7(-1,0)]), fmax(fabs(a_B0[OPS_ACC5(0,0)] + u0_B0[OPS_ACC7(0,0)]), fabs(a_B0[OPS_ACC5(3,0)] +
      u0_B0[OPS_ACC7(3,0)]))))));

    max_lambda_0_33 = fmax(fabs(a_B0[OPS_ACC5(-2,0)] - u0_B0[OPS_ACC7(-2,0)]), fmax(fabs(a_B0[OPS_ACC5(2,0)] -
      u0_B0[OPS_ACC7(2,0)]), fmax(fabs(a_B0[OPS_ACC5(3,0)] - u0_B0[OPS_ACC7(3,0)]), fmax(fabs(a_B0[OPS_ACC5(1,0)] -
      u0_B0[OPS_ACC7(1,0)]), fmax(fabs(a_B0[OPS_ACC5(-1,0)] - u0_B0[OPS_ACC7(-1,0)]), fabs(a_B0[OPS_ACC5(0,0)] -
      u0_B0[OPS_ACC7(0,0)]))))));

    TENO_CT = pow(10.0, -floor(teno_a1 - teno_a2*(-pow(-theta_B0[OPS_ACC0(0,0)] + 1, 4)*(4*theta_B0[OPS_ACC0(0,0)] + 1)
      + 1)));

   TENO_B0[OPS_ACC12(0,0)] = TENO_CT;

    beta_0 = (rc8)*pow((rc13)*(CF_01 + CS_01*max_lambda_0_00) - rc13*(CF_03 + CS_03*max_lambda_0_00), 2) +
      (rc15)*pow((rc13)*(CF_01 + CS_01*max_lambda_0_00) - (CF_02 + CS_02*max_lambda_0_00) + (rc13)*(CF_03 +
      CS_03*max_lambda_0_00), 2);

    beta_1 = (rc15)*pow((rc13)*(CF_02 + CS_02*max_lambda_0_00) - (CF_03 + CS_03*max_lambda_0_00) + (rc13)*(CF_04 +
      CS_04*max_lambda_0_00), 2) + (rc8)*pow((rc16)*(CF_02 + CS_02*max_lambda_0_00) - 2*(CF_03 + CS_03*max_lambda_0_00)
      + (rc13)*(CF_04 + CS_04*max_lambda_0_00), 2);

    beta_2 = (rc8)*pow((rc13)*(CF_00 + CS_00*max_lambda_0_00) - 2*(CF_01 + CS_01*max_lambda_0_00) + (rc16)*(CF_02 +
      CS_02*max_lambda_0_00), 2) + (rc15)*pow((rc13)*(CF_00 + CS_00*max_lambda_0_00) - (CF_01 + CS_01*max_lambda_0_00) +
      (rc13)*(CF_02 + CS_02*max_lambda_0_00), 2);

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

    Recon_0 = Recon_0 + (rc17)*delta_0*inv_omega_sum*(-rc11*(CF_01 + CS_01*max_lambda_0_00) + (rc20)*(CF_02 +
      CS_02*max_lambda_0_00) + (rc21)*(CF_03 + CS_03*max_lambda_0_00)) + (rc18)*delta_1*inv_omega_sum*((rc21)*(CF_02 +
      CS_02*max_lambda_0_00) + (rc20)*(CF_03 + CS_03*max_lambda_0_00) - rc11*(CF_04 + CS_04*max_lambda_0_00)) +
      (rc19)*delta_2*inv_omega_sum*((rc21)*(CF_00 + CS_00*max_lambda_0_00) - rc22*(CF_01 + CS_01*max_lambda_0_00) +
      (rc23)*(CF_02 + CS_02*max_lambda_0_00));

    beta_0 = (rc8)*pow((rc13)*(CF_02 - CS_02*max_lambda_0_00) - rc13*(CF_04 - CS_04*max_lambda_0_00), 2) +
      (rc15)*pow((rc13)*(CF_02 - CS_02*max_lambda_0_00) - (CF_03 - CS_03*max_lambda_0_00) + (rc13)*(CF_04 -
      CS_04*max_lambda_0_00), 2);

    beta_1 = (rc8)*pow((rc13)*(CF_01 - CS_01*max_lambda_0_00) - 2*(CF_02 - CS_02*max_lambda_0_00) + (rc16)*(CF_03 -
      CS_03*max_lambda_0_00), 2) + (rc15)*pow((rc13)*(CF_01 - CS_01*max_lambda_0_00) - (CF_02 - CS_02*max_lambda_0_00) +
      (rc13)*(CF_03 - CS_03*max_lambda_0_00), 2);

    beta_2 = (rc15)*pow((rc13)*(CF_03 - CS_03*max_lambda_0_00) - (CF_04 - CS_04*max_lambda_0_00) + (rc13)*(CF_05 -
      CS_05*max_lambda_0_00), 2) + (rc8)*pow((rc16)*(CF_03 - CS_03*max_lambda_0_00) - 2*(CF_04 - CS_04*max_lambda_0_00)
      + (rc13)*(CF_05 - CS_05*max_lambda_0_00), 2);

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

    Recon_0 = Recon_0 + (rc17)*delta_0*inv_omega_sum*((rc21)*(CF_02 - CS_02*max_lambda_0_00) + (rc20)*(CF_03 -
      CS_03*max_lambda_0_00) - rc11*(CF_04 - CS_04*max_lambda_0_00)) + (rc18)*delta_1*inv_omega_sum*(-rc11*(CF_01 -
      CS_01*max_lambda_0_00) + (rc20)*(CF_02 - CS_02*max_lambda_0_00) + (rc21)*(CF_03 - CS_03*max_lambda_0_00)) +
      (rc19)*delta_2*inv_omega_sum*((rc23)*(CF_03 - CS_03*max_lambda_0_00) - rc22*(CF_04 - CS_04*max_lambda_0_00) +
      (rc21)*(CF_05 - CS_05*max_lambda_0_00));

    beta_0 = (rc8)*pow((rc13)*(CF_11 + CS_11*max_lambda_0_11) - rc13*(CF_13 + CS_13*max_lambda_0_11), 2) +
      (rc15)*pow((rc13)*(CF_11 + CS_11*max_lambda_0_11) - (CF_12 + CS_12*max_lambda_0_11) + (rc13)*(CF_13 +
      CS_13*max_lambda_0_11), 2);

    beta_1 = (rc15)*pow((rc13)*(CF_12 + CS_12*max_lambda_0_11) - (CF_13 + CS_13*max_lambda_0_11) + (rc13)*(CF_14 +
      CS_14*max_lambda_0_11), 2) + (rc8)*pow((rc16)*(CF_12 + CS_12*max_lambda_0_11) - 2*(CF_13 + CS_13*max_lambda_0_11)
      + (rc13)*(CF_14 + CS_14*max_lambda_0_11), 2);

    beta_2 = (rc8)*pow((rc13)*(CF_10 + CS_10*max_lambda_0_11) - 2*(CF_11 + CS_11*max_lambda_0_11) + (rc16)*(CF_12 +
      CS_12*max_lambda_0_11), 2) + (rc15)*pow((rc13)*(CF_10 + CS_10*max_lambda_0_11) - (CF_11 + CS_11*max_lambda_0_11) +
      (rc13)*(CF_12 + CS_12*max_lambda_0_11), 2);

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

    Recon_1 = Recon_1 + (rc17)*delta_0*inv_omega_sum*(-rc11*(CF_11 + CS_11*max_lambda_0_11) + (rc20)*(CF_12 +
      CS_12*max_lambda_0_11) + (rc21)*(CF_13 + CS_13*max_lambda_0_11)) + (rc18)*delta_1*inv_omega_sum*((rc21)*(CF_12 +
      CS_12*max_lambda_0_11) + (rc20)*(CF_13 + CS_13*max_lambda_0_11) - rc11*(CF_14 + CS_14*max_lambda_0_11)) +
      (rc19)*delta_2*inv_omega_sum*((rc21)*(CF_10 + CS_10*max_lambda_0_11) - rc22*(CF_11 + CS_11*max_lambda_0_11) +
      (rc23)*(CF_12 + CS_12*max_lambda_0_11));

    beta_0 = (rc8)*pow((rc13)*(CF_12 - CS_12*max_lambda_0_11) - rc13*(CF_14 - CS_14*max_lambda_0_11), 2) +
      (rc15)*pow((rc13)*(CF_12 - CS_12*max_lambda_0_11) - (CF_13 - CS_13*max_lambda_0_11) + (rc13)*(CF_14 -
      CS_14*max_lambda_0_11), 2);

    beta_1 = (rc8)*pow((rc13)*(CF_11 - CS_11*max_lambda_0_11) - 2*(CF_12 - CS_12*max_lambda_0_11) + (rc16)*(CF_13 -
      CS_13*max_lambda_0_11), 2) + (rc15)*pow((rc13)*(CF_11 - CS_11*max_lambda_0_11) - (CF_12 - CS_12*max_lambda_0_11) +
      (rc13)*(CF_13 - CS_13*max_lambda_0_11), 2);

    beta_2 = (rc15)*pow((rc13)*(CF_13 - CS_13*max_lambda_0_11) - (CF_14 - CS_14*max_lambda_0_11) + (rc13)*(CF_15 -
      CS_15*max_lambda_0_11), 2) + (rc8)*pow((rc16)*(CF_13 - CS_13*max_lambda_0_11) - 2*(CF_14 - CS_14*max_lambda_0_11)
      + (rc13)*(CF_15 - CS_15*max_lambda_0_11), 2);

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

    Recon_1 = Recon_1 + (rc17)*delta_0*inv_omega_sum*((rc21)*(CF_12 - CS_12*max_lambda_0_11) + (rc20)*(CF_13 -
      CS_13*max_lambda_0_11) - rc11*(CF_14 - CS_14*max_lambda_0_11)) + (rc18)*delta_1*inv_omega_sum*(-rc11*(CF_11 -
      CS_11*max_lambda_0_11) + (rc20)*(CF_12 - CS_12*max_lambda_0_11) + (rc21)*(CF_13 - CS_13*max_lambda_0_11)) +
      (rc19)*delta_2*inv_omega_sum*((rc23)*(CF_13 - CS_13*max_lambda_0_11) - rc22*(CF_14 - CS_14*max_lambda_0_11) +
      (rc21)*(CF_15 - CS_15*max_lambda_0_11));

    beta_0 = (rc8)*pow((rc13)*(CF_21 + CS_21*max_lambda_0_22) - rc13*(CF_23 + CS_23*max_lambda_0_22), 2) +
      (rc15)*pow((rc13)*(CF_21 + CS_21*max_lambda_0_22) - (CF_22 + CS_22*max_lambda_0_22) + (rc13)*(CF_23 +
      CS_23*max_lambda_0_22), 2);

    beta_1 = (rc15)*pow((rc13)*(CF_22 + CS_22*max_lambda_0_22) - (CF_23 + CS_23*max_lambda_0_22) + (rc13)*(CF_24 +
      CS_24*max_lambda_0_22), 2) + (rc8)*pow((rc16)*(CF_22 + CS_22*max_lambda_0_22) - 2*(CF_23 + CS_23*max_lambda_0_22)
      + (rc13)*(CF_24 + CS_24*max_lambda_0_22), 2);

    beta_2 = (rc8)*pow((rc13)*(CF_20 + CS_20*max_lambda_0_22) - 2*(CF_21 + CS_21*max_lambda_0_22) + (rc16)*(CF_22 +
      CS_22*max_lambda_0_22), 2) + (rc15)*pow((rc13)*(CF_20 + CS_20*max_lambda_0_22) - (CF_21 + CS_21*max_lambda_0_22) +
      (rc13)*(CF_22 + CS_22*max_lambda_0_22), 2);

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

    Recon_2 = Recon_2 + (rc17)*delta_0*inv_omega_sum*(-rc11*(CF_21 + CS_21*max_lambda_0_22) + (rc20)*(CF_22 +
      CS_22*max_lambda_0_22) + (rc21)*(CF_23 + CS_23*max_lambda_0_22)) + (rc18)*delta_1*inv_omega_sum*((rc21)*(CF_22 +
      CS_22*max_lambda_0_22) + (rc20)*(CF_23 + CS_23*max_lambda_0_22) - rc11*(CF_24 + CS_24*max_lambda_0_22)) +
      (rc19)*delta_2*inv_omega_sum*((rc21)*(CF_20 + CS_20*max_lambda_0_22) - rc22*(CF_21 + CS_21*max_lambda_0_22) +
      (rc23)*(CF_22 + CS_22*max_lambda_0_22));

    beta_0 = (rc8)*pow((rc13)*(CF_22 - CS_22*max_lambda_0_22) - rc13*(CF_24 - CS_24*max_lambda_0_22), 2) +
      (rc15)*pow((rc13)*(CF_22 - CS_22*max_lambda_0_22) - (CF_23 - CS_23*max_lambda_0_22) + (rc13)*(CF_24 -
      CS_24*max_lambda_0_22), 2);

    beta_1 = (rc8)*pow((rc13)*(CF_21 - CS_21*max_lambda_0_22) - 2*(CF_22 - CS_22*max_lambda_0_22) + (rc16)*(CF_23 -
      CS_23*max_lambda_0_22), 2) + (rc15)*pow((rc13)*(CF_21 - CS_21*max_lambda_0_22) - (CF_22 - CS_22*max_lambda_0_22) +
      (rc13)*(CF_23 - CS_23*max_lambda_0_22), 2);

    beta_2 = (rc15)*pow((rc13)*(CF_23 - CS_23*max_lambda_0_22) - (CF_24 - CS_24*max_lambda_0_22) + (rc13)*(CF_25 -
      CS_25*max_lambda_0_22), 2) + (rc8)*pow((rc16)*(CF_23 - CS_23*max_lambda_0_22) - 2*(CF_24 - CS_24*max_lambda_0_22)
      + (rc13)*(CF_25 - CS_25*max_lambda_0_22), 2);

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

    Recon_2 = Recon_2 + (rc17)*delta_0*inv_omega_sum*((rc21)*(CF_22 - CS_22*max_lambda_0_22) + (rc20)*(CF_23 -
      CS_23*max_lambda_0_22) - rc11*(CF_24 - CS_24*max_lambda_0_22)) + (rc18)*delta_1*inv_omega_sum*(-rc11*(CF_21 -
      CS_21*max_lambda_0_22) + (rc20)*(CF_22 - CS_22*max_lambda_0_22) + (rc21)*(CF_23 - CS_23*max_lambda_0_22)) +
      (rc19)*delta_2*inv_omega_sum*((rc23)*(CF_23 - CS_23*max_lambda_0_22) - rc22*(CF_24 - CS_24*max_lambda_0_22) +
      (rc21)*(CF_25 - CS_25*max_lambda_0_22));

    beta_0 = (rc8)*pow((rc13)*(CF_31 + CS_31*max_lambda_0_33) - rc13*(CF_33 + CS_33*max_lambda_0_33), 2) +
      (rc15)*pow((rc13)*(CF_31 + CS_31*max_lambda_0_33) - (CF_32 + CS_32*max_lambda_0_33) + (rc13)*(CF_33 +
      CS_33*max_lambda_0_33), 2);

    beta_1 = (rc15)*pow((rc13)*(CF_32 + CS_32*max_lambda_0_33) - (CF_33 + CS_33*max_lambda_0_33) + (rc13)*(CF_34 +
      CS_34*max_lambda_0_33), 2) + (rc8)*pow((rc16)*(CF_32 + CS_32*max_lambda_0_33) - 2*(CF_33 + CS_33*max_lambda_0_33)
      + (rc13)*(CF_34 + CS_34*max_lambda_0_33), 2);

    beta_2 = (rc8)*pow((rc13)*(CF_30 + CS_30*max_lambda_0_33) - 2*(CF_31 + CS_31*max_lambda_0_33) + (rc16)*(CF_32 +
      CS_32*max_lambda_0_33), 2) + (rc15)*pow((rc13)*(CF_30 + CS_30*max_lambda_0_33) - (CF_31 + CS_31*max_lambda_0_33) +
      (rc13)*(CF_32 + CS_32*max_lambda_0_33), 2);

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

    Recon_3 = Recon_3 + (rc17)*delta_0*inv_omega_sum*(-rc11*(CF_31 + CS_31*max_lambda_0_33) + (rc20)*(CF_32 +
      CS_32*max_lambda_0_33) + (rc21)*(CF_33 + CS_33*max_lambda_0_33)) + (rc18)*delta_1*inv_omega_sum*((rc21)*(CF_32 +
      CS_32*max_lambda_0_33) + (rc20)*(CF_33 + CS_33*max_lambda_0_33) - rc11*(CF_34 + CS_34*max_lambda_0_33)) +
      (rc19)*delta_2*inv_omega_sum*((rc21)*(CF_30 + CS_30*max_lambda_0_33) - rc22*(CF_31 + CS_31*max_lambda_0_33) +
      (rc23)*(CF_32 + CS_32*max_lambda_0_33));

    beta_0 = (rc8)*pow((rc13)*(CF_32 - CS_32*max_lambda_0_33) - rc13*(CF_34 - CS_34*max_lambda_0_33), 2) +
      (rc15)*pow((rc13)*(CF_32 - CS_32*max_lambda_0_33) - (CF_33 - CS_33*max_lambda_0_33) + (rc13)*(CF_34 -
      CS_34*max_lambda_0_33), 2);

    beta_1 = (rc8)*pow((rc13)*(CF_31 - CS_31*max_lambda_0_33) - 2*(CF_32 - CS_32*max_lambda_0_33) + (rc16)*(CF_33 -
      CS_33*max_lambda_0_33), 2) + (rc15)*pow((rc13)*(CF_31 - CS_31*max_lambda_0_33) - (CF_32 - CS_32*max_lambda_0_33) +
      (rc13)*(CF_33 - CS_33*max_lambda_0_33), 2);

    beta_2 = (rc15)*pow((rc13)*(CF_33 - CS_33*max_lambda_0_33) - (CF_34 - CS_34*max_lambda_0_33) + (rc13)*(CF_35 -
      CS_35*max_lambda_0_33), 2) + (rc8)*pow((rc16)*(CF_33 - CS_33*max_lambda_0_33) - 2*(CF_34 - CS_34*max_lambda_0_33)
      + (rc13)*(CF_35 - CS_35*max_lambda_0_33), 2);

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

    Recon_3 = Recon_3 + (rc17)*delta_0*inv_omega_sum*((rc21)*(CF_32 - CS_32*max_lambda_0_33) + (rc20)*(CF_33 -
      CS_33*max_lambda_0_33) - rc11*(CF_34 - CS_34*max_lambda_0_33)) + (rc18)*delta_1*inv_omega_sum*(-rc11*(CF_31 -
      CS_31*max_lambda_0_33) + (rc20)*(CF_32 - CS_32*max_lambda_0_33) + (rc21)*(CF_33 - CS_33*max_lambda_0_33)) +
      (rc19)*delta_2*inv_omega_sum*((rc23)*(CF_33 - CS_33*max_lambda_0_33) - rc22*(CF_34 - CS_34*max_lambda_0_33) +
      (rc21)*(CF_35 - CS_35*max_lambda_0_33));

    wk0_B0[OPS_ACC10(0,0)] = 0.707106781186547*AVG_0_rho*Recon_2*inv_AVG_a +
      0.707106781186547*AVG_0_rho*Recon_3*inv_AVG_a + Recon_0;

    wk1_B0[OPS_ACC11(0,0)] = 0.707106781186547*AVG_0_rho*Recon_2*inv_AVG_a*(AVG_0_a + AVG_0_u0) +
      0.707106781186547*AVG_0_rho*Recon_3*inv_AVG_a*(-AVG_0_a + AVG_0_u0) + AVG_0_u0*Recon_0;

    wk2_B0[OPS_ACC13(0,0)] = 0.707106781186547*AVG_0_rho*AVG_0_u1*Recon_2*inv_AVG_a +
      0.707106781186547*AVG_0_rho*AVG_0_u1*Recon_3*inv_AVG_a - AVG_0_rho*Recon_1 + AVG_0_u1*Recon_0;

    wk3_B0[OPS_ACC9(0,0)] = -AVG_0_rho*AVG_0_u1*Recon_1 +
      0.707106781186547*AVG_0_rho*Recon_2*inv_AVG_a*(rcinv24*((rc13)*gamma_m1*(pow(AVG_0_u0, 2) + pow(AVG_0_u1, 2)) +
      pow(AVG_0_a, 2)) + AVG_0_a*AVG_0_u0) +
      0.707106781186547*AVG_0_rho*Recon_3*inv_AVG_a*(rcinv24*((rc13)*gamma_m1*(pow(AVG_0_u0, 2) + pow(AVG_0_u1, 2)) +
      pow(AVG_0_a, 2)) - AVG_0_a*AVG_0_u0) + Recon_0*((rc13)*pow(AVG_0_u0, 2) + (rc13)*pow(AVG_0_u1, 2));

}

 void opensbliblock00Kernel004(const double *theta_B0, const double *rhoE_B0, const double *rho_B0, const double *p_B0,
const double *rhou1_B0, const double *a_B0, const double *rhou0_B0, const double *u0_B0, const double *u1_B0, double
*wk6_B0, double *wk7_B0, double *wk4_B0, double *wk5_B0)
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
   AVG_1_rho = sqrt(rho_B0[OPS_ACC2(0,0)]*rho_B0[OPS_ACC2(0,1)]);

   AVG_1_inv_rho = 1.0/(sqrt(rho_B0[OPS_ACC2(0,1)]) + sqrt(rho_B0[OPS_ACC2(0,0)]));

    AVG_1_u0 = AVG_1_inv_rho*(sqrt(rho_B0[OPS_ACC2(0,1)])*u0_B0[OPS_ACC7(0,1)] +
      sqrt(rho_B0[OPS_ACC2(0,0)])*u0_B0[OPS_ACC7(0,0)]);

    AVG_1_u1 = AVG_1_inv_rho*(sqrt(rho_B0[OPS_ACC2(0,1)])*u1_B0[OPS_ACC8(0,1)] +
      sqrt(rho_B0[OPS_ACC2(0,0)])*u1_B0[OPS_ACC8(0,0)]);

    AVG_1_a = sqrt(gamma_m1*(AVG_1_inv_rho*((p_B0[OPS_ACC3(0,1)] + rhoE_B0[OPS_ACC1(0,1)])/sqrt(rho_B0[OPS_ACC2(0,1)]) +
      (p_B0[OPS_ACC3(0,0)] + rhoE_B0[OPS_ACC1(0,0)])/sqrt(rho_B0[OPS_ACC2(0,0)])) - rc13*(pow(AVG_1_u0, 2) +
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

    CF_00 = AVG_1_1_LEV_00*rhou1_B0[OPS_ACC4(0,-2)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC6(0,-2)]*u1_B0[OPS_ACC8(0,-2)] +
      AVG_1_1_LEV_02*p_B0[OPS_ACC3(0,-2)] + AVG_1_1_LEV_02*rhou1_B0[OPS_ACC4(0,-2)]*u1_B0[OPS_ACC8(0,-2)] +
      AVG_1_1_LEV_03*p_B0[OPS_ACC3(0,-2)]*u1_B0[OPS_ACC8(0,-2)] +
      AVG_1_1_LEV_03*rhoE_B0[OPS_ACC1(0,-2)]*u1_B0[OPS_ACC8(0,-2)];

   CF_10 = AVG_1_1_LEV_10*rhou1_B0[OPS_ACC4(0,-2)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC6(0,-2)]*u1_B0[OPS_ACC8(0,-2)];

    CF_20 = AVG_1_1_LEV_20*rhou1_B0[OPS_ACC4(0,-2)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC6(0,-2)]*u1_B0[OPS_ACC8(0,-2)] +
      AVG_1_1_LEV_22*p_B0[OPS_ACC3(0,-2)] + AVG_1_1_LEV_22*rhou1_B0[OPS_ACC4(0,-2)]*u1_B0[OPS_ACC8(0,-2)] +
      AVG_1_1_LEV_23*p_B0[OPS_ACC3(0,-2)]*u1_B0[OPS_ACC8(0,-2)] +
      AVG_1_1_LEV_23*rhoE_B0[OPS_ACC1(0,-2)]*u1_B0[OPS_ACC8(0,-2)];

    CF_30 = AVG_1_1_LEV_30*rhou1_B0[OPS_ACC4(0,-2)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC6(0,-2)]*u1_B0[OPS_ACC8(0,-2)] +
      AVG_1_1_LEV_32*p_B0[OPS_ACC3(0,-2)] + AVG_1_1_LEV_32*rhou1_B0[OPS_ACC4(0,-2)]*u1_B0[OPS_ACC8(0,-2)] +
      AVG_1_1_LEV_33*p_B0[OPS_ACC3(0,-2)]*u1_B0[OPS_ACC8(0,-2)] +
      AVG_1_1_LEV_33*rhoE_B0[OPS_ACC1(0,-2)]*u1_B0[OPS_ACC8(0,-2)];

    CF_01 = AVG_1_1_LEV_00*rhou1_B0[OPS_ACC4(0,-1)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC6(0,-1)]*u1_B0[OPS_ACC8(0,-1)] +
      AVG_1_1_LEV_02*p_B0[OPS_ACC3(0,-1)] + AVG_1_1_LEV_02*rhou1_B0[OPS_ACC4(0,-1)]*u1_B0[OPS_ACC8(0,-1)] +
      AVG_1_1_LEV_03*p_B0[OPS_ACC3(0,-1)]*u1_B0[OPS_ACC8(0,-1)] +
      AVG_1_1_LEV_03*rhoE_B0[OPS_ACC1(0,-1)]*u1_B0[OPS_ACC8(0,-1)];

   CF_11 = AVG_1_1_LEV_10*rhou1_B0[OPS_ACC4(0,-1)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC6(0,-1)]*u1_B0[OPS_ACC8(0,-1)];

    CF_21 = AVG_1_1_LEV_20*rhou1_B0[OPS_ACC4(0,-1)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC6(0,-1)]*u1_B0[OPS_ACC8(0,-1)] +
      AVG_1_1_LEV_22*p_B0[OPS_ACC3(0,-1)] + AVG_1_1_LEV_22*rhou1_B0[OPS_ACC4(0,-1)]*u1_B0[OPS_ACC8(0,-1)] +
      AVG_1_1_LEV_23*p_B0[OPS_ACC3(0,-1)]*u1_B0[OPS_ACC8(0,-1)] +
      AVG_1_1_LEV_23*rhoE_B0[OPS_ACC1(0,-1)]*u1_B0[OPS_ACC8(0,-1)];

    CF_31 = AVG_1_1_LEV_30*rhou1_B0[OPS_ACC4(0,-1)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC6(0,-1)]*u1_B0[OPS_ACC8(0,-1)] +
      AVG_1_1_LEV_32*p_B0[OPS_ACC3(0,-1)] + AVG_1_1_LEV_32*rhou1_B0[OPS_ACC4(0,-1)]*u1_B0[OPS_ACC8(0,-1)] +
      AVG_1_1_LEV_33*p_B0[OPS_ACC3(0,-1)]*u1_B0[OPS_ACC8(0,-1)] +
      AVG_1_1_LEV_33*rhoE_B0[OPS_ACC1(0,-1)]*u1_B0[OPS_ACC8(0,-1)];

    CF_02 = AVG_1_1_LEV_00*rhou1_B0[OPS_ACC4(0,0)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC6(0,0)]*u1_B0[OPS_ACC8(0,0)] +
      AVG_1_1_LEV_02*p_B0[OPS_ACC3(0,0)] + AVG_1_1_LEV_02*rhou1_B0[OPS_ACC4(0,0)]*u1_B0[OPS_ACC8(0,0)] +
      AVG_1_1_LEV_03*p_B0[OPS_ACC3(0,0)]*u1_B0[OPS_ACC8(0,0)] +
      AVG_1_1_LEV_03*rhoE_B0[OPS_ACC1(0,0)]*u1_B0[OPS_ACC8(0,0)];

   CF_12 = AVG_1_1_LEV_10*rhou1_B0[OPS_ACC4(0,0)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC6(0,0)]*u1_B0[OPS_ACC8(0,0)];

    CF_22 = AVG_1_1_LEV_20*rhou1_B0[OPS_ACC4(0,0)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC6(0,0)]*u1_B0[OPS_ACC8(0,0)] +
      AVG_1_1_LEV_22*p_B0[OPS_ACC3(0,0)] + AVG_1_1_LEV_22*rhou1_B0[OPS_ACC4(0,0)]*u1_B0[OPS_ACC8(0,0)] +
      AVG_1_1_LEV_23*p_B0[OPS_ACC3(0,0)]*u1_B0[OPS_ACC8(0,0)] +
      AVG_1_1_LEV_23*rhoE_B0[OPS_ACC1(0,0)]*u1_B0[OPS_ACC8(0,0)];

    CF_32 = AVG_1_1_LEV_30*rhou1_B0[OPS_ACC4(0,0)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC6(0,0)]*u1_B0[OPS_ACC8(0,0)] +
      AVG_1_1_LEV_32*p_B0[OPS_ACC3(0,0)] + AVG_1_1_LEV_32*rhou1_B0[OPS_ACC4(0,0)]*u1_B0[OPS_ACC8(0,0)] +
      AVG_1_1_LEV_33*p_B0[OPS_ACC3(0,0)]*u1_B0[OPS_ACC8(0,0)] +
      AVG_1_1_LEV_33*rhoE_B0[OPS_ACC1(0,0)]*u1_B0[OPS_ACC8(0,0)];

    CF_03 = AVG_1_1_LEV_00*rhou1_B0[OPS_ACC4(0,1)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC6(0,1)]*u1_B0[OPS_ACC8(0,1)] +
      AVG_1_1_LEV_02*p_B0[OPS_ACC3(0,1)] + AVG_1_1_LEV_02*rhou1_B0[OPS_ACC4(0,1)]*u1_B0[OPS_ACC8(0,1)] +
      AVG_1_1_LEV_03*p_B0[OPS_ACC3(0,1)]*u1_B0[OPS_ACC8(0,1)] +
      AVG_1_1_LEV_03*rhoE_B0[OPS_ACC1(0,1)]*u1_B0[OPS_ACC8(0,1)];

   CF_13 = AVG_1_1_LEV_10*rhou1_B0[OPS_ACC4(0,1)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC6(0,1)]*u1_B0[OPS_ACC8(0,1)];

    CF_23 = AVG_1_1_LEV_20*rhou1_B0[OPS_ACC4(0,1)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC6(0,1)]*u1_B0[OPS_ACC8(0,1)] +
      AVG_1_1_LEV_22*p_B0[OPS_ACC3(0,1)] + AVG_1_1_LEV_22*rhou1_B0[OPS_ACC4(0,1)]*u1_B0[OPS_ACC8(0,1)] +
      AVG_1_1_LEV_23*p_B0[OPS_ACC3(0,1)]*u1_B0[OPS_ACC8(0,1)] +
      AVG_1_1_LEV_23*rhoE_B0[OPS_ACC1(0,1)]*u1_B0[OPS_ACC8(0,1)];

    CF_33 = AVG_1_1_LEV_30*rhou1_B0[OPS_ACC4(0,1)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC6(0,1)]*u1_B0[OPS_ACC8(0,1)] +
      AVG_1_1_LEV_32*p_B0[OPS_ACC3(0,1)] + AVG_1_1_LEV_32*rhou1_B0[OPS_ACC4(0,1)]*u1_B0[OPS_ACC8(0,1)] +
      AVG_1_1_LEV_33*p_B0[OPS_ACC3(0,1)]*u1_B0[OPS_ACC8(0,1)] +
      AVG_1_1_LEV_33*rhoE_B0[OPS_ACC1(0,1)]*u1_B0[OPS_ACC8(0,1)];

    CF_04 = AVG_1_1_LEV_00*rhou1_B0[OPS_ACC4(0,2)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC6(0,2)]*u1_B0[OPS_ACC8(0,2)] +
      AVG_1_1_LEV_02*p_B0[OPS_ACC3(0,2)] + AVG_1_1_LEV_02*rhou1_B0[OPS_ACC4(0,2)]*u1_B0[OPS_ACC8(0,2)] +
      AVG_1_1_LEV_03*p_B0[OPS_ACC3(0,2)]*u1_B0[OPS_ACC8(0,2)] +
      AVG_1_1_LEV_03*rhoE_B0[OPS_ACC1(0,2)]*u1_B0[OPS_ACC8(0,2)];

   CF_14 = AVG_1_1_LEV_10*rhou1_B0[OPS_ACC4(0,2)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC6(0,2)]*u1_B0[OPS_ACC8(0,2)];

    CF_24 = AVG_1_1_LEV_20*rhou1_B0[OPS_ACC4(0,2)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC6(0,2)]*u1_B0[OPS_ACC8(0,2)] +
      AVG_1_1_LEV_22*p_B0[OPS_ACC3(0,2)] + AVG_1_1_LEV_22*rhou1_B0[OPS_ACC4(0,2)]*u1_B0[OPS_ACC8(0,2)] +
      AVG_1_1_LEV_23*p_B0[OPS_ACC3(0,2)]*u1_B0[OPS_ACC8(0,2)] +
      AVG_1_1_LEV_23*rhoE_B0[OPS_ACC1(0,2)]*u1_B0[OPS_ACC8(0,2)];

    CF_34 = AVG_1_1_LEV_30*rhou1_B0[OPS_ACC4(0,2)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC6(0,2)]*u1_B0[OPS_ACC8(0,2)] +
      AVG_1_1_LEV_32*p_B0[OPS_ACC3(0,2)] + AVG_1_1_LEV_32*rhou1_B0[OPS_ACC4(0,2)]*u1_B0[OPS_ACC8(0,2)] +
      AVG_1_1_LEV_33*p_B0[OPS_ACC3(0,2)]*u1_B0[OPS_ACC8(0,2)] +
      AVG_1_1_LEV_33*rhoE_B0[OPS_ACC1(0,2)]*u1_B0[OPS_ACC8(0,2)];

    CF_05 = AVG_1_1_LEV_00*rhou1_B0[OPS_ACC4(0,3)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC6(0,3)]*u1_B0[OPS_ACC8(0,3)] +
      AVG_1_1_LEV_02*p_B0[OPS_ACC3(0,3)] + AVG_1_1_LEV_02*rhou1_B0[OPS_ACC4(0,3)]*u1_B0[OPS_ACC8(0,3)] +
      AVG_1_1_LEV_03*p_B0[OPS_ACC3(0,3)]*u1_B0[OPS_ACC8(0,3)] +
      AVG_1_1_LEV_03*rhoE_B0[OPS_ACC1(0,3)]*u1_B0[OPS_ACC8(0,3)];

   CF_15 = AVG_1_1_LEV_10*rhou1_B0[OPS_ACC4(0,3)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC6(0,3)]*u1_B0[OPS_ACC8(0,3)];

    CF_25 = AVG_1_1_LEV_20*rhou1_B0[OPS_ACC4(0,3)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC6(0,3)]*u1_B0[OPS_ACC8(0,3)] +
      AVG_1_1_LEV_22*p_B0[OPS_ACC3(0,3)] + AVG_1_1_LEV_22*rhou1_B0[OPS_ACC4(0,3)]*u1_B0[OPS_ACC8(0,3)] +
      AVG_1_1_LEV_23*p_B0[OPS_ACC3(0,3)]*u1_B0[OPS_ACC8(0,3)] +
      AVG_1_1_LEV_23*rhoE_B0[OPS_ACC1(0,3)]*u1_B0[OPS_ACC8(0,3)];

    CF_35 = AVG_1_1_LEV_30*rhou1_B0[OPS_ACC4(0,3)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC6(0,3)]*u1_B0[OPS_ACC8(0,3)] +
      AVG_1_1_LEV_32*p_B0[OPS_ACC3(0,3)] + AVG_1_1_LEV_32*rhou1_B0[OPS_ACC4(0,3)]*u1_B0[OPS_ACC8(0,3)] +
      AVG_1_1_LEV_33*p_B0[OPS_ACC3(0,3)]*u1_B0[OPS_ACC8(0,3)] +
      AVG_1_1_LEV_33*rhoE_B0[OPS_ACC1(0,3)]*u1_B0[OPS_ACC8(0,3)];

    CS_00 = AVG_1_1_LEV_00*rho_B0[OPS_ACC2(0,-2)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC6(0,-2)] +
      AVG_1_1_LEV_02*rhou1_B0[OPS_ACC4(0,-2)] + AVG_1_1_LEV_03*rhoE_B0[OPS_ACC1(0,-2)];

    CS_01 = AVG_1_1_LEV_00*rho_B0[OPS_ACC2(0,-1)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC6(0,-1)] +
      AVG_1_1_LEV_02*rhou1_B0[OPS_ACC4(0,-1)] + AVG_1_1_LEV_03*rhoE_B0[OPS_ACC1(0,-1)];

    CS_02 = AVG_1_1_LEV_00*rho_B0[OPS_ACC2(0,0)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC6(0,0)] +
      AVG_1_1_LEV_02*rhou1_B0[OPS_ACC4(0,0)] + AVG_1_1_LEV_03*rhoE_B0[OPS_ACC1(0,0)];

    CS_03 = AVG_1_1_LEV_00*rho_B0[OPS_ACC2(0,1)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC6(0,1)] +
      AVG_1_1_LEV_02*rhou1_B0[OPS_ACC4(0,1)] + AVG_1_1_LEV_03*rhoE_B0[OPS_ACC1(0,1)];

    CS_04 = AVG_1_1_LEV_00*rho_B0[OPS_ACC2(0,2)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC6(0,2)] +
      AVG_1_1_LEV_02*rhou1_B0[OPS_ACC4(0,2)] + AVG_1_1_LEV_03*rhoE_B0[OPS_ACC1(0,2)];

    CS_05 = AVG_1_1_LEV_00*rho_B0[OPS_ACC2(0,3)] + AVG_1_1_LEV_01*rhou0_B0[OPS_ACC6(0,3)] +
      AVG_1_1_LEV_02*rhou1_B0[OPS_ACC4(0,3)] + AVG_1_1_LEV_03*rhoE_B0[OPS_ACC1(0,3)];

   CS_10 = AVG_1_1_LEV_10*rho_B0[OPS_ACC2(0,-2)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC6(0,-2)];

   CS_11 = AVG_1_1_LEV_10*rho_B0[OPS_ACC2(0,-1)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC6(0,-1)];

   CS_12 = AVG_1_1_LEV_10*rho_B0[OPS_ACC2(0,0)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC6(0,0)];

   CS_13 = AVG_1_1_LEV_10*rho_B0[OPS_ACC2(0,1)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC6(0,1)];

   CS_14 = AVG_1_1_LEV_10*rho_B0[OPS_ACC2(0,2)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC6(0,2)];

   CS_15 = AVG_1_1_LEV_10*rho_B0[OPS_ACC2(0,3)] + AVG_1_1_LEV_11*rhou0_B0[OPS_ACC6(0,3)];

    CS_20 = AVG_1_1_LEV_20*rho_B0[OPS_ACC2(0,-2)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC6(0,-2)] +
      AVG_1_1_LEV_22*rhou1_B0[OPS_ACC4(0,-2)] + AVG_1_1_LEV_23*rhoE_B0[OPS_ACC1(0,-2)];

    CS_21 = AVG_1_1_LEV_20*rho_B0[OPS_ACC2(0,-1)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC6(0,-1)] +
      AVG_1_1_LEV_22*rhou1_B0[OPS_ACC4(0,-1)] + AVG_1_1_LEV_23*rhoE_B0[OPS_ACC1(0,-1)];

    CS_22 = AVG_1_1_LEV_20*rho_B0[OPS_ACC2(0,0)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC6(0,0)] +
      AVG_1_1_LEV_22*rhou1_B0[OPS_ACC4(0,0)] + AVG_1_1_LEV_23*rhoE_B0[OPS_ACC1(0,0)];

    CS_23 = AVG_1_1_LEV_20*rho_B0[OPS_ACC2(0,1)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC6(0,1)] +
      AVG_1_1_LEV_22*rhou1_B0[OPS_ACC4(0,1)] + AVG_1_1_LEV_23*rhoE_B0[OPS_ACC1(0,1)];

    CS_24 = AVG_1_1_LEV_20*rho_B0[OPS_ACC2(0,2)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC6(0,2)] +
      AVG_1_1_LEV_22*rhou1_B0[OPS_ACC4(0,2)] + AVG_1_1_LEV_23*rhoE_B0[OPS_ACC1(0,2)];

    CS_25 = AVG_1_1_LEV_20*rho_B0[OPS_ACC2(0,3)] + AVG_1_1_LEV_21*rhou0_B0[OPS_ACC6(0,3)] +
      AVG_1_1_LEV_22*rhou1_B0[OPS_ACC4(0,3)] + AVG_1_1_LEV_23*rhoE_B0[OPS_ACC1(0,3)];

    CS_30 = AVG_1_1_LEV_30*rho_B0[OPS_ACC2(0,-2)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC6(0,-2)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC4(0,-2)] + AVG_1_1_LEV_33*rhoE_B0[OPS_ACC1(0,-2)];

    CS_31 = AVG_1_1_LEV_30*rho_B0[OPS_ACC2(0,-1)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC6(0,-1)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC4(0,-1)] + AVG_1_1_LEV_33*rhoE_B0[OPS_ACC1(0,-1)];

    CS_32 = AVG_1_1_LEV_30*rho_B0[OPS_ACC2(0,0)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC6(0,0)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC4(0,0)] + AVG_1_1_LEV_33*rhoE_B0[OPS_ACC1(0,0)];

    CS_33 = AVG_1_1_LEV_30*rho_B0[OPS_ACC2(0,1)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC6(0,1)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC4(0,1)] + AVG_1_1_LEV_33*rhoE_B0[OPS_ACC1(0,1)];

    CS_34 = AVG_1_1_LEV_30*rho_B0[OPS_ACC2(0,2)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC6(0,2)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC4(0,2)] + AVG_1_1_LEV_33*rhoE_B0[OPS_ACC1(0,2)];

    CS_35 = AVG_1_1_LEV_30*rho_B0[OPS_ACC2(0,3)] + AVG_1_1_LEV_31*rhou0_B0[OPS_ACC6(0,3)] +
      AVG_1_1_LEV_32*rhou1_B0[OPS_ACC4(0,3)] + AVG_1_1_LEV_33*rhoE_B0[OPS_ACC1(0,3)];

    max_lambda_1_00 = fmax(fabs(u1_B0[OPS_ACC8(0,3)]), fmax(fabs(u1_B0[OPS_ACC8(0,-2)]),
      fmax(fabs(u1_B0[OPS_ACC8(0,2)]), fmax(fabs(u1_B0[OPS_ACC8(0,1)]), fmax(fabs(u1_B0[OPS_ACC8(0,0)]),
      fabs(u1_B0[OPS_ACC8(0,-1)]))))));

   max_lambda_1_11 = max_lambda_1_00;

    max_lambda_1_22 = fmax(fabs(a_B0[OPS_ACC5(0,1)] + u1_B0[OPS_ACC8(0,1)]), fmax(fabs(a_B0[OPS_ACC5(0,0)] +
      u1_B0[OPS_ACC8(0,0)]), fmax(fabs(a_B0[OPS_ACC5(0,3)] + u1_B0[OPS_ACC8(0,3)]), fmax(fabs(a_B0[OPS_ACC5(0,2)] +
      u1_B0[OPS_ACC8(0,2)]), fmax(fabs(a_B0[OPS_ACC5(0,-1)] + u1_B0[OPS_ACC8(0,-1)]), fabs(a_B0[OPS_ACC5(0,-2)] +
      u1_B0[OPS_ACC8(0,-2)]))))));

    max_lambda_1_33 = fmax(fabs(a_B0[OPS_ACC5(0,2)] - u1_B0[OPS_ACC8(0,2)]), fmax(fabs(a_B0[OPS_ACC5(0,0)] -
      u1_B0[OPS_ACC8(0,0)]), fmax(fabs(a_B0[OPS_ACC5(0,3)] - u1_B0[OPS_ACC8(0,3)]), fmax(fabs(a_B0[OPS_ACC5(0,-2)] -
      u1_B0[OPS_ACC8(0,-2)]), fmax(fabs(a_B0[OPS_ACC5(0,1)] - u1_B0[OPS_ACC8(0,1)]), fabs(a_B0[OPS_ACC5(0,-1)] -
      u1_B0[OPS_ACC8(0,-1)]))))));

    TENO_CT = pow(10.0, -floor(teno_a1 - teno_a2*(-pow(-theta_B0[OPS_ACC0(0,0)] + 1, 4)*(4*theta_B0[OPS_ACC0(0,0)] + 1)
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

    wk4_B0[OPS_ACC11(0,0)] = 0.707106781186547*AVG_1_rho*Recon_2*inv_AVG_a +
      0.707106781186547*AVG_1_rho*Recon_3*inv_AVG_a + Recon_0;

    wk5_B0[OPS_ACC12(0,0)] = 0.707106781186547*AVG_1_rho*AVG_1_u0*Recon_2*inv_AVG_a +
      0.707106781186547*AVG_1_rho*AVG_1_u0*Recon_3*inv_AVG_a + AVG_1_rho*Recon_1 + AVG_1_u0*Recon_0;

    wk6_B0[OPS_ACC9(0,0)] = 0.707106781186547*AVG_1_rho*Recon_2*inv_AVG_a*(AVG_1_a + AVG_1_u1) +
      0.707106781186547*AVG_1_rho*Recon_3*inv_AVG_a*(-AVG_1_a + AVG_1_u1) + AVG_1_u1*Recon_0;

    wk7_B0[OPS_ACC10(0,0)] = AVG_1_rho*AVG_1_u0*Recon_1 +
      0.707106781186547*AVG_1_rho*Recon_2*inv_AVG_a*(rcinv24*((rc13)*gamma_m1*(pow(AVG_1_u0, 2) + pow(AVG_1_u1, 2)) +
      pow(AVG_1_a, 2)) + AVG_1_a*AVG_1_u1) +
      0.707106781186547*AVG_1_rho*Recon_3*inv_AVG_a*(rcinv24*((rc13)*gamma_m1*(pow(AVG_1_u0, 2) + pow(AVG_1_u1, 2)) +
      pow(AVG_1_a, 2)) - AVG_1_a*AVG_1_u1) + Recon_0*((rc13)*pow(AVG_1_u0, 2) + (rc13)*pow(AVG_1_u1, 2));

}

 void opensbliblock00Kernel014(const double *wk6_B0, const double *wk4_B0, const double *wk5_B0, const double *wk3_B0,
const double *wk0_B0, const double *wk1_B0, const double *D11_B0, const double *wk7_B0, const double *wk2_B0, double
*Residual3_B0, double *Residual0_B0, double *Residual2_B0, double *Residual1_B0)
{
    Residual0_B0[OPS_ACC10(0,0)] = -inv_0*(wk4_B0[OPS_ACC1(0,0)] - wk4_B0[OPS_ACC1(0,-1)])*D11_B0[OPS_ACC6(0,0)] -
      inv_1*(-wk0_B0[OPS_ACC4(-1,0)] + wk0_B0[OPS_ACC4(0,0)]);

    Residual1_B0[OPS_ACC12(0,0)] = -inv_0*(-wk5_B0[OPS_ACC2(0,-1)] + wk5_B0[OPS_ACC2(0,0)])*D11_B0[OPS_ACC6(0,0)] -
      inv_1*(wk1_B0[OPS_ACC5(0,0)] - wk1_B0[OPS_ACC5(-1,0)]);

    Residual2_B0[OPS_ACC11(0,0)] = -inv_0*(-wk6_B0[OPS_ACC0(0,-1)] + wk6_B0[OPS_ACC0(0,0)])*D11_B0[OPS_ACC6(0,0)] -
      inv_1*(wk2_B0[OPS_ACC8(0,0)] - wk2_B0[OPS_ACC8(-1,0)]);

    Residual3_B0[OPS_ACC9(0,0)] = -inv_0*(-wk7_B0[OPS_ACC7(0,-1)] + wk7_B0[OPS_ACC7(0,0)])*D11_B0[OPS_ACC6(0,0)] -
      inv_1*(wk3_B0[OPS_ACC3(0,0)] - wk3_B0[OPS_ACC3(-1,0)]);

}

void opensbliblock00Kernel030(const double *T_B0, double *wk7_B0, const int *idx)
{
    wk7_B0[OPS_ACC1(0,0)] = ((idx[0] == 0) ? (
   inv_1*((rc10)*T_B0[OPS_ACC0(3,0)] + 4*T_B0[OPS_ACC0(1,0)] -
      rc8*T_B0[OPS_ACC0(4,0)] - 3*T_B0[OPS_ACC0(2,0)] - rc9*T_B0[OPS_ACC0(0,0)])
)
: ((idx[0] == 1) ? (
  
      (rc11)*inv_1*(T_B0[OPS_ACC0(3,0)] - 3*T_B0[OPS_ACC0(-1,0)] + 18*T_B0[OPS_ACC0(1,0)] - 6*T_B0[OPS_ACC0(2,0)] -
      10*T_B0[OPS_ACC0(0,0)])
)
: ((idx[0] == block0np0 - 1) ? (
   inv_1*(-4*T_B0[OPS_ACC0(-1,0)] +
      (rc8)*T_B0[OPS_ACC0(-4,0)] + (rc9)*T_B0[OPS_ACC0(0,0)] - rc10*T_B0[OPS_ACC0(-3,0)] + 3*T_B0[OPS_ACC0(-2,0)])
)
:
      ((idx[0] == block0np0 - 2) ? (
   (rc11)*inv_1*(-18*T_B0[OPS_ACC0(-1,0)] + 3*T_B0[OPS_ACC0(1,0)] +
      10*T_B0[OPS_ACC0(0,0)] - T_B0[OPS_ACC0(-3,0)] + 6*T_B0[OPS_ACC0(-2,0)])
)
: (
  
      (rc11)*inv_1*(-8*T_B0[OPS_ACC0(-1,0)] + 8*T_B0[OPS_ACC0(1,0)] - T_B0[OPS_ACC0(2,0)] +
      T_B0[OPS_ACC0(-2,0)])
)))));

}

void opensbliblock00Kernel025(const double *u2_B0, double *wk4_B0, const int *idx)
{
    wk4_B0[OPS_ACC1(0,0)] = ((idx[1] == 0) ? (
   inv_0*(4*u2_B0[OPS_ACC0(0,1)] - rc9*u2_B0[OPS_ACC0(0,0)] +
      (rc10)*u2_B0[OPS_ACC0(0,3)] - 3*u2_B0[OPS_ACC0(0,2)] - rc8*u2_B0[OPS_ACC0(0,4)])
)
: ((idx[1] == 1) ? (
  
      (rc11)*inv_0*(18*u2_B0[OPS_ACC0(0,1)] - 10*u2_B0[OPS_ACC0(0,0)] + u2_B0[OPS_ACC0(0,3)] - 6*u2_B0[OPS_ACC0(0,2)] -
      3*u2_B0[OPS_ACC0(0,-1)])
)
: ((idx[1] == block0np1 - 1) ? (
   inv_0*((rc9)*u2_B0[OPS_ACC0(0,0)] +
      3*u2_B0[OPS_ACC0(0,-2)] - rc10*u2_B0[OPS_ACC0(0,-3)] + (rc8)*u2_B0[OPS_ACC0(0,-4)] - 4*u2_B0[OPS_ACC0(0,-1)])
)
:
      ((idx[1] == block0np1 - 2) ? (
   (rc11)*inv_0*(3*u2_B0[OPS_ACC0(0,1)] + 10*u2_B0[OPS_ACC0(0,0)] +
      6*u2_B0[OPS_ACC0(0,-2)] - u2_B0[OPS_ACC0(0,-3)] - 18*u2_B0[OPS_ACC0(0,-1)])
)
: (
  
      (rc11)*inv_0*(8*u2_B0[OPS_ACC0(0,1)] - u2_B0[OPS_ACC0(0,2)] + u2_B0[OPS_ACC0(0,-2)] -
      8*u2_B0[OPS_ACC0(0,-1)])
)))));

}

void opensbliblock00Kernel024(const double *u1_B0, double *wk3_B0, const int *idx)
{
    wk3_B0[OPS_ACC1(0,0)] = ((idx[0] == 0) ? (
   inv_1*(-rc8*u1_B0[OPS_ACC0(4,0)] + 4*u1_B0[OPS_ACC0(1,0)] +
      (rc10)*u1_B0[OPS_ACC0(3,0)] - rc9*u1_B0[OPS_ACC0(0,0)] - 3*u1_B0[OPS_ACC0(2,0)])
)
: ((idx[0] == 1) ? (
  
      (rc11)*inv_1*(18*u1_B0[OPS_ACC0(1,0)] - 3*u1_B0[OPS_ACC0(-1,0)] + u1_B0[OPS_ACC0(3,0)] - 10*u1_B0[OPS_ACC0(0,0)] -
      6*u1_B0[OPS_ACC0(2,0)])
)
: ((idx[0] == block0np0 - 1) ? (
   inv_1*((rc8)*u1_B0[OPS_ACC0(-4,0)] -
      4*u1_B0[OPS_ACC0(-1,0)] + (rc9)*u1_B0[OPS_ACC0(0,0)] + 3*u1_B0[OPS_ACC0(-2,0)] - rc10*u1_B0[OPS_ACC0(-3,0)])
)
:
      ((idx[0] == block0np0 - 2) ? (
   (rc11)*inv_1*(3*u1_B0[OPS_ACC0(1,0)] - 18*u1_B0[OPS_ACC0(-1,0)] +
      6*u1_B0[OPS_ACC0(-2,0)] - u1_B0[OPS_ACC0(-3,0)] + 10*u1_B0[OPS_ACC0(0,0)])
)
: (
  
      (rc11)*inv_1*(8*u1_B0[OPS_ACC0(1,0)] - 8*u1_B0[OPS_ACC0(-1,0)] + u1_B0[OPS_ACC0(-2,0)] -
      u1_B0[OPS_ACC0(2,0)])
)))));

}

void opensbliblock00Kernel019(const double *u0_B0, double *wk0_B0, const int *idx)
{
    wk0_B0[OPS_ACC1(0,0)] = ((idx[1] == 0) ? (
   inv_0*((rc10)*u0_B0[OPS_ACC0(0,3)] - 3*u0_B0[OPS_ACC0(0,2)] +
      4*u0_B0[OPS_ACC0(0,1)] - rc9*u0_B0[OPS_ACC0(0,0)] - rc8*u0_B0[OPS_ACC0(0,4)])
)
: ((idx[1] == 1) ? (
  
      (rc11)*inv_0*(u0_B0[OPS_ACC0(0,3)] - 6*u0_B0[OPS_ACC0(0,2)] + 18*u0_B0[OPS_ACC0(0,1)] - 10*u0_B0[OPS_ACC0(0,0)] -
      3*u0_B0[OPS_ACC0(0,-1)])
)
: ((idx[1] == block0np1 - 1) ? (
   inv_0*((rc8)*u0_B0[OPS_ACC0(0,-4)] +
      (rc9)*u0_B0[OPS_ACC0(0,0)] - 4*u0_B0[OPS_ACC0(0,-1)] - rc10*u0_B0[OPS_ACC0(0,-3)] + 3*u0_B0[OPS_ACC0(0,-2)])
)
:
      ((idx[1] == block0np1 - 2) ? (
   (rc11)*inv_0*(3*u0_B0[OPS_ACC0(0,1)] + 10*u0_B0[OPS_ACC0(0,0)] -
      18*u0_B0[OPS_ACC0(0,-1)] - u0_B0[OPS_ACC0(0,-3)] + 6*u0_B0[OPS_ACC0(0,-2)])
)
: (
  
      (rc11)*inv_0*(-u0_B0[OPS_ACC0(0,2)] + 8*u0_B0[OPS_ACC0(0,1)] - 8*u0_B0[OPS_ACC0(0,-1)] +
      u0_B0[OPS_ACC0(0,-2)])
)))));

}

void opensbliblock00Kernel027(const double *u2_B0, double *wk5_B0, const int *idx)
{
    wk5_B0[OPS_ACC1(0,0)] = ((idx[0] == 0) ? (
   inv_1*(-rc9*u2_B0[OPS_ACC0(0,0)] - 3*u2_B0[OPS_ACC0(2,0)] +
      4*u2_B0[OPS_ACC0(1,0)] - rc8*u2_B0[OPS_ACC0(4,0)] + (rc10)*u2_B0[OPS_ACC0(3,0)])
)
: ((idx[0] == 1) ? (
  
      (rc11)*inv_1*(-10*u2_B0[OPS_ACC0(0,0)] - 6*u2_B0[OPS_ACC0(2,0)] + 18*u2_B0[OPS_ACC0(1,0)] + u2_B0[OPS_ACC0(3,0)] -
      3*u2_B0[OPS_ACC0(-1,0)])
)
: ((idx[0] == block0np0 - 1) ? (
   inv_1*(-rc10*u2_B0[OPS_ACC0(-3,0)] +
      (rc9)*u2_B0[OPS_ACC0(0,0)] + 3*u2_B0[OPS_ACC0(-2,0)] + (rc8)*u2_B0[OPS_ACC0(-4,0)] - 4*u2_B0[OPS_ACC0(-1,0)])
)
:
      ((idx[0] == block0np0 - 2) ? (
   (rc11)*inv_1*(-u2_B0[OPS_ACC0(-3,0)] + 10*u2_B0[OPS_ACC0(0,0)] +
      6*u2_B0[OPS_ACC0(-2,0)] + 3*u2_B0[OPS_ACC0(1,0)] - 18*u2_B0[OPS_ACC0(-1,0)])
)
: (
  
      (rc11)*inv_1*(u2_B0[OPS_ACC0(-2,0)] - u2_B0[OPS_ACC0(2,0)] + 8*u2_B0[OPS_ACC0(1,0)] -
      8*u2_B0[OPS_ACC0(-1,0)])
)))));

}

void opensbliblock00Kernel028(const double *T_B0, double *wk6_B0, const int *idx)
{
    wk6_B0[OPS_ACC1(0,0)] = ((idx[1] == 0) ? (
   inv_0*(-rc8*T_B0[OPS_ACC0(0,4)] + (rc10)*T_B0[OPS_ACC0(0,3)] -
      3*T_B0[OPS_ACC0(0,2)] + 4*T_B0[OPS_ACC0(0,1)] - rc9*T_B0[OPS_ACC0(0,0)])
)
: ((idx[1] == 1) ? (
  
      (rc11)*inv_0*(-3*T_B0[OPS_ACC0(0,-1)] + T_B0[OPS_ACC0(0,3)] - 6*T_B0[OPS_ACC0(0,2)] + 18*T_B0[OPS_ACC0(0,1)] -
      10*T_B0[OPS_ACC0(0,0)])
)
: ((idx[1] == block0np1 - 1) ? (
   inv_0*(-4*T_B0[OPS_ACC0(0,-1)] -
      rc10*T_B0[OPS_ACC0(0,-3)] + (rc8)*T_B0[OPS_ACC0(0,-4)] + (rc9)*T_B0[OPS_ACC0(0,0)] + 3*T_B0[OPS_ACC0(0,-2)])
)
:
      ((idx[1] == block0np1 - 2) ? (
   (rc11)*inv_0*(-18*T_B0[OPS_ACC0(0,-1)] - T_B0[OPS_ACC0(0,-3)] +
      10*T_B0[OPS_ACC0(0,0)] + 3*T_B0[OPS_ACC0(0,1)] + 6*T_B0[OPS_ACC0(0,-2)])
)
: (
  
      (rc11)*inv_0*(-8*T_B0[OPS_ACC0(0,-1)] - T_B0[OPS_ACC0(0,2)] + 8*T_B0[OPS_ACC0(0,1)] +
      T_B0[OPS_ACC0(0,-2)])
)))));

}

void opensbliblock00Kernel021(const double *u0_B0, double *wk1_B0, const int *idx)
{
    wk1_B0[OPS_ACC1(0,0)] = ((idx[0] == 0) ? (
   inv_1*(-3*u0_B0[OPS_ACC0(2,0)] - rc9*u0_B0[OPS_ACC0(0,0)] +
      (rc10)*u0_B0[OPS_ACC0(3,0)] + 4*u0_B0[OPS_ACC0(1,0)] - rc8*u0_B0[OPS_ACC0(4,0)])
)
: ((idx[0] == 1) ? (
  
      (rc11)*inv_1*(-6*u0_B0[OPS_ACC0(2,0)] - 10*u0_B0[OPS_ACC0(0,0)] + u0_B0[OPS_ACC0(3,0)] - 3*u0_B0[OPS_ACC0(-1,0)] +
      18*u0_B0[OPS_ACC0(1,0)])
)
: ((idx[0] == block0np0 - 1) ? (
   inv_1*(-rc10*u0_B0[OPS_ACC0(-3,0)] +
      (rc8)*u0_B0[OPS_ACC0(-4,0)] + (rc9)*u0_B0[OPS_ACC0(0,0)] - 4*u0_B0[OPS_ACC0(-1,0)] + 3*u0_B0[OPS_ACC0(-2,0)])
)
:
      ((idx[0] == block0np0 - 2) ? (
   (rc11)*inv_1*(-u0_B0[OPS_ACC0(-3,0)] + 10*u0_B0[OPS_ACC0(0,0)] -
      18*u0_B0[OPS_ACC0(-1,0)] + 3*u0_B0[OPS_ACC0(1,0)] + 6*u0_B0[OPS_ACC0(-2,0)])
)
: (
  
      (rc11)*inv_1*(-u0_B0[OPS_ACC0(2,0)] - 8*u0_B0[OPS_ACC0(-1,0)] + 8*u0_B0[OPS_ACC0(1,0)] +
      u0_B0[OPS_ACC0(-2,0)])
)))));

}

void opensbliblock00Kernel022(const double *u1_B0, double *wk2_B0, const int *idx)
{
    wk2_B0[OPS_ACC1(0,0)] = ((idx[1] == 0) ? (
   inv_0*(-rc8*u1_B0[OPS_ACC0(0,4)] - rc9*u1_B0[OPS_ACC0(0,0)] +
      4*u1_B0[OPS_ACC0(0,1)] - 3*u1_B0[OPS_ACC0(0,2)] + (rc10)*u1_B0[OPS_ACC0(0,3)])
)
: ((idx[1] == 1) ? (
  
      (rc11)*inv_0*(-3*u1_B0[OPS_ACC0(0,-1)] - 10*u1_B0[OPS_ACC0(0,0)] + 18*u1_B0[OPS_ACC0(0,1)] -
      6*u1_B0[OPS_ACC0(0,2)] + u1_B0[OPS_ACC0(0,3)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_0*((rc8)*u1_B0[OPS_ACC0(0,-4)] - rc10*u1_B0[OPS_ACC0(0,-3)] - 4*u1_B0[OPS_ACC0(0,-1)] +
      (rc9)*u1_B0[OPS_ACC0(0,0)] + 3*u1_B0[OPS_ACC0(0,-2)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      (rc11)*inv_0*(-u1_B0[OPS_ACC0(0,-3)] - 18*u1_B0[OPS_ACC0(0,-1)] + 6*u1_B0[OPS_ACC0(0,-2)] + 3*u1_B0[OPS_ACC0(0,1)]
      + 10*u1_B0[OPS_ACC0(0,0)])
)
: (
   (rc11)*inv_0*(-8*u1_B0[OPS_ACC0(0,-1)] + u1_B0[OPS_ACC0(0,-2)] +
      8*u1_B0[OPS_ACC0(0,1)] - u1_B0[OPS_ACC0(0,2)])
)))));

}

 void opensbliblock00Kernel034(const double *T_B0, const double *mu_B0, const double *wk6_B0, const double *wk3_B0,
const double *wk0_B0, const double *wk1_B0, const double *D11_B0, const double *SD111_B0, const double *wk7_B0, const
double *u0_B0, const double *u1_B0, const double *wk2_B0, double *Residual3_B0, double *Residual2_B0, double
*Residual1_B0, const int *idx)
{
   double localeval_4 = 0.0;
   double localeval_8 = 0.0;
   double localeval_1 = 0.0;
   double localeval_2 = 0.0;
   double localeval_6 = 0.0;
   double localeval_9 = 0.0;
   double localeval_3 = 0.0;
   double localeval_7 = 0.0;
   double localeval_5 = 0.0;
   double localeval_0 = 0.0;
    localeval_0 = ((idx[0] == 0) ? (
   (rc11)*inv_2*(-56*T_B0[OPS_ACC0(3,0)] - 104*T_B0[OPS_ACC0(1,0)] +
      11*T_B0[OPS_ACC0(4,0)] + 114*T_B0[OPS_ACC0(2,0)] + 35*T_B0[OPS_ACC0(0,0)])
)
: ((idx[0] == 1) ? (
  
      (rc11)*inv_2*(-T_B0[OPS_ACC0(3,0)] + 11*T_B0[OPS_ACC0(-1,0)] + 6*T_B0[OPS_ACC0(1,0)] + 4*T_B0[OPS_ACC0(2,0)] -
      20*T_B0[OPS_ACC0(0,0)])
)
: ((idx[0] == block0np0 - 1) ? (
   (rc11)*inv_2*(-104*T_B0[OPS_ACC0(-1,0)] +
      11*T_B0[OPS_ACC0(-4,0)] + 114*T_B0[OPS_ACC0(-2,0)] - 56*T_B0[OPS_ACC0(-3,0)] + 35*T_B0[OPS_ACC0(0,0)])
)
:
      ((idx[0] == block0np0 - 2) ? (
   (rc11)*inv_2*(4*T_B0[OPS_ACC0(-2,0)] + 11*T_B0[OPS_ACC0(1,0)] +
      6*T_B0[OPS_ACC0(-1,0)] - T_B0[OPS_ACC0(-3,0)] - 20*T_B0[OPS_ACC0(0,0)])
)
: (
  
      (rc11)*inv_2*(-T_B0[OPS_ACC0(-2,0)] + 16*T_B0[OPS_ACC0(1,0)] + 16*T_B0[OPS_ACC0(-1,0)] - T_B0[OPS_ACC0(2,0)] -
      30*T_B0[OPS_ACC0(0,0)])
)))));

    localeval_1 = ((idx[1] == 0) ? (
   (rc11)*inv_3*(11*T_B0[OPS_ACC0(0,4)] - 56*T_B0[OPS_ACC0(0,3)] +
      114*T_B0[OPS_ACC0(0,2)] - 104*T_B0[OPS_ACC0(0,1)] + 35*T_B0[OPS_ACC0(0,0)])
)
: ((idx[1] == 1) ? (
  
      (rc11)*inv_3*(11*T_B0[OPS_ACC0(0,-1)] - T_B0[OPS_ACC0(0,3)] + 4*T_B0[OPS_ACC0(0,2)] + 6*T_B0[OPS_ACC0(0,1)] -
      20*T_B0[OPS_ACC0(0,0)])
)
: ((idx[1] == block0np1 - 1) ? (
   (rc11)*inv_3*(-104*T_B0[OPS_ACC0(0,-1)] -
      56*T_B0[OPS_ACC0(0,-3)] + 11*T_B0[OPS_ACC0(0,-4)] + 114*T_B0[OPS_ACC0(0,-2)] + 35*T_B0[OPS_ACC0(0,0)])
)
:
      ((idx[1] == block0np1 - 2) ? (
   (rc11)*inv_3*(4*T_B0[OPS_ACC0(0,-2)] - T_B0[OPS_ACC0(0,-3)] +
      6*T_B0[OPS_ACC0(0,-1)] + 11*T_B0[OPS_ACC0(0,1)] - 20*T_B0[OPS_ACC0(0,0)])
)
: (
  
      (rc11)*inv_3*(-T_B0[OPS_ACC0(0,-2)] + 16*T_B0[OPS_ACC0(0,-1)] - T_B0[OPS_ACC0(0,2)] + 16*T_B0[OPS_ACC0(0,1)] -
      30*T_B0[OPS_ACC0(0,0)])
)))));

    localeval_2 = ((idx[0] == 0) ? (
   inv_1*(-rc9*mu_B0[OPS_ACC1(0,0)] - 3*mu_B0[OPS_ACC1(2,0)] -
      rc8*mu_B0[OPS_ACC1(4,0)] + 4*mu_B0[OPS_ACC1(1,0)] + (rc10)*mu_B0[OPS_ACC1(3,0)])
)
: ((idx[0] == 1) ? (
  
      (rc11)*inv_1*(-10*mu_B0[OPS_ACC1(0,0)] - 6*mu_B0[OPS_ACC1(2,0)] + 18*mu_B0[OPS_ACC1(1,0)] -
      3*mu_B0[OPS_ACC1(-1,0)] + mu_B0[OPS_ACC1(3,0)])
)
: ((idx[0] == block0np0 - 1) ? (
  
      inv_1*((rc9)*mu_B0[OPS_ACC1(0,0)] - rc10*mu_B0[OPS_ACC1(-3,0)] + (rc8)*mu_B0[OPS_ACC1(-4,0)] +
      3*mu_B0[OPS_ACC1(-2,0)] - 4*mu_B0[OPS_ACC1(-1,0)])
)
: ((idx[0] == block0np0 - 2) ? (
  
      (rc11)*inv_1*(10*mu_B0[OPS_ACC1(0,0)] - mu_B0[OPS_ACC1(-3,0)] + 6*mu_B0[OPS_ACC1(-2,0)] + 3*mu_B0[OPS_ACC1(1,0)] -
      18*mu_B0[OPS_ACC1(-1,0)])
)
: (
   (rc11)*inv_1*(-mu_B0[OPS_ACC1(2,0)] + mu_B0[OPS_ACC1(-2,0)] +
      8*mu_B0[OPS_ACC1(1,0)] - 8*mu_B0[OPS_ACC1(-1,0)])
)))));

    localeval_3 = ((idx[1] == 0) ? (
   inv_0*(-rc9*mu_B0[OPS_ACC1(0,0)] + 4*mu_B0[OPS_ACC1(0,1)] -
      3*mu_B0[OPS_ACC1(0,2)] + (rc10)*mu_B0[OPS_ACC1(0,3)] - rc8*mu_B0[OPS_ACC1(0,4)])
)
: ((idx[1] == 1) ? (
  
      (rc11)*inv_0*(-10*mu_B0[OPS_ACC1(0,0)] + 18*mu_B0[OPS_ACC1(0,1)] - 6*mu_B0[OPS_ACC1(0,2)] + mu_B0[OPS_ACC1(0,3)] -
      3*mu_B0[OPS_ACC1(0,-1)])
)
: ((idx[1] == block0np1 - 1) ? (
   inv_0*((rc9)*mu_B0[OPS_ACC1(0,0)] +
      (rc8)*mu_B0[OPS_ACC1(0,-4)] + 3*mu_B0[OPS_ACC1(0,-2)] - 4*mu_B0[OPS_ACC1(0,-1)] - rc10*mu_B0[OPS_ACC1(0,-3)])
)
:
      ((idx[1] == block0np1 - 2) ? (
   (rc11)*inv_0*(10*mu_B0[OPS_ACC1(0,0)] + 3*mu_B0[OPS_ACC1(0,1)] +
      6*mu_B0[OPS_ACC1(0,-2)] - mu_B0[OPS_ACC1(0,-3)] - 18*mu_B0[OPS_ACC1(0,-1)])
)
: (
  
      (rc11)*inv_0*(8*mu_B0[OPS_ACC1(0,1)] - mu_B0[OPS_ACC1(0,2)] + mu_B0[OPS_ACC1(0,-2)] -
      8*mu_B0[OPS_ACC1(0,-1)])
)))));

    localeval_4 = ((idx[0] == 0) ? (
   (rc11)*inv_2*(114*u0_B0[OPS_ACC9(2,0)] + 35*u0_B0[OPS_ACC9(0,0)] -
      56*u0_B0[OPS_ACC9(3,0)] - 104*u0_B0[OPS_ACC9(1,0)] + 11*u0_B0[OPS_ACC9(4,0)])
)
: ((idx[0] == 1) ? (
  
      (rc11)*inv_2*(4*u0_B0[OPS_ACC9(2,0)] - 20*u0_B0[OPS_ACC9(0,0)] - u0_B0[OPS_ACC9(3,0)] + 11*u0_B0[OPS_ACC9(-1,0)] +
      6*u0_B0[OPS_ACC9(1,0)])
)
: ((idx[0] == block0np0 - 1) ? (
   (rc11)*inv_2*(114*u0_B0[OPS_ACC9(-2,0)] -
      56*u0_B0[OPS_ACC9(-3,0)] + 35*u0_B0[OPS_ACC9(0,0)] - 104*u0_B0[OPS_ACC9(-1,0)] + 11*u0_B0[OPS_ACC9(-4,0)])
)
:
      ((idx[0] == block0np0 - 2) ? (
   (rc11)*inv_2*(-u0_B0[OPS_ACC9(-3,0)] - 20*u0_B0[OPS_ACC9(0,0)] +
      4*u0_B0[OPS_ACC9(-2,0)] + 11*u0_B0[OPS_ACC9(1,0)] + 6*u0_B0[OPS_ACC9(-1,0)])
)
: (
  
      (rc11)*inv_2*(-u0_B0[OPS_ACC9(2,0)] - 30*u0_B0[OPS_ACC9(0,0)] - u0_B0[OPS_ACC9(-2,0)] + 16*u0_B0[OPS_ACC9(1,0)] +
      16*u0_B0[OPS_ACC9(-1,0)])
)))));

    localeval_5 = ((idx[1] == 0) ? (
   (rc11)*inv_3*(-56*u0_B0[OPS_ACC9(0,3)] + 114*u0_B0[OPS_ACC9(0,2)] -
      104*u0_B0[OPS_ACC9(0,1)] + 35*u0_B0[OPS_ACC9(0,0)] + 11*u0_B0[OPS_ACC9(0,4)])
)
: ((idx[1] == 1) ? (
  
      (rc11)*inv_3*(-u0_B0[OPS_ACC9(0,3)] + 4*u0_B0[OPS_ACC9(0,2)] + 6*u0_B0[OPS_ACC9(0,1)] - 20*u0_B0[OPS_ACC9(0,0)] +
      11*u0_B0[OPS_ACC9(0,-1)])
)
: ((idx[1] == block0np1 - 1) ? (
   (rc11)*inv_3*(35*u0_B0[OPS_ACC9(0,0)] +
      114*u0_B0[OPS_ACC9(0,-2)] - 104*u0_B0[OPS_ACC9(0,-1)] - 56*u0_B0[OPS_ACC9(0,-3)] + 11*u0_B0[OPS_ACC9(0,-4)])
)
:
      ((idx[1] == block0np1 - 2) ? (
   (rc11)*inv_3*(11*u0_B0[OPS_ACC9(0,1)] - 20*u0_B0[OPS_ACC9(0,0)] +
      4*u0_B0[OPS_ACC9(0,-2)] - u0_B0[OPS_ACC9(0,-3)] + 6*u0_B0[OPS_ACC9(0,-1)])
)
: (
  
      (rc11)*inv_3*(-u0_B0[OPS_ACC9(0,2)] + 16*u0_B0[OPS_ACC9(0,1)] - 30*u0_B0[OPS_ACC9(0,0)] - u0_B0[OPS_ACC9(0,-2)] +
      16*u0_B0[OPS_ACC9(0,-1)])
)))));

    localeval_6 = ((idx[0] == 0) ? (
   (rc11)*inv_2*(11*u1_B0[OPS_ACC10(4,0)] - 104*u1_B0[OPS_ACC10(1,0)] -
      56*u1_B0[OPS_ACC10(3,0)] + 35*u1_B0[OPS_ACC10(0,0)] + 114*u1_B0[OPS_ACC10(2,0)])
)
: ((idx[0] == 1) ? (
  
      (rc11)*inv_2*(6*u1_B0[OPS_ACC10(1,0)] + 11*u1_B0[OPS_ACC10(-1,0)] - u1_B0[OPS_ACC10(3,0)] -
      20*u1_B0[OPS_ACC10(0,0)] + 4*u1_B0[OPS_ACC10(2,0)])
)
: ((idx[0] == block0np0 - 1) ? (
  
      (rc11)*inv_2*(11*u1_B0[OPS_ACC10(-4,0)] - 104*u1_B0[OPS_ACC10(-1,0)] + 35*u1_B0[OPS_ACC10(0,0)] -
      56*u1_B0[OPS_ACC10(-3,0)] + 114*u1_B0[OPS_ACC10(-2,0)])
)
: ((idx[0] == block0np0 - 2) ? (
  
      (rc11)*inv_2*(11*u1_B0[OPS_ACC10(1,0)] + 4*u1_B0[OPS_ACC10(-2,0)] - 20*u1_B0[OPS_ACC10(0,0)] -
      u1_B0[OPS_ACC10(-3,0)] + 6*u1_B0[OPS_ACC10(-1,0)])
)
: (
   (rc11)*inv_2*(16*u1_B0[OPS_ACC10(1,0)] -
      u1_B0[OPS_ACC10(-2,0)] - 30*u1_B0[OPS_ACC10(0,0)] + 16*u1_B0[OPS_ACC10(-1,0)] - u1_B0[OPS_ACC10(2,0)])
)))));

    localeval_7 = ((idx[1] == 0) ? (
   (rc11)*inv_3*(11*u1_B0[OPS_ACC10(0,4)] + 35*u1_B0[OPS_ACC10(0,0)] -
      104*u1_B0[OPS_ACC10(0,1)] + 114*u1_B0[OPS_ACC10(0,2)] - 56*u1_B0[OPS_ACC10(0,3)])
)
: ((idx[1] == 1) ? (
  
      (rc11)*inv_3*(11*u1_B0[OPS_ACC10(0,-1)] - 20*u1_B0[OPS_ACC10(0,0)] + 6*u1_B0[OPS_ACC10(0,1)] +
      4*u1_B0[OPS_ACC10(0,2)] - u1_B0[OPS_ACC10(0,3)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      (rc11)*inv_3*(11*u1_B0[OPS_ACC10(0,-4)] - 56*u1_B0[OPS_ACC10(0,-3)] - 104*u1_B0[OPS_ACC10(0,-1)] +
      35*u1_B0[OPS_ACC10(0,0)] + 114*u1_B0[OPS_ACC10(0,-2)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      (rc11)*inv_3*(-u1_B0[OPS_ACC10(0,-3)] + 4*u1_B0[OPS_ACC10(0,-2)] - 20*u1_B0[OPS_ACC10(0,0)] +
      6*u1_B0[OPS_ACC10(0,-1)] + 11*u1_B0[OPS_ACC10(0,1)])
)
: (
   (rc11)*inv_3*(16*u1_B0[OPS_ACC10(0,-1)] -
      u1_B0[OPS_ACC10(0,-2)] - 30*u1_B0[OPS_ACC10(0,0)] + 16*u1_B0[OPS_ACC10(0,1)] - u1_B0[OPS_ACC10(0,2)])
)))));

    localeval_8 = ((idx[1] == 0) ? (
   inv_0*(-rc9*wk1_B0[OPS_ACC5(0,0)] + 4*wk1_B0[OPS_ACC5(0,1)] -
      3*wk1_B0[OPS_ACC5(0,2)] + (rc10)*wk1_B0[OPS_ACC5(0,3)] - rc8*wk1_B0[OPS_ACC5(0,4)])
)
: ((idx[1] == 1) ? (
  
      (rc11)*inv_0*(-10*wk1_B0[OPS_ACC5(0,0)] + 18*wk1_B0[OPS_ACC5(0,1)] - 6*wk1_B0[OPS_ACC5(0,2)] +
      wk1_B0[OPS_ACC5(0,3)] - 3*wk1_B0[OPS_ACC5(0,-1)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_0*((rc9)*wk1_B0[OPS_ACC5(0,0)] + (rc8)*wk1_B0[OPS_ACC5(0,-4)] + 3*wk1_B0[OPS_ACC5(0,-2)] -
      4*wk1_B0[OPS_ACC5(0,-1)] - rc10*wk1_B0[OPS_ACC5(0,-3)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      (rc11)*inv_0*(10*wk1_B0[OPS_ACC5(0,0)] + 3*wk1_B0[OPS_ACC5(0,1)] + 6*wk1_B0[OPS_ACC5(0,-2)] -
      wk1_B0[OPS_ACC5(0,-3)] - 18*wk1_B0[OPS_ACC5(0,-1)])
)
: (
   (rc11)*inv_0*(8*wk1_B0[OPS_ACC5(0,1)] -
      wk1_B0[OPS_ACC5(0,2)] + wk1_B0[OPS_ACC5(0,-2)] - 8*wk1_B0[OPS_ACC5(0,-1)])
)))));

    localeval_9 = ((idx[1] == 0) ? (
   inv_0*(-3*wk3_B0[OPS_ACC3(0,2)] + (rc10)*wk3_B0[OPS_ACC3(0,3)] -
      rc9*wk3_B0[OPS_ACC3(0,0)] + 4*wk3_B0[OPS_ACC3(0,1)] - rc8*wk3_B0[OPS_ACC3(0,4)])
)
: ((idx[1] == 1) ? (
  
      (rc11)*inv_0*(-6*wk3_B0[OPS_ACC3(0,2)] + wk3_B0[OPS_ACC3(0,3)] - 10*wk3_B0[OPS_ACC3(0,0)] +
      18*wk3_B0[OPS_ACC3(0,1)] - 3*wk3_B0[OPS_ACC3(0,-1)])
)
: ((idx[1] == block0np1 - 1) ? (
  
      inv_0*(3*wk3_B0[OPS_ACC3(0,-2)] + (rc9)*wk3_B0[OPS_ACC3(0,0)] - 4*wk3_B0[OPS_ACC3(0,-1)] +
      (rc8)*wk3_B0[OPS_ACC3(0,-4)] - rc10*wk3_B0[OPS_ACC3(0,-3)])
)
: ((idx[1] == block0np1 - 2) ? (
  
      (rc11)*inv_0*(6*wk3_B0[OPS_ACC3(0,-2)] + 10*wk3_B0[OPS_ACC3(0,0)] + 3*wk3_B0[OPS_ACC3(0,1)] -
      18*wk3_B0[OPS_ACC3(0,-1)] - wk3_B0[OPS_ACC3(0,-3)])
)
: (
   (rc11)*inv_0*(-wk3_B0[OPS_ACC3(0,2)] +
      wk3_B0[OPS_ACC3(0,-2)] + 8*wk3_B0[OPS_ACC3(0,1)] - 8*wk3_B0[OPS_ACC3(0,-1)])
)))));

    Residual1_B0[OPS_ACC14(0,0)] = rcinv25*localeval_2*(-rc26*D11_B0[OPS_ACC6(0,0)]*wk2_B0[OPS_ACC11(0,0)] +
      (rc10)*wk1_B0[OPS_ACC5(0,0)]) + rcinv25*localeval_3*(D11_B0[OPS_ACC6(0,0)]*wk0_B0[OPS_ACC4(0,0)] +
      wk3_B0[OPS_ACC3(0,0)])*D11_B0[OPS_ACC6(0,0)] + rcinv25*((rc10)*localeval_4 +
      localeval_5*pow(D11_B0[OPS_ACC6(0,0)], 2) + (rc27)*localeval_9*D11_B0[OPS_ACC6(0,0)] +
      D11_B0[OPS_ACC6(0,0)]*SD111_B0[OPS_ACC7(0,0)]*wk0_B0[OPS_ACC4(0,0)])*mu_B0[OPS_ACC1(0,0)] +
      Residual1_B0[OPS_ACC14(0,0)];

    Residual2_B0[OPS_ACC13(0,0)] = rcinv25*localeval_2*(D11_B0[OPS_ACC6(0,0)]*wk0_B0[OPS_ACC4(0,0)] +
      wk3_B0[OPS_ACC3(0,0)]) + rcinv25*localeval_3*((rc10)*D11_B0[OPS_ACC6(0,0)]*wk2_B0[OPS_ACC11(0,0)] -
      rc26*wk1_B0[OPS_ACC5(0,0)])*D11_B0[OPS_ACC6(0,0)] + rcinv25*(localeval_6 +
      (rc10)*localeval_7*pow(D11_B0[OPS_ACC6(0,0)], 2) + (rc27)*localeval_8*D11_B0[OPS_ACC6(0,0)] +
      (rc10)*D11_B0[OPS_ACC6(0,0)]*SD111_B0[OPS_ACC7(0,0)]*wk2_B0[OPS_ACC11(0,0)])*mu_B0[OPS_ACC1(0,0)] +
      Residual2_B0[OPS_ACC13(0,0)];

    Residual3_B0[OPS_ACC12(0,0)] = rcinv25*rcinv28*rcinv5*rcinv6*localeval_2*wk7_B0[OPS_ACC8(0,0)] +
      rcinv25*rcinv28*rcinv5*rcinv6*localeval_3*pow(D11_B0[OPS_ACC6(0,0)], 2)*wk6_B0[OPS_ACC2(0,0)] +
      rcinv25*rcinv28*rcinv5*rcinv6*(localeval_0 + localeval_1*pow(D11_B0[OPS_ACC6(0,0)], 2) +
      D11_B0[OPS_ACC6(0,0)]*SD111_B0[OPS_ACC7(0,0)]*wk6_B0[OPS_ACC2(0,0)])*mu_B0[OPS_ACC1(0,0)] +
      rcinv25*localeval_2*(D11_B0[OPS_ACC6(0,0)]*wk0_B0[OPS_ACC4(0,0)] + wk3_B0[OPS_ACC3(0,0)])*u1_B0[OPS_ACC10(0,0)] +
      rcinv25*localeval_2*(-rc26*D11_B0[OPS_ACC6(0,0)]*wk2_B0[OPS_ACC11(0,0)] +
      (rc10)*wk1_B0[OPS_ACC5(0,0)])*u0_B0[OPS_ACC9(0,0)] +
      rcinv25*localeval_3*(D11_B0[OPS_ACC6(0,0)]*wk0_B0[OPS_ACC4(0,0)] +
      wk3_B0[OPS_ACC3(0,0)])*D11_B0[OPS_ACC6(0,0)]*u0_B0[OPS_ACC9(0,0)] +
      rcinv25*localeval_3*((rc10)*D11_B0[OPS_ACC6(0,0)]*wk2_B0[OPS_ACC11(0,0)] -
      rc26*wk1_B0[OPS_ACC5(0,0)])*D11_B0[OPS_ACC6(0,0)]*u1_B0[OPS_ACC10(0,0)] +
      rcinv25*(D11_B0[OPS_ACC6(0,0)]*wk0_B0[OPS_ACC4(0,0)] +
      wk3_B0[OPS_ACC3(0,0)])*D11_B0[OPS_ACC6(0,0)]*mu_B0[OPS_ACC1(0,0)]*wk0_B0[OPS_ACC4(0,0)] +
      rcinv25*(D11_B0[OPS_ACC6(0,0)]*wk0_B0[OPS_ACC4(0,0)] +
      wk3_B0[OPS_ACC3(0,0)])*mu_B0[OPS_ACC1(0,0)]*wk3_B0[OPS_ACC3(0,0)] +
      rcinv25*(-rc26*D11_B0[OPS_ACC6(0,0)]*wk2_B0[OPS_ACC11(0,0)] +
      (rc10)*wk1_B0[OPS_ACC5(0,0)])*mu_B0[OPS_ACC1(0,0)]*wk1_B0[OPS_ACC5(0,0)] +
      rcinv25*((rc10)*D11_B0[OPS_ACC6(0,0)]*wk2_B0[OPS_ACC11(0,0)] -
      rc26*wk1_B0[OPS_ACC5(0,0)])*D11_B0[OPS_ACC6(0,0)]*mu_B0[OPS_ACC1(0,0)]*wk2_B0[OPS_ACC11(0,0)] +
      rcinv25*((rc10)*localeval_4 + localeval_5*pow(D11_B0[OPS_ACC6(0,0)], 2) + (rc27)*localeval_9*D11_B0[OPS_ACC6(0,0)]
      + D11_B0[OPS_ACC6(0,0)]*SD111_B0[OPS_ACC7(0,0)]*wk0_B0[OPS_ACC4(0,0)])*mu_B0[OPS_ACC1(0,0)]*u0_B0[OPS_ACC9(0,0)] +
      rcinv25*(localeval_6 + (rc10)*localeval_7*pow(D11_B0[OPS_ACC6(0,0)], 2) + (rc27)*localeval_8*D11_B0[OPS_ACC6(0,0)]
      +
      (rc10)*D11_B0[OPS_ACC6(0,0)]*SD111_B0[OPS_ACC7(0,0)]*wk2_B0[OPS_ACC11(0,0)])*mu_B0[OPS_ACC1(0,0)]*u1_B0[OPS_ACC10(0,0)]
      + Residual3_B0[OPS_ACC12(0,0)];

}

 void opensbliblock00Kernel049(const double *Residual3_B0, const double *Residual0_B0, const double *Residual2_B0, const
double *Residual1_B0, double *tempRK_rhou0_B0, double *tempRK_rhoE_B0, double *rhoE_B0, double *rho_B0, double
*tempRK_rhou1_B0, double *rhou1_B0, double *tempRK_rho_B0, double *rhou0_B0, const double *rkA, const double *rkB)
{
   tempRK_rho_B0[OPS_ACC10(0,0)] = dt*Residual0_B0[OPS_ACC1(0,0)] + rkA[0]*tempRK_rho_B0[OPS_ACC10(0,0)];

   rho_B0[OPS_ACC7(0,0)] = rkB[0]*tempRK_rho_B0[OPS_ACC10(0,0)] + rho_B0[OPS_ACC7(0,0)];

   tempRK_rhou0_B0[OPS_ACC4(0,0)] = dt*Residual1_B0[OPS_ACC3(0,0)] + rkA[0]*tempRK_rhou0_B0[OPS_ACC4(0,0)];

   rhou0_B0[OPS_ACC11(0,0)] = rkB[0]*tempRK_rhou0_B0[OPS_ACC4(0,0)] + rhou0_B0[OPS_ACC11(0,0)];

   tempRK_rhou1_B0[OPS_ACC8(0,0)] = dt*Residual2_B0[OPS_ACC2(0,0)] + rkA[0]*tempRK_rhou1_B0[OPS_ACC8(0,0)];

   rhou1_B0[OPS_ACC9(0,0)] = rkB[0]*tempRK_rhou1_B0[OPS_ACC8(0,0)] + rhou1_B0[OPS_ACC9(0,0)];

   tempRK_rhoE_B0[OPS_ACC5(0,0)] = dt*Residual3_B0[OPS_ACC0(0,0)] + rkA[0]*tempRK_rhoE_B0[OPS_ACC5(0,0)];

   rhoE_B0[OPS_ACC6(0,0)] = rkB[0]*tempRK_rhoE_B0[OPS_ACC5(0,0)] + rhoE_B0[OPS_ACC6(0,0)];

}

#endif
