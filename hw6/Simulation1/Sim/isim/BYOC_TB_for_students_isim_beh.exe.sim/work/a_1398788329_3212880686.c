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
static const char *ng0 = "/media/sf_shared_with_vm/byoc2017/projects/shared/hw6/Simulation1/Src_4sim/MIPS_ALU.vhd";
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
    t1 = (t0 + 5240);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 5096);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1398788329_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(51, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 5304);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5112);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1398788329_3212880686_p_2(char *t0)
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

LAB0:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 5368);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t1);

LAB3:    t1 = (t0 + 5128);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1512U);
    t5 = *((char **)t1);
    t1 = (t0 + 5368);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 32U);
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

}

static void work_a_1398788329_3212880686_p_3(char *t0)
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
    int t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    int t21;
    int t22;
    int t23;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 8916);
    t4 = xsi_mem_cmp(t1, t2, 2U);
    if (t4 == 1)
        goto LAB3;

LAB8:    t5 = (t0 + 8918);
    t7 = xsi_mem_cmp(t5, t2, 2U);
    if (t7 == 1)
        goto LAB4;

LAB9:    t8 = (t0 + 8920);
    t10 = xsi_mem_cmp(t8, t2, 2U);
    if (t10 == 1)
        goto LAB5;

LAB10:    t11 = (t0 + 8922);
    t13 = xsi_mem_cmp(t11, t2, 2U);
    if (t13 == 1)
        goto LAB6;

LAB11:
LAB7:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 8999);
    t3 = (t0 + 5432);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t3);

LAB2:    t1 = (t0 + 5144);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(67, ng0);
    t14 = (t0 + 8924);
    t16 = (t0 + 5432);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t14, 3U);
    xsi_driver_first_trans_fast(t16);
    goto LAB2;

LAB4:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 8927);
    t3 = (t0 + 5432);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    goto LAB2;

LAB5:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 8930);
    t3 = (t0 + 5432);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    goto LAB2;

LAB6:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 8933);
    t4 = xsi_mem_cmp(t1, t2, 6U);
    if (t4 == 1)
        goto LAB14;

LAB22:    t5 = (t0 + 8939);
    t7 = xsi_mem_cmp(t5, t2, 6U);
    if (t7 == 1)
        goto LAB15;

LAB23:    t8 = (t0 + 8945);
    t10 = xsi_mem_cmp(t8, t2, 6U);
    if (t10 == 1)
        goto LAB16;

LAB24:    t11 = (t0 + 8951);
    t13 = xsi_mem_cmp(t11, t2, 6U);
    if (t13 == 1)
        goto LAB17;

LAB25:    t14 = (t0 + 8957);
    t21 = xsi_mem_cmp(t14, t2, 6U);
    if (t21 == 1)
        goto LAB18;

LAB26:    t16 = (t0 + 8963);
    t22 = xsi_mem_cmp(t16, t2, 6U);
    if (t22 == 1)
        goto LAB19;

LAB27:    t18 = (t0 + 8969);
    t23 = xsi_mem_cmp(t18, t2, 6U);
    if (t23 == 1)
        goto LAB20;

LAB28:
LAB21:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 8996);
    t3 = (t0 + 5432);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t3);

LAB13:    goto LAB2;

LAB12:;
LAB14:    xsi_set_current_line(72, ng0);
    t20 = (t0 + 8975);
    t25 = (t0 + 5432);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t20, 3U);
    xsi_driver_first_trans_fast(t25);
    goto LAB13;

LAB15:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 8978);
    t3 = (t0 + 5432);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    goto LAB13;

LAB16:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 8981);
    t3 = (t0 + 5432);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    goto LAB13;

LAB17:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 8984);
    t3 = (t0 + 5432);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    goto LAB13;

LAB18:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 8987);
    t3 = (t0 + 5432);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    goto LAB13;

LAB19:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 8990);
    t3 = (t0 + 5432);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    goto LAB13;

LAB20:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 8993);
    t3 = (t0 + 5432);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    goto LAB13;

LAB29:;
}

static void work_a_1398788329_3212880686_p_4(char *t0)
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

LAB0:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 9002);
    t4 = xsi_mem_cmp(t1, t2, 3U);
    if (t4 == 1)
        goto LAB3;

LAB10:    t5 = (t0 + 9005);
    t7 = xsi_mem_cmp(t5, t2, 3U);
    if (t7 == 1)
        goto LAB4;

LAB11:    t8 = (t0 + 9008);
    t10 = xsi_mem_cmp(t8, t2, 3U);
    if (t10 == 1)
        goto LAB5;

LAB12:    t11 = (t0 + 9011);
    t13 = xsi_mem_cmp(t11, t2, 3U);
    if (t13 == 1)
        goto LAB6;

