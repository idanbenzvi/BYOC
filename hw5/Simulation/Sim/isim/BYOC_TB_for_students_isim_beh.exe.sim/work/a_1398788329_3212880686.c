/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/media/sf_shared_with_vm/byoc2017/projects/shared/hw5/Simulation/Src_4sim/MIPS_ALU.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

char *ieee_p_2592010699_sub_16439767405979520975_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_16439989832805790689_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_16439989833707593767_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_1496620905533649268_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_1496620905533721142_3965413181(char *, char *, char *, char *, char *, char *);
int ieee_p_3620187407_sub_5109402382352621412_3965413181(char *, char *, char *);


static void work_a_1398788329_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(50, ng0);

LAB3:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 4976);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 4848);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1398788329_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 5040);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t1);

LAB3:    t1 = (t0 + 4864);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1512U);
    t5 = *((char **)t1);
    t1 = (t0 + 5040);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 32U);
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

}

static void work_a_1398788329_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    int t19;
    int t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 8476);
    t4 = xsi_mem_cmp(t1, t2, 2U);
    if (t4 == 1)
        goto LAB3;

LAB7:    t5 = (t0 + 8478);
    t7 = xsi_mem_cmp(t5, t2, 2U);
    if (t7 == 1)
        goto LAB4;

LAB8:    t8 = (t0 + 8480);
    t10 = xsi_mem_cmp(t8, t2, 2U);
    if (t10 == 1)
        goto LAB5;

LAB9:
LAB6:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 8545);
    t3 = (t0 + 5104);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t3);

LAB2:    t1 = (t0 + 4880);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(66, ng0);
    t11 = (t0 + 8482);
    t13 = (t0 + 5104);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t11, 3U);
    xsi_driver_first_trans_fast(t13);
    goto LAB2;

LAB4:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 8485);
    t3 = (t0 + 5104);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    goto LAB2;

LAB5:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 8488);
    t4 = xsi_mem_cmp(t1, t2, 6U);
    if (t4 == 1)
        goto LAB12;

LAB19:    t5 = (t0 + 8494);
    t7 = xsi_mem_cmp(t5, t2, 6U);
    if (t7 == 1)
        goto LAB13;

LAB20:    t8 = (t0 + 8500);
    t10 = xsi_mem_cmp(t8, t2, 6U);
    if (t10 == 1)
        goto LAB14;

LAB21:    t11 = (t0 + 8506);
    t18 = xsi_mem_cmp(t11, t2, 6U);
    if (t18 == 1)
        goto LAB15;

LAB22:    t13 = (t0 + 8512);
    t19 = xsi_mem_cmp(t13, t2, 6U);
    if (t19 == 1)
        goto LAB16;

LAB23:    t15 = (t0 + 8518);
    t20 = xsi_mem_cmp(t15, t2, 6U);
    if (t20 == 1)
        goto LAB17;

LAB24:
LAB18:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 8542);
    t3 = (t0 + 5104);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t3);

LAB11:    goto LAB2;

LAB10:;
LAB12:    xsi_set_current_line(70, ng0);
    t17 = (t0 + 8524);
    t22 = (t0 + 5104);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t17, 3U);
    xsi_driver_first_trans_fast(t22);
    goto LAB11;

LAB13:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 8527);
    t3 = (t0 + 5104);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    goto LAB11;

LAB14:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 8530);
    t3 = (t0 + 5104);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    goto LAB11;

LAB15:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 8533);
    t3 = (t0 + 5104);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    goto LAB11;

LAB16:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 8536);
    t3 = (t0 + 5104);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    goto LAB11;

LAB17:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 8539);
    t3 = (t0 + 5104);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    goto LAB11;

LAB25:;
}

static void work_a_1398788329_3212880686_p_3(char *t0)
{
    char t20[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    int t16;
    char *t17;
    int t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned char t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 8548);
    t4 = xsi_mem_cmp(t1, t2, 3U);
    if (t4 == 1)
        goto LAB3;

LAB10:    t5 = (t0 + 8551);
    t7 = xsi_mem_cmp(t5, t2, 3U);
    if (t7 == 1)
        goto LAB4;

LAB11:    t8 = (t0 + 8554);
    t10 = xsi_mem_cmp(t8, t2, 3U);
    if (t10 == 1)
        goto LAB5;

LAB12:    t11 = (t0 + 8557);
    t13 = xsi_mem_cmp(t11, t2, 3U);
    if (t13 == 1)
        goto LAB6;

LAB13:    t14 = (t0 + 8560);
    t16 = xsi_mem_cmp(t14, t2, 3U);
    if (t16 == 1)
        goto LAB7;

LAB14:    t17 = (t0 + 8563);
    t19 = xsi_mem_cmp(t17, t2, 3U);
    if (t19 == 1)
        goto LAB8;

LAB15:
LAB9:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 8630);
    t3 = (t0 + 5168);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:    t1 = (t0 + 4896);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(86, ng0);
    t21 = (t0 + 2312U);
    t22 = *((char **)t21);
    t21 = (t0 + 8216U);
    t23 = (t0 + 2472U);
    t24 = *((char **)t23);
    t23 = (t0 + 8232U);
    t25 = ieee_p_2592010699_sub_16439989832805790689_503743352(IEEE_P_2592010699, t20, t22, t21, t24, t23);
    t26 = (t20 + 12U);
    t27 = *((unsigned int *)t26);
    t28 = (1U * t27);
    t29 = (32U != t28);
    if (t29 == 1)
        goto LAB17;

