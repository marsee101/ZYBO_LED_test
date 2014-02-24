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



static void Initial_142_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;

LAB0:    t1 = (t0 + 2752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(142, ng0);

LAB4:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 2560);
    xsi_process_wait(t2, 0LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(144, ng0);

LAB6:    xsi_set_current_line(145, ng0);

LAB7:    xsi_set_current_line(146, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1832);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 2560);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(147, ng0);
    t3 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB12;

LAB10:    if (*((unsigned int *)t5) == 0)
        goto LAB9;

LAB11:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;

LAB12:    t12 = (t4 + 4);
    t13 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    *((unsigned int *)t4) = t15;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t13) != 0)
        goto LAB14;

LAB13:    t20 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t20 & 1U);
    t21 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t21 & 1U);
    t22 = (t0 + 1832);
    xsi_vlogvar_assign_value(t22, t4, 0, 0, 1);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 2560);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    *((unsigned int *)t4) = 1;
    goto LAB12;

LAB14:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t13);
    *((unsigned int *)t4) = (t16 | t17);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t13);
    *((unsigned int *)t12) = (t18 | t19);
    goto LAB13;

LAB15:    goto LAB6;

LAB16:    goto LAB1;

}


extern void work_m_00000000002986452595_2187063399_init()
{
	static char *pe[] = {(void *)Initial_142_0};
	xsi_register_didat("work_m_00000000002986452595_2187063399", "isim/led4_axi_lite_slave_tb_isim_beh.exe.sim/work/m_00000000002986452595_2187063399.didat");
	xsi_register_executes(pe);
}
