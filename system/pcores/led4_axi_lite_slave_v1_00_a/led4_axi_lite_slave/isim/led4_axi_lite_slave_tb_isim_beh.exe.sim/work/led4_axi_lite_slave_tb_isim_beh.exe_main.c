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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002911833580_2639319959_init();
    work_m_00000000003645158002_2867867759_init();
    work_m_00000000003669613738_1599443877_init();
    work_m_00000000002986452595_2187063399_init();
    work_m_00000000000334455503_0141023112_init();
    work_m_00000000002307149566_4255402763_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002307149566_4255402763");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
