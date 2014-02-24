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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/HDL/FndtnISEWork/Zynq-7000/ZYBO/ZYBO_LED_test/system/pcores/led4_axi_lite_slave_v1_00_a/led4_axi_lite_slave/simulaiton/AXI4_Master_BFM.v";
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {0U, 0U};
static int ng5[] = {0, 0};
static unsigned int ng6[] = {15U, 0U};
static int ng7[] = {1, 0};

static void Forked_112_13(char *);
static void Forked_113_14(char *);
void Forked_112_13();
void Forked_113_14();


static int sp_AXI_Master_1Seq_Write(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    int t5;
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
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 984);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(110, ng0);

LAB5:    xsi_set_current_line(111, ng0);
    t5 = xsi_create_forkvar_inside_subprogram_invocation(t2, 2, 0);
    t6 = (t2 + 80U);
    t7 = *((char **)t6);
    xsi_create_forkjoin_process_inside_subprogram(0, (void *)Forked_112_13, t2, t7);
    t8 = (t2 + 80U);
    t9 = *((char **)t8);
    xsi_create_forkjoin_process_inside_subprogram(0, (void *)Forked_113_14, t2, t9);
    xsi_set_forkwaitinfo_inside_subprogram_status(t2, 0, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    t10 = xsi_get_forkvar_inside_subprogram_invocation(t2, 0);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    if (*((int *)t12) > 0)
        goto LAB7;

LAB8:    xsi_clean_active_fork_process_list(t2);
    xsi_set_current_line(115, ng0);
    t4 = (t1 + 15648);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t11, &&LAB9);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    t14 = (t1 + 2280);
    t15 = xsi_create_subprogram_invocation(t13, 0, t1, t14, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t14, t15);
    t16 = (t1 + 17568);
    xsi_vlogvar_assign_value(t16, t7, 0, 0, 8);

LAB11:    t17 = (t2 + 64U);
    t18 = *((char **)t17);
    t19 = (t18 + 80U);
    t20 = *((char **)t19);
    t21 = (t20 + 272U);
    t22 = *((char **)t21);
    t23 = (t22 + 0U);
    t24 = *((char **)t23);
    t5 = ((int  (*)(char *, char *))t24)(t1, t18);
    if (t5 == -1)
        goto LAB12;

LAB13:    if (t5 != 0)
        goto LAB14;

LAB9:    t18 = (t1 + 2280);
    xsi_vlog_subprogram_popinvocation(t18);

LAB10:    t25 = (t2 + 64U);
    t26 = *((char **)t25);
    t25 = (t1 + 2280);
    t27 = (t2 + 56U);
    t28 = *((char **)t27);
    xsi_delete_subprogram_invocation(t25, t26, t1, t28, t2);
    goto LAB4;

LAB7:    xsi_set_forkwaitinfo_inside_subprogram_status(t2, 0, 1);
    goto LAB1;

LAB12:    t0 = -1;
    goto LAB1;

LAB14:    t17 = (t2 + 48U);
    *((char **)t17) = &&LAB11;
    goto LAB1;

}

static int sp_AXI_MASTER_WAC(char *t1, char *t2)
{
    char t9[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1416);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(126, ng0);

LAB5:    xsi_set_current_line(127, ng0);
    t5 = (t1 + 15968);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 6688);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(128, ng0);
    t4 = (t1 + 16128);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 6848);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(129, ng0);
    t4 = (t1 + 16288);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 7008);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(130, ng0);
    t4 = (t1 + 16448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 7168);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 3);
    xsi_set_current_line(131, ng0);
    t4 = (t1 + 16608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 7328);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 2);
    xsi_set_current_line(132, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 8448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(134, ng0);
    t4 = (t1 + 12128);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t9, 0, 8);
    t8 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t9) = 1;

