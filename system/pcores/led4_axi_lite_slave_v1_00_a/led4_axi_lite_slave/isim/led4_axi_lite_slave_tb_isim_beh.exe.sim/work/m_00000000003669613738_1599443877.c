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
static const char *ng0 = "D:/HDL/FndtnISEWork/Zynq-7000/ZYBO/ZYBO_LED_test/system/pcores/led4_axi_lite_slave_v1_00_a/led4_axi_lite_slave/simulaiton/AXI4_Lite_Master_BFM.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {1U, 0U};



static int sp_AXI_LiteM_1Seq_Write(char *t1, char *t2)
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
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    int t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2344);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(116, ng0);

LAB5:    xsi_set_current_line(117, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 10608);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng1)));
    t10 = ((char*)((ng2)));
    t11 = ((char*)((ng3)));
    t12 = (t1 + 10768);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t1 + 10928);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 11088);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t2 + 56U);
    t22 = *((char **)t21);
    t23 = (t2 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t24, &&LAB6);
    t25 = (t2 + 56U);
    t26 = *((char **)t25);
    t27 = (t1 + 18740);
    t28 = *((char **)t27);
    t29 = (t1 + 18812);
    t30 = xsi_create_subprogram_invocation(t26, 0, *((char **)t29), ((char*)(t28)), 0, t2);
    xsi_vlog_subprogram_pushinvocation(((char*)(t28)), t30);
    t31 = (t1 + 18748);
    t32 = *((char **)t31);
    xsi_vlogvar_assign_value(((char*)(t32)), t5, 0, 0, 1);
    t33 = (t1 + 18756);
    t34 = *((char **)t33);
    xsi_vlogvar_assign_value(((char*)(t34)), t8, 0, 0, 32);
    t35 = (t1 + 18764);
    t36 = *((char **)t35);
    xsi_vlogvar_assign_value(((char*)(t36)), t9, 0, 0, 8);
    t37 = (t1 + 18772);
    t38 = *((char **)t37);
    xsi_vlogvar_assign_value(((char*)(t38)), t10, 0, 0, 3);
    t39 = (t1 + 18780);
    t40 = *((char **)t39);
    xsi_vlogvar_assign_value(((char*)(t40)), t11, 0, 0, 2);
    t41 = (t1 + 18788);
    t42 = *((char **)t41);
    xsi_vlogvar_assign_value(((char*)(t42)), t14, 0, 0, 32);
    t43 = (t1 + 18796);
    t44 = *((char **)t43);
    xsi_vlogvar_assign_value(((char*)(t44)), t17, 0, 0, 8);
    t45 = (t1 + 18804);
    t46 = *((char **)t45);
    xsi_vlogvar_assign_value(((char*)(t46)), t20, 0, 0, 8);

LAB8:    t47 = (t2 + 64U);
    t48 = *((char **)t47);
    t49 = (t48 + 80U);
    t50 = *((char **)t49);
    t51 = (t50 + 272U);
    t52 = *((char **)t51);
    t53 = (t52 + 0U);
    t54 = *((char **)t53);
    t55 = (t1 + 18812);
    t56 = ((int  (*)(char *, char *))t54)(*((char **)t55), t48);
    if (t56 == -1)
        goto LAB9;

LAB10:    if (t56 != 0)
        goto LAB11;

LAB6:    t48 = (t1 + 18852);
    t57 = *((char **)t48);
    xsi_vlog_subprogram_popinvocation(((char*)(t57)));

LAB7:    t58 = (t2 + 64U);
    t59 = *((char **)t58);
    t58 = (t1 + 18852);
    t60 = *((char **)t58);
    t61 = (t2 + 56U);
    t62 = *((char **)t61);
    xsi_delete_subprogram_invocation(((char*)(t60)), t59, t1, t62, t2);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t47 = (t2 + 48U);
    *((char **)t47) = &&LAB8;
    goto LAB1;

}

static int sp_AXI_LiteM_WAC(char *t1, char *t2)
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
    char *t46;
    char *t47;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2776);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(124, ng0);

LAB5:    xsi_set_current_line(125, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 11248);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng1)));
    t10 = ((char*)((ng2)));
    t11 = ((char*)((ng3)));
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    t14 = (t2 + 56U);
    t15 = *((char **)t14);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t15, &&LAB6);
    t16 = (t2 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 18956);
    t19 = *((char **)t18);
    t20 = (t1 + 19004);
    t21 = xsi_create_subprogram_invocation(t17, 0, *((char **)t20), ((char*)(t19)), 0, t2);
    xsi_vlog_subprogram_pushinvocation(((char*)(t19)), t21);
    t22 = (t1 + 18964);
    t23 = *((char **)t22);
    xsi_vlogvar_assign_value(((char*)(t23)), t5, 0, 0, 1);
    t24 = (t1 + 18972);
    t25 = *((char **)t24);
    xsi_vlogvar_assign_value(((char*)(t25)), t8, 0, 0, 32);
    t26 = (t1 + 18980);
    t27 = *((char **)t26);
    xsi_vlogvar_assign_value(((char*)(t27)), t9, 0, 0, 8);
    t28 = (t1 + 18988);
    t29 = *((char **)t28);
    xsi_vlogvar_assign_value(((char*)(t29)), t10, 0, 0, 3);
    t30 = (t1 + 18996);
    t31 = *((char **)t30);
    xsi_vlogvar_assign_value(((char*)(t31)), t11, 0, 0, 2);