LAB13:    t14 = (t0 + 9014);
    t16 = xsi_mem_cmp(t14, t2, 3U);
    if (t16 == 1)
        goto LAB7;

LAB14:    t17 = (t0 + 9017);
    t19 = xsi_mem_cmp(t17, t2, 3U);
    if (t19 == 1)
        goto LAB8;

LAB15:
LAB9:    xsi_set_current_line(102, ng0);
    t1 = (t0 + 9084);
    t3 = (t0 + 5496);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast(t3);

LAB2:    t1 = (t0 + 5160);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(89, ng0);
    t21 = (t0 + 2312U);
    t22 = *((char **)t21);
    t21 = (t0 + 8656U);
    t23 = (t0 + 2472U);
    t24 = *((char **)t23);
    t23 = (t0 + 8672U);
    t25 = ieee_p_2592010699_sub_16439989832805790689_503743352(IEEE_P_2592010699, t20, t22, t21, t24, t23);
    t26 = (t20 + 12U);
    t27 = *((unsigned int *)t26);
    t28 = (1U * t27);
    t29 = (32U != t28);
    if (t29 == 1)
        goto LAB17;

LAB18:    t30 = (t0 + 5496);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    memcpy(t34, t25, 32U);
    xsi_driver_first_trans_fast(t30);
    goto LAB2;

LAB4:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 8656U);
    t3 = (t0 + 2472U);
    t5 = *((char **)t3);
    t3 = (t0 + 8672U);
    t6 = ieee_p_2592010699_sub_16439767405979520975_503743352(IEEE_P_2592010699, t20, t2, t1, t5, t3);
    t8 = (t20 + 12U);
    t27 = *((unsigned int *)t8);
    t28 = (1U * t27);
    t29 = (32U != t28);
    if (t29 == 1)
        goto LAB19;

LAB20:    t9 = (t0 + 5496);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB5:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 8656U);
    t3 = (t0 + 2472U);
    t5 = *((char **)t3);
    t3 = (t0 + 8672U);
    t6 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t20, t2, t1, t5, t3);
    t8 = (t20 + 12U);
    t27 = *((unsigned int *)t8);
    t28 = (1U * t27);
    t29 = (32U != t28);
    if (t29 == 1)
        goto LAB21;

LAB22:    t9 = (t0 + 5496);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB6:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 8656U);
    t3 = (t0 + 2472U);
    t5 = *((char **)t3);
    t3 = (t0 + 8672U);
    t6 = ieee_p_2592010699_sub_16439989833707593767_503743352(IEEE_P_2592010699, t20, t2, t1, t5, t3);
    t8 = (t20 + 12U);
    t27 = *((unsigned int *)t8);
    t28 = (1U * t27);
    t29 = (32U != t28);
    if (t29 == 1)
        goto LAB23;

LAB24:    t9 = (t0 + 5496);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB7:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 8656U);
    t3 = (t0 + 2472U);
    t5 = *((char **)t3);
    t3 = (t0 + 8672U);
    t6 = ieee_p_3620187407_sub_1496620905533721142_3965413181(IEEE_P_3620187407, t20, t2, t1, t5, t3);
    t8 = (t20 + 12U);
    t27 = *((unsigned int *)t8);
    t28 = (1U * t27);
    t29 = (32U != t28);
    if (t29 == 1)
        goto LAB25;

LAB26:    t9 = (t0 + 5496);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB8:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 8656U);
    t4 = ieee_p_3620187407_sub_5109402382352621412_3965413181(IEEE_P_3620187407, t2, t1);
    t3 = (t0 + 2472U);
    t5 = *((char **)t3);
    t3 = (t0 + 8672U);
    t7 = ieee_p_3620187407_sub_5109402382352621412_3965413181(IEEE_P_3620187407, t5, t3);
    t29 = (t4 < t7);
    if (t29 != 0)
        goto LAB27;

LAB29:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 9052);
    t3 = (t0 + 5496);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast(t3);

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

LAB27:    xsi_set_current_line(98, ng0);
    t6 = (t0 + 9020);
    t9 = (t0 + 5496);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast(t9);
    goto LAB28;

}


extern void work_a_1398788329_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1398788329_3212880686_p_0,(void *)work_a_1398788329_3212880686_p_1,(void *)work_a_1398788329_3212880686_p_2,(void *)work_a_1398788329_3212880686_p_3,(void *)work_a_1398788329_3212880686_p_4};
	xsi_register_didat("work_a_1398788329_3212880686", "isim/BYOC_TB_for_students_isim_beh.exe.sim/work/a_1398788329_3212880686.didat");
	xsi_register_executes(pe);
}