LAB9:    t24 = (t9 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB8:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(134, ng0);

LAB13:    xsi_set_current_line(135, ng0);
    t30 = ((char*)((ng3)));
    t31 = (t1 + 12128);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 1);
    xsi_set_current_line(137, ng0);
    t4 = (t1 + 16288);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 11808);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(138, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 0U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(140, ng0);

LAB15:    t4 = (t1 + 12608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t9, 0, 8);
    t7 = (t6 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB19;

LAB17:    if (*((unsigned int *)t7) == 0)
        goto LAB16;

LAB18:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;

LAB19:    t10 = (t9 + 4);
    t23 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t9) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB21;

LAB20:    t22 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t22 & 1U);
    t25 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t25 & 1U);
    t24 = (t9 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t32 = (t29 != 0);
    if (t32 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(145, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB27;
    t0 = 1;
    goto LAB1;

LAB16:    *((unsigned int *)t9) = 1;
    goto LAB19;

LAB21:    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t23);
    *((unsigned int *)t9) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t23);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB20;

LAB22:    xsi_set_current_line(140, ng0);

LAB24:    xsi_set_current_line(141, ng0);
    t30 = (t2 + 56U);
    t31 = *((char **)t30);
    xsi_process_wait(t31, 1000LL);
    *((char **)t3) = &&LAB25;
    t0 = 1;
    goto LAB1;

LAB25:    xsi_set_current_line(142, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB26;
    goto LAB1;

LAB26:    goto LAB15;

LAB27:    xsi_set_current_line(146, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 6688);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(147, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 6848);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(148, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 7008);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(149, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 7168);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(150, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 7328);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(151, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 8448);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(152, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB28;
    goto LAB1;

LAB28:    xsi_set_current_line(153, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB29;
    t0 = 1;
    goto LAB1;

LAB29:    goto LAB12;

}

static int sp_AXI_MASTER_WDC(char *t1, char *t2)
{
    char t7[8];
    char t37[8];
    char t48[8];
    char t49[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(165, ng0);

LAB5:    xsi_set_current_line(166, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t1 + 17088);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    xsi_set_current_line(166, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 17248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(167, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t1 + 8928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(169, ng0);

LAB6:    t4 = (t1 + 8448);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB10;

LAB8:    if (*((unsigned int *)t8) == 0)
        goto LAB7;

LAB9:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;

LAB10:    t15 = (t7 + 4);
    t16 = (t6 + 4);
    t17 = *((unsigned int *)t6);
    t18 = (~(t17));
    *((unsigned int *)t7) = t18;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB12;

LAB11:    t23 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t23 & 1U);
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t24 & 1U);
    t25 = (t7 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(174, ng0);

LAB18:    t4 = (t1 + 17088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 11808);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    memset(t7, 0, 8);
    t16 = (t6 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB20;

LAB19:    t25 = (t15 + 4);
    if (*((unsigned int *)t25) != 0)
        goto LAB20;

LAB23:    if (*((unsigned int *)t6) > *((unsigned int *)t15))
        goto LAB22;

LAB21:    *((unsigned int *)t7) = 1;

LAB22:    t32 = (t7 + 4);
    t9 = *((unsigned int *)t32);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(208, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 9408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(209, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 9088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(210, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 8928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    *((unsigned int *)t7) = 1;
    goto LAB10;

LAB12:    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t16);
    *((unsigned int *)t7) = (t19 | t20);
    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t21 | t22);
    goto LAB11;

LAB13:    xsi_set_current_line(169, ng0);

LAB15:    xsi_set_current_line(170, ng0);
    t31 = (t2 + 88U);
    t32 = *((char **)t31);
    t33 = (t32 + 0U);
    xsi_wp_set_status(t33, 1);
    *((char **)t3) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(171, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB17;
    t0 = 1;
    goto LAB1;

LAB17:    goto LAB6;

LAB20:    t31 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB22;

LAB24:    xsi_set_current_line(174, ng0);

LAB26:    xsi_set_current_line(175, ng0);
    t33 = (t1 + 16928);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng5)));
    memset(t37, 0, 8);
    t38 = (t35 + 4);
    t39 = (t36 + 4);
    t17 = *((unsigned int *)t35);
    t18 = *((unsigned int *)t36);
    t19 = (t17 ^ t18);
    t20 = *((unsigned int *)t38);
    t21 = *((unsigned int *)t39);
    t22 = (t20 ^ t21);
    t23 = (t19 | t22);
    t24 = *((unsigned int *)t38);
    t26 = *((unsigned int *)t39);
    t27 = (t24 | t26);
    t28 = (~(t27));
    t29 = (t23 & t28);
    if (t29 != 0)
        goto LAB30;

LAB27:    if (t27 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t37) = 1;

LAB30:    t41 = (t37 + 4);
    t30 = *((unsigned int *)t41);
    t42 = (~(t30));
    t43 = *((unsigned int *)t37);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(178, ng0);
    *((int *)t37) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t4 = (t37 + 4);
    *((int *)t4) = 0;
    t5 = (t1 + 16928);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t14 = ((char*)((ng7)));
    memset(t48, 0, 8);
    xsi_vlog_unsigned_add(t48, 32, t8, 8, t14, 32);
    memset(t49, 0, 8);
    xsi_vlog_unsigned_mod(t49, 32, t37, 32, t48, 32);
    t15 = (t1 + 17408);
    xsi_vlogvar_assign_value(t15, t49, 0, 0, 32);

LAB33:    xsi_set_current_line(180, ng0);
    t4 = (t1 + 17408);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng5)));
    memset(t7, 0, 8);
    xsi_vlog_signed_equal(t7, 32, t6, 32, t8, 32);
    t14 = (t7 + 4);
    t9 = *((unsigned int *)t14);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(182, ng0);

LAB38:    xsi_set_current_line(183, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 9408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(184, ng0);
    xsi_set_current_line(184, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 17248);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB39:    t4 = (t1 + 17248);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 17408);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t6, 32, t15, 32);
    t16 = (t7 + 4);
    t9 = *((unsigned int *)t16);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(188, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 9408);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);

LAB36:    xsi_set_current_line(191, ng0);
    t4 = (t1 + 17088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 11808);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    memset(t7, 0, 8);
    t16 = (t6 + 4);
    t25 = (t15 + 4);
    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t15);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t16);
    t13 = *((unsigned int *)t25);
    t17 = (t12 ^ t13);
    t18 = (t11 | t17);
    t19 = *((unsigned int *)t16);
    t20 = *((unsigned int *)t25);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB48;

LAB45:    if (t21 != 0)
        goto LAB47;

LAB46:    *((unsigned int *)t7) = 1;

LAB48:    t32 = (t7 + 4);
    t24 = *((unsigned int *)t32);
    t26 = (~(t24));
    t27 = *((unsigned int *)t7);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(194, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 9088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);

LAB51:    xsi_set_current_line(195, ng0);
    t4 = (t1 + 16768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = (t1 + 8768);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    xsi_set_current_line(196, ng0);
    t4 = (t1 + 16768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng7)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t6, 32, t8, 32);
    t14 = (t1 + 16768);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 32);
    xsi_set_current_line(198, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB52;
    goto LAB1;

LAB29:    t40 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(176, ng0);
    t46 = ((char*)((ng5)));
    t47 = (t1 + 17408);
    xsi_vlogvar_assign_value(t47, t46, 0, 0, 32);
    goto LAB33;

LAB34:    xsi_set_current_line(180, ng0);

LAB37:    xsi_set_current_line(181, ng0);
    t15 = ((char*)((ng3)));
    t16 = (t1 + 9408);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 1);
    goto LAB36;

LAB40:    xsi_set_current_line(184, ng0);