LAB8:    t32 = (t2 + 64U);
    t33 = *((char **)t32);
    t34 = (t33 + 80U);
    t35 = *((char **)t34);
    t36 = (t35 + 272U);
    t37 = *((char **)t36);
    t38 = (t37 + 0U);
    t39 = *((char **)t38);
    t40 = (t1 + 19004);
    t41 = ((int  (*)(char *, char *))t39)(*((char **)t40), t33);
    if (t41 == -1)
        goto LAB9;

LAB10:    if (t41 != 0)
        goto LAB11;

LAB6:    t33 = (t1 + 19036);
    t42 = *((char **)t33);
    xsi_vlog_subprogram_popinvocation(((char*)(t42)));

LAB7:    t43 = (t2 + 64U);
    t44 = *((char **)t43);
    t43 = (t1 + 19036);
    t45 = *((char **)t43);
    t46 = (t2 + 56U);
    t47 = *((char **)t46);
    xsi_delete_subprogram_invocation(((char*)(t45)), t44, t1, t47, t2);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t32 = (t2 + 48U);
    *((char **)t32) = &&LAB8;
    goto LAB1;

}

static int sp_AXI_LiteM_WDC(char *t1, char *t2)
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
    int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3208);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(135, ng0);

LAB5:    xsi_set_current_line(136, ng0);
    t5 = (t1 + 11408);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 11568);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t14, &&LAB6);
    t15 = (t2 + 56U);
    t16 = *((char **)t15);
    t17 = (t1 + 19116);
    t18 = *((char **)t17);
    t19 = (t1 + 19140);
    t20 = xsi_create_subprogram_invocation(t16, 0, *((char **)t19), ((char*)(t18)), 0, t2);
    xsi_vlog_subprogram_pushinvocation(((char*)(t18)), t20);
    t21 = (t1 + 19124);
    t22 = *((char **)t21);
    xsi_vlogvar_assign_value(((char*)(t22)), t7, 0, 0, 32);
    t23 = (t1 + 19132);
    t24 = *((char **)t23);
    xsi_vlogvar_assign_value(((char*)(t24)), t10, 0, 0, 8);

LAB8:    t25 = (t2 + 64U);
    t26 = *((char **)t25);
    t27 = (t26 + 80U);
    t28 = *((char **)t27);
    t29 = (t28 + 272U);
    t30 = *((char **)t29);
    t31 = (t30 + 0U);
    t32 = *((char **)t31);
    t33 = (t1 + 19140);
    t34 = ((int  (*)(char *, char *))t32)(*((char **)t33), t26);
    if (t34 == -1)
        goto LAB9;

LAB10:    if (t34 != 0)
        goto LAB11;

LAB6:    t26 = (t1 + 19172);
    t35 = *((char **)t26);
    xsi_vlog_subprogram_popinvocation(((char*)(t35)));

LAB7:    t36 = (t2 + 64U);
    t37 = *((char **)t36);
    t36 = (t1 + 19172);
    t38 = *((char **)t36);
    t39 = (t2 + 56U);
    t40 = *((char **)t39);
    xsi_delete_subprogram_invocation(((char*)(t38)), t37, t1, t40, t2);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t25 = (t2 + 48U);
    *((char **)t25) = &&LAB8;
    goto LAB1;

}

static int sp_AXI_LiteM_WRC(char *t1, char *t2)
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
    int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 3640);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(144, ng0);

LAB5:    xsi_set_current_line(145, ng0);
    t5 = (t1 + 11728);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t11, &&LAB6);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    t14 = (t1 + 19228);
    t15 = *((char **)t14);
    t16 = (t1 + 19244);
    t17 = xsi_create_subprogram_invocation(t13, 0, *((char **)t16), ((char*)(t15)), 0, t2);
    xsi_vlog_subprogram_pushinvocation(((char*)(t15)), t17);
    t18 = (t1 + 19236);
    t19 = *((char **)t18);
    xsi_vlogvar_assign_value(((char*)(t19)), t7, 0, 0, 8);