LAB18:    t30 = (t0 + 5168);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    memcpy(t34, t25, 32U);
    xsi_driver_first_trans_fast_port(t30);
    goto LAB2;

LAB4:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 8216U);
    t3 = (t0 + 2472U);
    t5 = *((char **)t3);
    t3 = (t0 + 8232U);
    t6 = ieee_p_2592010699_sub_16439767405979520975_503743352(IEEE_P_2592010699, t20, t2, t1, t5, t3);
    t8 = (t20 + 12U);
    t27 = *((unsigned int *)t8);
    t28 = (1U * t27);
    t29 = (32U != t28);
    if (t29 == 1)
        goto LAB19;

LAB20:    t9 = (t0 + 5168);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB5:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 8216U);
    t3 = (t0 + 2472U);
    t5 = *((char **)t3);
    t3 = (t0 + 8232U);
    t6 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t20, t2, t1, t5, t3);
    t8 = (t20 + 12U);
    t27 = *((unsigned int *)t8);
    t28 = (1U * t27);
    t29 = (32U != t28);
    if (t29 == 1)
        goto LAB21;

LAB22:    t9 = (t0 + 5168);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB6:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 8216U);
    t3 = (t0 + 2472U);
    t5 = *((char **)t3);
    t3 = (t0 + 8232U);
    t6 = ieee_p_2592010699_sub_16439989833707593767_503743352(IEEE_P_2592010699, t20, t2, t1, t5, t3);
    t8 = (t20 + 12U);
    t27 = *((unsigned int *)t8);
    t28 = (1U * t27);
    t29 = (32U != t28);
    if (t29 == 1)
        goto LAB23;

LAB24:    t9 = (t0 + 5168);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB7:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 8216U);
    t3 = (t0 + 2472U);
    t5 = *((char **)t3);
    t3 = (t0 + 8232U);
    t6 = ieee_p_3620187407_sub_1496620905533721142_3965413181(IEEE_P_3620187407, t20, t2, t1, t5, t3);
    t8 = (t20 + 12U);
    t27 = *((unsigned int *)t8);
    t28 = (1U * t27);
    t29 = (32U != t28);
    if (t29 == 1)
        goto LAB25;

LAB26:    t9 = (t0 + 5168);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB8:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 8216U);
    t4 = ieee_p_3620187407_sub_5109402382352621412_3965413181(IEEE_P_3620187407, t2, t1);
    t3 = (t0 + 2472U);
    t5 = *((char **)t3);
    t3 = (t0 + 8232U);
    t7 = ieee_p_3620187407_sub_5109402382352621412_3965413181(IEEE_P_3620187407, t5, t3);
    t29 = (t4 < t7);
    if (t29 != 0)
        goto LAB27;

LAB29:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 8598);
    t3 = (t0 + 5168);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast_port(t3);

LAB28:    goto LAB2;

LAB16:;
LAB17:    xsi_size_not_matching(32U, t28, 0);
    goto LAB18;

LAB19:    xsi_size_not_matching(32U, t28, 0);
    goto LAB20;

LAB21:    xsi_size_not_matching(32U, t28, 0);
    goto LAB22;

LAB23:    xsi_size_not_matching(32U, t28, 0);
    goto LAB24;

LAB25:    xsi_size_not_matching(32U, t28, 0);
    goto LAB26;

LAB27:    xsi_set_current_line(95, ng0);
    t6 = (t0 + 8566);
    t9 = (t0 + 5168);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB28;

}


extern void work_a_1398788329_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1398788329_3212880686_p_0,(void *)work_a_1398788329_3212880686_p_1,(void *)work_a_1398788329_3212880686_p_2,(void *)work_a_1398788329_3212880686_p_3};
	xsi_register_didat("work_a_1398788329_3212880686", "isim/BYOC_TB_for_students_isim_beh.exe.sim/work/a_1398788329_3212880686.didat");
	xsi_register_executes(pe);
}