LAB42:    xsi_set_current_line(185, ng0);
    t25 = (t2 + 88U);
    t31 = *((char **)t25);
    t32 = (t31 + 16U);
    xsi_wp_set_status(t32, 1);
    *((char **)t3) = &&LAB43;
    goto LAB1;

LAB43:    xsi_set_current_line(186, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB44;
    t0 = 1;
    goto LAB1;

LAB44:    xsi_set_current_line(184, ng0);
    t4 = (t1 + 17248);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng7)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t6, 32, t8, 32);
    t14 = (t1 + 17248);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 32);
    goto LAB39;

LAB47:    t31 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB48;

LAB49:    xsi_set_current_line(192, ng0);
    t33 = ((char*)((ng3)));
    t34 = (t1 + 9088);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 1);
    goto LAB51;

LAB52:    xsi_set_current_line(200, ng0);

LAB53:    t4 = (t1 + 12768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 & 1U);
    if (t13 != 0)
        goto LAB57;

LAB55:    if (*((unsigned int *)t8) == 0)
        goto LAB54;

LAB56:    t14 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t14) = 1;

LAB57:    t15 = (t7 + 4);
    t16 = (t6 + 4);
    t17 = *((unsigned int *)t6);
    t18 = (~(t17));
    *((unsigned int *)t7) = t18;
    *((unsigned int *)t15) = 0;
    if (*((unsigned int *)t16) != 0)
        goto LAB59;

LAB58:    t23 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t23 & 1U);
    t24 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t24 & 1U);
    t25 = (t7 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB60;

LAB61:    xsi_set_current_line(204, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB65;
    t0 = 1;
    goto LAB1;

LAB54:    *((unsigned int *)t7) = 1;
    goto LAB57;

LAB59:    t19 = *((unsigned int *)t7);
    t20 = *((unsigned int *)t16);
    *((unsigned int *)t7) = (t19 | t20);
    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t21 | t22);
    goto LAB58;

LAB60:    xsi_set_current_line(200, ng0);

LAB62:    xsi_set_current_line(201, ng0);
    t31 = (t2 + 56U);
    t32 = *((char **)t31);
    xsi_process_wait(t32, 1000LL);
    *((char **)t3) = &&LAB63;
    t0 = 1;
    goto LAB1;

LAB63:    xsi_set_current_line(202, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 48U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB64;
    goto LAB1;

LAB64:    goto LAB53;

LAB65:    xsi_set_current_line(206, ng0);
    t4 = (t1 + 17088);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t8 = ((char*)((ng7)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t6, 32, t8, 32);
    t14 = (t1 + 17088);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 32);
    goto LAB18;

}

static int sp_AXI_MASTER_WRC(char *t1, char *t2)
{
    char t10[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(219, ng0);

LAB5:    xsi_set_current_line(220, ng0);
    xsi_set_current_line(220, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t1 + 17728);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB6:    t4 = (t1 + 17728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 17568);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    t11 = (t6 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB8;

LAB7:    t12 = (t9 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB8;

LAB11:    if (*((unsigned int *)t6) < *((unsigned int *)t9))
        goto LAB9;

LAB10:    t14 = (t10 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t10);
    t18 = (t17 & t16);
    t19 = (t18 != 0);
    if (t19 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(225, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 9568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(228, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB17;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB8:    t13 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB10;

LAB9:    *((unsigned int *)t10) = 1;
    goto LAB10;

LAB12:    xsi_set_current_line(220, ng0);

LAB14:    xsi_set_current_line(221, ng0);
    t20 = (t2 + 88U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    xsi_wp_set_status(t22, 1);
    *((char **)t3) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(222, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB16;
    t0 = 1;
    goto LAB1;

LAB16:    xsi_set_current_line(220, ng0);
    t4 = (t1 + 17728);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng7)));
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 32, t6, 32, t7, 32);
    t8 = (t1 + 17728);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 32);
    goto LAB6;

LAB17:    xsi_set_current_line(230, ng0);

LAB18:    t4 = (t1 + 13408);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t10, 0, 8);
    t7 = (t6 + 4);
    t15 = *((unsigned int *)t7);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB22;

LAB20:    if (*((unsigned int *)t7) == 0)
        goto LAB19;

LAB21:    t8 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t8) = 1;

LAB22:    t9 = (t10 + 4);
    t11 = (t6 + 4);
    t23 = *((unsigned int *)t6);
    t24 = (~(t23));
    *((unsigned int *)t10) = t24;
    *((unsigned int *)t9) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB24;

LAB23:    t29 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t29 & 1U);
    t30 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t30 & 1U);
    t12 = (t10 + 4);
    t31 = *((unsigned int *)t12);
    t32 = (~(t31));
    t33 = *((unsigned int *)t10);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(234, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB30;
    t0 = 1;
    goto LAB1;

LAB19:    *((unsigned int *)t10) = 1;
    goto LAB22;

LAB24:    t25 = *((unsigned int *)t10);
    t26 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t25 | t26);
    t27 = *((unsigned int *)t9);
    t28 = *((unsigned int *)t11);
    *((unsigned int *)t9) = (t27 | t28);
    goto LAB23;

LAB25:    xsi_set_current_line(230, ng0);

LAB27:    xsi_set_current_line(231, ng0);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    xsi_process_wait(t14, 1000LL);
    *((char **)t3) = &&LAB28;
    t0 = 1;
    goto LAB1;

LAB28:    xsi_set_current_line(232, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB29;
    goto LAB1;

LAB29:    goto LAB18;

LAB30:    xsi_set_current_line(236, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 9568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(238, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 12128);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(239, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 48U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB31;
    goto LAB1;

LAB31:    xsi_set_current_line(240, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB32;
    t0 = 1;
    goto LAB1;

LAB32:    goto LAB4;

}

static int sp_AXI_Master_1Seq_Read(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
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
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2712);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(252, ng0);

LAB5:    xsi_set_current_line(253, ng0);
    t5 = (t1 + 17888);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 18048);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t1 + 18208);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t1 + 18368);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t1 + 18528);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t2 + 56U);
    t21 = *((char **)t20);
    t22 = (t2 + 56U);
    t23 = *((char **)t22);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t23, &&LAB6);
    t24 = (t2 + 56U);
    t25 = *((char **)t24);
    t26 = (t1 + 3144);
    t27 = xsi_create_subprogram_invocation(t25, 0, t1, t26, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t26, t27);
    t28 = (t1 + 18848);
    xsi_vlogvar_assign_value(t28, t7, 0, 0, 1);
    t29 = (t1 + 19008);
    xsi_vlogvar_assign_value(t29, t10, 0, 0, 32);
    t30 = (t1 + 19168);
    xsi_vlogvar_assign_value(t30, t13, 0, 0, 8);
    t31 = (t1 + 19328);
    xsi_vlogvar_assign_value(t31, t16, 0, 0, 3);
    t32 = (t1 + 19488);
    xsi_vlogvar_assign_value(t32, t19, 0, 0, 2);

