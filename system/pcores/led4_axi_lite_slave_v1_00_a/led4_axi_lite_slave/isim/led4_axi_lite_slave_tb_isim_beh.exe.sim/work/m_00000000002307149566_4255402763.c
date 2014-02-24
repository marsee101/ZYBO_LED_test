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
static const char *ng0 = "D:/HDL/FndtnISEWork/Zynq-7000/ZYBO/ZYBO_LED_test/system/pcores/led4_axi_lite_slave_v1_00_a/led4_axi_lite_slave/led4_axi_lite_slave_tb.v";
static unsigned int ng1[] = {4U, 0U};
static unsigned int ng2[] = {10U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {12U, 0U};
static unsigned int ng5[] = {8U, 0U};
static int ng6[] = {1, 0};
static int ng7[] = {2, 0};
static unsigned int ng8[] = {0U, 0U};
static unsigned int ng9[] = {1U, 0U};
static int ng10[] = {3, 0};



static void Initial_90_0(char *t0)
{
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
    int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 5704U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(90, ng0);

LAB4:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 5512);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 6024);
    *((int *)t2) = 1;
    t3 = (t0 + 5736);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 5512);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng1)));
    t3 = ((char*)((ng2)));
    t4 = ((char*)((ng3)));
    t5 = ((char*)((ng3)));
    t6 = (t0 + 5512);
    t7 = (t0 + 8904);
    t8 = *((char **)t7);
    t9 = (t0 + 8944);
    t10 = xsi_create_subprogram_invocation(t6, 0, *((char **)t9), ((char*)(t8)), 0, 0);
    xsi_vlog_subprogram_pushinvocation(((char*)(t8)), t10);
    t11 = (t0 + 8912);
    t12 = *((char **)t11);
    xsi_vlogvar_assign_value(((char*)(t12)), t2, 0, 0, 32);
    t13 = (t0 + 8920);
    t14 = *((char **)t13);
    xsi_vlogvar_assign_value(((char*)(t14)), t3, 0, 0, 32);
    t15 = (t0 + 8928);
    t16 = *((char **)t15);
    xsi_vlogvar_assign_value(((char*)(t16)), t4, 0, 0, 8);
    t17 = (t0 + 8936);
    t18 = *((char **)t17);
    xsi_vlogvar_assign_value(((char*)(t18)), t5, 0, 0, 8);

LAB10:    t19 = (t0 + 5608);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t23 = (t22 + 272U);
    t24 = *((char **)t23);
    t25 = (t24 + 0U);
    t26 = *((char **)t25);
    t27 = (t0 + 8944);
    t28 = ((int  (*)(char *, char *))t26)(*((char **)t27), t20);

LAB12:    if (t28 != 0)
        goto LAB13;

LAB8:    t20 = (t0 + 8984);
    t29 = *((char **)t20);
    xsi_vlog_subprogram_popinvocation(((char*)(t29)));

LAB9:    t30 = (t0 + 5608);
    t31 = *((char **)t30);
    t30 = (t0 + 8984);
    t32 = *((char **)t30);
    t33 = (t0 + 5512);
    t34 = 0;
    xsi_delete_subprogram_invocation(((char*)(t32)), t31, t0, t33, t34);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng5)));
    t4 = ((char*)((ng6)));
    t5 = ((char*)((ng7)));
    t6 = (t0 + 5512);
    t7 = (t0 + 9064);
    t8 = *((char **)t7);
    t9 = (t0 + 9104);
    t10 = xsi_create_subprogram_invocation(t6, 0, *((char **)t9), ((char*)(t8)), 0, 0);
    xsi_vlog_subprogram_pushinvocation(((char*)(t8)), t10);
    t11 = (t0 + 9072);
    t12 = *((char **)t11);
    xsi_vlogvar_assign_value(((char*)(t12)), t2, 0, 0, 32);
    t13 = (t0 + 9080);
    t14 = *((char **)t13);
    xsi_vlogvar_assign_value(((char*)(t14)), t3, 0, 0, 32);
    t15 = (t0 + 9088);
    t16 = *((char **)t15);
    xsi_vlogvar_assign_value(((char*)(t16)), t4, 0, 0, 8);
    t17 = (t0 + 9096);
    t18 = *((char **)t17);
    xsi_vlogvar_assign_value(((char*)(t18)), t5, 0, 0, 8);

LAB16:    t19 = (t0 + 5608);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t23 = (t22 + 272U);
    t24 = *((char **)t23);
    t25 = (t24 + 0U);
    t26 = *((char **)t25);
    t27 = (t0 + 9104);
    t28 = ((int  (*)(char *, char *))t26)(*((char **)t27), t20);

LAB18:    if (t28 != 0)
        goto LAB19;

LAB14:    t20 = (t0 + 9144);
    t29 = *((char **)t20);
    xsi_vlog_subprogram_popinvocation(((char*)(t29)));