LAB8:    t20 = (t2 + 64U);
    t21 = *((char **)t20);
    t22 = (t21 + 80U);
    t23 = *((char **)t22);
    t24 = (t23 + 272U);
    t25 = *((char **)t24);
    t26 = (t25 + 0U);
    t27 = *((char **)t26);
    t28 = (t1 + 19244);
    t29 = ((int  (*)(char *, char *))t27)(*((char **)t28), t21);
    if (t29 == -1)
        goto LAB9;

LAB10:    if (t29 != 0)
        goto LAB11;

LAB6:    t21 = (t1 + 19276);
    t30 = *((char **)t21);
    xsi_vlog_subprogram_popinvocation(((char*)(t30)));

LAB7:    t31 = (t2 + 64U);
    t32 = *((char **)t31);
    t31 = (t1 + 19276);
    t33 = *((char **)t31);
    t34 = (t2 + 56U);
    t35 = *((char **)t34);
    xsi_delete_subprogram_invocation(((char*)(t33)), t32, t1, t35, t2);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t20 = (t2 + 48U);
    *((char **)t20) = &&LAB8;
    goto LAB1;

}

static int sp_AXI_LiteM_1Seq_Read(char *t1, char *t2)
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
    char *t46;
    char *t47;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 4072);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(153, ng0);

LAB5:    xsi_set_current_line(154, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 11888);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng1)));
    t10 = ((char*)((ng2)));
    t11 = ((char*)((ng3)));
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    t14 = (t2 + 56U);
    t15 = *((char **)t14);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t15, &&LAB6);
    t16 = (t2 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 19332);
    t19 = *((char **)t18);
    t20 = (t1 + 19388);
    t21 = xsi_create_subprogram_invocation(t17, 0, *((char **)t20), ((char*)(t19)), 0, t2);
    xsi_vlog_subprogram_pushinvocation(((char*)(t19)), t21);
    t22 = (t1 + 19340);
    t23 = *((char **)t22);
    xsi_vlogvar_assign_value(((char*)(t23)), t5, 0, 0, 1);
    t24 = (t1 + 19348);
    t25 = *((char **)t24);
    xsi_vlogvar_assign_value(((char*)(t25)), t8, 0, 0, 32);
    t26 = (t1 + 19356);
    t27 = *((char **)t26);
    xsi_vlogvar_assign_value(((char*)(t27)), t9, 0, 0, 8);
    t28 = (t1 + 19364);
    t29 = *((char **)t28);
    xsi_vlogvar_assign_value(((char*)(t29)), t10, 0, 0, 3);
    t30 = (t1 + 19372);
    t31 = *((char **)t30);
    xsi_vlogvar_assign_value(((char*)(t31)), t11, 0, 0, 2);

LAB8:    t32 = (t2 + 64U);
    t33 = *((char **)t32);
    t34 = (t33 + 80U);
    t35 = *((char **)t34);
    t36 = (t35 + 272U);
    t37 = *((char **)t36);
    t38 = (t37 + 0U);
    t39 = *((char **)t38);
    t40 = (t1 + 19388);
    t41 = ((int  (*)(char *, char *))t39)(*((char **)t40), t33);
    if (t41 == -1)
        goto LAB9;

LAB10:    if (t41 != 0)
        goto LAB11;

LAB6:    t33 = (t1 + 19428);
    t42 = *((char **)t33);
    xsi_vlog_subprogram_popinvocation(((char*)(t42)));

LAB7:    t43 = (t2 + 64U);
    t44 = *((char **)t43);
    t43 = (t1 + 19428);
    t45 = *((char **)t43);
    t46 = (t2 + 56U);
    t47 = *((char **)t46);
    xsi_delete_subprogram_invocation(((char*)(t45)), t44, t1, t47, t2);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t32 = (t2 + 48U);
    *((char **)t32) = &&LAB8;
    goto LAB1;

}

static int sp_AXI_LiteM_RAC(char *t1, char *t2)
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
    char *t46;
    char *t47;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 4504);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(161, ng0);

LAB5:    xsi_set_current_line(162, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 12208);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng1)));
    t10 = ((char*)((ng2)));
    t11 = ((char*)((ng3)));
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    t14 = (t2 + 56U);
    t15 = *((char **)t14);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t15, &&LAB6);
    t16 = (t2 + 56U);
    t17 = *((char **)t16);
    t18 = (t1 + 19516);
    t19 = *((char **)t18);
    t20 = (t1 + 19564);
    t21 = xsi_create_subprogram_invocation(t17, 0, *((char **)t20), ((char*)(t19)), 0, t2);
    xsi_vlog_subprogram_pushinvocation(((char*)(t19)), t21);
    t22 = (t1 + 19524);
    t23 = *((char **)t22);
    xsi_vlogvar_assign_value(((char*)(t23)), t5, 0, 0, 1);
    t24 = (t1 + 19532);
    t25 = *((char **)t24);
    xsi_vlogvar_assign_value(((char*)(t25)), t8, 0, 0, 32);
    t26 = (t1 + 19540);
    t27 = *((char **)t26);
    xsi_vlogvar_assign_value(((char*)(t27)), t9, 0, 0, 8);
    t28 = (t1 + 19548);
    t29 = *((char **)t28);
    xsi_vlogvar_assign_value(((char*)(t29)), t10, 0, 0, 3);
    t30 = (t1 + 19556);
    t31 = *((char **)t30);
    xsi_vlogvar_assign_value(((char*)(t31)), t11, 0, 0, 2);