LAB8:    t33 = (t2 + 64U);
    t34 = *((char **)t33);
    t35 = (t34 + 80U);
    t36 = *((char **)t35);
    t37 = (t36 + 272U);
    t38 = *((char **)t37);
    t39 = (t38 + 0U);
    t40 = *((char **)t39);
    t41 = ((int  (*)(char *, char *))t40)(t1, t34);
    if (t41 == -1)
        goto LAB9;

LAB10:    if (t41 != 0)
        goto LAB11;

LAB6:    t34 = (t1 + 3144);
    xsi_vlog_subprogram_popinvocation(t34);

LAB7:    t42 = (t2 + 64U);
    t43 = *((char **)t42);
    t42 = (t1 + 3144);
    t44 = (t2 + 56U);
    t45 = *((char **)t44);
    xsi_delete_subprogram_invocation(t42, t43, t1, t45, t2);
    xsi_set_current_line(254, ng0);
    t4 = (t1 + 18688);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t10, &&LAB12);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    t13 = (t1 + 3576);
    t14 = xsi_create_subprogram_invocation(t12, 0, t1, t13, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t13, t14);
    t15 = (t1 + 19648);
    xsi_vlogvar_assign_value(t15, t6, 0, 0, 8);

LAB14:    t16 = (t2 + 64U);
    t17 = *((char **)t16);
    t18 = (t17 + 80U);
    t19 = *((char **)t18);
    t20 = (t19 + 272U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    t23 = *((char **)t22);
    t41 = ((int  (*)(char *, char *))t23)(t1, t17);
    if (t41 == -1)
        goto LAB15;

LAB16:    if (t41 != 0)
        goto LAB17;

LAB12:    t17 = (t1 + 3576);
    xsi_vlog_subprogram_popinvocation(t17);

LAB13:    t24 = (t2 + 64U);
    t25 = *((char **)t24);
    t24 = (t1 + 3576);
    t26 = (t2 + 56U);
    t27 = *((char **)t26);
    xsi_delete_subprogram_invocation(t24, t25, t1, t27, t2);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t33 = (t2 + 48U);
    *((char **)t33) = &&LAB8;
    goto LAB1;

LAB15:    t0 = -1;
    goto LAB1;

LAB17:    t16 = (t2 + 48U);
    *((char **)t16) = &&LAB14;
    goto LAB1;

}

static int sp_AXI_MASTER_RAC(char *t1, char *t2)
{
    char t9[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3144);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(265, ng0);

LAB5:    xsi_set_current_line(266, ng0);
    t5 = (t1 + 18848);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 9728);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(267, ng0);
    t4 = (t1 + 19008);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 9888);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(268, ng0);
    t4 = (t1 + 19168);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 10048);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 8);
    xsi_set_current_line(269, ng0);
    t4 = (t1 + 19328);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 10208);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 3);
    xsi_set_current_line(270, ng0);
    t4 = (t1 + 19488);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 10368);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 2);
    xsi_set_current_line(271, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 11488);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(273, ng0);
    t4 = (t1 + 12288);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng4)));
    memset(t9, 0, 8);
    t8 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t8);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t9) = 1;

LAB9:    t24 = (t9 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB8:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(273, ng0);

LAB13:    xsi_set_current_line(274, ng0);
    t30 = (t1 + 19168);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t33 = (t1 + 12448);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 8);
    xsi_set_current_line(275, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 0U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(277, ng0);

LAB15:    t4 = (t1 + 13568);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t9, 0, 8);
    t7 = (t6 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB19;

LAB17:    if (*((unsigned int *)t7) == 0)
        goto LAB16;

LAB18:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;

LAB19:    t10 = (t9 + 4);
    t23 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t9) = t17;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t23) != 0)
        goto LAB21;

LAB20:    t22 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t22 & 1U);
    t25 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t25 & 1U);
    t24 = (t9 + 4);
    t26 = *((unsigned int *)t24);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t34 = (t29 != 0);
    if (t34 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(282, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB27;
    t0 = 1;
    goto LAB1;

LAB16:    *((unsigned int *)t9) = 1;
    goto LAB19;

LAB21:    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t23);
    *((unsigned int *)t9) = (t18 | t19);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t23);
    *((unsigned int *)t10) = (t20 | t21);
    goto LAB20;

LAB22:    xsi_set_current_line(277, ng0);

LAB24:    xsi_set_current_line(278, ng0);
    t30 = (t2 + 56U);
    t31 = *((char **)t30);
    xsi_process_wait(t31, 1000LL);
    *((char **)t3) = &&LAB25;
    t0 = 1;
    goto LAB1;

