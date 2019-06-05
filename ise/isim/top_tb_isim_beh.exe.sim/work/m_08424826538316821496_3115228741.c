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
static const char *ng0 = "/home/carlosmarques/Projects/e2/labs/lab3/ise/detector.v";
static int ng1[] = {2, 0};
static int ng2[] = {11, 0};
static int ng3[] = {1, 0};
static int ng4[] = {0, 0};



static void Cont_15_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char t8[8];
    char t9[8];
    char t24[8];
    char t26[8];
    char t27[8];
    char t28[8];
    char t36[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    char *t25;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;

LAB0:    t1 = (t0 + 2360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(15, ng0);
    t2 = (t0 + 1048U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    t6 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_power(t7, 32, t2, 32, t6, 32, 1);
    memset(t8, 0, 8);
    xsi_vlog_signed_greatereq(t8, 32, t5, 16, t7, 32);
    memset(t9, 0, 8);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t8);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t10) != 0)
        goto LAB6;

LAB7:    t17 = (t9 + 4);
    t18 = *((unsigned int *)t9);
    t19 = (!(t18));
    t20 = *((unsigned int *)t17);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB8;

LAB9:    memcpy(t36, t9, 8);

LAB10:    memset(t4, 0, 8);
    t64 = (t36 + 4);
    t65 = *((unsigned int *)t64);
    t66 = (~(t65));
    t67 = *((unsigned int *)t36);
    t68 = (t67 & t66);
    t69 = (t68 & 1U);
    if (t69 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t64) != 0)
        goto LAB20;

LAB21:    t71 = (t4 + 4);
    t72 = *((unsigned int *)t4);
    t73 = *((unsigned int *)t71);
    t74 = (t72 || t73);
    if (t74 > 0)
        goto LAB22;

LAB23:    t76 = *((unsigned int *)t4);
    t77 = (~(t76));
    t78 = *((unsigned int *)t71);
    t79 = (t77 || t78);
    if (t79 > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t71) > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t4) > 0)
        goto LAB28;

LAB29:    memcpy(t3, t80, 8);

LAB30:    t81 = (t0 + 2760);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    memset(t85, 0, 8);
    t86 = 1U;
    t87 = t86;
    t88 = (t3 + 4);
    t89 = *((unsigned int *)t3);
    t86 = (t86 & t89);
    t90 = *((unsigned int *)t88);
    t87 = (t87 & t90);
    t91 = (t85 + 4);
    t92 = *((unsigned int *)t85);
    *((unsigned int *)t85) = (t92 | t86);
    t93 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t93 | t87);
    xsi_driver_vfirst_trans(t81, 0, 0);
    t94 = (t0 + 2680);
    *((int *)t94) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t9) = 1;
    goto LAB7;

LAB6:    t16 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB7;

LAB8:    t22 = (t0 + 1048U);
    t23 = *((char **)t22);
    t22 = ((char*)((ng1)));
    memset(t24, 0, 8);
    xsi_vlog_signed_unary_minus(t24, 32, t22, 32);
    t25 = ((char*)((ng2)));
    memset(t26, 0, 8);
    xsi_vlog_signed_power(t26, 32, t24, 32, t25, 32, 1);
    memset(t27, 0, 8);
    xsi_vlog_signed_leq(t27, 32, t23, 16, t26, 32);
    memset(t28, 0, 8);
    t29 = (t27 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t27);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t29) != 0)
        goto LAB13;

LAB14:    t37 = *((unsigned int *)t9);
    t38 = *((unsigned int *)t28);
    t39 = (t37 | t38);
    *((unsigned int *)t36) = t39;
    t40 = (t9 + 4);
    t41 = (t28 + 4);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t40);
    t44 = *((unsigned int *)t41);
    t45 = (t43 | t44);
    *((unsigned int *)t42) = t45;
    t46 = *((unsigned int *)t42);
    t47 = (t46 != 0);
    if (t47 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB10;

LAB11:    *((unsigned int *)t28) = 1;
    goto LAB14;

LAB13:    t35 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB14;

LAB15:    t48 = *((unsigned int *)t36);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t36) = (t48 | t49);
    t50 = (t9 + 4);
    t51 = (t28 + 4);
    t52 = *((unsigned int *)t50);
    t53 = (~(t52));
    t54 = *((unsigned int *)t9);
    t55 = (t54 & t53);
    t56 = *((unsigned int *)t51);
    t57 = (~(t56));
    t58 = *((unsigned int *)t28);
    t59 = (t58 & t57);
    t60 = (~(t55));
    t61 = (~(t59));
    t62 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t62 & t60);
    t63 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t63 & t61);
    goto LAB17;

LAB18:    *((unsigned int *)t4) = 1;
    goto LAB21;

LAB20:    t70 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t70) = 1;
    goto LAB21;

LAB22:    t75 = ((char*)((ng3)));
    goto LAB23;

LAB24:    t80 = ((char*)((ng4)));
    goto LAB25;

LAB26:    xsi_vlog_unsigned_bit_combine(t3, 32, t75, 32, t80, 32);
    goto LAB30;

LAB28:    memcpy(t3, t75, 8);
    goto LAB30;

}


extern void work_m_08424826538316821496_3115228741_init()
{
	static char *pe[] = {(void *)Cont_15_0};
	xsi_register_didat("work_m_08424826538316821496_3115228741", "isim/top_tb_isim_beh.exe.sim/work/m_08424826538316821496_3115228741.didat");
	xsi_register_executes(pe);
}