LAB15:    t30 = (t0 + 5608);
    t31 = *((char **)t30);
    t30 = (t0 + 9144);
    t32 = *((char **)t30);
    t33 = (t0 + 5512);
    t34 = 0;
    xsi_delete_subprogram_invocation(((char*)(t32)), t31, t0, t33, t34);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng8)));
    t3 = ((char*)((ng9)));
    t4 = ((char*)((ng7)));
    t5 = ((char*)((ng10)));
    t6 = (t0 + 5512);
    t7 = (t0 + 9224);
    t8 = *((char **)t7);
    t9 = (t0 + 9264);
    t10 = xsi_create_subprogram_invocation(t6, 0, *((char **)t9), ((char*)(t8)), 0, 0);
    xsi_vlog_subprogram_pushinvocation(((char*)(t8)), t10);
    t11 = (t0 + 9232);
    t12 = *((char **)t11);
    xsi_vlogvar_assign_value(((char*)(t12)), t2, 0, 0, 32);
    t13 = (t0 + 9240);
    t14 = *((char **)t13);
    xsi_vlogvar_assign_value(((char*)(t14)), t3, 0, 0, 32);
    t15 = (t0 + 9248);
    t16 = *((char **)t15);
    xsi_vlogvar_assign_value(((char*)(t16)), t4, 0, 0, 8);
    t17 = (t0 + 9256);
    t18 = *((char **)t17);
    xsi_vlogvar_assign_value(((char*)(t18)), t5, 0, 0, 8);

LAB22:    t19 = (t0 + 5608);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t23 = (t22 + 272U);
    t24 = *((char **)t23);
    t25 = (t24 + 0U);
    t26 = *((char **)t25);
    t27 = (t0 + 9264);
    t28 = ((int  (*)(char *, char *))t26)(*((char **)t27), t20);

LAB24:    if (t28 != 0)
        goto LAB25;

LAB20:    t20 = (t0 + 9304);
    t29 = *((char **)t20);
    xsi_vlog_subprogram_popinvocation(((char*)(t29)));

LAB21:    t30 = (t0 + 5608);
    t31 = *((char **)t30);
    t30 = (t0 + 9304);
    t32 = *((char **)t30);
    t33 = (t0 + 5512);
    t34 = 0;
    xsi_delete_subprogram_invocation(((char*)(t32)), t31, t0, t33, t34);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 5512);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB11:;
LAB13:    t19 = (t0 + 5704U);
    *((char **)t19) = &&LAB10;
    goto LAB1;

LAB17:;
LAB19:    t19 = (t0 + 5704U);
    *((char **)t19) = &&LAB16;
    goto LAB1;

LAB23:;
LAB25:    t19 = (t0 + 5704U);
    *((char **)t19) = &&LAB22;
    goto LAB1;

LAB26:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 6040);
    *((int *)t2) = 1;
    t3 = (t0 + 5736);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB27:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 5512);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB28:    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng8)));
    t3 = ((char*)((ng3)));
    t4 = (t0 + 5512);
    t5 = (t0 + 9384);
    t6 = *((char **)t5);
    t7 = (t0 + 9408);
    t8 = xsi_create_subprogram_invocation(t4, 0, *((char **)t7), ((char*)(t6)), 0, 0);
    xsi_vlog_subprogram_pushinvocation(((char*)(t6)), t8);
    t9 = (t0 + 9392);
    t10 = *((char **)t9);
    xsi_vlogvar_assign_value(((char*)(t10)), t2, 0, 0, 32);
    t11 = (t0 + 9400);
    t12 = *((char **)t11);
    xsi_vlogvar_assign_value(((char*)(t12)), t3, 0, 0, 8);

LAB31:    t13 = (t0 + 5608);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = (t0 + 9408);
    t28 = ((int  (*)(char *, char *))t20)(*((char **)t21), t14);

LAB33:    if (t28 != 0)
        goto LAB34;

LAB29:    t14 = (t0 + 9448);
    t22 = *((char **)t14);
    xsi_vlog_subprogram_popinvocation(((char*)(t22)));

LAB30:    t23 = (t0 + 5608);
    t24 = *((char **)t23);
    t23 = (t0 + 9448);
    t25 = *((char **)t23);
    t26 = (t0 + 5512);
    t27 = 0;
    xsi_delete_subprogram_invocation(((char*)(t25)), t24, t0, t26, t27);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng1)));
    t3 = ((char*)((ng6)));
    t4 = (t0 + 5512);
    t5 = (t0 + 9512);
    t6 = *((char **)t5);
    t7 = (t0 + 9536);
    t8 = xsi_create_subprogram_invocation(t4, 0, *((char **)t7), ((char*)(t6)), 0, 0);
    xsi_vlog_subprogram_pushinvocation(((char*)(t6)), t8);
    t9 = (t0 + 9520);
    t10 = *((char **)t9);
    xsi_vlogvar_assign_value(((char*)(t10)), t2, 0, 0, 32);
    t11 = (t0 + 9528);
    t12 = *((char **)t11);
    xsi_vlogvar_assign_value(((char*)(t12)), t3, 0, 0, 8);