LAB25:    xsi_set_current_line(279, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB26;
    goto LAB1;

LAB26:    goto LAB15;

LAB27:    xsi_set_current_line(283, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 9728);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(284, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 9888);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(285, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 10048);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(286, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 10208);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    xsi_set_current_line(287, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 10368);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(288, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 11488);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(289, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB28;
    goto LAB1;

LAB28:    xsi_set_current_line(290, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000LL);
    *((char **)t3) = &&LAB29;
    t0 = 1;
    goto LAB1;

LAB29:    xsi_set_current_line(291, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 12288);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB12;

}

static int sp_AXI_MASTER_RDC(char *t1, char *t2)
{
    char t5[8];
    char t12[8];
    char t47[8];
    char t106[8];
    int t0;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    int t71;
    int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    char *t103;
    char *t104;
    char *t105;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    char *t129;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3576);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(300, ng0);

LAB5:    xsi_set_current_line(301, ng0);

LAB6:    t6 = (t1 + 14208);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t1 + 14528);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t11);
    t15 = (t13 & t14);
    *((unsigned int *)t12) = t15;
    t16 = (t8 + 4);
    t17 = (t11 + 4);
    t18 = (t12 + 4);
    t19 = *((unsigned int *)t16);
    t20 = *((unsigned int *)t17);
    t21 = (t19 | t20);
    *((unsigned int *)t18) = t21;
    t22 = *((unsigned int *)t18);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB7;

LAB8:
LAB9:    t44 = (t1 + 11648);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t48 = *((unsigned int *)t12);
    t49 = *((unsigned int *)t46);
    t50 = (t48 & t49);
    *((unsigned int *)t47) = t50;
    t51 = (t12 + 4);
    t52 = (t46 + 4);
    t53 = (t47 + 4);
    t54 = *((unsigned int *)t51);
    t55 = *((unsigned int *)t52);
    t56 = (t54 | t55);
    *((unsigned int *)t53) = t56;
    t57 = *((unsigned int *)t53);
    t58 = (t57 != 0);
    if (t58 == 1)
        goto LAB10;

LAB11:
LAB12:    memset(t5, 0, 8);
    t79 = (t47 + 4);
    t80 = *((unsigned int *)t79);
    t81 = (~(t80));
    t82 = *((unsigned int *)t47);
    t83 = (t82 & t81);
    t84 = (t83 & 1U);
    if (t84 != 0)
        goto LAB16;

LAB14:    if (*((unsigned int *)t79) == 0)
        goto LAB13;

LAB15:    t85 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t85) = 1;

LAB16:    t86 = (t5 + 4);
    t87 = (t47 + 4);
    t88 = *((unsigned int *)t47);
    t89 = (~(t88));
    *((unsigned int *)t5) = t89;
    *((unsigned int *)t86) = 0;
    if (*((unsigned int *)t87) != 0)
        goto LAB18;

LAB17:    t94 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t94 & 1U);
    t95 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t95 & 1U);
    t96 = (t5 + 4);
    t97 = *((unsigned int *)t96);
    t98 = (~(t97));
    t99 = *((unsigned int *)t5);
    t100 = (t99 & t98);
    t101 = (t100 != 0);
    if (t101 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(327, ng0);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    xsi_process_wait(t6, 1000LL);
    *((char **)t3) = &&LAB55;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB7:    t24 = *((unsigned int *)t12);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t12) = (t24 | t25);
    t26 = (t8 + 4);
    t27 = (t11 + 4);
    t28 = *((unsigned int *)t8);
    t29 = (~(t28));
    t30 = *((unsigned int *)t26);
    t31 = (~(t30));
    t32 = *((unsigned int *)t11);
    t33 = (~(t32));
    t34 = *((unsigned int *)t27);
    t35 = (~(t34));
    t36 = (t29 & t31);
    t37 = (t33 & t35);
    t38 = (~(t36));
    t39 = (~(t37));
    t40 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t40 & t38);
    t41 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t41 & t39);
    t42 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t42 & t38);
    t43 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t43 & t39);
    goto LAB9;

LAB10:    t59 = *((unsigned int *)t47);
    t60 = *((unsigned int *)t53);
    *((unsigned int *)t47) = (t59 | t60);
    t61 = (t12 + 4);
    t62 = (t46 + 4);
    t63 = *((unsigned int *)t12);
    t64 = (~(t63));
    t65 = *((unsigned int *)t61);
    t66 = (~(t65));
    t67 = *((unsigned int *)t46);
    t68 = (~(t67));
    t69 = *((unsigned int *)t62);
    t70 = (~(t69));
    t71 = (t64 & t66);
    t72 = (t68 & t70);
    t73 = (~(t71));
    t74 = (~(t72));
    t75 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t75 & t73);
    t76 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t76 & t74);
    t77 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t77 & t73);
    t78 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t78 & t74);
    goto LAB12;

LAB13:    *((unsigned int *)t5) = 1;
    goto LAB16;

LAB18:    t90 = *((unsigned int *)t5);
    t91 = *((unsigned int *)t87);
    *((unsigned int *)t5) = (t90 | t91);
    t92 = *((unsigned int *)t86);
    t93 = *((unsigned int *)t87);
    *((unsigned int *)t86) = (t92 | t93);
    goto LAB17;

LAB19:    xsi_set_current_line(301, ng0);

LAB21:    xsi_set_current_line(302, ng0);
    t102 = (t1 + 19648);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    t105 = ((char*)((ng5)));
    memset(t106, 0, 8);
    t107 = (t104 + 4);
    t108 = (t105 + 4);
    t109 = *((unsigned int *)t104);
    t110 = *((unsigned int *)t105);
    t111 = (t109 ^ t110);
    t112 = *((unsigned int *)t107);
    t113 = *((unsigned int *)t108);
    t114 = (t112 ^ t113);
    t115 = (t111 | t114);
    t116 = *((unsigned int *)t107);
    t117 = *((unsigned int *)t108);
    t118 = (t116 | t117);
    t119 = (~(t118));
    t120 = (t115 & t119);
    if (t120 != 0)
        goto LAB25;

