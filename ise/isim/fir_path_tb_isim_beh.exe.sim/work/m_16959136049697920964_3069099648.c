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
static const char *ng0 = "/home/carlosmarques/Projects/e2/labs/lab3/ise/fir_path_tb.v";
static const char *ng1 = "y.dec";
static const char *ng2 = "w";
static int ng3[] = {58000, 0, 0, 0};
static int ng4[] = {1, 0};
static const char *ng5 = "h.hex";
static const char *ng6 = "x.hex";
static int ng7[] = {1, 0, 0, 0};
static int ng8[] = {0, 0};
static int ng9[] = {2, 0, 0, 0};
static int ng10[] = {58000, 0};
static int ng11[] = {100, 0};
static const char *ng12 = "%d\n";



static void Initial_51_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    double t5;
    double t6;
    char *t7;
    char *t8;
    double t9;
    double t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t1 = (t0 + 3640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);

LAB4:    xsi_set_current_line(58, ng0);
    *((int *)t3) = xsi_vlogfile_file_open_of_cname_ctype(ng1, ng2);
    t2 = (t3 + 4);
    *((int *)t2) = 0;
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng3)));
    t5 = xsi_vlog_convert_to_real(t2, 32, 1);
    t6 = (1000000000.0000000 / t5);
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value_double(t4, t6, 0);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2248);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1768);
    xsi_vlogfile_readmemh(ng5, 0, t2, 0, 0, 0, 0);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1928);
    xsi_vlogfile_readmemh(ng6, 0, t2, 0, 0, 0, 0);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2568);
    t4 = (t2 + 56U);
    t7 = *((char **)t4);
    t5 = *((double *)t7);
    t8 = ((char*)((ng7)));
    t6 = xsi_vlog_convert_to_real(t8, 32, 1);
    t9 = (t5 + t6);
    t9 = (t9 * 1000.0000000000000);
    t10 = (t9 < 0.0000000000000000);
    if (t10 == 1)
        goto LAB5;

LAB6:    t9 = (t9 + 0.50000000000000000);
    t9 = ((int64)(t9));

LAB7:    t9 = (t9 * 1.0000000000000000);
    t11 = (t0 + 3448);
    xsi_process_wait(t11, t9);
    *((char **)t1) = &&LAB8;

LAB1:    return;
LAB5:    t9 = 0.0000000000000000;
    goto LAB7;

LAB8:    xsi_set_current_line(69, ng0);
    t12 = ((char*)((ng8)));
    t13 = (t0 + 2088);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 1);
    goto LAB1;

}

static void Cont_72_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;

LAB0:    t1 = (t0 + 3888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = (t0 + 1928);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = (t0 + 1928);
    t10 = (t9 + 64U);
    t11 = *((char **)t10);
    t12 = (t0 + 1608);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t5, 16, t4, t8, t11, 2, 1, t14, 32, 1);
    t15 = (t0 + 4800);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t19, 0, 8);
    t20 = 65535U;
    t21 = t20;
    t22 = (t5 + 4);
    t23 = *((unsigned int *)t5);
    t20 = (t20 & t23);
    t24 = *((unsigned int *)t22);
    t21 = (t21 & t24);
    t25 = (t19 + 4);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 | t20);
    t27 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t27 | t21);
    xsi_driver_vfirst_trans(t15, 0, 15);
    t28 = (t0 + 4704);
    *((int *)t28) = 1;

LAB1:    return;
}

static void Always_75_2(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    double t5;
    char *t6;
    double t7;
    double t8;
    double t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;

LAB0:    t1 = (t0 + 4136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(75, ng0);

LAB4:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = *((double *)t4);
    t6 = ((char*)((ng9)));
    t7 = xsi_vlog_convert_to_real(t6, 32, 1);
    t8 = (t5 / t7);
    t8 = (t8 * 1000.0000000000000);
    t9 = (t8 < 0.0000000000000000);
    if (t9 == 1)
        goto LAB5;

LAB6:    t8 = (t8 + 0.50000000000000000);
    t8 = ((int64)(t8));

LAB7:    t8 = (t8 * 1.0000000000000000);
    t10 = (t0 + 3944);
    xsi_process_wait(t10, t8);
    *((char **)t1) = &&LAB8;

LAB1:    return;
LAB5:    t8 = 0.0000000000000000;
    goto LAB7;

LAB8:    xsi_set_current_line(76, ng0);
    t12 = (t0 + 2248);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memset(t11, 0, 8);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (~(t16));
    t18 = *((unsigned int *)t14);
    t19 = (t18 & t17);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB12;

LAB10:    if (*((unsigned int *)t15) == 0)
        goto LAB9;

LAB11:    t21 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t21) = 1;

LAB12:    t22 = (t11 + 4);
    t23 = (t14 + 4);
    t24 = *((unsigned int *)t14);
    t25 = (~(t24));
    *((unsigned int *)t11) = t25;
    *((unsigned int *)t22) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB14;

LAB13:    t30 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t30 & 1U);
    t31 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t31 & 1U);
    t32 = (t0 + 2248);
    xsi_vlogvar_assign_value(t32, t11, 0, 0, 1);
    goto LAB2;

LAB9:    *((unsigned int *)t11) = 1;
    goto LAB12;

LAB14:    t26 = *((unsigned int *)t11);
    t27 = *((unsigned int *)t23);
    *((unsigned int *)t11) = (t26 | t27);
    t28 = *((unsigned int *)t22);
    t29 = *((unsigned int *)t23);
    *((unsigned int *)t22) = (t28 | t29);
    goto LAB13;

}

static void Always_80_3(char *t0)
{
    char t15[8];
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 4384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 4720);
    *((int *)t2) = 1;
    t3 = (t0 + 4416);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(80, ng0);

LAB5:    xsi_set_current_line(81, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(83, ng0);

LAB9:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t15, 0, 8);
    xsi_vlog_signed_add(t15, 32, t4, 32, t5, 32);
    t6 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t6, t15, 0, 0, 32, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    t6 = ((char*)((ng11)));
    memset(t15, 0, 8);
    xsi_vlog_signed_divide(t15, 32, t5, 32, t6, 32);
    memset(t16, 0, 8);
    xsi_vlog_signed_less(t16, 32, t4, 32, t15, 32);
    t7 = (t16 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t16);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(87, ng0);

LAB14:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    xsi_vlogfile_fclose(*((unsigned int *)t4));
    xsi_set_current_line(89, ng0);
    xsi_vlog_finish(1);

LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(82, ng0);
    t13 = ((char*)((ng8)));
    t14 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 32, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(85, ng0);

LAB13:    xsi_set_current_line(86, ng0);
    t13 = (t0 + 2728);
    t14 = (t13 + 56U);
    t17 = *((char **)t14);
    t18 = (t0 + 1208U);
    t19 = *((char **)t18);
    xsi_vlogfile_fwrite(*((unsigned int *)t17), 0, 0, 1, ng12, 2, t0, (char)118, t19, 16);
    goto LAB12;

}


extern void work_m_16959136049697920964_3069099648_init()
{
	static char *pe[] = {(void *)Initial_51_0,(void *)Cont_72_1,(void *)Always_75_2,(void *)Always_80_3};
	xsi_register_didat("work_m_16959136049697920964_3069099648", "isim/fir_path_tb_isim_beh.exe.sim/work/m_16959136049697920964_3069099648.didat");
	xsi_register_executes(pe);
}
