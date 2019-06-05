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
static const char *ng0 = "/home/carlosmarques/Projects/e2/labs/lab3/ise/freq_synt.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {50000, 0};
static int ng4[] = {2, 0};
static int ng5[] = {25000, 0};
static int ng6[] = {3, 0};
static int ng7[] = {16667, 0};
static int ng8[] = {4, 0};
static int ng9[] = {12500, 0};
static int ng10[] = {5, 0};
static int ng11[] = {10000, 0};
static int ng12[] = {6, 0};
static int ng13[] = {8333, 0};
static int ng14[] = {7, 0};
static int ng15[] = {7143, 0};
static int ng16[] = {8, 0};
static int ng17[] = {6250, 0};
static int ng18[] = {9, 0};
static int ng19[] = {5556, 0};
static int ng20[] = {10, 0};
static int ng21[] = {5000, 0};
static int ng22[] = {11, 0};
static int ng23[] = {4546, 0};
static int ng24[] = {12, 0};
static int ng25[] = {4167, 0};
static int ng26[] = {13, 0};
static int ng27[] = {3846, 0};
static int ng28[] = {14, 0};
static int ng29[] = {3571, 0};
static int ng30[] = {15, 0};
static int ng31[] = {3333, 0};



static void Always_19_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 3000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 3816);
    *((int *)t2) = 1;
    t3 = (t0 + 3032);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(19, ng0);

LAB5:    xsi_set_current_line(20, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng22)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng24)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng26)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng28)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng30)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 32);
    if (t6 == 1)
        goto LAB37;

LAB38:
LAB40:
LAB39:    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);

LAB41:    goto LAB2;

LAB7:    xsi_set_current_line(21, ng0);
    t7 = ((char*)((ng1)));
    t8 = (t0 + 2088);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 16);
    goto LAB41;

LAB9:    xsi_set_current_line(22, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB41;

LAB11:    xsi_set_current_line(23, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB41;

LAB13:    xsi_set_current_line(24, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB41;

LAB15:    xsi_set_current_line(25, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB41;

LAB17:    xsi_set_current_line(26, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB41;

LAB19:    xsi_set_current_line(27, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB41;

LAB21:    xsi_set_current_line(28, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB41;

LAB23:    xsi_set_current_line(29, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB41;

LAB25:    xsi_set_current_line(30, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB41;

LAB27:    xsi_set_current_line(31, ng0);
    t3 = ((char*)((ng21)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB41;

LAB29:    xsi_set_current_line(32, ng0);
    t3 = ((char*)((ng23)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB41;

LAB31:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng25)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB41;

LAB33:    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng27)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB41;

LAB35:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng29)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB41;

LAB37:    xsi_set_current_line(36, ng0);
    t3 = ((char*)((ng31)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB41;

}

static void Always_43_1(char *t0)
{
    char t13[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;

LAB0:    t1 = (t0 + 3248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3832);
    *((int *)t2) = 1;
    t3 = (t0 + 3280);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(47, ng0);

LAB9:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 16, t5, 32);
    t11 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 16, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    t14 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t12, 16, t14, 32);
    memset(t15, 0, 8);
    t16 = (t4 + 4);
    t17 = (t13 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t13);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t16);
    t10 = *((unsigned int *)t17);
    t18 = (t9 ^ t10);
    t19 = (t8 | t18);
    t20 = *((unsigned int *)t16);
    t21 = *((unsigned int *)t17);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB13;

LAB10:    if (t22 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t15) = 1;

LAB13:    t26 = (t15 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t15);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB14;

LAB15:
LAB16:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(46, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 16, 0LL);
    goto LAB8;

LAB12:    t25 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(49, ng0);
    t32 = ((char*)((ng1)));
    t33 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t33, t32, 0, 0, 16, 0LL);
    goto LAB16;

}

static void Cont_54_2(char *t0)
{
    char t3[8];
    char t4[8];
    char t11[8];
    char t12[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;

LAB0:    t1 = (t0 + 3496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1928);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 2088);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng2)));
    memset(t11, 0, 8);
    xsi_vlog_unsigned_rshift(t11, 16, t9, 16, t10, 32);
    memset(t12, 0, 8);
    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB5;

LAB4:    t14 = (t11 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB5;

LAB8:    if (*((unsigned int *)t6) > *((unsigned int *)t11))
        goto LAB7;

LAB6:    *((unsigned int *)t12) = 1;

LAB7:    memset(t4, 0, 8);
    t16 = (t12 + 4);
    t17 = *((unsigned int *)t16);
    t18 = (~(t17));
    t19 = *((unsigned int *)t12);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB9;

LAB10:    if (*((unsigned int *)t16) != 0)
        goto LAB11;

LAB12:    t23 = (t4 + 4);
    t24 = *((unsigned int *)t4);
    t25 = *((unsigned int *)t23);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB13;

LAB14:    t28 = *((unsigned int *)t4);
    t29 = (~(t28));
    t30 = *((unsigned int *)t23);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t23) > 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t4) > 0)
        goto LAB19;

LAB20:    memcpy(t3, t32, 8);

LAB21:    t33 = (t0 + 3928);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memset(t37, 0, 8);
    t38 = 1U;
    t39 = t38;
    t40 = (t3 + 4);
    t41 = *((unsigned int *)t3);
    t38 = (t38 & t41);
    t42 = *((unsigned int *)t40);
    t39 = (t39 & t42);
    t43 = (t37 + 4);
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t44 | t38);
    t45 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t45 | t39);
    xsi_driver_vfirst_trans(t33, 0, 0);
    t46 = (t0 + 3848);
    *((int *)t46) = 1;

LAB1:    return;
LAB5:    t15 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t4) = 1;
    goto LAB12;

LAB11:    t22 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB12;

LAB13:    t27 = ((char*)((ng2)));
    goto LAB14;

LAB15:    t32 = ((char*)((ng1)));
    goto LAB16;

LAB17:    xsi_vlog_unsigned_bit_combine(t3, 32, t27, 32, t32, 32);
    goto LAB21;

LAB19:    memcpy(t3, t27, 8);
    goto LAB21;

}


extern void work_m_04449988557526851051_1084264965_init()
{
	static char *pe[] = {(void *)Always_19_0,(void *)Always_43_1,(void *)Cont_54_2};
	xsi_register_didat("work_m_04449988557526851051_1084264965", "isim/top_tb_isim_beh.exe.sim/work/m_04449988557526851051_1084264965.didat");
	xsi_register_executes(pe);
}