LAB22:    if (t118 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t106) = 1;

LAB25:    t122 = (t106 + 4);
    t123 = *((unsigned int *)t122);
    t124 = (~(t123));
    t125 = *((unsigned int *)t106);
    t126 = (t125 & t124);
    t127 = (t126 != 0);
    if (t127 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(305, ng0);

LAB30:    xsi_set_current_line(306, ng0);
    *((int *)t12) = xsi_vlog_rtl_dist_uniform(0, 0, -2147483648, 2147483647);
    t4 = (t12 + 4);
    *((int *)t4) = 0;
    t6 = (t1 + 19648);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng7)));
    memset(t47, 0, 8);
    xsi_vlog_unsigned_add(t47, 32, t8, 8, t9, 32);
    memset(t106, 0, 8);
    xsi_vlog_unsigned_mod(t106, 32, t12, 32, t47, 32);
    t10 = (t1 + 19968);
    xsi_vlogvar_assign_value(t10, t106, 0, 0, 32);
    xsi_set_current_line(307, ng0);
    t4 = (t1 + 19968);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng5)));
    memset(t5, 0, 8);
    xsi_vlog_signed_equal(t5, 32, t7, 32, t8, 32);
    t9 = (t5 + 4);
    t13 = *((unsigned int *)t9);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t19 = (t15 & t14);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(310, ng0);
    t4 = ((char*)((ng4)));
    t6 = (t1 + 11648);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);

LAB33:
LAB28:    xsi_set_current_line(312, ng0);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    xsi_process_wait(t6, 1000LL);
    *((char **)t3) = &&LAB34;
    t0 = 1;
    goto LAB1;

LAB24:    t121 = (t106 + 4);
    *((unsigned int *)t106) = 1;
    *((unsigned int *)t121) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(302, ng0);

LAB29:    xsi_set_current_line(303, ng0);
    t128 = ((char*)((ng5)));
    t129 = (t1 + 19968);
    xsi_vlogvar_assign_value(t129, t128, 0, 0, 32);
    xsi_set_current_line(304, ng0);
    t4 = ((char*)((ng3)));
    t6 = (t1 + 11648);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    goto LAB28;

LAB31:    xsi_set_current_line(308, ng0);
    t10 = ((char*)((ng3)));
    t11 = (t1 + 11648);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 1);
    goto LAB33;

LAB34:    xsi_set_current_line(314, ng0);
    xsi_set_current_line(314, ng0);
    t4 = ((char*)((ng5)));
    t6 = (t1 + 19808);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 32);

LAB35:    t4 = (t1 + 19808);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 19968);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t7, 32, t10, 32);
    t11 = (t5 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (~(t13));
    t15 = *((unsigned int *)t5);
    t19 = (t15 & t14);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(319, ng0);
    t4 = ((char*)((ng3)));
    t6 = (t1 + 11648);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    xsi_set_current_line(320, ng0);
    t4 = (t2 + 88U);
    t6 = *((char **)t4);
    t7 = (t6 + 16U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB41;
    goto LAB1;

LAB36:    xsi_set_current_line(314, ng0);

LAB38:    xsi_set_current_line(315, ng0);
    t16 = (t2 + 88U);
    t17 = *((char **)t16);
    t18 = (t17 + 0U);
    xsi_wp_set_status(t18, 1);
    *((char **)t3) = &&LAB39;
    goto LAB1;

LAB39:    xsi_set_current_line(316, ng0);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    xsi_process_wait(t6, 1000LL);
    *((char **)t3) = &&LAB40;
    t0 = 1;
    goto LAB1;

LAB40:    xsi_set_current_line(314, ng0);
    t4 = (t1 + 19808);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng7)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t7, 32, t8, 32);
    t9 = (t1 + 19808);
    xsi_vlogvar_assign_value(t9, t5, 0, 0, 32);
    goto LAB35;

LAB41:    xsi_set_current_line(321, ng0);

LAB42:    t4 = (t1 + 14528);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memset(t5, 0, 8);
    t8 = (t7 + 4);
    t13 = *((unsigned int *)t8);
    t14 = (~(t13));
    t15 = *((unsigned int *)t7);
    t19 = (t15 & t14);
    t20 = (t19 & 1U);
    if (t20 != 0)
        goto LAB46;

LAB44:    if (*((unsigned int *)t8) == 0)
        goto LAB43;

LAB45:    t9 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t9) = 1;

LAB46:    t10 = (t5 + 4);
    t11 = (t7 + 4);
    t21 = *((unsigned int *)t7);
    t22 = (~(t21));
    *((unsigned int *)t5) = t22;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB48;

LAB47:    t29 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t29 & 1U);
    t30 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t30 & 1U);
    t16 = (t5 + 4);
    t31 = *((unsigned int *)t16);
    t32 = (~(t31));
    t33 = *((unsigned int *)t5);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(325, ng0);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    xsi_process_wait(t6, 1000LL);
    *((char **)t3) = &&LAB54;
    t0 = 1;
    goto LAB1;

LAB43:    *((unsigned int *)t5) = 1;
    goto LAB46;

LAB48:    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t11);
    *((unsigned int *)t5) = (t23 | t24);
    t25 = *((unsigned int *)t10);
    t28 = *((unsigned int *)t11);
    *((unsigned int *)t10) = (t25 | t28);
    goto LAB47;

LAB49:    xsi_set_current_line(321, ng0);

LAB51:    xsi_set_current_line(322, ng0);
    t17 = (t2 + 56U);
    t18 = *((char **)t17);
    xsi_process_wait(t18, 1000LL);
    *((char **)t3) = &&LAB52;
    t0 = 1;
    goto LAB1;

