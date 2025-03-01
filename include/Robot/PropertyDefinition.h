#pragma once

#include <Eigen/Dense>

// KDL

#define BASE_Y 0.0
#define BASE_Z 0.0

#define LINK_12 0.054 //m
#define LINK_23	0.1458
#define LINK_34 0.1542
#define LINK_45 0.1458
#define LINK_56 0.1542
#define LINK_6E 0.125

#define MASS_1 0.63842732   //kg
#define MASS_2 0.60158865
#define MASS_3 0.74955005
#define MASS_4 0.57916453
#define MASS_5 0.74955005
#define MASS_6 0.59063954

/*
#define MASS_MOTOR_1 0.34
#define MASS_MOTOR_2 0.34
#define MASS_MOTOR_3 0.26
#define MASS_MOTOR_4 0.21
#define MASS_MOTOR_5 0.114
#define MASS_MOTOR_6 0.114
*/

//kgm^2
#define J_Ixx_1 0.00038493
#define J_Ixy_1 -0.00001048
#define J_Ixz_1 -0.00000102
#define J_Iyy_1 0.00041146
#define J_Iyz_1 0.00000490
#define J_Izz_1 0.00051529

#define J_Ixx_2 0.00182502
#define J_Ixy_2 0.00000527
#define J_Ixz_2 0.00005220
#define J_Iyy_2 0.00195006
#define J_Iyz_2 -0.00005189
#define J_Izz_2 0.00047439

#define J_Ixx_3 0.00250752
#define J_Ixy_3 -0.00000641
#define J_Ixz_3 -0.00005774
#define J_Iyy_3 0.00245844
#define J_Iyz_3 0.00007894
#define J_Izz_3 0.00039769

#define J_Ixx_4 0.00168738
#define J_Ixy_4 -0.00000217
#define J_Ixz_4 -0.00004517
#define J_Iyy_4 0.00161999
#define J_Iyz_4 -0.00001849
#define J_Izz_4 0.00040018

#define J_Ixx_5 0.00250752
#define J_Ixy_5 -0.00000641
#define J_Ixz_5 -0.00005774
#define J_Iyy_5 0.00245844
#define J_Iyz_5 0.00007894
#define J_Izz_5 0.00039769

#define J_Ixx_6 0.00030422
#define J_Ixy_6 0.00000076
#define J_Ixz_6 0.00000285
#define J_Iyy_6 0.00042387
#define J_Iyz_6 -0.00000132
#define J_Izz_6 0.00037240

#ifndef __RP__

#define ROBOT_DOF 6
#define JOINTNUM 6

// Power 500, Rev C, Value 0.088390. Nm/A
// Power 500, Rev C, Value 0.083971. Nm/A
// Power 200, Rev C, Value 0.089144. Nm/A
// Power 100, Rev C, Value 0.057980. Nm/A
// Power 100, Rev C, Value 0.055081. Nm/A
// Power 100, Rev C, Value 0.057980. Nm/A

// SN: DB45I7E0B008

// #define ZERO_POS_1 448713
// #define ZERO_POS_2 -25024
// #define ZERO_POS_3 138717
// #define ZERO_POS_4 5909388//-713436
// #define ZERO_POS_5 -1058082
// #define ZERO_POS_6 -88988

// SN: DB45I7E0B008

// #define ZERO_POS_7 448713
// #define ZERO_POS_8 -25024
// #define ZERO_POS_9 138717
// #define ZERO_POS_10 5909388//-713436
// #define ZERO_POS_11 -1058082
// #define ZERO_POS_12 -88988



//SN: 
#define ZERO_POS_1 -2191032
#define ZERO_POS_2 273984
#define ZERO_POS_3 135881
#define ZERO_POS_4 70993
#define ZERO_POS_5 -580133
#define ZERO_POS_6 742321

#define MAX_CURRENT_1 2.55
#define MAX_CURRENT_2 2.55
#define MAX_CURRENT_3 2.83
#define MAX_CURRENT_4 2.83
#define MAX_CURRENT_5 2.83
#define MAX_CURRENT_6 2.83

#define MAX_TORQUE_1 431.97
#define MAX_TORQUE_2 431.97
#define MAX_TORQUE_3 197.23
#define MAX_TORQUE_4 79.79
#define MAX_TORQUE_5 79.79
#define MAX_TORQUE_6 79.79

