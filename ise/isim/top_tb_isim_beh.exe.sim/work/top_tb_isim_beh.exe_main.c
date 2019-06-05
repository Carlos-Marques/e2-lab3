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
    work_m_04449988557526851051_1084264965_init();
    work_m_11030078684467995358_1834835662_init();
    work_m_11420210616632793920_2397543040_init();
    work_m_08424826538316821496_3115228741_init();
    work_m_04308836335236848268_3486331082_init();
    work_m_03977890110489702380_3115858369_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_03977890110489702380_3115858369");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