LAB52:    xsi_set_current_line(323, ng0);
    t4 = (t2 + 88U);
    t6 = *((char **)t4);
    t7 = (t6 + 32U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB53;
    goto LAB1;

LAB53:    goto LAB42;

LAB54:    goto LAB6;

LAB55:    xsi_set_current_line(329, ng0);
    t4 = ((char*)((ng4)));
    t6 = (t1 + 11648);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    xsi_set_current_line(330, ng0);
    t4 = ((char*)((ng4)));
    t6 = (t1 + 12288);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 1);
    xsi_set_current_line(331, ng0);
    t4 = (t2 + 88U);
    t6 = *((char **)t4);
    t7 = (t6 + 48U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB56;
    goto LAB1;

LAB56:    xsi_set_current_line(332, ng0);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    xsi_process_wait(t6, 1000LL);
    *((char **)t3) = &&LAB57;
    t0 = 1;
    goto LAB1;

LAB57:    goto LAB4;

}

static void Always_84_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 20888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 24184);
    *((int *)t2) = 1;
    t3 = (t0 + 20920);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(84, ng0);
    t4 = (t0 + 4368U);
    t5 = *((char **)t4);
    t4 = (t0 + 12608);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 1000LL);
    goto LAB2;

}

static void Always_85_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 21136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 24200);
    *((int *)t2) = 1;
    t3 = (t0 + 21168);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(85, ng0);
    t4 = (t0 + 4528U);
    t5 = *((char **)t4);
    t4 = (t0 + 12768);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 1000LL);
    goto LAB2;

}

static void Always_86_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 21384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 24216);
    *((int *)t2) = 1;
    t3 = (t0 + 21416);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(86, ng0);
    t4 = (t0 + 4688U);
    t5 = *((char **)t4);
    t4 = (t0 + 12928);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 1000LL);
    goto LAB2;

}

static void Always_87_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 21632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 24232);
    *((int *)t2) = 1;
    t3 = (t0 + 21664);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(87, ng0);
    t4 = (t0 + 4848U);
    t5 = *((char **)t4);
    t4 = (t0 + 13088);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 2, 1000LL);
    goto LAB2;

}

static void Always_88_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 21880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 24248);
    *((int *)t2) = 1;
    t3 = (t0 + 21912);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(88, ng0);
    t4 = (t0 + 5008U);
    t5 = *((char **)t4);
    t4 = (t0 + 13248);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 1000LL);
    goto LAB2;

}

static void Always_89_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 22128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 24264);
    *((int *)t2) = 1;
    t3 = (t0 + 22160);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(89, ng0);
    t4 = (t0 + 5168U);
    t5 = *((char **)t4);
    t4 = (t0 + 13408);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 1000LL);
    goto LAB2;

}

static void Always_90_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 22376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 24280);
    *((int *)t2) = 1;
    t3 = (t0 + 22408);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(90, ng0);
    t4 = (t0 + 5328U);
    t5 = *((char **)t4);
    t4 = (t0 + 13568);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 1000LL);
    goto LAB2;

}

static void Always_91_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 22624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 24296);
    *((int *)t2) = 1;
    t3 = (t0 + 22656);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(91, ng0);
    t4 = (t0 + 5488U);
    t5 = *((char **)t4);
    t4 = (t0 + 13728);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 1000LL);
    goto LAB2;

}

static void Always_92_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 22872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 24312);
    *((int *)t2) = 1;
    t3 = (t0 + 22904);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(92, ng0);
    t4 = (t0 + 5648U);
    t5 = *((char **)t4);
    t4 = (t0 + 13888);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 1000LL);
    goto LAB2;

}

static void Always_93_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 23120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 24328);
    *((int *)t2) = 1;
    t3 = (t0 + 23152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(93, ng0);
    t4 = (t0 + 5808U);
    t5 = *((char **)t4);
    t4 = (t0 + 14048);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 2, 1000LL);
    goto LAB2;

}

static void Always_94_10(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 23368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 24344);
    *((int *)t2) = 1;
    t3 = (t0 + 23400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(94, ng0);
    t4 = (t0 + 5968U);
    t5 = *((char **)t4);
    t4 = (t0 + 14208);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 1000LL);
    goto LAB2;

}

static void Always_95_11(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 23616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 24360);
    *((int *)t2) = 1;
    t3 = (t0 + 23648);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(95, ng0);
    t4 = (t0 + 6128U);
    t5 = *((char **)t4);
    t4 = (t0 + 14368);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 1000LL);
    goto LAB2;

}

static void Always_96_12(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 23864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 24376);
    *((int *)t2) = 1;
    t3 = (t0 + 23896);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(96, ng0);
    t4 = (t0 + 6288U);
    t5 = *((char **)t4);
    t4 = (t0 + 14528);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 1000LL);
    goto LAB2;

}

static void Forked_112_13(char *t0)
{
    char t45[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t46;

LAB0:    t1 = (t0 + 72U);
    t2 = *((char **)t1);
    t3 = xsi_get_forkjoin_process_inside_subprogram(t0, 0);
    t4 = (t3 + 192U);
    t5 = *((char **)t4);
    if (t5 == 0)
        goto LAB2;

LAB3:    goto *t5;

LAB2:    t5 = xsi_get_forkjoin_process_inside_subprogram(t0, 0);
    xsi_vlog_process_setdisablestate(t5, &&LAB4);
    xsi_set_current_line(112, ng0);
    t6 = (t2 + 14688);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t2 + 14848);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t2 + 15008);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t2 + 15168);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t2 + 15328);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = xsi_get_forkjoin_process_inside_subprogram(t0, 0);
    t22 = (t2 + 1416);
    t23 = xsi_create_subprogram_invocation(t21, 0, t2, t22, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t22, t23);
    t24 = (t2 + 15968);
    xsi_vlogvar_assign_value(t24, t8, 0, 0, 1);
    t25 = (t2 + 16128);
    xsi_vlogvar_assign_value(t25, t11, 0, 0, 32);
    t26 = (t2 + 16288);
    xsi_vlogvar_assign_value(t26, t14, 0, 0, 8);
    t27 = (t2 + 16448);
    xsi_vlogvar_assign_value(t27, t17, 0, 0, 3);
    t28 = (t2 + 16608);
    xsi_vlogvar_assign_value(t28, t20, 0, 0, 2);

