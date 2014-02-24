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
static unsigned int ng1[] = {0U, 0U};



static void Initial_161_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;

LAB0:    t1 = (t0 + 2480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(161, ng0);

LAB4:    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(163, ng0);
    t2 = (t0 + 2288);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t3 = (t2 + 4);
    t5 = *((unsigned int *)t3);
    t6 = (~(t5));
    t7 = *((unsigned int *)t2);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t3) == 0)
        goto LAB6;

LAB8:    t10 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t10) = 1;

LAB9:    t11 = (t4 + 4);
    t12 = (t2 + 4);
    t13 = *((unsigned int *)t2);
    t14 = (~(t13));
    *((unsigned int *)t4) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB11;

LAB10:    t19 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    t21 = (t0 + 1560);
    xsi_vlogvar_assign_value(t21, t4, 0, 0, 1);
    goto LAB1;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB10;

}


extern void work_m_00000000000334455503_0141023112_init()
{
	static char *pe[] = {(void *)Initial_161_0};
	xsi_register_didat("work_m_00000000000334455503_0141023112", "isim/led4_axi_lite_slave_tb_isim_beh.exe.sim/work/m_00000000000334455503_0141023112.didat");
	xsi_register_executes(pe);
}