LAB8:    t32 = (t2 + 64U);
    t33 = *((char **)t32);
    t34 = (t33 + 80U);
    t35 = *((char **)t34);
    t36 = (t35 + 272U);
    t37 = *((char **)t36);
    t38 = (t37 + 0U);
    t39 = *((char **)t38);
    t40 = (t1 + 19564);
    t41 = ((int  (*)(char *, char *))t39)(*((char **)t40), t33);
    if (t41 == -1)
        goto LAB9;

LAB10:    if (t41 != 0)
        goto LAB11;

LAB6:    t33 = (t1 + 19596);
    t42 = *((char **)t33);
    xsi_vlog_subprogram_popinvocation(((char*)(t42)));

LAB7:    t43 = (t2 + 64U);
    t44 = *((char **)t43);
    t43 = (t1 + 19596);
    t45 = *((char **)t43);
    t46 = (t2 + 56U);
    t47 = *((char **)t46);
    xsi_delete_subprogram_invocation(((char*)(t45)), t44, t1, t47, t2);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t32 = (t2 + 48U);
    *((char **)t32) = &&LAB8;
    goto LAB1;

}

static int sp_AXI_LiteM_RDC(char *t1, char *t2)
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
    int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 4936);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(169, ng0);

LAB5:    xsi_set_current_line(170, ng0);
    t5 = (t1 + 12368);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t2 + 56U);
    t9 = *((char **)t8);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t11, &&LAB6);
    t12 = (t2 + 56U);
    t13 = *((char **)t12);
    t14 = (t1 + 19676);
    t15 = *((char **)t14);
    t16 = (t1 + 19692);
    t17 = xsi_create_subprogram_invocation(t13, 0, *((char **)t16), ((char*)(t15)), 0, t2);
    xsi_vlog_subprogram_pushinvocation(((char*)(t15)), t17);
    t18 = (t1 + 19684);
    t19 = *((char **)t18);
    xsi_vlogvar_assign_value(((char*)(t19)), t7, 0, 0, 8);

LAB8:    t20 = (t2 + 64U);
    t21 = *((char **)t20);
    t22 = (t21 + 80U);
    t23 = *((char **)t22);
    t24 = (t23 + 272U);
    t25 = *((char **)t24);
    t26 = (t25 + 0U);
    t27 = *((char **)t26);
    t28 = (t1 + 19692);
    t29 = ((int  (*)(char *, char *))t27)(*((char **)t28), t21);
    if (t29 == -1)
        goto LAB9;

LAB10:    if (t29 != 0)
        goto LAB11;

LAB6:    t21 = (t1 + 19724);
    t30 = *((char **)t21);
    xsi_vlog_subprogram_popinvocation(((char*)(t30)));

LAB7:    t31 = (t2 + 64U);
    t32 = *((char **)t31);
    t31 = (t1 + 19724);
    t33 = *((char **)t31);
    t34 = (t2 + 56U);
    t35 = *((char **)t34);
    xsi_delete_subprogram_invocation(((char*)(t33)), t32, t1, t35, t2);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB9:    t0 = -1;
    goto LAB1;

LAB11:    t20 = (t2 + 48U);
    *((char **)t20) = &&LAB8;
    goto LAB1;

}

static void implSig1_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 13288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 14664);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void implSig2_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 13536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 14728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void implSig3_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 13784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 14792);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void implSig4_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 14032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng3)));
    t3 = (t0 + 14856);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void implSig5_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 14280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 14920);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}


extern void work_m_00000000003669613738_1599443877_init()
{
	static char *pe[] = {(void *)implSig1_execute,(void *)implSig2_execute,(void *)implSig3_execute,(void *)implSig4_execute,(void *)implSig5_execute};
	static char *se[] = {(void *)sp_AXI_LiteM_1Seq_Write,(void *)sp_AXI_LiteM_WAC,(void *)sp_AXI_LiteM_WDC,(void *)sp_AXI_LiteM_WRC,(void *)sp_AXI_LiteM_1Seq_Read,(void *)sp_AXI_LiteM_RAC,(void *)sp_AXI_LiteM_RDC};
	xsi_register_didat("work_m_00000000003669613738_1599443877", "isim/led4_axi_lite_slave_tb_isim_beh.exe.sim/work/m_00000000003669613738_1599443877.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