LAB7:    t29 = xsi_get_forkjoin_process_inside_subprogram(t0, 0);
    t30 = (t29 + 96U);
    t31 = *((char **)t30);
    t32 = (t31 + 80U);
    t33 = *((char **)t32);
    t34 = (t33 + 272U);
    t35 = *((char **)t34);
    t36 = (t35 + 0U);
    t37 = *((char **)t36);
    t38 = ((int  (*)(char *, char *))t37)(t2, t31);

LAB9:    if (t38 != 0)
        goto LAB10;

LAB5:    t39 = (t2 + 1416);
    xsi_vlog_subprogram_popinvocation(t39);

LAB6:    t40 = xsi_get_forkjoin_process_inside_subprogram(t0, 0);
    t41 = (t40 + 96U);
    t42 = *((char **)t41);
    t41 = (t2 + 1416);
    t43 = xsi_get_forkjoin_process_inside_subprogram(t0, 0);
    t44 = 0;
    xsi_delete_subprogram_invocation(t41, t42, t2, t43, t44);

LAB4:    t1 = xsi_get_forkvar_inside_subprogram_invocation(t0, 0);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    memcpy(t45, t5, 8);
    t46 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t46 - 1);
    xsi_vlogvar_assign_value(t1, t45, 0, 0, 32);

LAB1:    return;
LAB8:;
LAB10:    t30 = xsi_get_forkjoin_process_inside_subprogram(t0, 0);
    t31 = (t30 + 192U);
    *((char **)t31) = &&LAB7;
    goto LAB1;

}

static void Forked_113_14(char *t0)
{
    char t33[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned int t34;

LAB0:    t1 = (t0 + 72U);
    t2 = *((char **)t1);
    t3 = xsi_get_forkjoin_process_inside_subprogram(t0, 1);
    t4 = (t3 + 192U);
    t5 = *((char **)t4);
    if (t5 == 0)
        goto LAB2;

LAB3:    goto *t5;

LAB2:    t5 = xsi_get_forkjoin_process_inside_subprogram(t0, 1);
    xsi_vlog_process_setdisablestate(t5, &&LAB4);
    xsi_set_current_line(113, ng0);
    t6 = (t2 + 15488);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t2 + 15808);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = xsi_get_forkjoin_process_inside_subprogram(t0, 1);
    t13 = (t2 + 1848);
    t14 = xsi_create_subprogram_invocation(t12, 0, t2, t13, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t13, t14);
    t15 = (t2 + 16768);
    xsi_vlogvar_assign_value(t15, t8, 0, 0, 32);
    t16 = (t2 + 16928);
    xsi_vlogvar_assign_value(t16, t11, 0, 0, 8);

LAB7:    t17 = xsi_get_forkjoin_process_inside_subprogram(t0, 1);
    t18 = (t17 + 96U);
    t19 = *((char **)t18);
    t20 = (t19 + 80U);
    t21 = *((char **)t20);
    t22 = (t21 + 272U);
    t23 = *((char **)t22);
    t24 = (t23 + 0U);
    t25 = *((char **)t24);
    t26 = ((int  (*)(char *, char *))t25)(t2, t19);

LAB9:    if (t26 != 0)
        goto LAB10;

LAB5:    t27 = (t2 + 1848);
    xsi_vlog_subprogram_popinvocation(t27);

LAB6:    t28 = xsi_get_forkjoin_process_inside_subprogram(t0, 1);
    t29 = (t28 + 96U);
    t30 = *((char **)t29);
    t29 = (t2 + 1848);
    t31 = xsi_get_forkjoin_process_inside_subprogram(t0, 1);
    t32 = 0;
    xsi_delete_subprogram_invocation(t29, t30, t2, t31, t32);

LAB4:    t1 = xsi_get_forkvar_inside_subprogram_invocation(t0, 0);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    memcpy(t33, t5, 8);
    t34 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t34 - 1);
    xsi_vlogvar_assign_value(t1, t33, 0, 0, 32);

LAB1:    return;
LAB8:;
LAB10:    t18 = xsi_get_forkjoin_process_inside_subprogram(t0, 1);
    t19 = (t18 + 192U);
    *((char **)t19) = &&LAB7;
    goto LAB1;

}


extern void work_m_00000000003645158002_2867867759_init()
{
	static char *pe[] = {(void *)Always_84_0,(void *)Always_85_1,(void *)Always_86_2,(void *)Always_87_3,(void *)Always_88_4,(void *)Always_89_5,(void *)Always_90_6,(void *)Always_91_7,(void *)Always_92_8,(void *)Always_93_9,(void *)Always_94_10,(void *)Always_95_11,(void *)Always_96_12};
	static char *se[] = {(void *)sp_AXI_Master_1Seq_Write,(void *)sp_AXI_MASTER_WAC,(void *)sp_AXI_MASTER_WDC,(void *)sp_AXI_MASTER_WRC,(void *)sp_AXI_Master_1Seq_Read,(void *)sp_AXI_MASTER_RAC,(void *)sp_AXI_MASTER_RDC};
	xsi_register_didat("work_m_00000000003645158002_2867867759", "isim/led4_axi_lite_slave_tb_isim_beh.exe.sim/work/m_00000000003645158002_2867867759.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
