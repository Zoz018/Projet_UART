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
extern char *IEEE_P_2592010699;
static const char *ng1 = "/home/eba2190/Annee_2/Archi_ordis/Projet_UART/TxUnit/TxUnit.vhd";

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_3488768497506413324_503743352(char *, unsigned char , unsigned char );


unsigned char work_a_0342691397_2193661277_sub_7238475484859716488_2131169101(char *t1, char *t2)
{
    char t3[128];
    char t4[24];
    char t5[16];
    char t12[8];
    unsigned char t0;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    unsigned char t16;
    char *t17;
    int t18;
    int t19;
    char *t20;
    char *t21;
    unsigned char t22;
    int t23;
    char *t24;
    int t25;
    int t26;
    char *t27;
    int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned char t32;
    unsigned char t33;
    char *t34;
    char *t35;

LAB0:    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 7;
    t7 = (t6 + 4U);
    *((int *)t7) = 0;
    t7 = (t6 + 8U);
    *((int *)t7) = -1;
    t8 = (0 - 7);
    t9 = (t8 * -1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t7 = (t3 + 4U);
    t10 = ((IEEE_P_2592010699) + 3312);
    t11 = (t7 + 88U);
    *((char **)t11) = t10;
    t13 = (t7 + 56U);
    *((char **)t13) = t12;
    *((unsigned char *)t12) = (unsigned char)2;
    t14 = (t7 + 80U);
    *((unsigned int *)t14) = 1U;
    t15 = (t4 + 4U);
    t16 = (t2 != 0);
    if (t16 == 1)
        goto LAB3;

LAB2:    t17 = (t4 + 12U);
    *((char **)t17) = t5;
    t18 = 0;
    t19 = 7;

LAB4:    if (t18 <= t19)
        goto LAB5;

LAB7:    t6 = (t7 + 56U);
    t10 = *((char **)t6);
    t16 = *((unsigned char *)t10);
    t0 = t16;

LAB1:    return t0;
LAB3:    *((char **)t15) = t2;
    goto LAB2;

LAB5:    t20 = (t7 + 56U);
    t21 = *((char **)t20);
    t22 = *((unsigned char *)t21);
    t20 = (t5 + 0U);
    t23 = *((int *)t20);
    t24 = (t5 + 8U);
    t25 = *((int *)t24);
    t26 = (t18 - t23);
    t9 = (t26 * t25);
    t27 = (t5 + 4U);
    t28 = *((int *)t27);
    xsi_vhdl_check_range_of_index(t23, t28, t25, t18);
    t29 = (1U * t9);
    t30 = (0 + t29);
    t31 = (t2 + t30);
    t32 = *((unsigned char *)t31);
    t33 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t22, t32);
    t34 = (t7 + 56U);
    t35 = *((char **)t34);
    t34 = (t35 + 0);
    *((unsigned char *)t34) = t33;

LAB6:    if (t18 == t19)
        goto LAB7;

LAB8:    t8 = (t18 + 1);
    t18 = t8;
    goto LAB4;

LAB9:;
}

static void work_a_0342691397_2193661277_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    char *t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(36, ng1);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4104);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(37, ng1);
    t1 = (t0 + 4184);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(38, ng1);
    t1 = (t0 + 4248);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(39, ng1);
    t1 = (t0 + 4312);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(40, ng1);
    t1 = (t0 + 4376);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(43, ng1);
    t2 = (t0 + 1512U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t9 = (t4 == (unsigned char)3);
    if (t9 != 0)
        goto LAB7;

LAB9:
LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(44, ng1);
    t2 = (t0 + 4312);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(45, ng1);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 4440);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(46, ng1);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 4504);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(48, ng1);
    t1 = (t0 + 4248);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(50, ng1);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB8;

LAB10:    xsi_set_current_line(51, ng1);
    t1 = (t0 + 2632U);
    t5 = *((char **)t1);
    t11 = *((int *)t5);
    if (t11 >= 1)
        goto LAB20;

LAB19:    if (t11 == 8)
        goto LAB15;

LAB21:    if (t11 == 9)
        goto LAB16;

LAB22:    if (t11 == 10)
        goto LAB17;

LAB23:
LAB18:    xsi_set_current_line(63, ng1);
    t1 = (t0 + 4248);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);

LAB13:    xsi_set_current_line(66, ng1);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t11 = *((int *)t2);
    t12 = (t11 + 1);
    t1 = (t0 + 4184);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t12;
    xsi_driver_first_trans_fast(t1);
    goto LAB11;

LAB14:    xsi_set_current_line(53, ng1);
    t1 = (t0 + 2472U);
    t6 = *((char **)t1);
    t1 = (t0 + 2632U);
    t7 = *((char **)t1);
    t12 = *((int *)t7);
    t13 = (t12 - 1);
    t14 = (7 - t13);
    t15 = (t14 - 7);
    t16 = (t15 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, t14);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t1 = (t6 + t18);
    t9 = *((unsigned char *)t1);
    t8 = (t0 + 4248);
    t10 = (t8 + 56U);
    t19 = *((char **)t10);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = t9;
    xsi_driver_first_trans_fast_port(t8);
    goto LAB13;

LAB15:    xsi_set_current_line(54, ng1);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 2632U);
    t5 = *((char **)t1);
    t11 = *((int *)t5);
    t12 = (t11 - 1);
    t13 = (7 - t12);
    t14 = (t13 - 7);
    t16 = (t14 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, t13);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = *((unsigned char *)t1);
    t6 = (t0 + 4248);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t19 = *((char **)t10);
    *((unsigned char *)t19) = t3;
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(56, ng1);
    t1 = (t0 + 4376);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB13;

LAB16:    xsi_set_current_line(58, ng1);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = work_a_0342691397_2193661277_sub_7238475484859716488_2131169101(t0, t2);
    t1 = (t0 + 4248);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB13;

LAB17:    xsi_set_current_line(60, ng1);
    t1 = (t0 + 4248);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(62, ng1);
    t1 = (t0 + 4184);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 1;
    xsi_driver_first_trans_fast(t1);
    goto LAB13;

LAB20:    if (t11 <= 7)
        goto LAB14;
    else
        goto LAB19;

LAB24:;
}


extern void work_a_0342691397_2193661277_init()
{
	static char *pe[] = {(void *)work_a_0342691397_2193661277_p_0};
	static char *se[] = {(void *)work_a_0342691397_2193661277_sub_7238475484859716488_2131169101};
	xsi_register_didat("work_a_0342691397_2193661277", "isim/bin.sim/work/a_0342691397_2193661277.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