#define invL2sqr_1 1000
#define invL2sqr_2 1000
#define invL2sqr_3 800
#define invL2sqr_4 600
#define invL2sqr_5 600
#define invL2sqr_6 600


#else

#define ROBOT_DOF 7
#define JOINTNUM 7


// Power 500, Rev C, Value 0.088390. Nm/A
// Power 500, Rev C, Value 0.083971. Nm/A
// Power 200, Rev C, Value 0.089144. Nm/A
// Power 100, Rev C, Value 0.057980. Nm/A
// Power 100, Rev C, Value 0.055081. Nm/A
// Power 100, Rev C, Value 0.057980. Nm/A


// SN: DB26R7P0B008 [IndyRP2]

#define ZERO_POS_1 -1625
#define ZERO_POS_2 -7749
#define ZERO_POS_3 40393
#define ZERO_POS_4 -24019
#define ZERO_POS_5 -15000
#define ZERO_POS_6 836049
#define ZERO_POS_7 -1684257

#define MAX_CURRENT_1 2.55
#define MAX_CURRENT_2 2.55
#define MAX_CURRENT_3 2.83
#define MAX_CURRENT_4 2.83
#define MAX_CURRENT_5 2.83
#define MAX_CURRENT_6 2.83
#define MAX_CURRENT_7 2.83

#define MAX_TORQUE_1 431.97
#define MAX_TORQUE_2 431.97
#define MAX_TORQUE_3 197.23
#define MAX_TORQUE_4 197.23
#define MAX_TORQUE_5 79.79
#define MAX_TORQUE_6 79.79
#define MAX_TORQUE_7 79.79

#define invL2sqr_1 1000
#define invL2sqr_2 1000
#define invL2sqr_3 800
#define invL2sqr_4 800
#define invL2sqr_5 600
#define invL2sqr_6 600
#define invL2sqr_7 600

#endif

#define HARMONIC_120 120
#define HARMONIC_100 100
#define HARMONIC_50 50

#define GEAR_RATIO_121 121
#define GEAR_RATIO_101 101
#define GEAR_RATIO_50 50

#define ENC_2048 2048
#define ENC_1024 1024
#define ENC_1000 1000
#define ENC_512 512
#define ABS_ENC_19 524288

#define ENC_CORE_500 65536
#define ENC_CORE_200 65536
#define ENC_CORE_100 65536
#define ENC_CORE 65536

#define TORQUE_CONST_500 0.0884 		
#define TORQUE_CONST_200 0.087		
#define TORQUE_CONST_100 0.058		

#define TORQUE_ADC_500 48
#define TORQUE_ADC_200 96
#define TORQUE_ADC_100 96


#define EFFICIENCY 75.0
#define CONTROL_FREQ 1000


typedef Eigen::Matrix<double, JOINTNUM, 1> JVec;
typedef Eigen::Matrix<double, JOINTNUM, JOINTNUM> JMat;
typedef Eigen::Matrix<double, 4, 4> SE3;
typedef Eigen::Matrix<double, 3, 3> SO3;
typedef Eigen::Matrix<double, 4, 4> se3;
typedef Eigen::Matrix<double, 3, 3> so3;
typedef Eigen::Matrix<double, 6, JOINTNUM> ScrewList;
typedef Eigen::Matrix<double, 6, JOINTNUM> Jacobian;
typedef Eigen::Matrix<double, JOINTNUM,6 > pinvJacobian;
typedef Eigen::Matrix<double, 6*JOINTNUM, JOINTNUM> DerivativeJacobianVec;
typedef Eigen::Matrix<double, 6*JOINTNUM, 1> vecJVec;
typedef Eigen::Matrix<double, 6, 1> Vector6d;   
typedef Eigen::Matrix<float, 6, 1> Vector6f;  
typedef Eigen::Matrix<double, 3, 1> Vector3d;   
typedef Eigen::Matrix<double, 4, 1> Vector4d;  
typedef Eigen::Matrix<double, 6, 6> Matrix6d;  
typedef Eigen::Matrix<double, JOINTNUM, JOINTNUM> Matrixnd;  
typedef Eigen::Matrix<double, 3, 3> Matrix3d;  
typedef Eigen::Matrix<double, 6, JOINTNUM> Matrix6xn;
typedef Eigen::Matrix<double, 6, JOINTNUM+1> Matrix6xn_1;
typedef Eigen::Matrix<double, JOINTNUM, JOINTNUM> MassMat;