LAB37:    t13 = (t0 + 5608);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = (t0 + 9536);
    t28 = ((int  (*)(char *, char *))t20)(*((char **)t21), t14);

LAB39:    if (t28 != 0)
        goto LAB40;

LAB35:    t14 = (t0 + 9576);
    t22 = *((char **)t14);
    xsi_vlog_subprogram_popinvocation(((char*)(t22)));

LAB36:    t23 = (t0 + 5608);
    t24 = *((char **)t23);
    t23 = (t0 + 9576);
    t25 = *((char **)t23);
    t26 = (t0 + 5512);
    t27 = 0;
    xsi_delete_subprogram_invocation(((char*)(t25)), t24, t0, t26, t27);
    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng5)));
    t3 = ((char*)((ng7)));
    t4 = (t0 + 5512);
    t5 = (t0 + 9640);
    t6 = *((char **)t5);
    t7 = (t0 + 9664);
    t8 = xsi_create_subprogram_invocation(t4, 0, *((char **)t7), ((char*)(t6)), 0, 0);
    xsi_vlog_subprogram_pushinvocation(((char*)(t6)), t8);
    t9 = (t0 + 9648);
    t10 = *((char **)t9);
    xsi_vlogvar_assign_value(((char*)(t10)), t2, 0, 0, 32);
    t11 = (t0 + 9656);
    t12 = *((char **)t11);
    xsi_vlogvar_assign_value(((char*)(t12)), t3, 0, 0, 8);

LAB43:    t13 = (t0 + 5608);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = (t0 + 9664);
    t28 = ((int  (*)(char *, char *))t20)(*((char **)t21), t14);

LAB45:    if (t28 != 0)
        goto LAB46;

LAB41:    t14 = (t0 + 9704);
    t22 = *((char **)t14);
    xsi_vlog_subprogram_popinvocation(((char*)(t22)));

LAB42:    t23 = (t0 + 5608);
    t24 = *((char **)t23);
    t23 = (t0 + 9704);
    t25 = *((char **)t23);
    t26 = (t0 + 5512);
    t27 = 0;
    xsi_delete_subprogram_invocation(((char*)(t25)), t24, t0, t26, t27);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng10)));
    t4 = (t0 + 5512);
    t5 = (t0 + 9768);
    t6 = *((char **)t5);
    t7 = (t0 + 9792);
    t8 = xsi_create_subprogram_invocation(t4, 0, *((char **)t7), ((char*)(t6)), 0, 0);
    xsi_vlog_subprogram_pushinvocation(((char*)(t6)), t8);
    t9 = (t0 + 9776);
    t10 = *((char **)t9);
    xsi_vlogvar_assign_value(((char*)(t10)), t2, 0, 0, 32);
    t11 = (t0 + 9784);
    t12 = *((char **)t11);
    xsi_vlogvar_assign_value(((char*)(t12)), t3, 0, 0, 8);

LAB49:    t13 = (t0 + 5608);
    t14 = *((char **)t13);
    t15 = (t14 + 80U);
    t16 = *((char **)t15);
    t17 = (t16 + 272U);
    t18 = *((char **)t17);
    t19 = (t18 + 0U);
    t20 = *((char **)t19);
    t21 = (t0 + 9792);
    t28 = ((int  (*)(char *, char *))t20)(*((char **)t21), t14);

LAB51:    if (t28 != 0)
        goto LAB52;

LAB47:    t14 = (t0 + 9832);
    t22 = *((char **)t14);
    xsi_vlog_subprogram_popinvocation(((char*)(t22)));

LAB48:    t23 = (t0 + 5608);
    t24 = *((char **)t23);
    t23 = (t0 + 9832);
    t25 = *((char **)t23);
    t26 = (t0 + 5512);
    t27 = 0;
    xsi_delete_subprogram_invocation(((char*)(t25)), t24, t0, t26, t27);
    goto LAB1;

LAB32:;
LAB34:    t13 = (t0 + 5704U);
    *((char **)t13) = &&LAB31;
    goto LAB1;

LAB38:;
LAB40:    t13 = (t0 + 5704U);
    *((char **)t13) = &&LAB37;
    goto LAB1;

LAB44:;
LAB46:    t13 = (t0 + 5704U);
    *((char **)t13) = &&LAB43;
    goto LAB1;

LAB50:;
LAB52:    t13 = (t0 + 5704U);
    *((char **)t13) = &&LAB49;
    goto LAB1;

}


extern void work_m_00000000002307149566_4255402763_init()
{
	static char *pe[] = {(void *)Initial_90_0};
	xsi_register_didat("work_m_00000000002307149566_4255402763", "isim/led4_axi_lite_slave_tb_isim_beh.exe.sim/work/m_00000000002307149566_4255402763.didat");
	xsi_register_executes(pe);
}
