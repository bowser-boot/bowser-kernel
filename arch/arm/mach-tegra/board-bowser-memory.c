/*
 * Copyright (C) 2012 NVIDIA, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA
 * 02111-1307, USA
 */

#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/platform_data/tegra_emc.h>

#include "board.h"
#include "board-bowser.h"

#include "tegra-board-id.h"
#include "tegra11_emc.h"
#include "fuse.h"
#include "devices.h"

static struct tegra11_emc_table Bowser_dvfs_table_Samsung_0314_table[] =
{

    {

        0x42,       /* Rev 4.0.3 */

        12750,      /* SDRAM frequency */

        900,        /* min voltage */

        "pll_p",    /* clock source id */

        0x4400003e, /* CLK_SOURCE_EMC */

        100,        /* number of burst_regs */

        30,         /* number of trim_regs (each channel) */

        11,         /* number of up_down_regs */

        {

            0x00000000, /* EMC_RC */

            0x00000003, /* EMC_RFC */

            0x00000000, /* EMC_RFC_SLR */

            0x00000000, /* EMC_RAS */

            0x00000000, /* EMC_RP */

            0x00000004, /* EMC_R2W */

            0x0000000a, /* EMC_W2R */

            0x00000003, /* EMC_R2P */

            0x0000000b, /* EMC_W2P */

            0x00000000, /* EMC_RD_RCD */

            0x00000000, /* EMC_WR_RCD */

            0x00000003, /* EMC_RRD */

            0x00000001, /* EMC_REXT */

            0x00000000, /* EMC_WEXT */

            0x00000005, /* EMC_WDV */

            0x0000000f, /* EMC_WDV_MASK */

            0x00000006, /* EMC_IBDLY */

            0x00010000, /* EMC_PUTERM_EXTRA */

            0x00000000, /* EMC_CDB_CNTL_2 */

            0x00000004, /* EMC_QRST */

            0x0000000f, /* EMC_RDV_MASK */

            0x00000060, /* EMC_REFRESH */

            0x00000000, /* EMC_BURST_REFRESH_NUM */

            0x00000018, /* EMC_PRE_REFRESH_REQ_CNT */

            0x00000002, /* EMC_PDEX2WR */

            0x00000002, /* EMC_PDEX2RD */

            0x00000001, /* EMC_PCHG2PDEN */

            0x00000000, /* EMC_ACT2PDEN */

            0x00000007, /* EMC_AR2PDEN */

            0x0000000f, /* EMC_RW2PDEN */

            0x00000005, /* EMC_TXSR */

            0x00000005, /* EMC_TXSRDLL */

            0x00000004, /* EMC_TCKE */

            0x00000004, /* EMC_TCKESR */

            0x00000004, /* EMC_TPD */

            0x00000004, /* EMC_TFAW */

            0x00000000, /* EMC_TRPAB */

            0x00000004, /* EMC_TCLKSTABLE */

            0x00000005, /* EMC_TCLKSTOP */

            0x00000064, /* EMC_TREFBW */

            0x00000005, /* EMC_QUSE_EXTRA */

            0x00000020, /* EMC_ODT_WRITE */

            0x00000000, /* EMC_ODT_READ */

            0x0000aa88, /* EMC_FBIO_CFG5 */

            0x002c00a0, /* EMC_CFG_DIG_DLL */

            0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */

            0x00064000, /* EMC_DLL_XFORM_DQS4 */

            0x00064000, /* EMC_DLL_XFORM_DQS5 */

            0x00064000, /* EMC_DLL_XFORM_DQS6 */

            0x00064000, /* EMC_DLL_XFORM_DQS7 */

            0x00000000, /* EMC_DLL_XFORM_QUSE4 */

            0x00000000, /* EMC_DLL_XFORM_QUSE5 */

            0x00000000, /* EMC_DLL_XFORM_QUSE6 */

            0x00000000, /* EMC_DLL_XFORM_QUSE7 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS4 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS5 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS6 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS7 */

            0x001112a0, /* EMC_XM2CMDPADCTRL */

            0x00000000, /* EMC_XM2CMDPADCTRL4 */

            0x0000a11c, /* EMC_XM2DQSPADCTRL2 */

            0x00000000, /* EMC_XM2DQPADCTRL2 */

            0x77ffc085, /* EMC_XM2CLKPADCTRL */

            0x81f1f108, /* EMC_XM2COMPPADCTRL */

            0x03037504, /* EMC_XM2VTTGENPADCTRL */

            0x0000003f, /* EMC_XM2VTTGENPADCTRL2 */

            0x0000003f, /* EMC_DSR_VTTGEN_DRV */

            0x00000007, /* EMC_TXDSRVTTGEN */

            0x02000000, /* EMC_FBIO_SPARE */

            0x00000802, /* EMC_CTT_TERM_CTRL */

            0x00000000, /* EMC_ZCAL_INTERVAL */

            0x00000042, /* EMC_ZCAL_WAIT_CNT */

            0x000c000c, /* EMC_MRS_WAIT_CNT */

            0x000c000c, /* EMC_MRS_WAIT_CNT2 */

            0x00000000, /* EMC_AUTO_CAL_CONFIG2 */

            0x00000000, /* EMC_AUTO_CAL_CONFIG3 */

            0x00000000, /* EMC_CTT */

            0x00000000, /* EMC_CTT_DURATION */

            0x800001c5, /* EMC_DYN_SELF_REF_CONTROL */

            0x1f7df7df, /* EMC_CA_TRAINING_TIMING_CNTL1 */

            0x0000001f, /* EMC_CA_TRAINING_TIMING_CNTL2 */

            0x40040001, /* MC_EMEM_ARB_CFG */

            0x8000003f, /* MC_EMEM_ARB_OUTSTANDING_REQ */

            0x00000001, /* MC_EMEM_ARB_TIMING_RCD */

            0x00000001, /* MC_EMEM_ARB_TIMING_RP */

            0x00000002, /* MC_EMEM_ARB_TIMING_RC */

            0x00000000, /* MC_EMEM_ARB_TIMING_RAS */

            0x00000001, /* MC_EMEM_ARB_TIMING_FAW */

            0x00000001, /* MC_EMEM_ARB_TIMING_RRD */

            0x00000002, /* MC_EMEM_ARB_TIMING_RAP2PRE */

            0x00000008, /* MC_EMEM_ARB_TIMING_WAP2PRE */

            0x00000002, /* MC_EMEM_ARB_TIMING_R2R */

            0x00000001, /* MC_EMEM_ARB_TIMING_W2W */

            0x00000003, /* MC_EMEM_ARB_TIMING_R2W */

            0x00000006, /* MC_EMEM_ARB_TIMING_W2R */

            0x06030102, /* MC_EMEM_ARB_DA_TURNS */

            0x000a0402, /* MC_EMEM_ARB_DA_COVERS */

            0x77e30303, /* MC_EMEM_ARB_MISC0 */

            0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */

            0x00040320, /* EMC_SEL_DPD_CTRL */

        },

        {

            0x00000000, /* EMC_CDB_CNTL_1 */

            0x00000006, /* EMC_FBIO_CFG6 */

            0x00000006, /* EMC_QUSE */

            0x00000004, /* EMC_EINPUT */

            0x00000004, /* EMC_EINPUT_DURATION */

            0x00064000, /* EMC_DLL_XFORM_DQS0 */

            0x00000009, /* EMC_QSAFE */

            0x00000000, /* EMC_DLL_XFORM_QUSE0 */

            0x0000000d, /* EMC_RDV */

            0x00249249, /* EMC_XM2DQSPADCTRL4 */

            0x20820800, /* EMC_XM2DQSPADCTRL3 */

            0x0007c000, /* EMC_DLL_XFORM_DQ0 */

            0xa0f10f0f, /* EMC_AUTO_CAL_CONFIG */

            0x00000000, /* EMC_DLL_XFORM_ADDR0 */

            0x00000d0d, /* EMC_XM2CLKPADCTRL2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

            0x00000000, /* EMC_DLL_XFORM_ADDR1 */

            0x00000000, /* EMC_DLL_XFORM_ADDR2 */

            0x00064000, /* EMC_DLL_XFORM_DQS1 */

            0x00064000, /* EMC_DLL_XFORM_DQS2 */

            0x00064000, /* EMC_DLL_XFORM_DQS3 */

            0x0007c000, /* EMC_DLL_XFORM_DQ1 */

            0x0007c000, /* EMC_DLL_XFORM_DQ2 */

            0x0007c000, /* EMC_DLL_XFORM_DQ3 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

            0x00000000, /* EMC_DLL_XFORM_QUSE1 */

            0x00000000, /* EMC_DLL_XFORM_QUSE2 */

            0x00000000, /* EMC_DLL_XFORM_QUSE3 */

        },

        {

            0x00000000, /* EMC_CDB_CNTL_1 */

            0x00000006, /* EMC_FBIO_CFG6 */

            0x00000006, /* EMC_QUSE */

            0x00000004, /* EMC_EINPUT */

            0x00000004, /* EMC_EINPUT_DURATION */

            0x00064000, /* EMC_DLL_XFORM_DQS0 */

            0x00000009, /* EMC_QSAFE */

            0x00000000, /* EMC_DLL_XFORM_QUSE0 */

            0x0000000d, /* EMC_RDV */

            0x00249249, /* EMC_XM2DQSPADCTRL4 */

            0x20820800, /* EMC_XM2DQSPADCTRL3 */

            0x0007c000, /* EMC_DLL_XFORM_DQ0 */

            0xa8f10f0f, /* EMC_AUTO_CAL_CONFIG */

            0x00000000, /* EMC_DLL_XFORM_ADDR0 */

            0x00000d0d, /* EMC_XM2CLKPADCTRL2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

            0x00000000, /* EMC_DLL_XFORM_ADDR1 */

            0x00000000, /* EMC_DLL_XFORM_ADDR2 */

            0x00064000, /* EMC_DLL_XFORM_DQS1 */

            0x00064000, /* EMC_DLL_XFORM_DQS2 */

            0x00064000, /* EMC_DLL_XFORM_DQS3 */

            0x0007c000, /* EMC_DLL_XFORM_DQ1 */

            0x0007c000, /* EMC_DLL_XFORM_DQ2 */

            0x0007c000, /* EMC_DLL_XFORM_DQ3 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

            0x00000000, /* EMC_DLL_XFORM_QUSE1 */

            0x00000000, /* EMC_DLL_XFORM_QUSE2 */

            0x00000000, /* EMC_DLL_XFORM_QUSE3 */

        },

        {

            0x00000007, /* MC_PTSA_GRANT_DECREMENT */

            0x00ff00ff, /* MC_LATENCY_ALLOWANCE_G2_0 */

            0x00ff00ff, /* MC_LATENCY_ALLOWANCE_G2_1 */

            0x00ff00ff, /* MC_LATENCY_ALLOWANCE_NV_0 */

            0x000000ff, /* MC_LATENCY_ALLOWANCE_NV2_0 */

            0x00ff00ff, /* MC_LATENCY_ALLOWANCE_NV_2 */

            0x00ff00ff, /* MC_LATENCY_ALLOWANCE_NV_1 */

            0x000000ff, /* MC_LATENCY_ALLOWANCE_NV2_1 */

            0x00ff00ff, /* MC_LATENCY_ALLOWANCE_NV3 */

            0x00ff00ff, /* MC_LATENCY_ALLOWANCE_EPP_0 */

            0x00ff00ff, /* MC_LATENCY_ALLOWANCE_EPP_1 */

            0x4E564441, /* System Verification tag */

            0x04010400, /* Reg_tool Version */

            0x02000400, /* DVFS_tool Version */

            12750,      /* SDRAM Frequency */

        },

        0x00000042, /* EMC_ZCAL_WAIT_CNT after clock change */

        0x001fffff, /* EMC_AUTO_CAL_INTERVAL */

        0x7324000e, /* EMC_CFG */

        0x80001221, /* Mode Register 0 */

        0x80100003, /* Mode Register 1 */

        0x80200008, /* Mode Register 2 */

        0x00000000, /* Mode Register 4 */

        57820,      /* expected dvfs latency (ns) */

    },

    {

        0x42,       /* Rev 4.0.3 */

        20400,      /* SDRAM frequency */

        900,        /* min voltage */

        "pll_p",    /* clock source id */

        0x44000026, /* CLK_SOURCE_EMC */

        100,        /* number of burst_regs */

        30,         /* number of trim_regs (each channel) */

        11,         /* number of up_down_regs */

        {

            0x00000000, /* EMC_RC */

            0x00000005, /* EMC_RFC */

            0x00000000, /* EMC_RFC_SLR */

            0x00000000, /* EMC_RAS */

            0x00000000, /* EMC_RP */

            0x00000004, /* EMC_R2W */

            0x0000000a, /* EMC_W2R */

            0x00000003, /* EMC_R2P */

            0x0000000b, /* EMC_W2P */

            0x00000000, /* EMC_RD_RCD */

            0x00000000, /* EMC_WR_RCD */

            0x00000003, /* EMC_RRD */

            0x00000001, /* EMC_REXT */

            0x00000000, /* EMC_WEXT */

            0x00000005, /* EMC_WDV */

            0x0000000f, /* EMC_WDV_MASK */

            0x00000006, /* EMC_IBDLY */

            0x00010000, /* EMC_PUTERM_EXTRA */

            0x00000000, /* EMC_CDB_CNTL_2 */

            0x00000004, /* EMC_QRST */

            0x0000000f, /* EMC_RDV_MASK */

            0x0000009a, /* EMC_REFRESH */

            0x00000000, /* EMC_BURST_REFRESH_NUM */

            0x00000026, /* EMC_PRE_REFRESH_REQ_CNT */

            0x00000002, /* EMC_PDEX2WR */

            0x00000002, /* EMC_PDEX2RD */

            0x00000001, /* EMC_PCHG2PDEN */

            0x00000000, /* EMC_ACT2PDEN */

            0x00000007, /* EMC_AR2PDEN */

            0x0000000f, /* EMC_RW2PDEN */

            0x00000006, /* EMC_TXSR */

            0x00000006, /* EMC_TXSRDLL */

            0x00000004, /* EMC_TCKE */

            0x00000004, /* EMC_TCKESR */

            0x00000004, /* EMC_TPD */

            0x00000004, /* EMC_TFAW */

            0x00000000, /* EMC_TRPAB */

            0x00000004, /* EMC_TCLKSTABLE */

            0x00000005, /* EMC_TCLKSTOP */

            0x000000a0, /* EMC_TREFBW */

            0x00000005, /* EMC_QUSE_EXTRA */

            0x00000020, /* EMC_ODT_WRITE */

            0x00000000, /* EMC_ODT_READ */

            0x0000aa88, /* EMC_FBIO_CFG5 */

            0x002c00a0, /* EMC_CFG_DIG_DLL */

            0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */

            0x00064000, /* EMC_DLL_XFORM_DQS4 */

            0x00064000, /* EMC_DLL_XFORM_DQS5 */

            0x00064000, /* EMC_DLL_XFORM_DQS6 */

            0x00064000, /* EMC_DLL_XFORM_DQS7 */

            0x00000000, /* EMC_DLL_XFORM_QUSE4 */

            0x00000000, /* EMC_DLL_XFORM_QUSE5 */

            0x00000000, /* EMC_DLL_XFORM_QUSE6 */

            0x00000000, /* EMC_DLL_XFORM_QUSE7 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS4 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS5 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS6 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS7 */

            0x001112a0, /* EMC_XM2CMDPADCTRL */

            0x00000000, /* EMC_XM2CMDPADCTRL4 */

            0x0000a11c, /* EMC_XM2DQSPADCTRL2 */

            0x00000000, /* EMC_XM2DQPADCTRL2 */

            0x77ffc085, /* EMC_XM2CLKPADCTRL */

            0x81f1f108, /* EMC_XM2COMPPADCTRL */

            0x03037504, /* EMC_XM2VTTGENPADCTRL */

            0x0000003f, /* EMC_XM2VTTGENPADCTRL2 */

            0x0000003f, /* EMC_DSR_VTTGEN_DRV */

            0x0000000b, /* EMC_TXDSRVTTGEN */

            0x02000000, /* EMC_FBIO_SPARE */

            0x00000802, /* EMC_CTT_TERM_CTRL */

            0x00000000, /* EMC_ZCAL_INTERVAL */

            0x00000042, /* EMC_ZCAL_WAIT_CNT */

            0x000c000c, /* EMC_MRS_WAIT_CNT */

            0x000c000c, /* EMC_MRS_WAIT_CNT2 */

            0x00000000, /* EMC_AUTO_CAL_CONFIG2 */

            0x00000000, /* EMC_AUTO_CAL_CONFIG3 */

            0x00000000, /* EMC_CTT */

            0x00000000, /* EMC_CTT_DURATION */

            0x8000023a, /* EMC_DYN_SELF_REF_CONTROL */

            0x1f7df7df, /* EMC_CA_TRAINING_TIMING_CNTL1 */

            0x0000001f, /* EMC_CA_TRAINING_TIMING_CNTL2 */

            0x40020001, /* MC_EMEM_ARB_CFG */

            0x80000046, /* MC_EMEM_ARB_OUTSTANDING_REQ */

            0x00000001, /* MC_EMEM_ARB_TIMING_RCD */

            0x00000001, /* MC_EMEM_ARB_TIMING_RP */

            0x00000002, /* MC_EMEM_ARB_TIMING_RC */

            0x00000000, /* MC_EMEM_ARB_TIMING_RAS */

            0x00000001, /* MC_EMEM_ARB_TIMING_FAW */

            0x00000001, /* MC_EMEM_ARB_TIMING_RRD */

            0x00000002, /* MC_EMEM_ARB_TIMING_RAP2PRE */

            0x00000008, /* MC_EMEM_ARB_TIMING_WAP2PRE */

            0x00000002, /* MC_EMEM_ARB_TIMING_R2R */

            0x00000001, /* MC_EMEM_ARB_TIMING_W2W */

            0x00000003, /* MC_EMEM_ARB_TIMING_R2W */

            0x00000006, /* MC_EMEM_ARB_TIMING_W2R */

            0x06030102, /* MC_EMEM_ARB_DA_TURNS */

            0x000a0402, /* MC_EMEM_ARB_DA_COVERS */

            0x76230303, /* MC_EMEM_ARB_MISC0 */

            0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */

            0x00040320, /* EMC_SEL_DPD_CTRL */

        },

        {

            0x00000000, /* EMC_CDB_CNTL_1 */

            0x00000006, /* EMC_FBIO_CFG6 */

            0x00000006, /* EMC_QUSE */

            0x00000004, /* EMC_EINPUT */

            0x00000004, /* EMC_EINPUT_DURATION */

            0x00064000, /* EMC_DLL_XFORM_DQS0 */

            0x00000009, /* EMC_QSAFE */

            0x00000000, /* EMC_DLL_XFORM_QUSE0 */

            0x0000000d, /* EMC_RDV */

            0x00249249, /* EMC_XM2DQSPADCTRL4 */

            0x20820800, /* EMC_XM2DQSPADCTRL3 */

            0x0007c000, /* EMC_DLL_XFORM_DQ0 */

            0xa0f10f0f, /* EMC_AUTO_CAL_CONFIG */

            0x00000000, /* EMC_DLL_XFORM_ADDR0 */

            0x00000d0d, /* EMC_XM2CLKPADCTRL2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

            0x00000000, /* EMC_DLL_XFORM_ADDR1 */

            0x00000000, /* EMC_DLL_XFORM_ADDR2 */

            0x00064000, /* EMC_DLL_XFORM_DQS1 */

            0x00064000, /* EMC_DLL_XFORM_DQS2 */

            0x00064000, /* EMC_DLL_XFORM_DQS3 */

            0x0007c000, /* EMC_DLL_XFORM_DQ1 */

            0x0007c000, /* EMC_DLL_XFORM_DQ2 */

            0x0007c000, /* EMC_DLL_XFORM_DQ3 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

            0x00000000, /* EMC_DLL_XFORM_QUSE1 */

            0x00000000, /* EMC_DLL_XFORM_QUSE2 */

            0x00000000, /* EMC_DLL_XFORM_QUSE3 */

        },

        {

            0x00000000, /* EMC_CDB_CNTL_1 */

            0x00000006, /* EMC_FBIO_CFG6 */

            0x00000006, /* EMC_QUSE */

            0x00000004, /* EMC_EINPUT */

            0x00000004, /* EMC_EINPUT_DURATION */

            0x00064000, /* EMC_DLL_XFORM_DQS0 */

            0x00000009, /* EMC_QSAFE */

            0x00000000, /* EMC_DLL_XFORM_QUSE0 */

            0x0000000d, /* EMC_RDV */

            0x00249249, /* EMC_XM2DQSPADCTRL4 */

            0x20820800, /* EMC_XM2DQSPADCTRL3 */

            0x0007c000, /* EMC_DLL_XFORM_DQ0 */

            0xa8f10f0f, /* EMC_AUTO_CAL_CONFIG */

            0x00000000, /* EMC_DLL_XFORM_ADDR0 */

            0x00000d0d, /* EMC_XM2CLKPADCTRL2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

            0x00000000, /* EMC_DLL_XFORM_ADDR1 */

            0x00000000, /* EMC_DLL_XFORM_ADDR2 */

            0x00064000, /* EMC_DLL_XFORM_DQS1 */

            0x00064000, /* EMC_DLL_XFORM_DQS2 */

            0x00064000, /* EMC_DLL_XFORM_DQS3 */

            0x0007c000, /* EMC_DLL_XFORM_DQ1 */

            0x0007c000, /* EMC_DLL_XFORM_DQ2 */

            0x0007c000, /* EMC_DLL_XFORM_DQ3 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

            0x00000000, /* EMC_DLL_XFORM_QUSE1 */

            0x00000000, /* EMC_DLL_XFORM_QUSE2 */

            0x00000000, /* EMC_DLL_XFORM_QUSE3 */

        },

        {

            0x0000000a, /* MC_PTSA_GRANT_DECREMENT */

            0x00ff00ff, /* MC_LATENCY_ALLOWANCE_G2_0 */

            0x00ff00ff, /* MC_LATENCY_ALLOWANCE_G2_1 */

            0x00ff00ff, /* MC_LATENCY_ALLOWANCE_NV_0 */

            0x000000ff, /* MC_LATENCY_ALLOWANCE_NV2_0 */

            0x00ff00ff, /* MC_LATENCY_ALLOWANCE_NV_2 */

            0x00ff00ff, /* MC_LATENCY_ALLOWANCE_NV_1 */

            0x000000ff, /* MC_LATENCY_ALLOWANCE_NV2_1 */

            0x00ff00ff, /* MC_LATENCY_ALLOWANCE_NV3 */

            0x00ff00ff, /* MC_LATENCY_ALLOWANCE_EPP_0 */

            0x00ff00ff, /* MC_LATENCY_ALLOWANCE_EPP_1 */

            0x4E564441, /* System Verification tag */

            0x04010400, /* Reg_tool Version */

            0x02000400, /* DVFS_tool Version */

            20400,      /* SDRAM Frequency */

        },

        0x00000042, /* EMC_ZCAL_WAIT_CNT after clock change */

        0x001fffff, /* EMC_AUTO_CAL_INTERVAL */

        0x7324000e, /* EMC_CFG */

        0x80001221, /* Mode Register 0 */

        0x80100003, /* Mode Register 1 */

        0x80200008, /* Mode Register 2 */

        0x00000000, /* Mode Register 4 */

        35610,      /* expected dvfs latency (ns) */

    },

    {

        0x42,       /* Rev 4.0.3 */

        40800,      /* SDRAM frequency */

        900,        /* min voltage */

        "pll_p",    /* clock source id */

        0x44000012, /* CLK_SOURCE_EMC */

        100,        /* number of burst_regs */

        30,         /* number of trim_regs (each channel) */

        11,         /* number of up_down_regs */

        {

            0x00000001, /* EMC_RC */

            0x0000000a, /* EMC_RFC */

            0x00000000, /* EMC_RFC_SLR */

            0x00000001, /* EMC_RAS */

            0x00000000, /* EMC_RP */

            0x00000004, /* EMC_R2W */

            0x0000000a, /* EMC_W2R */

            0x00000003, /* EMC_R2P */

            0x0000000b, /* EMC_W2P */

            0x00000000, /* EMC_RD_RCD */

            0x00000000, /* EMC_WR_RCD */

            0x00000003, /* EMC_RRD */

            0x00000001, /* EMC_REXT */

            0x00000000, /* EMC_WEXT */

            0x00000005, /* EMC_WDV */

            0x0000000f, /* EMC_WDV_MASK */

            0x00000006, /* EMC_IBDLY */

            0x00010000, /* EMC_PUTERM_EXTRA */

            0x00000000, /* EMC_CDB_CNTL_2 */

            0x00000004, /* EMC_QRST */

            0x0000000f, /* EMC_RDV_MASK */

            0x00000134, /* EMC_REFRESH */

            0x00000000, /* EMC_BURST_REFRESH_NUM */

            0x0000004d, /* EMC_PRE_REFRESH_REQ_CNT */

            0x00000002, /* EMC_PDEX2WR */

            0x00000002, /* EMC_PDEX2RD */

            0x00000001, /* EMC_PCHG2PDEN */

            0x00000000, /* EMC_ACT2PDEN */

            0x00000008, /* EMC_AR2PDEN */

            0x0000000f, /* EMC_RW2PDEN */

            0x0000000c, /* EMC_TXSR */

            0x0000000c, /* EMC_TXSRDLL */

            0x00000004, /* EMC_TCKE */

            0x00000004, /* EMC_TCKESR */

            0x00000004, /* EMC_TPD */

            0x00000004, /* EMC_TFAW */

            0x00000000, /* EMC_TRPAB */

            0x00000004, /* EMC_TCLKSTABLE */

            0x00000005, /* EMC_TCLKSTOP */

            0x0000013f, /* EMC_TREFBW */

            0x00000005, /* EMC_QUSE_EXTRA */

            0x00000020, /* EMC_ODT_WRITE */

            0x00000000, /* EMC_ODT_READ */

            0x0000aa88, /* EMC_FBIO_CFG5 */

            0x002c00a0, /* EMC_CFG_DIG_DLL */

            0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */

            0x00064000, /* EMC_DLL_XFORM_DQS4 */

            0x00064000, /* EMC_DLL_XFORM_DQS5 */

            0x00064000, /* EMC_DLL_XFORM_DQS6 */

            0x00064000, /* EMC_DLL_XFORM_DQS7 */

            0x00000000, /* EMC_DLL_XFORM_QUSE4 */

            0x00000000, /* EMC_DLL_XFORM_QUSE5 */

            0x00000000, /* EMC_DLL_XFORM_QUSE6 */

            0x00000000, /* EMC_DLL_XFORM_QUSE7 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS4 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS5 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS6 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS7 */

            0x001112a0, /* EMC_XM2CMDPADCTRL */

            0x00000000, /* EMC_XM2CMDPADCTRL4 */

            0x0000a11c, /* EMC_XM2DQSPADCTRL2 */

            0x00000000, /* EMC_XM2DQPADCTRL2 */

            0x77ffc085, /* EMC_XM2CLKPADCTRL */

            0x81f1f108, /* EMC_XM2COMPPADCTRL */

            0x03037504, /* EMC_XM2VTTGENPADCTRL */

            0x0000003f, /* EMC_XM2VTTGENPADCTRL2 */

            0x0000003f, /* EMC_DSR_VTTGEN_DRV */

            0x00000015, /* EMC_TXDSRVTTGEN */

            0x02000000, /* EMC_FBIO_SPARE */

            0x00000802, /* EMC_CTT_TERM_CTRL */

            0x00000000, /* EMC_ZCAL_INTERVAL */

            0x00000042, /* EMC_ZCAL_WAIT_CNT */

            0x000c000c, /* EMC_MRS_WAIT_CNT */

            0x000c000c, /* EMC_MRS_WAIT_CNT2 */

            0x00000000, /* EMC_AUTO_CAL_CONFIG2 */

            0x00000000, /* EMC_AUTO_CAL_CONFIG3 */

            0x00000000, /* EMC_CTT */

            0x00000000, /* EMC_CTT_DURATION */

            0x80000370, /* EMC_DYN_SELF_REF_CONTROL */

            0x1f7df7df, /* EMC_CA_TRAINING_TIMING_CNTL1 */

            0x0000001f, /* EMC_CA_TRAINING_TIMING_CNTL2 */

            0xa0000001, /* MC_EMEM_ARB_CFG */

            0x8000005b, /* MC_EMEM_ARB_OUTSTANDING_REQ */

            0x00000001, /* MC_EMEM_ARB_TIMING_RCD */

            0x00000001, /* MC_EMEM_ARB_TIMING_RP */

            0x00000002, /* MC_EMEM_ARB_TIMING_RC */

            0x00000000, /* MC_EMEM_ARB_TIMING_RAS */

            0x00000001, /* MC_EMEM_ARB_TIMING_FAW */

            0x00000001, /* MC_EMEM_ARB_TIMING_RRD */

            0x00000002, /* MC_EMEM_ARB_TIMING_RAP2PRE */

            0x00000008, /* MC_EMEM_ARB_TIMING_WAP2PRE */

            0x00000002, /* MC_EMEM_ARB_TIMING_R2R */

            0x00000001, /* MC_EMEM_ARB_TIMING_W2W */

            0x00000003, /* MC_EMEM_ARB_TIMING_R2W */

            0x00000006, /* MC_EMEM_ARB_TIMING_W2R */

            0x06030102, /* MC_EMEM_ARB_DA_TURNS */

            0x000a0402, /* MC_EMEM_ARB_DA_COVERS */

            0x74a30303, /* MC_EMEM_ARB_MISC0 */

            0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */

            0x00040320, /* EMC_SEL_DPD_CTRL */

        },

        {

            0x00000000, /* EMC_CDB_CNTL_1 */

            0x00000006, /* EMC_FBIO_CFG6 */

            0x00000006, /* EMC_QUSE */

            0x00000004, /* EMC_EINPUT */

            0x00000004, /* EMC_EINPUT_DURATION */

            0x00064000, /* EMC_DLL_XFORM_DQS0 */

            0x00000009, /* EMC_QSAFE */

            0x00000000, /* EMC_DLL_XFORM_QUSE0 */

            0x0000000d, /* EMC_RDV */

            0x00249249, /* EMC_XM2DQSPADCTRL4 */

            0x20820800, /* EMC_XM2DQSPADCTRL3 */

            0x0007c000, /* EMC_DLL_XFORM_DQ0 */

            0xa0f10f0f, /* EMC_AUTO_CAL_CONFIG */

            0x00000000, /* EMC_DLL_XFORM_ADDR0 */

            0x00000d0d, /* EMC_XM2CLKPADCTRL2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

            0x00000000, /* EMC_DLL_XFORM_ADDR1 */

            0x00000000, /* EMC_DLL_XFORM_ADDR2 */

            0x00064000, /* EMC_DLL_XFORM_DQS1 */

            0x00064000, /* EMC_DLL_XFORM_DQS2 */

            0x00064000, /* EMC_DLL_XFORM_DQS3 */

            0x0007c000, /* EMC_DLL_XFORM_DQ1 */

            0x0007c000, /* EMC_DLL_XFORM_DQ2 */

            0x0007c000, /* EMC_DLL_XFORM_DQ3 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

            0x00000000, /* EMC_DLL_XFORM_QUSE1 */

            0x00000000, /* EMC_DLL_XFORM_QUSE2 */

            0x00000000, /* EMC_DLL_XFORM_QUSE3 */

        },

        {

            0x00000000, /* EMC_CDB_CNTL_1 */

            0x00000006, /* EMC_FBIO_CFG6 */

            0x00000006, /* EMC_QUSE */

            0x00000004, /* EMC_EINPUT */

            0x00000004, /* EMC_EINPUT_DURATION */

            0x00064000, /* EMC_DLL_XFORM_DQS0 */

            0x00000009, /* EMC_QSAFE */

            0x00000000, /* EMC_DLL_XFORM_QUSE0 */

            0x0000000d, /* EMC_RDV */

            0x00249249, /* EMC_XM2DQSPADCTRL4 */

            0x20820800, /* EMC_XM2DQSPADCTRL3 */

            0x0007c000, /* EMC_DLL_XFORM_DQ0 */

            0xa8f10f0f, /* EMC_AUTO_CAL_CONFIG */

            0x00000000, /* EMC_DLL_XFORM_ADDR0 */

            0x00000d0d, /* EMC_XM2CLKPADCTRL2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

            0x00000000, /* EMC_DLL_XFORM_ADDR1 */

            0x00000000, /* EMC_DLL_XFORM_ADDR2 */

            0x00064000, /* EMC_DLL_XFORM_DQS1 */

            0x00064000, /* EMC_DLL_XFORM_DQS2 */

            0x00064000, /* EMC_DLL_XFORM_DQS3 */

            0x0007c000, /* EMC_DLL_XFORM_DQ1 */

            0x0007c000, /* EMC_DLL_XFORM_DQ2 */

            0x0007c000, /* EMC_DLL_XFORM_DQ3 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

            0x00000000, /* EMC_DLL_XFORM_QUSE1 */

            0x00000000, /* EMC_DLL_XFORM_QUSE2 */

            0x00000000, /* EMC_DLL_XFORM_QUSE3 */

        },

        {

            0x00000015, /* MC_PTSA_GRANT_DECREMENT */

            0x00b000b0, /* MC_LATENCY_ALLOWANCE_G2_0 */

            0x00b000c4, /* MC_LATENCY_ALLOWANCE_G2_1 */

            0x00d700eb, /* MC_LATENCY_ALLOWANCE_NV_0 */

            0x000000eb, /* MC_LATENCY_ALLOWANCE_NV2_0 */

            0x00eb00eb, /* MC_LATENCY_ALLOWANCE_NV_2 */

            0x00ff00eb, /* MC_LATENCY_ALLOWANCE_NV_1 */

            0x000000ff, /* MC_LATENCY_ALLOWANCE_NV2_1 */

            0x00ff00ff, /* MC_LATENCY_ALLOWANCE_NV3 */

            0x00ff00ff, /* MC_LATENCY_ALLOWANCE_EPP_0 */

            0x00ff00ff, /* MC_LATENCY_ALLOWANCE_EPP_1 */

            0x4E564441, /* System Verification tag */

            0x04010400, /* Reg_tool Version */

            0x02000400, /* DVFS_tool Version */

            40800,      /* SDRAM Frequency */

        },

        0x00000042, /* EMC_ZCAL_WAIT_CNT after clock change */

        0x001fffff, /* EMC_AUTO_CAL_INTERVAL */

        0x7324000e, /* EMC_CFG */

        0x80001221, /* Mode Register 0 */

        0x80100003, /* Mode Register 1 */

        0x80200008, /* Mode Register 2 */

        0x00000000, /* Mode Register 4 */

        20850,      /* expected dvfs latency (ns) */

    },

    {

        0x42,       /* Rev 4.0.3 */

        68000,      /* SDRAM frequency */

        900,        /* min voltage */

        "pll_p",    /* clock source id */

        0x4400000a, /* CLK_SOURCE_EMC */

        100,        /* number of burst_regs */

        30,         /* number of trim_regs (each channel) */

        11,         /* number of up_down_regs */

        {

            0x00000003, /* EMC_RC */

            0x00000011, /* EMC_RFC */

            0x00000000, /* EMC_RFC_SLR */

            0x00000002, /* EMC_RAS */

            0x00000000, /* EMC_RP */

            0x00000004, /* EMC_R2W */

            0x0000000a, /* EMC_W2R */

            0x00000003, /* EMC_R2P */

            0x0000000b, /* EMC_W2P */

            0x00000000, /* EMC_RD_RCD */

            0x00000000, /* EMC_WR_RCD */

            0x00000003, /* EMC_RRD */

            0x00000001, /* EMC_REXT */

            0x00000000, /* EMC_WEXT */

            0x00000005, /* EMC_WDV */

            0x0000000f, /* EMC_WDV_MASK */

            0x00000006, /* EMC_IBDLY */

            0x00010000, /* EMC_PUTERM_EXTRA */

            0x00000000, /* EMC_CDB_CNTL_2 */

            0x00000004, /* EMC_QRST */

            0x0000000f, /* EMC_RDV_MASK */

            0x00000202, /* EMC_REFRESH */

            0x00000000, /* EMC_BURST_REFRESH_NUM */

            0x00000080, /* EMC_PRE_REFRESH_REQ_CNT */

            0x00000002, /* EMC_PDEX2WR */

            0x00000002, /* EMC_PDEX2RD */

            0x00000001, /* EMC_PCHG2PDEN */

            0x00000000, /* EMC_ACT2PDEN */

            0x0000000f, /* EMC_AR2PDEN */

            0x0000000f, /* EMC_RW2PDEN */

            0x00000013, /* EMC_TXSR */

            0x00000013, /* EMC_TXSRDLL */

            0x00000004, /* EMC_TCKE */

            0x00000004, /* EMC_TCKESR */

            0x00000004, /* EMC_TPD */

            0x00000004, /* EMC_TFAW */

            0x00000000, /* EMC_TRPAB */

            0x00000004, /* EMC_TCLKSTABLE */

            0x00000005, /* EMC_TCLKSTOP */

            0x00000213, /* EMC_TREFBW */

            0x00000005, /* EMC_QUSE_EXTRA */

            0x00000020, /* EMC_ODT_WRITE */

            0x00000000, /* EMC_ODT_READ */

            0x0000aa88, /* EMC_FBIO_CFG5 */

            0x002c00a0, /* EMC_CFG_DIG_DLL */

            0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */

            0x00064000, /* EMC_DLL_XFORM_DQS4 */

            0x00064000, /* EMC_DLL_XFORM_DQS5 */

            0x00064000, /* EMC_DLL_XFORM_DQS6 */

            0x00064000, /* EMC_DLL_XFORM_DQS7 */

            0x00000000, /* EMC_DLL_XFORM_QUSE4 */

            0x00000000, /* EMC_DLL_XFORM_QUSE5 */

            0x00000000, /* EMC_DLL_XFORM_QUSE6 */

            0x00000000, /* EMC_DLL_XFORM_QUSE7 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS4 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS5 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS6 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS7 */

            0x001112a0, /* EMC_XM2CMDPADCTRL */

            0x00000000, /* EMC_XM2CMDPADCTRL4 */

            0x0000a11c, /* EMC_XM2DQSPADCTRL2 */

            0x00000000, /* EMC_XM2DQPADCTRL2 */

            0x77ffc085, /* EMC_XM2CLKPADCTRL */

            0x81f1f108, /* EMC_XM2COMPPADCTRL */

            0x03037504, /* EMC_XM2VTTGENPADCTRL */

            0x0000003f, /* EMC_XM2VTTGENPADCTRL2 */

            0x0000003f, /* EMC_DSR_VTTGEN_DRV */

            0x00000022, /* EMC_TXDSRVTTGEN */

            0x02000000, /* EMC_FBIO_SPARE */

            0x00000802, /* EMC_CTT_TERM_CTRL */

            0x00000000, /* EMC_ZCAL_INTERVAL */

            0x00000042, /* EMC_ZCAL_WAIT_CNT */

            0x000c000c, /* EMC_MRS_WAIT_CNT */

            0x000c000c, /* EMC_MRS_WAIT_CNT2 */

            0x00000000, /* EMC_AUTO_CAL_CONFIG2 */

            0x00000000, /* EMC_AUTO_CAL_CONFIG3 */

            0x00000000, /* EMC_CTT */

            0x00000000, /* EMC_CTT_DURATION */

            0x8000050e, /* EMC_DYN_SELF_REF_CONTROL */

            0x1f7df7df, /* EMC_CA_TRAINING_TIMING_CNTL1 */

            0x0000001f, /* EMC_CA_TRAINING_TIMING_CNTL2 */

            0x00000001, /* MC_EMEM_ARB_CFG */

            0x80000076, /* MC_EMEM_ARB_OUTSTANDING_REQ */

            0x00000001, /* MC_EMEM_ARB_TIMING_RCD */

            0x00000001, /* MC_EMEM_ARB_TIMING_RP */

            0x00000002, /* MC_EMEM_ARB_TIMING_RC */

            0x00000000, /* MC_EMEM_ARB_TIMING_RAS */

            0x00000001, /* MC_EMEM_ARB_TIMING_FAW */

            0x00000001, /* MC_EMEM_ARB_TIMING_RRD */

            0x00000002, /* MC_EMEM_ARB_TIMING_RAP2PRE */

            0x00000008, /* MC_EMEM_ARB_TIMING_WAP2PRE */

            0x00000002, /* MC_EMEM_ARB_TIMING_R2R */

            0x00000001, /* MC_EMEM_ARB_TIMING_W2W */

            0x00000003, /* MC_EMEM_ARB_TIMING_R2W */

            0x00000006, /* MC_EMEM_ARB_TIMING_W2R */

            0x06030102, /* MC_EMEM_ARB_DA_TURNS */

            0x000a0402, /* MC_EMEM_ARB_DA_COVERS */

            0x74230403, /* MC_EMEM_ARB_MISC0 */

            0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */

            0x00040320, /* EMC_SEL_DPD_CTRL */

        },

        {

            0x00000000, /* EMC_CDB_CNTL_1 */

            0x00000006, /* EMC_FBIO_CFG6 */

            0x00000006, /* EMC_QUSE */

            0x00000004, /* EMC_EINPUT */

            0x00000004, /* EMC_EINPUT_DURATION */

            0x00064000, /* EMC_DLL_XFORM_DQS0 */

            0x00000009, /* EMC_QSAFE */

            0x00000000, /* EMC_DLL_XFORM_QUSE0 */

            0x0000000d, /* EMC_RDV */

            0x00249249, /* EMC_XM2DQSPADCTRL4 */

            0x20820800, /* EMC_XM2DQSPADCTRL3 */

            0x0007c000, /* EMC_DLL_XFORM_DQ0 */

            0xa0f10f0f, /* EMC_AUTO_CAL_CONFIG */

            0x00000000, /* EMC_DLL_XFORM_ADDR0 */

            0x00000d0d, /* EMC_XM2CLKPADCTRL2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

            0x00000000, /* EMC_DLL_XFORM_ADDR1 */

            0x00000000, /* EMC_DLL_XFORM_ADDR2 */

            0x00064000, /* EMC_DLL_XFORM_DQS1 */

            0x00064000, /* EMC_DLL_XFORM_DQS2 */

            0x00064000, /* EMC_DLL_XFORM_DQS3 */

            0x0007c000, /* EMC_DLL_XFORM_DQ1 */

            0x0007c000, /* EMC_DLL_XFORM_DQ2 */

            0x0007c000, /* EMC_DLL_XFORM_DQ3 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

            0x00000000, /* EMC_DLL_XFORM_QUSE1 */

            0x00000000, /* EMC_DLL_XFORM_QUSE2 */

            0x00000000, /* EMC_DLL_XFORM_QUSE3 */

        },

        {

            0x00000000, /* EMC_CDB_CNTL_1 */

            0x00000006, /* EMC_FBIO_CFG6 */

            0x00000006, /* EMC_QUSE */

            0x00000004, /* EMC_EINPUT */

            0x00000004, /* EMC_EINPUT_DURATION */

            0x00064000, /* EMC_DLL_XFORM_DQS0 */

            0x00000009, /* EMC_QSAFE */

            0x00000000, /* EMC_DLL_XFORM_QUSE0 */

            0x0000000d, /* EMC_RDV */

            0x00249249, /* EMC_XM2DQSPADCTRL4 */

            0x20820800, /* EMC_XM2DQSPADCTRL3 */

            0x0007c000, /* EMC_DLL_XFORM_DQ0 */

            0xa8f10f0f, /* EMC_AUTO_CAL_CONFIG */

            0x00000000, /* EMC_DLL_XFORM_ADDR0 */

            0x00000d0d, /* EMC_XM2CLKPADCTRL2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

            0x00000000, /* EMC_DLL_XFORM_ADDR1 */

            0x00000000, /* EMC_DLL_XFORM_ADDR2 */

            0x00064000, /* EMC_DLL_XFORM_DQS1 */

            0x00064000, /* EMC_DLL_XFORM_DQS2 */

            0x00064000, /* EMC_DLL_XFORM_DQS3 */

            0x0007c000, /* EMC_DLL_XFORM_DQ1 */

            0x0007c000, /* EMC_DLL_XFORM_DQ2 */

            0x0007c000, /* EMC_DLL_XFORM_DQ3 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

            0x00000000, /* EMC_DLL_XFORM_QUSE1 */

            0x00000000, /* EMC_DLL_XFORM_QUSE2 */

            0x00000000, /* EMC_DLL_XFORM_QUSE3 */

        },

        {

            0x00000023, /* MC_PTSA_GRANT_DECREMENT */

            0x00690069, /* MC_LATENCY_ALLOWANCE_G2_0 */

            0x00690075, /* MC_LATENCY_ALLOWANCE_G2_1 */

            0x0081008d, /* MC_LATENCY_ALLOWANCE_NV_0 */

            0x0000008d, /* MC_LATENCY_ALLOWANCE_NV2_0 */

            0x008d008d, /* MC_LATENCY_ALLOWANCE_NV_2 */

            0x00bc008d, /* MC_LATENCY_ALLOWANCE_NV_1 */

            0x000000bc, /* MC_LATENCY_ALLOWANCE_NV2_1 */

            0x00bc00bc, /* MC_LATENCY_ALLOWANCE_NV3 */

            0x00ff00ff, /* MC_LATENCY_ALLOWANCE_EPP_0 */

            0x00ff00ff, /* MC_LATENCY_ALLOWANCE_EPP_1 */

            0x4E564441, /* System Verification tag */

            0x04010400, /* Reg_tool Version */

            0x02000400, /* DVFS_tool Version */

            68000,      /* SDRAM Frequency */

        },

        0x00000042, /* EMC_ZCAL_WAIT_CNT after clock change */

        0x001fffff, /* EMC_AUTO_CAL_INTERVAL */

        0x7324000e, /* EMC_CFG */

        0x80001221, /* Mode Register 0 */

        0x80100003, /* Mode Register 1 */

        0x80200008, /* Mode Register 2 */

        0x00000000, /* Mode Register 4 */

        10720,      /* expected dvfs latency (ns) */

    },

    {

        0x42,       /* Rev 4.0.3 */

        102000,     /* SDRAM frequency */

        900,        /* min voltage */

        "pll_p",    /* clock source id */

        0x44000006, /* CLK_SOURCE_EMC */

        100,        /* number of burst_regs */

        30,         /* number of trim_regs (each channel) */

        11,         /* number of up_down_regs */

        {

            0x00000004, /* EMC_RC */

            0x0000001a, /* EMC_RFC */

            0x00000000, /* EMC_RFC_SLR */

            0x00000003, /* EMC_RAS */

            0x00000001, /* EMC_RP */

            0x00000004, /* EMC_R2W */

            0x0000000a, /* EMC_W2R */

            0x00000003, /* EMC_R2P */

            0x0000000b, /* EMC_W2P */

            0x00000001, /* EMC_RD_RCD */

            0x00000001, /* EMC_WR_RCD */

            0x00000003, /* EMC_RRD */

            0x00000001, /* EMC_REXT */

            0x00000000, /* EMC_WEXT */

            0x00000005, /* EMC_WDV */

            0x0000000f, /* EMC_WDV_MASK */

            0x00000006, /* EMC_IBDLY */

            0x00010000, /* EMC_PUTERM_EXTRA */

            0x00000000, /* EMC_CDB_CNTL_2 */

            0x00000004, /* EMC_QRST */

            0x0000000f, /* EMC_RDV_MASK */

            0x00000303, /* EMC_REFRESH */

            0x00000000, /* EMC_BURST_REFRESH_NUM */

            0x000000c0, /* EMC_PRE_REFRESH_REQ_CNT */

            0x00000002, /* EMC_PDEX2WR */

            0x00000002, /* EMC_PDEX2RD */

            0x00000001, /* EMC_PCHG2PDEN */

            0x00000000, /* EMC_ACT2PDEN */

            0x00000018, /* EMC_AR2PDEN */

            0x0000000f, /* EMC_RW2PDEN */

            0x0000001c, /* EMC_TXSR */

            0x0000001c, /* EMC_TXSRDLL */

            0x00000004, /* EMC_TCKE */

            0x00000004, /* EMC_TCKESR */

            0x00000004, /* EMC_TPD */

            0x00000005, /* EMC_TFAW */

            0x00000000, /* EMC_TRPAB */

            0x00000004, /* EMC_TCLKSTABLE */

            0x00000005, /* EMC_TCLKSTOP */

            0x0000031c, /* EMC_TREFBW */

            0x00000005, /* EMC_QUSE_EXTRA */

            0x00000020, /* EMC_ODT_WRITE */

            0x00000000, /* EMC_ODT_READ */

            0x0000aa88, /* EMC_FBIO_CFG5 */

            0x002c00a0, /* EMC_CFG_DIG_DLL */

            0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */

            0x00064000, /* EMC_DLL_XFORM_DQS4 */

            0x00064000, /* EMC_DLL_XFORM_DQS5 */

            0x00064000, /* EMC_DLL_XFORM_DQS6 */

            0x00064000, /* EMC_DLL_XFORM_DQS7 */

            0x00000000, /* EMC_DLL_XFORM_QUSE4 */

            0x00000000, /* EMC_DLL_XFORM_QUSE5 */

            0x00000000, /* EMC_DLL_XFORM_QUSE6 */

            0x00000000, /* EMC_DLL_XFORM_QUSE7 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS4 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS5 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS6 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS7 */

            0x001112a0, /* EMC_XM2CMDPADCTRL */

            0x00000000, /* EMC_XM2CMDPADCTRL4 */

            0x0000a11c, /* EMC_XM2DQSPADCTRL2 */

            0x00000000, /* EMC_XM2DQPADCTRL2 */

            0x77ffc085, /* EMC_XM2CLKPADCTRL */

            0x81f1f108, /* EMC_XM2COMPPADCTRL */

            0x03037504, /* EMC_XM2VTTGENPADCTRL */

            0x0000003f, /* EMC_XM2VTTGENPADCTRL2 */

            0x0000003f, /* EMC_DSR_VTTGEN_DRV */

            0x00000033, /* EMC_TXDSRVTTGEN */

            0x02000000, /* EMC_FBIO_SPARE */

            0x00000802, /* EMC_CTT_TERM_CTRL */

            0x00000000, /* EMC_ZCAL_INTERVAL */

            0x00000042, /* EMC_ZCAL_WAIT_CNT */

            0x000c000c, /* EMC_MRS_WAIT_CNT */

            0x000c000c, /* EMC_MRS_WAIT_CNT2 */

            0x00000000, /* EMC_AUTO_CAL_CONFIG2 */

            0x00000000, /* EMC_AUTO_CAL_CONFIG3 */

            0x00000000, /* EMC_CTT */

            0x00000000, /* EMC_CTT_DURATION */

            0x80000713, /* EMC_DYN_SELF_REF_CONTROL */

            0x1f7df7df, /* EMC_CA_TRAINING_TIMING_CNTL1 */

            0x0000001f, /* EMC_CA_TRAINING_TIMING_CNTL2 */

            0x08000001, /* MC_EMEM_ARB_CFG */

            0x80000098, /* MC_EMEM_ARB_OUTSTANDING_REQ */

            0x00000001, /* MC_EMEM_ARB_TIMING_RCD */

            0x00000001, /* MC_EMEM_ARB_TIMING_RP */

            0x00000003, /* MC_EMEM_ARB_TIMING_RC */

            0x00000000, /* MC_EMEM_ARB_TIMING_RAS */

            0x00000002, /* MC_EMEM_ARB_TIMING_FAW */

            0x00000001, /* MC_EMEM_ARB_TIMING_RRD */

            0x00000002, /* MC_EMEM_ARB_TIMING_RAP2PRE */

            0x00000008, /* MC_EMEM_ARB_TIMING_WAP2PRE */

            0x00000002, /* MC_EMEM_ARB_TIMING_R2R */

            0x00000001, /* MC_EMEM_ARB_TIMING_W2W */

            0x00000003, /* MC_EMEM_ARB_TIMING_R2W */

            0x00000006, /* MC_EMEM_ARB_TIMING_W2R */

            0x06030102, /* MC_EMEM_ARB_DA_TURNS */

            0x000a0403, /* MC_EMEM_ARB_DA_COVERS */

            0x73c30504, /* MC_EMEM_ARB_MISC0 */

            0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */

            0x00040320, /* EMC_SEL_DPD_CTRL */

        },

        {

            0x00000000, /* EMC_CDB_CNTL_1 */

            0x00000006, /* EMC_FBIO_CFG6 */

            0x00000006, /* EMC_QUSE */

            0x00000004, /* EMC_EINPUT */

            0x00000004, /* EMC_EINPUT_DURATION */

            0x00064000, /* EMC_DLL_XFORM_DQS0 */

            0x00000009, /* EMC_QSAFE */

            0x00000000, /* EMC_DLL_XFORM_QUSE0 */

            0x0000000d, /* EMC_RDV */

            0x00249249, /* EMC_XM2DQSPADCTRL4 */

            0x20820800, /* EMC_XM2DQSPADCTRL3 */

            0x0007c000, /* EMC_DLL_XFORM_DQ0 */

            0xa0f10f0f, /* EMC_AUTO_CAL_CONFIG */

            0x00000000, /* EMC_DLL_XFORM_ADDR0 */

            0x00000d0d, /* EMC_XM2CLKPADCTRL2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

            0x00000000, /* EMC_DLL_XFORM_ADDR1 */

            0x00000000, /* EMC_DLL_XFORM_ADDR2 */

            0x00064000, /* EMC_DLL_XFORM_DQS1 */

            0x00064000, /* EMC_DLL_XFORM_DQS2 */

            0x00064000, /* EMC_DLL_XFORM_DQS3 */

            0x0007c000, /* EMC_DLL_XFORM_DQ1 */

            0x0007c000, /* EMC_DLL_XFORM_DQ2 */

            0x0007c000, /* EMC_DLL_XFORM_DQ3 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

            0x00000000, /* EMC_DLL_XFORM_QUSE1 */

            0x00000000, /* EMC_DLL_XFORM_QUSE2 */

            0x00000000, /* EMC_DLL_XFORM_QUSE3 */

        },

        {

            0x00000000, /* EMC_CDB_CNTL_1 */

            0x00000006, /* EMC_FBIO_CFG6 */

            0x00000006, /* EMC_QUSE */

            0x00000004, /* EMC_EINPUT */

            0x00000004, /* EMC_EINPUT_DURATION */

            0x00064000, /* EMC_DLL_XFORM_DQS0 */

            0x00000009, /* EMC_QSAFE */

            0x00000000, /* EMC_DLL_XFORM_QUSE0 */

            0x0000000d, /* EMC_RDV */

            0x00249249, /* EMC_XM2DQSPADCTRL4 */

            0x20820800, /* EMC_XM2DQSPADCTRL3 */

            0x0007c000, /* EMC_DLL_XFORM_DQ0 */

            0xa8f10f0f, /* EMC_AUTO_CAL_CONFIG */

            0x00000000, /* EMC_DLL_XFORM_ADDR0 */

            0x00000d0d, /* EMC_XM2CLKPADCTRL2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

            0x00000000, /* EMC_DLL_XFORM_ADDR1 */

            0x00000000, /* EMC_DLL_XFORM_ADDR2 */

            0x00064000, /* EMC_DLL_XFORM_DQS1 */

            0x00064000, /* EMC_DLL_XFORM_DQS2 */

            0x00064000, /* EMC_DLL_XFORM_DQS3 */

            0x0007c000, /* EMC_DLL_XFORM_DQ1 */

            0x0007c000, /* EMC_DLL_XFORM_DQ2 */

            0x0007c000, /* EMC_DLL_XFORM_DQ3 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

            0x00000000, /* EMC_DLL_XFORM_QUSE1 */

            0x00000000, /* EMC_DLL_XFORM_QUSE2 */

            0x00000000, /* EMC_DLL_XFORM_QUSE3 */

        },

        {

            0x00000034, /* MC_PTSA_GRANT_DECREMENT */

            0x00460046, /* MC_LATENCY_ALLOWANCE_G2_0 */

            0x0046004e, /* MC_LATENCY_ALLOWANCE_G2_1 */

            0x0056005e, /* MC_LATENCY_ALLOWANCE_NV_0 */

            0x0000005e, /* MC_LATENCY_ALLOWANCE_NV2_0 */

            0x005e005e, /* MC_LATENCY_ALLOWANCE_NV_2 */

            0x007d005e, /* MC_LATENCY_ALLOWANCE_NV_1 */

            0x0000007d, /* MC_LATENCY_ALLOWANCE_NV2_1 */

            0x007d007d, /* MC_LATENCY_ALLOWANCE_NV3 */

            0x00ff00ff, /* MC_LATENCY_ALLOWANCE_EPP_0 */

            0x00ff00ff, /* MC_LATENCY_ALLOWANCE_EPP_1 */

            0x4E564441, /* System Verification tag */

            0x04010400, /* Reg_tool Version */

            0x02000400, /* DVFS_tool Version */

            102000,     /* SDRAM Frequency */

        },

        0x00000042, /* EMC_ZCAL_WAIT_CNT after clock change */

        0x001fffff, /* EMC_AUTO_CAL_INTERVAL */

        0x7324000e, /* EMC_CFG */

        0x80001221, /* Mode Register 0 */

        0x80100003, /* Mode Register 1 */

        0x80200008, /* Mode Register 2 */

        0x00000000, /* Mode Register 4 */

        6890,       /* expected dvfs latency (ns) */

    },

    {

        0x42,       /* Rev 4.0.3 */

        204000,     /* SDRAM frequency */

        900,        /* min voltage */

        "pll_p",    /* clock source id */

        0x44000002, /* CLK_SOURCE_EMC */

        100,        /* number of burst_regs */

        30,         /* number of trim_regs (each channel) */

        11,         /* number of up_down_regs */

        {

            0x00000009, /* EMC_RC */

            0x00000035, /* EMC_RFC */

            0x00000000, /* EMC_RFC_SLR */

            0x00000007, /* EMC_RAS */

            0x00000002, /* EMC_RP */

            0x00000004, /* EMC_R2W */

            0x0000000a, /* EMC_W2R */

            0x00000005, /* EMC_R2P */

            0x0000000b, /* EMC_W2P */

            0x00000002, /* EMC_RD_RCD */

            0x00000002, /* EMC_WR_RCD */

            0x00000003, /* EMC_RRD */

            0x00000001, /* EMC_REXT */

            0x00000000, /* EMC_WEXT */

            0x00000005, /* EMC_WDV */

            0x0000000f, /* EMC_WDV_MASK */

            0x00000006, /* EMC_IBDLY */

            0x00010000, /* EMC_PUTERM_EXTRA */

            0x00000000, /* EMC_CDB_CNTL_2 */

            0x00000004, /* EMC_QRST */

            0x0000000f, /* EMC_RDV_MASK */

            0x00000607, /* EMC_REFRESH */

            0x00000000, /* EMC_BURST_REFRESH_NUM */

            0x00000181, /* EMC_PRE_REFRESH_REQ_CNT */

            0x00000002, /* EMC_PDEX2WR */

            0x00000002, /* EMC_PDEX2RD */

            0x00000001, /* EMC_PCHG2PDEN */

            0x00000000, /* EMC_ACT2PDEN */

            0x00000032, /* EMC_AR2PDEN */

            0x0000000f, /* EMC_RW2PDEN */

            0x00000038, /* EMC_TXSR */

            0x00000038, /* EMC_TXSRDLL */

            0x00000004, /* EMC_TCKE */

            0x00000004, /* EMC_TCKESR */

            0x00000004, /* EMC_TPD */

            0x00000009, /* EMC_TFAW */

            0x00000000, /* EMC_TRPAB */

            0x00000004, /* EMC_TCLKSTABLE */

            0x00000005, /* EMC_TCLKSTOP */

            0x00000638, /* EMC_TREFBW */

            0x00000006, /* EMC_QUSE_EXTRA */

            0x00000020, /* EMC_ODT_WRITE */

            0x00000000, /* EMC_ODT_READ */

            0x0000aa88, /* EMC_FBIO_CFG5 */

            0x002c00a0, /* EMC_CFG_DIG_DLL */

            0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */

            0x00064000, /* EMC_DLL_XFORM_DQS4 */

            0x00064000, /* EMC_DLL_XFORM_DQS5 */

            0x00064000, /* EMC_DLL_XFORM_DQS6 */

            0x00064000, /* EMC_DLL_XFORM_DQS7 */

            0x00000000, /* EMC_DLL_XFORM_QUSE4 */

            0x00000000, /* EMC_DLL_XFORM_QUSE5 */

            0x00000000, /* EMC_DLL_XFORM_QUSE6 */

            0x00000000, /* EMC_DLL_XFORM_QUSE7 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS4 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS5 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS6 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS7 */

            0x001112a0, /* EMC_XM2CMDPADCTRL */

            0x00000000, /* EMC_XM2CMDPADCTRL4 */

            0x0000a11c, /* EMC_XM2DQSPADCTRL2 */

            0x00000000, /* EMC_XM2DQPADCTRL2 */

            0x77ffc085, /* EMC_XM2CLKPADCTRL */

            0x81f1f108, /* EMC_XM2COMPPADCTRL */

            0x03037504, /* EMC_XM2VTTGENPADCTRL */

            0x0000003f, /* EMC_XM2VTTGENPADCTRL2 */

            0x0000003f, /* EMC_DSR_VTTGEN_DRV */

            0x00000000, /* EMC_TXDSRVTTGEN */

            0x02000000, /* EMC_FBIO_SPARE */

            0x00000802, /* EMC_CTT_TERM_CTRL */

            0x00020000, /* EMC_ZCAL_INTERVAL */

            0x00000100, /* EMC_ZCAL_WAIT_CNT */

            0x000c000c, /* EMC_MRS_WAIT_CNT */

            0x000c000c, /* EMC_MRS_WAIT_CNT2 */

            0x00000000, /* EMC_AUTO_CAL_CONFIG2 */

            0x00000000, /* EMC_AUTO_CAL_CONFIG3 */

            0x00000000, /* EMC_CTT */

            0x00000000, /* EMC_CTT_DURATION */

            0x80000d22, /* EMC_DYN_SELF_REF_CONTROL */

            0x1f7df7df, /* EMC_CA_TRAINING_TIMING_CNTL1 */

            0x0000001f, /* EMC_CA_TRAINING_TIMING_CNTL2 */

            0x01000003, /* MC_EMEM_ARB_CFG */

            0x800000fe, /* MC_EMEM_ARB_OUTSTANDING_REQ */

            0x00000001, /* MC_EMEM_ARB_TIMING_RCD */

            0x00000001, /* MC_EMEM_ARB_TIMING_RP */

            0x00000005, /* MC_EMEM_ARB_TIMING_RC */

            0x00000002, /* MC_EMEM_ARB_TIMING_RAS */

            0x00000004, /* MC_EMEM_ARB_TIMING_FAW */

            0x00000001, /* MC_EMEM_ARB_TIMING_RRD */

            0x00000002, /* MC_EMEM_ARB_TIMING_RAP2PRE */

            0x00000008, /* MC_EMEM_ARB_TIMING_WAP2PRE */

            0x00000002, /* MC_EMEM_ARB_TIMING_R2R */

            0x00000001, /* MC_EMEM_ARB_TIMING_W2W */

            0x00000003, /* MC_EMEM_ARB_TIMING_R2W */

            0x00000006, /* MC_EMEM_ARB_TIMING_W2R */

            0x06030102, /* MC_EMEM_ARB_DA_TURNS */

            0x000a0405, /* MC_EMEM_ARB_DA_COVERS */

            0x73840a06, /* MC_EMEM_ARB_MISC0 */

            0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */

            0x00040320, /* EMC_SEL_DPD_CTRL */

        },

        {

            0x00000000, /* EMC_CDB_CNTL_1 */

            0x00000004, /* EMC_FBIO_CFG6 */

            0x00000007, /* EMC_QUSE */

            0x00000004, /* EMC_EINPUT */

            0x00000004, /* EMC_EINPUT_DURATION */

            0x00064000, /* EMC_DLL_XFORM_DQS0 */

            0x00000009, /* EMC_QSAFE */

            0x00000000, /* EMC_DLL_XFORM_QUSE0 */

            0x0000000d, /* EMC_RDV */

            0x00249249, /* EMC_XM2DQSPADCTRL4 */

            0x20820800, /* EMC_XM2DQSPADCTRL3 */

            0x0007c000, /* EMC_DLL_XFORM_DQ0 */

            0xa0f10f0f, /* EMC_AUTO_CAL_CONFIG */

            0x00000000, /* EMC_DLL_XFORM_ADDR0 */

            0x00000d0d, /* EMC_XM2CLKPADCTRL2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

            0x00000000, /* EMC_DLL_XFORM_ADDR1 */

            0x00000000, /* EMC_DLL_XFORM_ADDR2 */

            0x00064000, /* EMC_DLL_XFORM_DQS1 */

            0x00064000, /* EMC_DLL_XFORM_DQS2 */

            0x00064000, /* EMC_DLL_XFORM_DQS3 */

            0x0007c000, /* EMC_DLL_XFORM_DQ1 */

            0x0007c000, /* EMC_DLL_XFORM_DQ2 */

            0x0007c000, /* EMC_DLL_XFORM_DQ3 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

            0x00000000, /* EMC_DLL_XFORM_QUSE1 */

            0x00000000, /* EMC_DLL_XFORM_QUSE2 */

            0x00000000, /* EMC_DLL_XFORM_QUSE3 */

        },

        {

            0x00000000, /* EMC_CDB_CNTL_1 */

            0x00000004, /* EMC_FBIO_CFG6 */

            0x00000007, /* EMC_QUSE */

            0x00000004, /* EMC_EINPUT */

            0x00000004, /* EMC_EINPUT_DURATION */

            0x00064000, /* EMC_DLL_XFORM_DQS0 */

            0x00000009, /* EMC_QSAFE */

            0x00000000, /* EMC_DLL_XFORM_QUSE0 */

            0x0000000d, /* EMC_RDV */

            0x00249249, /* EMC_XM2DQSPADCTRL4 */

            0x20820800, /* EMC_XM2DQSPADCTRL3 */

            0x0007c000, /* EMC_DLL_XFORM_DQ0 */

            0xa8f10f0f, /* EMC_AUTO_CAL_CONFIG */

            0x00000000, /* EMC_DLL_XFORM_ADDR0 */

            0x00000d0d, /* EMC_XM2CLKPADCTRL2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

            0x00000000, /* EMC_DLL_XFORM_ADDR1 */

            0x00000000, /* EMC_DLL_XFORM_ADDR2 */

            0x00064000, /* EMC_DLL_XFORM_DQS1 */

            0x00064000, /* EMC_DLL_XFORM_DQS2 */

            0x00064000, /* EMC_DLL_XFORM_DQS3 */

            0x0007c000, /* EMC_DLL_XFORM_DQ1 */

            0x0007c000, /* EMC_DLL_XFORM_DQ2 */

            0x0007c000, /* EMC_DLL_XFORM_DQ3 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

            0x00000000, /* EMC_DLL_XFORM_QUSE1 */

            0x00000000, /* EMC_DLL_XFORM_QUSE2 */

            0x00000000, /* EMC_DLL_XFORM_QUSE3 */

        },

        {

            0x00000068, /* MC_PTSA_GRANT_DECREMENT */

            0x00230023, /* MC_LATENCY_ALLOWANCE_G2_0 */

            0x00230027, /* MC_LATENCY_ALLOWANCE_G2_1 */

            0x002b002f, /* MC_LATENCY_ALLOWANCE_NV_0 */

            0x0000002f, /* MC_LATENCY_ALLOWANCE_NV2_0 */

            0x002f002f, /* MC_LATENCY_ALLOWANCE_NV_2 */

            0x003e002f, /* MC_LATENCY_ALLOWANCE_NV_1 */

            0x0000003e, /* MC_LATENCY_ALLOWANCE_NV2_1 */

            0x003e003e, /* MC_LATENCY_ALLOWANCE_NV3 */

            0x00ff00c8, /* MC_LATENCY_ALLOWANCE_EPP_0 */

            0x00ff00ff, /* MC_LATENCY_ALLOWANCE_EPP_1 */

            0x4E564441, /* System Verification tag */

            0x04010400, /* Reg_tool Version */

            0x02000400, /* DVFS_tool Version */

            204000,     /* SDRAM Frequency */

        },

        0x00000042, /* EMC_ZCAL_WAIT_CNT after clock change */

        0x001fffff, /* EMC_AUTO_CAL_INTERVAL */

        0x7320000e, /* EMC_CFG */

        0x80001221, /* Mode Register 0 */

        0x80100003, /* Mode Register 1 */

        0x80200008, /* Mode Register 2 */

        0x00000000, /* Mode Register 4 */

        3420,       /* expected dvfs latency (ns) */

    },

    {

        0x42,       /* Rev 4.0.3 */

        312000,     /* SDRAM frequency */

        1000,       /* min voltage */

        "pll_c",    /* clock source id */

        0x24000002, /* CLK_SOURCE_EMC */

        100,        /* number of burst_regs */

        30,         /* number of trim_regs (each channel) */

        11,         /* number of up_down_regs */

        {

            0x0000000e, /* EMC_RC */

            0x00000050, /* EMC_RFC */

            0x00000000, /* EMC_RFC_SLR */

            0x00000009, /* EMC_RAS */

            0x00000003, /* EMC_RP */

            0x00000004, /* EMC_R2W */

            0x00000008, /* EMC_W2R */

            0x00000002, /* EMC_R2P */

            0x00000009, /* EMC_W2P */

            0x00000003, /* EMC_RD_RCD */

            0x00000003, /* EMC_WR_RCD */

            0x00000002, /* EMC_RRD */

            0x00000001, /* EMC_REXT */

            0x00000000, /* EMC_WEXT */

            0x00000004, /* EMC_WDV */

            0x0000000f, /* EMC_WDV_MASK */

            0x00000006, /* EMC_IBDLY */

            0x00010000, /* EMC_PUTERM_EXTRA */

            0x00000000, /* EMC_CDB_CNTL_2 */

            0x00000004, /* EMC_QRST */

            0x0000000f, /* EMC_RDV_MASK */

            0x00000941, /* EMC_REFRESH */

            0x00000000, /* EMC_BURST_REFRESH_NUM */

            0x00000250, /* EMC_PRE_REFRESH_REQ_CNT */

            0x00000001, /* EMC_PDEX2WR */

            0x00000008, /* EMC_PDEX2RD */

            0x00000001, /* EMC_PCHG2PDEN */

            0x00000000, /* EMC_ACT2PDEN */

            0x0000004d, /* EMC_AR2PDEN */

            0x0000000e, /* EMC_RW2PDEN */

            0x00000055, /* EMC_TXSR */

            0x00000200, /* EMC_TXSRDLL */

            0x00000004, /* EMC_TCKE */

            0x00000004, /* EMC_TCKESR */

            0x00000004, /* EMC_TPD */

            0x0000000d, /* EMC_TFAW */

            0x00000000, /* EMC_TRPAB */

            0x00000004, /* EMC_TCLKSTABLE */

            0x00000005, /* EMC_TCLKSTOP */

            0x00000982, /* EMC_TREFBW */

            0x00000000, /* EMC_QUSE_EXTRA */

            0x00000020, /* EMC_ODT_WRITE */

            0x00000000, /* EMC_ODT_READ */

            0x00005088, /* EMC_FBIO_CFG5 */

            0x002c00a0, /* EMC_CFG_DIG_DLL */

            0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */

            0x00018000, /* EMC_DLL_XFORM_DQS4 */

            0x00018000, /* EMC_DLL_XFORM_DQS5 */

            0x00018000, /* EMC_DLL_XFORM_DQS6 */

            0x00018000, /* EMC_DLL_XFORM_DQS7 */

            0x00028000, /* EMC_DLL_XFORM_QUSE4 */

            0x00028000, /* EMC_DLL_XFORM_QUSE5 */

            0x00028000, /* EMC_DLL_XFORM_QUSE6 */

            0x00028000, /* EMC_DLL_XFORM_QUSE7 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS4 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS5 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS6 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS7 */

            0x001112a0, /* EMC_XM2CMDPADCTRL */

            0x00000000, /* EMC_XM2CMDPADCTRL4 */

            0x0001013d, /* EMC_XM2DQSPADCTRL2 */

            0x00000000, /* EMC_XM2DQPADCTRL2 */

            0x77ffc085, /* EMC_XM2CLKPADCTRL */

            0x81f1f108, /* EMC_XM2COMPPADCTRL */

            0x03037504, /* EMC_XM2VTTGENPADCTRL */

            0x00000000, /* EMC_XM2VTTGENPADCTRL2 */

            0x0000003f, /* EMC_DSR_VTTGEN_DRV */

            0x00000000, /* EMC_TXDSRVTTGEN */

            0x02000000, /* EMC_FBIO_SPARE */

            0x00000802, /* EMC_CTT_TERM_CTRL */

            0x00020000, /* EMC_ZCAL_INTERVAL */

            0x00000100, /* EMC_ZCAL_WAIT_CNT */

            0x0171000c, /* EMC_MRS_WAIT_CNT */

            0x0171000c, /* EMC_MRS_WAIT_CNT2 */

            0x00000000, /* EMC_AUTO_CAL_CONFIG2 */

            0x00000000, /* EMC_AUTO_CAL_CONFIG3 */

            0x00000000, /* EMC_CTT */

            0x00000000, /* EMC_CTT_DURATION */

            0x8000138d, /* EMC_DYN_SELF_REF_CONTROL */

            0x1f7df7df, /* EMC_CA_TRAINING_TIMING_CNTL1 */

            0x0000001f, /* EMC_CA_TRAINING_TIMING_CNTL2 */

            0x0b000004, /* MC_EMEM_ARB_CFG */

            0x8000016a, /* MC_EMEM_ARB_OUTSTANDING_REQ */

            0x00000001, /* MC_EMEM_ARB_TIMING_RCD */

            0x00000002, /* MC_EMEM_ARB_TIMING_RP */

            0x00000007, /* MC_EMEM_ARB_TIMING_RC */

            0x00000004, /* MC_EMEM_ARB_TIMING_RAS */

            0x00000006, /* MC_EMEM_ARB_TIMING_FAW */

            0x00000001, /* MC_EMEM_ARB_TIMING_RRD */

            0x00000002, /* MC_EMEM_ARB_TIMING_RAP2PRE */

            0x00000007, /* MC_EMEM_ARB_TIMING_WAP2PRE */

            0x00000002, /* MC_EMEM_ARB_TIMING_R2R */

            0x00000002, /* MC_EMEM_ARB_TIMING_W2W */

            0x00000004, /* MC_EMEM_ARB_TIMING_R2W */

            0x00000006, /* MC_EMEM_ARB_TIMING_W2R */

            0x06040202, /* MC_EMEM_ARB_DA_TURNS */

            0x000b0607, /* MC_EMEM_ARB_DA_COVERS */

            0x76e50f08, /* MC_EMEM_ARB_MISC0 */

            0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */

            0x00040320, /* EMC_SEL_DPD_CTRL */

        },

        {

            0x00000000, /* EMC_CDB_CNTL_1 */

            0x00000004, /* EMC_FBIO_CFG6 */

            0x00000006, /* EMC_QUSE */

            0x00000005, /* EMC_EINPUT */

            0x00000004, /* EMC_EINPUT_DURATION */

            0x00018000, /* EMC_DLL_XFORM_DQS0 */

            0x0000000b, /* EMC_QSAFE */

            0x00028000, /* EMC_DLL_XFORM_QUSE0 */

            0x0000000d, /* EMC_RDV */

            0x00249249, /* EMC_XM2DQSPADCTRL4 */

            0x20820800, /* EMC_XM2DQSPADCTRL3 */

            0x00038000, /* EMC_DLL_XFORM_DQ0 */

            0xa0f10f0f, /* EMC_AUTO_CAL_CONFIG */

            0x00014000, /* EMC_DLL_XFORM_ADDR0 */

            0x00000000, /* EMC_XM2CLKPADCTRL2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

            0x00000000, /* EMC_DLL_XFORM_ADDR1 */

            0x00014000, /* EMC_DLL_XFORM_ADDR2 */

            0x00018000, /* EMC_DLL_XFORM_DQS1 */

            0x00018000, /* EMC_DLL_XFORM_DQS2 */

            0x00018000, /* EMC_DLL_XFORM_DQS3 */

            0x00038000, /* EMC_DLL_XFORM_DQ1 */

            0x00038000, /* EMC_DLL_XFORM_DQ2 */

            0x00038000, /* EMC_DLL_XFORM_DQ3 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

            0x00028000, /* EMC_DLL_XFORM_QUSE1 */

            0x00028000, /* EMC_DLL_XFORM_QUSE2 */

            0x00028000, /* EMC_DLL_XFORM_QUSE3 */

        },

        {

            0x00000000, /* EMC_CDB_CNTL_1 */

            0x00000004, /* EMC_FBIO_CFG6 */

            0x00000006, /* EMC_QUSE */

            0x00000005, /* EMC_EINPUT */

            0x00000004, /* EMC_EINPUT_DURATION */

            0x00018000, /* EMC_DLL_XFORM_DQS0 */

            0x0000000b, /* EMC_QSAFE */

            0x00028000, /* EMC_DLL_XFORM_QUSE0 */

            0x0000000d, /* EMC_RDV */

            0x00249249, /* EMC_XM2DQSPADCTRL4 */

            0x20820800, /* EMC_XM2DQSPADCTRL3 */

            0x00038000, /* EMC_DLL_XFORM_DQ0 */

            0xa8f10f0f, /* EMC_AUTO_CAL_CONFIG */

            0x00014000, /* EMC_DLL_XFORM_ADDR0 */

            0x00000000, /* EMC_XM2CLKPADCTRL2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

            0x00000000, /* EMC_DLL_XFORM_ADDR1 */

            0x00014000, /* EMC_DLL_XFORM_ADDR2 */

            0x00018000, /* EMC_DLL_XFORM_DQS1 */

            0x00018000, /* EMC_DLL_XFORM_DQS2 */

            0x00018000, /* EMC_DLL_XFORM_DQS3 */

            0x00038000, /* EMC_DLL_XFORM_DQ1 */

            0x00038000, /* EMC_DLL_XFORM_DQ2 */

            0x00038000, /* EMC_DLL_XFORM_DQ3 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

            0x00028000, /* EMC_DLL_XFORM_QUSE1 */

            0x00028000, /* EMC_DLL_XFORM_QUSE2 */

            0x00028000, /* EMC_DLL_XFORM_QUSE3 */

        },

        {

            0x000000a0, /* MC_PTSA_GRANT_DECREMENT */

            0x00170017, /* MC_LATENCY_ALLOWANCE_G2_0 */

            0x00170019, /* MC_LATENCY_ALLOWANCE_G2_1 */

            0x001c001e, /* MC_LATENCY_ALLOWANCE_NV_0 */

            0x0000001e, /* MC_LATENCY_ALLOWANCE_NV2_0 */

            0x001e001e, /* MC_LATENCY_ALLOWANCE_NV_2 */

            0x0029001e, /* MC_LATENCY_ALLOWANCE_NV_1 */

            0x00000029, /* MC_LATENCY_ALLOWANCE_NV2_1 */

            0x00290029, /* MC_LATENCY_ALLOWANCE_NV3 */

            0x00ff0082, /* MC_LATENCY_ALLOWANCE_EPP_0 */

            0x00ff00ff, /* MC_LATENCY_ALLOWANCE_EPP_1 */

            0x4E564441, /* System Verification tag */

            0x04010400, /* Reg_tool Version */

            0x02000400, /* DVFS_tool Version */

            312000,     /* SDRAM Frequency */

        },

        0x00000042, /* EMC_ZCAL_WAIT_CNT after clock change */

        0x001fffff, /* EMC_AUTO_CAL_INTERVAL */

        0x5300000e, /* EMC_CFG */

        0x80000321, /* Mode Register 0 */

        0x80100002, /* Mode Register 1 */

        0x80200000, /* Mode Register 2 */

        0x00000000, /* Mode Register 4 */

        2180,       /* expected dvfs latency (ns) */

    },

    {

        0x42,       /* Rev 4.0.3 */

        408000,     /* SDRAM frequency */

        1000,       /* min voltage */

        "pll_p",    /* clock source id */

        0x44000000, /* CLK_SOURCE_EMC */

        100,        /* number of burst_regs */

        30,         /* number of trim_regs (each channel) */

        11,         /* number of up_down_regs */

        {

            0x00000012, /* EMC_RC */

            0x00000069, /* EMC_RFC */

            0x00000000, /* EMC_RFC_SLR */

            0x0000000d, /* EMC_RAS */

            0x00000004, /* EMC_RP */

            0x00000005, /* EMC_R2W */

            0x00000009, /* EMC_W2R */

            0x00000002, /* EMC_R2P */

            0x0000000c, /* EMC_W2P */

            0x00000004, /* EMC_RD_RCD */

            0x00000004, /* EMC_WR_RCD */

            0x00000002, /* EMC_RRD */

            0x00000001, /* EMC_REXT */

            0x00000000, /* EMC_WEXT */

            0x00000004, /* EMC_WDV */

            0x0000000f, /* EMC_WDV_MASK */

            0x00000006, /* EMC_IBDLY */

            0x00010000, /* EMC_PUTERM_EXTRA */

            0x00000000, /* EMC_CDB_CNTL_2 */

            0x00000004, /* EMC_QRST */

            0x00000010, /* EMC_RDV_MASK */

            0x00000c2e, /* EMC_REFRESH */

            0x00000000, /* EMC_BURST_REFRESH_NUM */

            0x0000030b, /* EMC_PRE_REFRESH_REQ_CNT */

            0x00000001, /* EMC_PDEX2WR */

            0x00000008, /* EMC_PDEX2RD */

            0x00000001, /* EMC_PCHG2PDEN */

            0x00000000, /* EMC_ACT2PDEN */

            0x00000066, /* EMC_AR2PDEN */

            0x00000011, /* EMC_RW2PDEN */

            0x0000006f, /* EMC_TXSR */

            0x00000200, /* EMC_TXSRDLL */

            0x00000004, /* EMC_TCKE */

            0x00000004, /* EMC_TCKESR */

            0x00000004, /* EMC_TPD */

            0x00000011, /* EMC_TFAW */

            0x00000000, /* EMC_TRPAB */

            0x00000004, /* EMC_TCLKSTABLE */

            0x00000005, /* EMC_TCLKSTOP */

            0x00000c6f, /* EMC_TREFBW */

            0x00000000, /* EMC_QUSE_EXTRA */

            0x00000020, /* EMC_ODT_WRITE */

            0x00000000, /* EMC_ODT_READ */

            0x00005088, /* EMC_FBIO_CFG5 */

            0x002c0080, /* EMC_CFG_DIG_DLL */

            0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */

            0x00030000, /* EMC_DLL_XFORM_DQS4 */

            0x00030000, /* EMC_DLL_XFORM_DQS5 */

            0x00030000, /* EMC_DLL_XFORM_DQS6 */

            0x00030000, /* EMC_DLL_XFORM_DQS7 */

            0x00020000, /* EMC_DLL_XFORM_QUSE4 */

            0x00020000, /* EMC_DLL_XFORM_QUSE5 */

            0x00020000, /* EMC_DLL_XFORM_QUSE6 */

            0x00020000, /* EMC_DLL_XFORM_QUSE7 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS4 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS5 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS6 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS7 */

            0x001112a0, /* EMC_XM2CMDPADCTRL */

            0x00000000, /* EMC_XM2CMDPADCTRL4 */

            0x0001013d, /* EMC_XM2DQSPADCTRL2 */

            0x00000000, /* EMC_XM2DQPADCTRL2 */

            0x77ffc085, /* EMC_XM2CLKPADCTRL */

            0x81f1f108, /* EMC_XM2COMPPADCTRL */

            0x03037504, /* EMC_XM2VTTGENPADCTRL */

            0x00000000, /* EMC_XM2VTTGENPADCTRL2 */

            0x0000003f, /* EMC_DSR_VTTGEN_DRV */

            0x00000000, /* EMC_TXDSRVTTGEN */

            0x02000000, /* EMC_FBIO_SPARE */

            0x00000802, /* EMC_CTT_TERM_CTRL */

            0x00020000, /* EMC_ZCAL_INTERVAL */

            0x00000100, /* EMC_ZCAL_WAIT_CNT */

            0x0158000c, /* EMC_MRS_WAIT_CNT */

            0x0158000c, /* EMC_MRS_WAIT_CNT2 */

            0x00000000, /* EMC_AUTO_CAL_CONFIG2 */

            0x00000000, /* EMC_AUTO_CAL_CONFIG3 */

            0x00000000, /* EMC_CTT */

            0x00000000, /* EMC_CTT_DURATION */

            0x80001941, /* EMC_DYN_SELF_REF_CONTROL */

            0x1f7df7df, /* EMC_CA_TRAINING_TIMING_CNTL1 */

            0x0000001f, /* EMC_CA_TRAINING_TIMING_CNTL2 */

            0x02000006, /* MC_EMEM_ARB_CFG */

            0x80000190, /* MC_EMEM_ARB_OUTSTANDING_REQ */

            0x00000001, /* MC_EMEM_ARB_TIMING_RCD */

            0x00000002, /* MC_EMEM_ARB_TIMING_RP */

            0x0000000a, /* MC_EMEM_ARB_TIMING_RC */

            0x00000006, /* MC_EMEM_ARB_TIMING_RAS */

            0x00000008, /* MC_EMEM_ARB_TIMING_FAW */

            0x00000001, /* MC_EMEM_ARB_TIMING_RRD */

            0x00000002, /* MC_EMEM_ARB_TIMING_RAP2PRE */

            0x00000009, /* MC_EMEM_ARB_TIMING_WAP2PRE */

            0x00000002, /* MC_EMEM_ARB_TIMING_R2R */

            0x00000002, /* MC_EMEM_ARB_TIMING_W2W */

            0x00000004, /* MC_EMEM_ARB_TIMING_R2W */

            0x00000006, /* MC_EMEM_ARB_TIMING_W2R */

            0x06040202, /* MC_EMEM_ARB_DA_TURNS */

            0x000e070a, /* MC_EMEM_ARB_DA_COVERS */

            0x7547130b, /* MC_EMEM_ARB_MISC0 */

            0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */

            0x00040320, /* EMC_SEL_DPD_CTRL */

        },

        {

            0x00000000, /* EMC_CDB_CNTL_1 */

            0x00000004, /* EMC_FBIO_CFG6 */

            0x00000006, /* EMC_QUSE */

            0x00000005, /* EMC_EINPUT */

            0x00000004, /* EMC_EINPUT_DURATION */

            0x00030000, /* EMC_DLL_XFORM_DQS0 */

            0x0000000c, /* EMC_QSAFE */

            0x00020000, /* EMC_DLL_XFORM_QUSE0 */

            0x0000000e, /* EMC_RDV */

            0x00249249, /* EMC_XM2DQSPADCTRL4 */

            0x20820800, /* EMC_XM2DQSPADCTRL3 */

            0x00028000, /* EMC_DLL_XFORM_DQ0 */

            0xa0f10f0f, /* EMC_AUTO_CAL_CONFIG */

            0x00000000, /* EMC_DLL_XFORM_ADDR0 */

            0x00000909, /* EMC_XM2CLKPADCTRL2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

            0x00000000, /* EMC_DLL_XFORM_ADDR1 */

            0x00000000, /* EMC_DLL_XFORM_ADDR2 */

            0x00030000, /* EMC_DLL_XFORM_DQS1 */

            0x00030000, /* EMC_DLL_XFORM_DQS2 */

            0x00030000, /* EMC_DLL_XFORM_DQS3 */

            0x00028000, /* EMC_DLL_XFORM_DQ1 */

            0x00028000, /* EMC_DLL_XFORM_DQ2 */

            0x00028000, /* EMC_DLL_XFORM_DQ3 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

            0x00020000, /* EMC_DLL_XFORM_QUSE1 */

            0x00020000, /* EMC_DLL_XFORM_QUSE2 */

            0x00020000, /* EMC_DLL_XFORM_QUSE3 */

        },

        {

            0x00000000, /* EMC_CDB_CNTL_1 */

            0x00000004, /* EMC_FBIO_CFG6 */

            0x00000006, /* EMC_QUSE */

            0x00000005, /* EMC_EINPUT */

            0x00000004, /* EMC_EINPUT_DURATION */

            0x00030000, /* EMC_DLL_XFORM_DQS0 */

            0x0000000c, /* EMC_QSAFE */

            0x00020000, /* EMC_DLL_XFORM_QUSE0 */

            0x0000000e, /* EMC_RDV */

            0x00249249, /* EMC_XM2DQSPADCTRL4 */

            0x20820800, /* EMC_XM2DQSPADCTRL3 */

            0x00028000, /* EMC_DLL_XFORM_DQ0 */

            0xa8f10f0f, /* EMC_AUTO_CAL_CONFIG */

            0x00000000, /* EMC_DLL_XFORM_ADDR0 */

            0x00000909, /* EMC_XM2CLKPADCTRL2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

            0x00000000, /* EMC_DLL_XFORM_ADDR1 */

            0x00000000, /* EMC_DLL_XFORM_ADDR2 */

            0x00030000, /* EMC_DLL_XFORM_DQS1 */

            0x00030000, /* EMC_DLL_XFORM_DQS2 */

            0x00030000, /* EMC_DLL_XFORM_DQS3 */

            0x00028000, /* EMC_DLL_XFORM_DQ1 */

            0x00028000, /* EMC_DLL_XFORM_DQ2 */

            0x00028000, /* EMC_DLL_XFORM_DQ3 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

            0x00020000, /* EMC_DLL_XFORM_QUSE1 */

            0x00020000, /* EMC_DLL_XFORM_QUSE2 */

            0x00020000, /* EMC_DLL_XFORM_QUSE3 */

        },

        {

            0x000000d1, /* MC_PTSA_GRANT_DECREMENT */

            0x00110011, /* MC_LATENCY_ALLOWANCE_G2_0 */

            0x00110013, /* MC_LATENCY_ALLOWANCE_G2_1 */

            0x00150017, /* MC_LATENCY_ALLOWANCE_NV_0 */

            0x00000017, /* MC_LATENCY_ALLOWANCE_NV2_0 */

            0x00170017, /* MC_LATENCY_ALLOWANCE_NV_2 */

            0x001f0017, /* MC_LATENCY_ALLOWANCE_NV_1 */

            0x0000001f, /* MC_LATENCY_ALLOWANCE_NV2_1 */

            0x001f001f, /* MC_LATENCY_ALLOWANCE_NV3 */

            0x00d30064, /* MC_LATENCY_ALLOWANCE_EPP_0 */

            0x00d300d3, /* MC_LATENCY_ALLOWANCE_EPP_1 */

            0x4E564441, /* System Verification tag */

            0x04010400, /* Reg_tool Version */

            0x02000400, /* DVFS_tool Version */

            408000,     /* SDRAM Frequency */

        },

        0x00000042, /* EMC_ZCAL_WAIT_CNT after clock change */

        0x001fffff, /* EMC_AUTO_CAL_INTERVAL */

        0x53000006, /* EMC_CFG */

        0x80000731, /* Mode Register 0 */

        0x80100002, /* Mode Register 1 */

        0x80200008, /* Mode Register 2 */

        0x00000000, /* Mode Register 4 */

        1750,       /* expected dvfs latency (ns) */

    },

    {

        0x42,       /* Rev 4.0.3 */

        528000,     /* SDRAM frequency */

        1050,       /* min voltage */

        "pll_m",    /* clock source id */

        0x84000000, /* CLK_SOURCE_EMC */

        100,        /* number of burst_regs */

        30,         /* number of trim_regs (each channel) */

        11,         /* number of up_down_regs */

        {

            0x00000018, /* EMC_RC */

            0x00000088, /* EMC_RFC */

            0x00000000, /* EMC_RFC_SLR */

            0x00000011, /* EMC_RAS */

            0x00000006, /* EMC_RP */

            0x00000006, /* EMC_R2W */

            0x00000009, /* EMC_W2R */

            0x00000002, /* EMC_R2P */

            0x0000000d, /* EMC_W2P */

            0x00000006, /* EMC_RD_RCD */

            0x00000006, /* EMC_WR_RCD */

            0x00000002, /* EMC_RRD */

            0x00000001, /* EMC_REXT */

            0x00000000, /* EMC_WEXT */

            0x00000005, /* EMC_WDV */

            0x0000000f, /* EMC_WDV_MASK */

            0x00000009, /* EMC_IBDLY */

            0x00010000, /* EMC_PUTERM_EXTRA */

            0x00000000, /* EMC_CDB_CNTL_2 */

            0x00000006, /* EMC_QRST */

            0x00000012, /* EMC_RDV_MASK */

            0x00000fd6, /* EMC_REFRESH */

            0x00000000, /* EMC_BURST_REFRESH_NUM */

            0x000003f5, /* EMC_PRE_REFRESH_REQ_CNT */

            0x00000002, /* EMC_PDEX2WR */

            0x0000000b, /* EMC_PDEX2RD */

            0x00000001, /* EMC_PCHG2PDEN */

            0x00000000, /* EMC_ACT2PDEN */

            0x00000084, /* EMC_AR2PDEN */

            0x00000012, /* EMC_RW2PDEN */

            0x0000008f, /* EMC_TXSR */

            0x00000200, /* EMC_TXSRDLL */

            0x00000004, /* EMC_TCKE */

            0x00000004, /* EMC_TCKESR */

            0x00000004, /* EMC_TPD */

            0x00000016, /* EMC_TFAW */

            0x00000000, /* EMC_TRPAB */

            0x00000005, /* EMC_TCLKSTABLE */

            0x00000006, /* EMC_TCLKSTOP */

            0x00001017, /* EMC_TREFBW */

            0x00000000, /* EMC_QUSE_EXTRA */

            0x00000020, /* EMC_ODT_WRITE */

            0x00000000, /* EMC_ODT_READ */

            0x00005088, /* EMC_FBIO_CFG5 */

            0xf0120091, /* EMC_CFG_DIG_DLL */

            0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */

            0x0000000a, /* EMC_DLL_XFORM_DQS4 */

            0x0000000a, /* EMC_DLL_XFORM_DQS5 */

            0x0000000a, /* EMC_DLL_XFORM_DQS6 */

            0x0000000a, /* EMC_DLL_XFORM_DQS7 */

            0x00000000, /* EMC_DLL_XFORM_QUSE4 */

            0x00000000, /* EMC_DLL_XFORM_QUSE5 */

            0x00000000, /* EMC_DLL_XFORM_QUSE6 */

            0x00000000, /* EMC_DLL_XFORM_QUSE7 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS4 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS5 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS6 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS7 */

            0x001112a0, /* EMC_XM2CMDPADCTRL */

            0x00000000, /* EMC_XM2CMDPADCTRL4 */

            0x0000013d, /* EMC_XM2DQSPADCTRL2 */

            0x00000000, /* EMC_XM2DQPADCTRL2 */

            0x77ffc085, /* EMC_XM2CLKPADCTRL */

            0x81f1f108, /* EMC_XM2COMPPADCTRL */

            0x07077504, /* EMC_XM2VTTGENPADCTRL */

            0x00000000, /* EMC_XM2VTTGENPADCTRL2 */

            0x0000003f, /* EMC_DSR_VTTGEN_DRV */

            0x00000000, /* EMC_TXDSRVTTGEN */

            0x02000000, /* EMC_FBIO_SPARE */

            0x00000802, /* EMC_CTT_TERM_CTRL */

            0x00020000, /* EMC_ZCAL_INTERVAL */

            0x00000100, /* EMC_ZCAL_WAIT_CNT */

            0x013a000c, /* EMC_MRS_WAIT_CNT */

            0x013a000c, /* EMC_MRS_WAIT_CNT2 */

            0x00000000, /* EMC_AUTO_CAL_CONFIG2 */

            0x00000000, /* EMC_AUTO_CAL_CONFIG3 */

            0x00000000, /* EMC_CTT */

            0x00000000, /* EMC_CTT_DURATION */

            0x80002062, /* EMC_DYN_SELF_REF_CONTROL */

            0x1f7df7df, /* EMC_CA_TRAINING_TIMING_CNTL1 */

            0x0000001f, /* EMC_CA_TRAINING_TIMING_CNTL2 */

            0x0f000007, /* MC_EMEM_ARB_CFG */

            0x80000190, /* MC_EMEM_ARB_OUTSTANDING_REQ */

            0x00000002, /* MC_EMEM_ARB_TIMING_RCD */

            0x00000003, /* MC_EMEM_ARB_TIMING_RP */

            0x0000000d, /* MC_EMEM_ARB_TIMING_RC */

            0x00000008, /* MC_EMEM_ARB_TIMING_RAS */

            0x0000000a, /* MC_EMEM_ARB_TIMING_FAW */

            0x00000001, /* MC_EMEM_ARB_TIMING_RRD */

            0x00000002, /* MC_EMEM_ARB_TIMING_RAP2PRE */

            0x00000009, /* MC_EMEM_ARB_TIMING_WAP2PRE */

            0x00000002, /* MC_EMEM_ARB_TIMING_R2R */

            0x00000002, /* MC_EMEM_ARB_TIMING_W2W */

            0x00000005, /* MC_EMEM_ARB_TIMING_R2W */

            0x00000006, /* MC_EMEM_ARB_TIMING_W2R */

            0x06050202, /* MC_EMEM_ARB_DA_TURNS */

            0x0010090d, /* MC_EMEM_ARB_DA_COVERS */

            0x7428180e, /* MC_EMEM_ARB_MISC0 */

            0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */

            0x00040320, /* EMC_SEL_DPD_CTRL */

        },

        {

            0x00000000, /* EMC_CDB_CNTL_1 */

            0x00000006, /* EMC_FBIO_CFG6 */

            0x00000008, /* EMC_QUSE */

            0x00000007, /* EMC_EINPUT */

            0x00000004, /* EMC_EINPUT_DURATION */

            0x0000000a, /* EMC_DLL_XFORM_DQS0 */

            0x0000000c, /* EMC_QSAFE */

            0x00000000, /* EMC_DLL_XFORM_QUSE0 */

            0x00000010, /* EMC_RDV */

            0x00249249, /* EMC_XM2DQSPADCTRL4 */

            0x20820800, /* EMC_XM2DQSPADCTRL3 */

            0x0000000c, /* EMC_DLL_XFORM_DQ0 */

            0xa0f10f0f, /* EMC_AUTO_CAL_CONFIG */

            0x00000000, /* EMC_DLL_XFORM_ADDR0 */

            0x00000b0b, /* EMC_XM2CLKPADCTRL2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

            0x00000000, /* EMC_DLL_XFORM_ADDR1 */

            0x00000000, /* EMC_DLL_XFORM_ADDR2 */

            0x0000000a, /* EMC_DLL_XFORM_DQS1 */

            0x0000000a, /* EMC_DLL_XFORM_DQS2 */

            0x0000000a, /* EMC_DLL_XFORM_DQS3 */

            0x0000000c, /* EMC_DLL_XFORM_DQ1 */

            0x0000000c, /* EMC_DLL_XFORM_DQ2 */

            0x0000000c, /* EMC_DLL_XFORM_DQ3 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

            0x00000000, /* EMC_DLL_XFORM_QUSE1 */

            0x00000000, /* EMC_DLL_XFORM_QUSE2 */

            0x00000000, /* EMC_DLL_XFORM_QUSE3 */

        },

        {

            0x00000000, /* EMC_CDB_CNTL_1 */

            0x00000006, /* EMC_FBIO_CFG6 */

            0x00000008, /* EMC_QUSE */

            0x00000007, /* EMC_EINPUT */

            0x00000004, /* EMC_EINPUT_DURATION */

            0x0000000a, /* EMC_DLL_XFORM_DQS0 */

            0x0000000c, /* EMC_QSAFE */

            0x00000000, /* EMC_DLL_XFORM_QUSE0 */

            0x00000010, /* EMC_RDV */

            0x00249249, /* EMC_XM2DQSPADCTRL4 */

            0x20820800, /* EMC_XM2DQSPADCTRL3 */

            0x0000000c, /* EMC_DLL_XFORM_DQ0 */

            0xa8f10f0f, /* EMC_AUTO_CAL_CONFIG */

            0x00000000, /* EMC_DLL_XFORM_ADDR0 */

            0x00000b0b, /* EMC_XM2CLKPADCTRL2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

            0x00000000, /* EMC_DLL_XFORM_ADDR1 */

            0x00000000, /* EMC_DLL_XFORM_ADDR2 */

            0x0000000a, /* EMC_DLL_XFORM_DQS1 */

            0x0000000a, /* EMC_DLL_XFORM_DQS2 */

            0x0000000a, /* EMC_DLL_XFORM_DQS3 */

            0x0000000c, /* EMC_DLL_XFORM_DQ1 */

            0x0000000c, /* EMC_DLL_XFORM_DQ2 */

            0x0000000c, /* EMC_DLL_XFORM_DQ3 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

            0x00000000, /* EMC_DLL_XFORM_QUSE1 */

            0x00000000, /* EMC_DLL_XFORM_QUSE2 */

            0x00000000, /* EMC_DLL_XFORM_QUSE3 */

        },

        {

            0x0000010e, /* MC_PTSA_GRANT_DECREMENT */

            0x000d000d, /* MC_LATENCY_ALLOWANCE_G2_0 */

            0x000d000f, /* MC_LATENCY_ALLOWANCE_G2_1 */

            0x00100012, /* MC_LATENCY_ALLOWANCE_NV_0 */

            0x00000012, /* MC_LATENCY_ALLOWANCE_NV2_0 */

            0x00120012, /* MC_LATENCY_ALLOWANCE_NV_2 */

            0x00180012, /* MC_LATENCY_ALLOWANCE_NV_1 */

            0x00000018, /* MC_LATENCY_ALLOWANCE_NV2_1 */

            0x00180018, /* MC_LATENCY_ALLOWANCE_NV3 */

            0x00a3004d, /* MC_LATENCY_ALLOWANCE_EPP_0 */

            0x00a300a3, /* MC_LATENCY_ALLOWANCE_EPP_1 */

            0x4E564441, /* System Verification tag */

            0x04010700, /* Reg_tool Version */

            0x02000400, /* DVFS_tool Version */

            528000,     /* SDRAM Frequency */

        },

        0x00000042, /* EMC_ZCAL_WAIT_CNT after clock change */

        0x001fffff, /* EMC_AUTO_CAL_INTERVAL */

        0x53000004, /* EMC_CFG */

        0x80000941, /* Mode Register 0 */

        0x80100002, /* Mode Register 1 */

        0x80200008, /* Mode Register 2 */

        0x00000000, /* Mode Register 4 */

        1440,       /* expected dvfs latency (ns) */

    },

    {

        0x42,       /* Rev 4.0.3 */

        624000,     /* SDRAM frequency */

        1100,       /* min voltage */

        "pll_c",    /* clock source id */

        0x24000000, /* CLK_SOURCE_EMC */

        100,        /* number of burst_regs */

        30,         /* number of trim_regs (each channel) */

        11,         /* number of up_down_regs */

        {

            0x0000001d, /* EMC_RC */

            0x000000a1, /* EMC_RFC */

            0x00000000, /* EMC_RFC_SLR */

            0x00000014, /* EMC_RAS */

            0x00000007, /* EMC_RP */

            0x00000007, /* EMC_R2W */

            0x0000000b, /* EMC_W2R */

            0x00000003, /* EMC_R2P */

            0x00000010, /* EMC_W2P */

            0x00000007, /* EMC_RD_RCD */

            0x00000007, /* EMC_WR_RCD */

            0x00000002, /* EMC_RRD */

            0x00000001, /* EMC_REXT */

            0x00000000, /* EMC_WEXT */

            0x00000005, /* EMC_WDV */

            0x0000000f, /* EMC_WDV_MASK */

            0x0000000a, /* EMC_IBDLY */

            0x00010000, /* EMC_PUTERM_EXTRA */

            0x00000000, /* EMC_CDB_CNTL_2 */

            0x00000007, /* EMC_QRST */

            0x00000014, /* EMC_RDV_MASK */

            0x000012c3, /* EMC_REFRESH */

            0x00000000, /* EMC_BURST_REFRESH_NUM */

            0x000004b0, /* EMC_PRE_REFRESH_REQ_CNT */

            0x00000002, /* EMC_PDEX2WR */

            0x0000000d, /* EMC_PDEX2RD */

            0x00000001, /* EMC_PCHG2PDEN */

            0x00000000, /* EMC_ACT2PDEN */

            0x0000009c, /* EMC_AR2PDEN */

            0x00000015, /* EMC_RW2PDEN */

            0x000000a9, /* EMC_TXSR */

            0x00000200, /* EMC_TXSRDLL */

            0x00000005, /* EMC_TCKE */

            0x00000005, /* EMC_TCKESR */

            0x00000005, /* EMC_TPD */

            0x00000019, /* EMC_TFAW */

            0x00000000, /* EMC_TRPAB */

            0x00000006, /* EMC_TCLKSTABLE */

            0x00000007, /* EMC_TCLKSTOP */

            0x00001304, /* EMC_TREFBW */

            0x00000009, /* EMC_QUSE_EXTRA */

            0x80000000, /* EMC_ODT_WRITE */

            0x00000000, /* EMC_ODT_READ */

            0x0000ba88, /* EMC_FBIO_CFG5 */

            0xf00d0191, /* EMC_CFG_DIG_DLL */

            0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */

            0x00000009, /* EMC_DLL_XFORM_DQS4 */

            0x00000009, /* EMC_DLL_XFORM_DQS5 */

            0x00000009, /* EMC_DLL_XFORM_DQS6 */

            0x00000009, /* EMC_DLL_XFORM_DQS7 */

            0x00018000, /* EMC_DLL_XFORM_QUSE4 */

            0x00018000, /* EMC_DLL_XFORM_QUSE5 */

            0x00018000, /* EMC_DLL_XFORM_QUSE6 */

            0x00018000, /* EMC_DLL_XFORM_QUSE7 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS4 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS5 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS6 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS7 */

            0x001112a0, /* EMC_XM2CMDPADCTRL */

            0x00000000, /* EMC_XM2CMDPADCTRL4 */

            0x0000013d, /* EMC_XM2DQSPADCTRL2 */

            0x00000000, /* EMC_XM2DQPADCTRL2 */

            0x77ffc085, /* EMC_XM2CLKPADCTRL */

            0x81f1f108, /* EMC_XM2COMPPADCTRL */

            0x07077504, /* EMC_XM2VTTGENPADCTRL */

            0x00000000, /* EMC_XM2VTTGENPADCTRL2 */

            0x0000003f, /* EMC_DSR_VTTGEN_DRV */

            0x00000000, /* EMC_TXDSRVTTGEN */

            0x02000000, /* EMC_FBIO_SPARE */

            0x00000802, /* EMC_CTT_TERM_CTRL */

            0x00020000, /* EMC_ZCAL_INTERVAL */

            0x00000100, /* EMC_ZCAL_WAIT_CNT */

            0x0122000c, /* EMC_MRS_WAIT_CNT */

            0x0122000c, /* EMC_MRS_WAIT_CNT2 */

            0x00000000, /* EMC_AUTO_CAL_CONFIG2 */

            0x00000000, /* EMC_AUTO_CAL_CONFIG3 */

            0x00000000, /* EMC_CTT */

            0x00000000, /* EMC_CTT_DURATION */

            0x80002617, /* EMC_DYN_SELF_REF_CONTROL */

            0x1f7df7df, /* EMC_CA_TRAINING_TIMING_CNTL1 */

            0x0000001f, /* EMC_CA_TRAINING_TIMING_CNTL2 */

            0x06000009, /* MC_EMEM_ARB_CFG */

            0x80000190, /* MC_EMEM_ARB_OUTSTANDING_REQ */

            0x00000003, /* MC_EMEM_ARB_TIMING_RCD */

            0x00000004, /* MC_EMEM_ARB_TIMING_RP */

            0x0000000f, /* MC_EMEM_ARB_TIMING_RC */

            0x00000009, /* MC_EMEM_ARB_TIMING_RAS */

            0x0000000c, /* MC_EMEM_ARB_TIMING_FAW */

            0x00000001, /* MC_EMEM_ARB_TIMING_RRD */

            0x00000003, /* MC_EMEM_ARB_TIMING_RAP2PRE */

            0x0000000b, /* MC_EMEM_ARB_TIMING_WAP2PRE */

            0x00000002, /* MC_EMEM_ARB_TIMING_R2R */

            0x00000002, /* MC_EMEM_ARB_TIMING_W2W */

            0x00000005, /* MC_EMEM_ARB_TIMING_R2W */

            0x00000007, /* MC_EMEM_ARB_TIMING_W2R */

            0x07050202, /* MC_EMEM_ARB_DA_TURNS */

            0x00130b0f, /* MC_EMEM_ARB_DA_COVERS */

            0x736a1d10, /* MC_EMEM_ARB_MISC0 */

            0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */

            0x00040320, /* EMC_SEL_DPD_CTRL */

        },

        {

            0x00000000, /* EMC_CDB_CNTL_1 */

            0x00000006, /* EMC_FBIO_CFG6 */

            0x00000009, /* EMC_QUSE */

            0x00000008, /* EMC_EINPUT */

            0x00000004, /* EMC_EINPUT_DURATION */

            0x00000009, /* EMC_DLL_XFORM_DQS0 */

            0x0000000c, /* EMC_QSAFE */

            0x00018000, /* EMC_DLL_XFORM_QUSE0 */

            0x00000012, /* EMC_RDV */

            0x00249249, /* EMC_XM2DQSPADCTRL4 */

            0x20820800, /* EMC_XM2DQSPADCTRL3 */

            0x0000000a, /* EMC_DLL_XFORM_DQ0 */

            0xa0f10f0f, /* EMC_AUTO_CAL_CONFIG */

            0x00000000, /* EMC_DLL_XFORM_ADDR0 */

            0x00000c0c, /* EMC_XM2CLKPADCTRL2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

            0x00000000, /* EMC_DLL_XFORM_ADDR1 */

            0x00000000, /* EMC_DLL_XFORM_ADDR2 */

            0x00000009, /* EMC_DLL_XFORM_DQS1 */

            0x00000009, /* EMC_DLL_XFORM_DQS2 */

            0x00000009, /* EMC_DLL_XFORM_DQS3 */

            0x0000000a, /* EMC_DLL_XFORM_DQ1 */

            0x0000000a, /* EMC_DLL_XFORM_DQ2 */

            0x0000000a, /* EMC_DLL_XFORM_DQ3 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

            0x00018000, /* EMC_DLL_XFORM_QUSE1 */

            0x00018000, /* EMC_DLL_XFORM_QUSE2 */

            0x00018000, /* EMC_DLL_XFORM_QUSE3 */

        },

        {

            0x00000000, /* EMC_CDB_CNTL_1 */

            0x00000006, /* EMC_FBIO_CFG6 */

            0x00000009, /* EMC_QUSE */

            0x00000008, /* EMC_EINPUT */

            0x00000004, /* EMC_EINPUT_DURATION */

            0x00000009, /* EMC_DLL_XFORM_DQS0 */

            0x0000000c, /* EMC_QSAFE */

            0x00018000, /* EMC_DLL_XFORM_QUSE0 */

            0x00000012, /* EMC_RDV */

            0x00249249, /* EMC_XM2DQSPADCTRL4 */

            0x20820800, /* EMC_XM2DQSPADCTRL3 */

            0x0000000a, /* EMC_DLL_XFORM_DQ0 */

            0xa8f10f0f, /* EMC_AUTO_CAL_CONFIG */

            0x00000000, /* EMC_DLL_XFORM_ADDR0 */

            0x00000b0b, /* EMC_XM2CLKPADCTRL2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

            0x00000000, /* EMC_DLL_XFORM_ADDR1 */

            0x00000000, /* EMC_DLL_XFORM_ADDR2 */

            0x00000009, /* EMC_DLL_XFORM_DQS1 */

            0x00000009, /* EMC_DLL_XFORM_DQS2 */

            0x00000009, /* EMC_DLL_XFORM_DQS3 */

            0x0000000a, /* EMC_DLL_XFORM_DQ1 */

            0x0000000a, /* EMC_DLL_XFORM_DQ2 */

            0x0000000a, /* EMC_DLL_XFORM_DQ3 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

            0x00018000, /* EMC_DLL_XFORM_QUSE1 */

            0x00018000, /* EMC_DLL_XFORM_QUSE2 */

            0x00018000, /* EMC_DLL_XFORM_QUSE3 */

        },

        {

            0x0000013f, /* MC_PTSA_GRANT_DECREMENT */

            0x000b000b, /* MC_LATENCY_ALLOWANCE_G2_0 */

            0x000b000c, /* MC_LATENCY_ALLOWANCE_G2_1 */

            0x000e000f, /* MC_LATENCY_ALLOWANCE_NV_0 */

            0x0000000f, /* MC_LATENCY_ALLOWANCE_NV2_0 */

            0x000f000f, /* MC_LATENCY_ALLOWANCE_NV_2 */

            0x0014000f, /* MC_LATENCY_ALLOWANCE_NV_1 */

            0x00000014, /* MC_LATENCY_ALLOWANCE_NV2_1 */

            0x00140014, /* MC_LATENCY_ALLOWANCE_NV3 */

            0x008a0041, /* MC_LATENCY_ALLOWANCE_EPP_0 */

            0x008a008a, /* MC_LATENCY_ALLOWANCE_EPP_1 */

            0x4E564441, /* System Verification tag */

            0x04010400, /* Reg_tool Version */

            0x02000400, /* DVFS_tool Version */

            624000,     /* SDRAM Frequency */

        },

        0x00000042, /* EMC_ZCAL_WAIT_CNT after clock change */

        0x001fffff, /* EMC_AUTO_CAL_INTERVAL */

        0x53200000, /* EMC_CFG */

        0x80000b61, /* Mode Register 0 */

        0x80100002, /* Mode Register 1 */

        0x80200410, /* Mode Register 2 */

        0x00000000, /* Mode Register 4 */

        1290,       /* expected dvfs latency (ns) */

    },

    {

        0x42,       /* Rev 4.0.3 */

        792000,     /* SDRAM frequency */

        1100,       /* min voltage */

        "pll_m",    /* clock source id */

        0x84000000, /* CLK_SOURCE_EMC */

        100,        /* number of burst_regs */

        30,         /* number of trim_regs (each channel) */

        11,         /* number of up_down_regs */

        {

            0x00000025, /* EMC_RC */

            0x000000cc, /* EMC_RFC */

            0x00000000, /* EMC_RFC_SLR */

            0x0000001a, /* EMC_RAS */

            0x00000009, /* EMC_RP */

            0x00000008, /* EMC_R2W */

            0x0000000d, /* EMC_W2R */

            0x00000004, /* EMC_R2P */

            0x00000013, /* EMC_W2P */

            0x00000009, /* EMC_RD_RCD */

            0x00000009, /* EMC_WR_RCD */

            0x00000003, /* EMC_RRD */

            0x00000001, /* EMC_REXT */

            0x00000000, /* EMC_WEXT */

            0x00000006, /* EMC_WDV */

            0x0000000f, /* EMC_WDV_MASK */

            0x0000000b, /* EMC_IBDLY */

            0x00010000, /* EMC_PUTERM_EXTRA */

            0x00000000, /* EMC_CDB_CNTL_2 */

            0x00000008, /* EMC_QRST */

            0x00000016, /* EMC_RDV_MASK */

            0x000017e1, /* EMC_REFRESH */

            0x00000000, /* EMC_BURST_REFRESH_NUM */

            0x000005f8, /* EMC_PRE_REFRESH_REQ_CNT */

            0x00000003, /* EMC_PDEX2WR */

            0x00000011, /* EMC_PDEX2RD */

            0x00000001, /* EMC_PCHG2PDEN */

            0x00000000, /* EMC_ACT2PDEN */

            0x000000c6, /* EMC_AR2PDEN */

            0x00000018, /* EMC_RW2PDEN */

            0x000000d6, /* EMC_TXSR */

            0x00000200, /* EMC_TXSRDLL */

            0x00000005, /* EMC_TCKE */

            0x00000005, /* EMC_TCKESR */

            0x00000005, /* EMC_TPD */

            0x00000020, /* EMC_TFAW */

            0x00000000, /* EMC_TRPAB */

            0x00000007, /* EMC_TCLKSTABLE */

            0x00000008, /* EMC_TCLKSTOP */

            0x00001822, /* EMC_TREFBW */

            0x00000000, /* EMC_QUSE_EXTRA */

            0x80000000, /* EMC_ODT_WRITE */

            0x00000000, /* EMC_ODT_READ */

            0x00005088, /* EMC_FBIO_CFG5 */

            0xf0070191, /* EMC_CFG_DIG_DLL */

            0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */

            0x007fc00a, /* EMC_DLL_XFORM_DQS4 */

            0x007fc00a, /* EMC_DLL_XFORM_DQS5 */

            0x007fc00a, /* EMC_DLL_XFORM_DQS6 */

            0x007fc00a, /* EMC_DLL_XFORM_DQS7 */

            0x0002c000, /* EMC_DLL_XFORM_QUSE4 */

            0x0002c000, /* EMC_DLL_XFORM_QUSE5 */

            0x0002c000, /* EMC_DLL_XFORM_QUSE6 */

            0x0002c000, /* EMC_DLL_XFORM_QUSE7 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS4 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS5 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS6 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS7 */

            0x001112a0, /* EMC_XM2CMDPADCTRL */

            0x00000000, /* EMC_XM2CMDPADCTRL4 */

            0x0000013d, /* EMC_XM2DQSPADCTRL2 */

            0x00000000, /* EMC_XM2DQPADCTRL2 */

            0x77ffc085, /* EMC_XM2CLKPADCTRL */

            0x81f1f108, /* EMC_XM2COMPPADCTRL */

            0x07077504, /* EMC_XM2VTTGENPADCTRL */

            0x00000000, /* EMC_XM2VTTGENPADCTRL2 */

            0x0000003f, /* EMC_DSR_VTTGEN_DRV */

            0x00000000, /* EMC_TXDSRVTTGEN */

            0x02000000, /* EMC_FBIO_SPARE */

            0x00000802, /* EMC_CTT_TERM_CTRL */

            0x00020000, /* EMC_ZCAL_INTERVAL */

            0x00000100, /* EMC_ZCAL_WAIT_CNT */

            0x00f8000c, /* EMC_MRS_WAIT_CNT */

            0x00f8000c, /* EMC_MRS_WAIT_CNT2 */

            0x00000000, /* EMC_AUTO_CAL_CONFIG2 */

            0x00000000, /* EMC_AUTO_CAL_CONFIG3 */

            0x00000000, /* EMC_CTT */

            0x00000000, /* EMC_CTT_DURATION */

            0x80003012, /* EMC_DYN_SELF_REF_CONTROL */

            0x1f7df7df, /* EMC_CA_TRAINING_TIMING_CNTL1 */

            0x0000001f, /* EMC_CA_TRAINING_TIMING_CNTL2 */

            0x0e00000b, /* MC_EMEM_ARB_CFG */

            0x80000190, /* MC_EMEM_ARB_OUTSTANDING_REQ */

            0x00000004, /* MC_EMEM_ARB_TIMING_RCD */

            0x00000005, /* MC_EMEM_ARB_TIMING_RP */

            0x00000013, /* MC_EMEM_ARB_TIMING_RC */

            0x0000000c, /* MC_EMEM_ARB_TIMING_RAS */

            0x0000000f, /* MC_EMEM_ARB_TIMING_FAW */

            0x00000002, /* MC_EMEM_ARB_TIMING_RRD */

            0x00000003, /* MC_EMEM_ARB_TIMING_RAP2PRE */

            0x0000000c, /* MC_EMEM_ARB_TIMING_WAP2PRE */

            0x00000002, /* MC_EMEM_ARB_TIMING_R2R */

            0x00000002, /* MC_EMEM_ARB_TIMING_W2W */

            0x00000006, /* MC_EMEM_ARB_TIMING_R2W */

            0x00000008, /* MC_EMEM_ARB_TIMING_W2R */

            0x08060202, /* MC_EMEM_ARB_DA_TURNS */

            0x00160d13, /* MC_EMEM_ARB_DA_COVERS */

            0x734c2414, /* MC_EMEM_ARB_MISC0 */

            0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */

            0x00040000, /* EMC_SEL_DPD_CTRL */

        },

        {

            0x00000000, /* EMC_CDB_CNTL_1 */

            0x00000006, /* EMC_FBIO_CFG6 */

            0x0000000a, /* EMC_QUSE */

            0x00000008, /* EMC_EINPUT */

            0x00000006, /* EMC_EINPUT_DURATION */

            0x007fc00a, /* EMC_DLL_XFORM_DQS0 */

            0x0000000d, /* EMC_QSAFE */

            0x0002c000, /* EMC_DLL_XFORM_QUSE0 */

            0x00000014, /* EMC_RDV */

            0x00249249, /* EMC_XM2DQSPADCTRL4 */

            0x20820800, /* EMC_XM2DQSPADCTRL3 */

            0x0000000a, /* EMC_DLL_XFORM_DQ0 */

            0xa0f10f0f, /* EMC_AUTO_CAL_CONFIG */

            0x00000000, /* EMC_DLL_XFORM_ADDR0 */

            0x00000b0b, /* EMC_XM2CLKPADCTRL2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

            0x00000000, /* EMC_DLL_XFORM_ADDR1 */

            0x00000000, /* EMC_DLL_XFORM_ADDR2 */

            0x007fc00a, /* EMC_DLL_XFORM_DQS1 */

            0x0000000a, /* EMC_DLL_XFORM_DQS2 */

            0x007fc00a, /* EMC_DLL_XFORM_DQS3 */

            0x0000000a, /* EMC_DLL_XFORM_DQ1 */

            0x0000000a, /* EMC_DLL_XFORM_DQ2 */

            0x0000000a, /* EMC_DLL_XFORM_DQ3 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

            0x0002c000, /* EMC_DLL_XFORM_QUSE1 */

            0x0002c000, /* EMC_DLL_XFORM_QUSE2 */

            0x0002c000, /* EMC_DLL_XFORM_QUSE3 */

        },

        {

            0x00000000, /* EMC_CDB_CNTL_1 */

            0x00000006, /* EMC_FBIO_CFG6 */

            0x0000000a, /* EMC_QUSE */

            0x00000008, /* EMC_EINPUT */

            0x00000006, /* EMC_EINPUT_DURATION */

            0x007fc00a, /* EMC_DLL_XFORM_DQS0 */

            0x0000000d, /* EMC_QSAFE */

            0x0002c000, /* EMC_DLL_XFORM_QUSE0 */

            0x00000014, /* EMC_RDV */

            0x00249249, /* EMC_XM2DQSPADCTRL4 */

            0x20820800, /* EMC_XM2DQSPADCTRL3 */

            0x0000000a, /* EMC_DLL_XFORM_DQ0 */

            0xa8f10f0f, /* EMC_AUTO_CAL_CONFIG */

            0x00000000, /* EMC_DLL_XFORM_ADDR0 */

            0x00000b0b, /* EMC_XM2CLKPADCTRL2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

            0x00000000, /* EMC_DLL_XFORM_ADDR1 */

            0x00000000, /* EMC_DLL_XFORM_ADDR2 */

            0x007fc00a, /* EMC_DLL_XFORM_DQS1 */

            0x0000000a, /* EMC_DLL_XFORM_DQS2 */

            0x007fc00a, /* EMC_DLL_XFORM_DQS3 */

            0x0000000a, /* EMC_DLL_XFORM_DQ1 */

            0x0000000a, /* EMC_DLL_XFORM_DQ2 */

            0x0000000a, /* EMC_DLL_XFORM_DQ3 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

            0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

            0x0002c000, /* EMC_DLL_XFORM_QUSE1 */

            0x0002c000, /* EMC_DLL_XFORM_QUSE2 */

            0x0002c000, /* EMC_DLL_XFORM_QUSE3 */

        },

        {

            0x00000196, /* MC_PTSA_GRANT_DECREMENT */

            0x00090009, /* MC_LATENCY_ALLOWANCE_G2_0 */

            0x0009000a, /* MC_LATENCY_ALLOWANCE_G2_1 */

            0x000b000c, /* MC_LATENCY_ALLOWANCE_NV_0 */

            0x0000000c, /* MC_LATENCY_ALLOWANCE_NV2_0 */

            0x000c000c, /* MC_LATENCY_ALLOWANCE_NV_2 */

            0x0010000c, /* MC_LATENCY_ALLOWANCE_NV_1 */

            0x00000010, /* MC_LATENCY_ALLOWANCE_NV2_1 */

            0x00100010, /* MC_LATENCY_ALLOWANCE_NV3 */

            0x006d0033, /* MC_LATENCY_ALLOWANCE_EPP_0 */

            0x006d006d, /* MC_LATENCY_ALLOWANCE_EPP_1 */

            0x4E564441, /* System Verification tag */

            0x04010400, /* Reg_tool Version */

            0x02000400, /* DVFS_tool Version */

            792000,     /* SDRAM Frequency */

        },

        0x00000042, /* EMC_ZCAL_WAIT_CNT after clock change */

        0x001fffff, /* EMC_AUTO_CAL_INTERVAL */

        0x53000000, /* EMC_CFG */

        0x80000d71, /* Mode Register 0 */

        0x80100002, /* Mode Register 1 */

        0x80200418, /* Mode Register 2 */

        0x00000000, /* Mode Register 4 */

        1200,       /* expected dvfs latency (ns) */

    },

};

static struct tegra11_emc_table Bowser_dvfs_table_Hynix_0116_table[] =
{

	{

		0x42,       /* Rev 4.0.3 */

		12750,      /* SDRAM frequency */

		900,        /* min voltage */

		"pll_p",    /* clock source id */

		0x4400003e, /* CLK_SOURCE_EMC */

		100,        /* number of burst_regs */

		30,         /* number of trim_regs (each channel) */

		11,         /* number of up_down_regs */

		{

			0x00000000, /* EMC_RC */

			0x00000003, /* EMC_RFC */

			0x00000000, /* EMC_RFC_SLR */

			0x00000000, /* EMC_RAS */

			0x00000000, /* EMC_RP */

			0x00000004, /* EMC_R2W */

			0x0000000a, /* EMC_W2R */

			0x00000003, /* EMC_R2P */

			0x0000000b, /* EMC_W2P */

			0x00000000, /* EMC_RD_RCD */

			0x00000000, /* EMC_WR_RCD */

			0x00000003, /* EMC_RRD */

			0x00000001, /* EMC_REXT */

			0x00000000, /* EMC_WEXT */

			0x00000005, /* EMC_WDV */

			0x0000000f, /* EMC_WDV_MASK */

			0x00000006, /* EMC_IBDLY */

			0x00010000, /* EMC_PUTERM_EXTRA */

			0x00000000, /* EMC_CDB_CNTL_2 */

			0x00000004, /* EMC_QRST */

			0x0000000f, /* EMC_RDV_MASK */

			0x00000060, /* EMC_REFRESH */

			0x00000000, /* EMC_BURST_REFRESH_NUM */

			0x00000018, /* EMC_PRE_REFRESH_REQ_CNT */

			0x00000002, /* EMC_PDEX2WR */

			0x00000002, /* EMC_PDEX2RD */

			0x00000001, /* EMC_PCHG2PDEN */

			0x00000000, /* EMC_ACT2PDEN */

			0x00000007, /* EMC_AR2PDEN */

			0x0000000f, /* EMC_RW2PDEN */

			0x00000005, /* EMC_TXSR */

			0x00000005, /* EMC_TXSRDLL */

			0x00000004, /* EMC_TCKE */

			0x00000004, /* EMC_TCKESR */

			0x00000004, /* EMC_TPD */

			0x00000004, /* EMC_TFAW */

			0x00000000, /* EMC_TRPAB */

			0x00000004, /* EMC_TCLKSTABLE */

			0x00000005, /* EMC_TCLKSTOP */

			0x00000064, /* EMC_TREFBW */

			0x00000005, /* EMC_QUSE_EXTRA */

			0x00000020, /* EMC_ODT_WRITE */

			0x00000000, /* EMC_ODT_READ */

			0x0000aa88, /* EMC_FBIO_CFG5 */

			0x002c00a0, /* EMC_CFG_DIG_DLL */

			0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */

			0x00064000, /* EMC_DLL_XFORM_DQS4 */

			0x00064000, /* EMC_DLL_XFORM_DQS5 */

			0x00064000, /* EMC_DLL_XFORM_DQS6 */

			0x00064000, /* EMC_DLL_XFORM_DQS7 */

			0x00000000, /* EMC_DLL_XFORM_QUSE4 */

			0x00000000, /* EMC_DLL_XFORM_QUSE5 */

			0x00000000, /* EMC_DLL_XFORM_QUSE6 */

			0x00000000, /* EMC_DLL_XFORM_QUSE7 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS4 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS5 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS6 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS7 */

			0x001112a0, /* EMC_XM2CMDPADCTRL */

			0x00000000, /* EMC_XM2CMDPADCTRL4 */

			0x0000a11c, /* EMC_XM2DQSPADCTRL2 */

			0x00000000, /* EMC_XM2DQPADCTRL2 */

			0x77ffc085, /* EMC_XM2CLKPADCTRL */

			0x81f1f108, /* EMC_XM2COMPPADCTRL */

			0x03037504, /* EMC_XM2VTTGENPADCTRL */

			0x0000003f, /* EMC_XM2VTTGENPADCTRL2 */

			0x0000003f, /* EMC_DSR_VTTGEN_DRV */

			0x00000007, /* EMC_TXDSRVTTGEN */

			0x02000000, /* EMC_FBIO_SPARE */

			0x00000802, /* EMC_CTT_TERM_CTRL */

			0x00000000, /* EMC_ZCAL_INTERVAL */

			0x00000042, /* EMC_ZCAL_WAIT_CNT */

			0x000c000c, /* EMC_MRS_WAIT_CNT */

			0x000c000c, /* EMC_MRS_WAIT_CNT2 */

			0x00000000, /* EMC_AUTO_CAL_CONFIG2 */

			0x00000000, /* EMC_AUTO_CAL_CONFIG3 */

			0x00000000, /* EMC_CTT */

			0x00000000, /* EMC_CTT_DURATION */

			0x800001c5, /* EMC_DYN_SELF_REF_CONTROL */

			0x1f7df7df, /* EMC_CA_TRAINING_TIMING_CNTL1 */

			0x0000001f, /* EMC_CA_TRAINING_TIMING_CNTL2 */

			0x40040001, /* MC_EMEM_ARB_CFG */

			0x8000003f, /* MC_EMEM_ARB_OUTSTANDING_REQ */

			0x00000001, /* MC_EMEM_ARB_TIMING_RCD */

			0x00000001, /* MC_EMEM_ARB_TIMING_RP */

			0x00000002, /* MC_EMEM_ARB_TIMING_RC */

			0x00000000, /* MC_EMEM_ARB_TIMING_RAS */

			0x00000001, /* MC_EMEM_ARB_TIMING_FAW */

			0x00000001, /* MC_EMEM_ARB_TIMING_RRD */

			0x00000002, /* MC_EMEM_ARB_TIMING_RAP2PRE */

			0x00000008, /* MC_EMEM_ARB_TIMING_WAP2PRE */

			0x00000002, /* MC_EMEM_ARB_TIMING_R2R */

			0x00000001, /* MC_EMEM_ARB_TIMING_W2W */

			0x00000003, /* MC_EMEM_ARB_TIMING_R2W */

			0x00000006, /* MC_EMEM_ARB_TIMING_W2R */

			0x06030102, /* MC_EMEM_ARB_DA_TURNS */

			0x000a0402, /* MC_EMEM_ARB_DA_COVERS */

			0x77e30303, /* MC_EMEM_ARB_MISC0 */

			0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */

			0x00040320, /* EMC_SEL_DPD_CTRL */

		},

		{

			0x00000000, /* EMC_CDB_CNTL_1 */

			0x00000006, /* EMC_FBIO_CFG6 */

			0x00000006, /* EMC_QUSE */

			0x00000004, /* EMC_EINPUT */

			0x00000004, /* EMC_EINPUT_DURATION */

			0x00064000, /* EMC_DLL_XFORM_DQS0 */

			0x00000009, /* EMC_QSAFE */

			0x00000000, /* EMC_DLL_XFORM_QUSE0 */

			0x0000000d, /* EMC_RDV */

			0x00249249, /* EMC_XM2DQSPADCTRL4 */

			0x20820800, /* EMC_XM2DQSPADCTRL3 */

			0x0007c000, /* EMC_DLL_XFORM_DQ0 */

			0xa0f10f0f, /* EMC_AUTO_CAL_CONFIG */

			0x00000000, /* EMC_DLL_XFORM_ADDR0 */

			0x00000d0d, /* EMC_XM2CLKPADCTRL2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

			0x00000000, /* EMC_DLL_XFORM_ADDR1 */

			0x00000000, /* EMC_DLL_XFORM_ADDR2 */

			0x00064000, /* EMC_DLL_XFORM_DQS1 */

			0x00064000, /* EMC_DLL_XFORM_DQS2 */

			0x00064000, /* EMC_DLL_XFORM_DQS3 */

			0x0007c000, /* EMC_DLL_XFORM_DQ1 */

			0x0007c000, /* EMC_DLL_XFORM_DQ2 */

			0x0007c000, /* EMC_DLL_XFORM_DQ3 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

			0x00000000, /* EMC_DLL_XFORM_QUSE1 */

			0x00000000, /* EMC_DLL_XFORM_QUSE2 */

			0x00000000, /* EMC_DLL_XFORM_QUSE3 */

		},

		{

			0x00000000, /* EMC_CDB_CNTL_1 */

			0x00000006, /* EMC_FBIO_CFG6 */

			0x00000006, /* EMC_QUSE */

			0x00000004, /* EMC_EINPUT */

			0x00000004, /* EMC_EINPUT_DURATION */

			0x00064000, /* EMC_DLL_XFORM_DQS0 */

			0x00000009, /* EMC_QSAFE */

			0x00000000, /* EMC_DLL_XFORM_QUSE0 */

			0x0000000d, /* EMC_RDV */

			0x00249249, /* EMC_XM2DQSPADCTRL4 */

			0x20820800, /* EMC_XM2DQSPADCTRL3 */

			0x0007c000, /* EMC_DLL_XFORM_DQ0 */

			0xa8f10f0f, /* EMC_AUTO_CAL_CONFIG */

			0x00000000, /* EMC_DLL_XFORM_ADDR0 */

			0x00000d0d, /* EMC_XM2CLKPADCTRL2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

			0x00000000, /* EMC_DLL_XFORM_ADDR1 */

			0x00000000, /* EMC_DLL_XFORM_ADDR2 */

			0x00064000, /* EMC_DLL_XFORM_DQS1 */

			0x00064000, /* EMC_DLL_XFORM_DQS2 */

			0x00064000, /* EMC_DLL_XFORM_DQS3 */

			0x0007c000, /* EMC_DLL_XFORM_DQ1 */

			0x0007c000, /* EMC_DLL_XFORM_DQ2 */

			0x0007c000, /* EMC_DLL_XFORM_DQ3 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

			0x00000000, /* EMC_DLL_XFORM_QUSE1 */

			0x00000000, /* EMC_DLL_XFORM_QUSE2 */

			0x00000000, /* EMC_DLL_XFORM_QUSE3 */

		},

		{

			0x00000007, /* MC_PTSA_GRANT_DECREMENT */

			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_G2_0 */

			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_G2_1 */

			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_NV_0 */

			0x000000ff, /* MC_LATENCY_ALLOWANCE_NV2_0 */

			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_NV_2 */

			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_NV_1 */

			0x000000ff, /* MC_LATENCY_ALLOWANCE_NV2_1 */

			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_NV3 */

			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_EPP_0 */

			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_EPP_1 */

			0x4E564441, /* System Verification tag */

			0x04010400, /* Reg_tool Version */

			0x02000400, /* DVFS_tool Version */

			12750,      /* SDRAM Frequency */

		},

		0x00000042, /* EMC_ZCAL_WAIT_CNT after clock change */

		0x001fffff, /* EMC_AUTO_CAL_INTERVAL */

		0x7324000e, /* EMC_CFG */

		0x80001221, /* Mode Register 0 */

		0x80100003, /* Mode Register 1 */

		0x80200008, /* Mode Register 2 */

		0x00000000, /* Mode Register 4 */

		57820,      /* expected dvfs latency (ns) */

	},

	{

		0x42,       /* Rev 4.0.3 */

		20400,      /* SDRAM frequency */

		900,        /* min voltage */

		"pll_p",    /* clock source id */

		0x44000026, /* CLK_SOURCE_EMC */

		100,        /* number of burst_regs */

		30,         /* number of trim_regs (each channel) */

		11,         /* number of up_down_regs */

		{

			0x00000000, /* EMC_RC */

			0x00000005, /* EMC_RFC */

			0x00000000, /* EMC_RFC_SLR */

			0x00000000, /* EMC_RAS */

			0x00000000, /* EMC_RP */

			0x00000004, /* EMC_R2W */

			0x0000000a, /* EMC_W2R */

			0x00000003, /* EMC_R2P */

			0x0000000b, /* EMC_W2P */

			0x00000000, /* EMC_RD_RCD */

			0x00000000, /* EMC_WR_RCD */

			0x00000003, /* EMC_RRD */

			0x00000001, /* EMC_REXT */

			0x00000000, /* EMC_WEXT */

			0x00000005, /* EMC_WDV */

			0x0000000f, /* EMC_WDV_MASK */

			0x00000006, /* EMC_IBDLY */

			0x00010000, /* EMC_PUTERM_EXTRA */

			0x00000000, /* EMC_CDB_CNTL_2 */

			0x00000004, /* EMC_QRST */

			0x0000000f, /* EMC_RDV_MASK */

			0x0000009a, /* EMC_REFRESH */

			0x00000000, /* EMC_BURST_REFRESH_NUM */

			0x00000026, /* EMC_PRE_REFRESH_REQ_CNT */

			0x00000002, /* EMC_PDEX2WR */

			0x00000002, /* EMC_PDEX2RD */

			0x00000001, /* EMC_PCHG2PDEN */

			0x00000000, /* EMC_ACT2PDEN */

			0x00000007, /* EMC_AR2PDEN */

			0x0000000f, /* EMC_RW2PDEN */

			0x00000006, /* EMC_TXSR */

			0x00000006, /* EMC_TXSRDLL */

			0x00000004, /* EMC_TCKE */

			0x00000004, /* EMC_TCKESR */

			0x00000004, /* EMC_TPD */

			0x00000004, /* EMC_TFAW */

			0x00000000, /* EMC_TRPAB */

			0x00000004, /* EMC_TCLKSTABLE */

			0x00000005, /* EMC_TCLKSTOP */

			0x000000a0, /* EMC_TREFBW */

			0x00000005, /* EMC_QUSE_EXTRA */

			0x00000020, /* EMC_ODT_WRITE */

			0x00000000, /* EMC_ODT_READ */

			0x0000aa88, /* EMC_FBIO_CFG5 */

			0x002c00a0, /* EMC_CFG_DIG_DLL */

			0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */

			0x00064000, /* EMC_DLL_XFORM_DQS4 */

			0x00064000, /* EMC_DLL_XFORM_DQS5 */

			0x00064000, /* EMC_DLL_XFORM_DQS6 */

			0x00064000, /* EMC_DLL_XFORM_DQS7 */

			0x00000000, /* EMC_DLL_XFORM_QUSE4 */

			0x00000000, /* EMC_DLL_XFORM_QUSE5 */

			0x00000000, /* EMC_DLL_XFORM_QUSE6 */

			0x00000000, /* EMC_DLL_XFORM_QUSE7 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS4 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS5 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS6 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS7 */

			0x001112a0, /* EMC_XM2CMDPADCTRL */

			0x00000000, /* EMC_XM2CMDPADCTRL4 */

			0x0000a11c, /* EMC_XM2DQSPADCTRL2 */

			0x00000000, /* EMC_XM2DQPADCTRL2 */

			0x77ffc085, /* EMC_XM2CLKPADCTRL */

			0x81f1f108, /* EMC_XM2COMPPADCTRL */

			0x03037504, /* EMC_XM2VTTGENPADCTRL */

			0x0000003f, /* EMC_XM2VTTGENPADCTRL2 */

			0x0000003f, /* EMC_DSR_VTTGEN_DRV */

			0x0000000b, /* EMC_TXDSRVTTGEN */

			0x02000000, /* EMC_FBIO_SPARE */

			0x00000802, /* EMC_CTT_TERM_CTRL */

			0x00000000, /* EMC_ZCAL_INTERVAL */

			0x00000042, /* EMC_ZCAL_WAIT_CNT */

			0x000c000c, /* EMC_MRS_WAIT_CNT */

			0x000c000c, /* EMC_MRS_WAIT_CNT2 */

			0x00000000, /* EMC_AUTO_CAL_CONFIG2 */

			0x00000000, /* EMC_AUTO_CAL_CONFIG3 */

			0x00000000, /* EMC_CTT */

			0x00000000, /* EMC_CTT_DURATION */

			0x8000023a, /* EMC_DYN_SELF_REF_CONTROL */

			0x1f7df7df, /* EMC_CA_TRAINING_TIMING_CNTL1 */

			0x0000001f, /* EMC_CA_TRAINING_TIMING_CNTL2 */

			0x40020001, /* MC_EMEM_ARB_CFG */

			0x80000046, /* MC_EMEM_ARB_OUTSTANDING_REQ */

			0x00000001, /* MC_EMEM_ARB_TIMING_RCD */

			0x00000001, /* MC_EMEM_ARB_TIMING_RP */

			0x00000002, /* MC_EMEM_ARB_TIMING_RC */

			0x00000000, /* MC_EMEM_ARB_TIMING_RAS */

			0x00000001, /* MC_EMEM_ARB_TIMING_FAW */

			0x00000001, /* MC_EMEM_ARB_TIMING_RRD */

			0x00000002, /* MC_EMEM_ARB_TIMING_RAP2PRE */

			0x00000008, /* MC_EMEM_ARB_TIMING_WAP2PRE */

			0x00000002, /* MC_EMEM_ARB_TIMING_R2R */

			0x00000001, /* MC_EMEM_ARB_TIMING_W2W */

			0x00000003, /* MC_EMEM_ARB_TIMING_R2W */

			0x00000006, /* MC_EMEM_ARB_TIMING_W2R */

			0x06030102, /* MC_EMEM_ARB_DA_TURNS */

			0x000a0402, /* MC_EMEM_ARB_DA_COVERS */

			0x76230303, /* MC_EMEM_ARB_MISC0 */

			0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */

			0x00040320, /* EMC_SEL_DPD_CTRL */

		},

		{

			0x00000000, /* EMC_CDB_CNTL_1 */

			0x00000006, /* EMC_FBIO_CFG6 */

			0x00000006, /* EMC_QUSE */

			0x00000004, /* EMC_EINPUT */

			0x00000004, /* EMC_EINPUT_DURATION */

			0x00064000, /* EMC_DLL_XFORM_DQS0 */

			0x00000009, /* EMC_QSAFE */

			0x00000000, /* EMC_DLL_XFORM_QUSE0 */

			0x0000000d, /* EMC_RDV */

			0x00249249, /* EMC_XM2DQSPADCTRL4 */

			0x20820800, /* EMC_XM2DQSPADCTRL3 */

			0x0007c000, /* EMC_DLL_XFORM_DQ0 */

			0xa0f10f0f, /* EMC_AUTO_CAL_CONFIG */

			0x00000000, /* EMC_DLL_XFORM_ADDR0 */

			0x00000d0d, /* EMC_XM2CLKPADCTRL2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

			0x00000000, /* EMC_DLL_XFORM_ADDR1 */

			0x00000000, /* EMC_DLL_XFORM_ADDR2 */

			0x00064000, /* EMC_DLL_XFORM_DQS1 */

			0x00064000, /* EMC_DLL_XFORM_DQS2 */

			0x00064000, /* EMC_DLL_XFORM_DQS3 */

			0x0007c000, /* EMC_DLL_XFORM_DQ1 */

			0x0007c000, /* EMC_DLL_XFORM_DQ2 */

			0x0007c000, /* EMC_DLL_XFORM_DQ3 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

			0x00000000, /* EMC_DLL_XFORM_QUSE1 */

			0x00000000, /* EMC_DLL_XFORM_QUSE2 */

			0x00000000, /* EMC_DLL_XFORM_QUSE3 */

		},

		{

			0x00000000, /* EMC_CDB_CNTL_1 */

			0x00000006, /* EMC_FBIO_CFG6 */

			0x00000006, /* EMC_QUSE */

			0x00000004, /* EMC_EINPUT */

			0x00000004, /* EMC_EINPUT_DURATION */

			0x00064000, /* EMC_DLL_XFORM_DQS0 */

			0x00000009, /* EMC_QSAFE */

			0x00000000, /* EMC_DLL_XFORM_QUSE0 */

			0x0000000d, /* EMC_RDV */

			0x00249249, /* EMC_XM2DQSPADCTRL4 */

			0x20820800, /* EMC_XM2DQSPADCTRL3 */

			0x0007c000, /* EMC_DLL_XFORM_DQ0 */

			0xa8f10f0f, /* EMC_AUTO_CAL_CONFIG */

			0x00000000, /* EMC_DLL_XFORM_ADDR0 */

			0x00000d0d, /* EMC_XM2CLKPADCTRL2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

			0x00000000, /* EMC_DLL_XFORM_ADDR1 */

			0x00000000, /* EMC_DLL_XFORM_ADDR2 */

			0x00064000, /* EMC_DLL_XFORM_DQS1 */

			0x00064000, /* EMC_DLL_XFORM_DQS2 */

			0x00064000, /* EMC_DLL_XFORM_DQS3 */

			0x0007c000, /* EMC_DLL_XFORM_DQ1 */

			0x0007c000, /* EMC_DLL_XFORM_DQ2 */

			0x0007c000, /* EMC_DLL_XFORM_DQ3 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

			0x00000000, /* EMC_DLL_XFORM_QUSE1 */

			0x00000000, /* EMC_DLL_XFORM_QUSE2 */

			0x00000000, /* EMC_DLL_XFORM_QUSE3 */

		},

		{

			0x0000000a, /* MC_PTSA_GRANT_DECREMENT */

			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_G2_0 */

			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_G2_1 */

			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_NV_0 */

			0x000000ff, /* MC_LATENCY_ALLOWANCE_NV2_0 */

			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_NV_2 */

			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_NV_1 */

			0x000000ff, /* MC_LATENCY_ALLOWANCE_NV2_1 */

			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_NV3 */

			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_EPP_0 */

			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_EPP_1 */

			0x4E564441, /* System Verification tag */

			0x04010400, /* Reg_tool Version */

			0x02000400, /* DVFS_tool Version */

			20400,      /* SDRAM Frequency */

		},

		0x00000042, /* EMC_ZCAL_WAIT_CNT after clock change */

		0x001fffff, /* EMC_AUTO_CAL_INTERVAL */

		0x7324000e, /* EMC_CFG */

		0x80001221, /* Mode Register 0 */

		0x80100003, /* Mode Register 1 */

		0x80200008, /* Mode Register 2 */

		0x00000000, /* Mode Register 4 */

		35610,      /* expected dvfs latency (ns) */

	},

	{

		0x42,       /* Rev 4.0.3 */

		40800,      /* SDRAM frequency */

		900,        /* min voltage */

		"pll_p",    /* clock source id */

		0x44000012, /* CLK_SOURCE_EMC */

		100,        /* number of burst_regs */

		30,         /* number of trim_regs (each channel) */

		11,         /* number of up_down_regs */

		{

			0x00000001, /* EMC_RC */

			0x0000000a, /* EMC_RFC */

			0x00000000, /* EMC_RFC_SLR */

			0x00000001, /* EMC_RAS */

			0x00000000, /* EMC_RP */

			0x00000004, /* EMC_R2W */

			0x0000000a, /* EMC_W2R */

			0x00000003, /* EMC_R2P */

			0x0000000b, /* EMC_W2P */

			0x00000000, /* EMC_RD_RCD */

			0x00000000, /* EMC_WR_RCD */

			0x00000003, /* EMC_RRD */

			0x00000001, /* EMC_REXT */

			0x00000000, /* EMC_WEXT */

			0x00000005, /* EMC_WDV */

			0x0000000f, /* EMC_WDV_MASK */

			0x00000006, /* EMC_IBDLY */

			0x00010000, /* EMC_PUTERM_EXTRA */

			0x00000000, /* EMC_CDB_CNTL_2 */

			0x00000004, /* EMC_QRST */

			0x0000000f, /* EMC_RDV_MASK */

			0x00000134, /* EMC_REFRESH */

			0x00000000, /* EMC_BURST_REFRESH_NUM */

			0x0000004d, /* EMC_PRE_REFRESH_REQ_CNT */

			0x00000002, /* EMC_PDEX2WR */

			0x00000002, /* EMC_PDEX2RD */

			0x00000001, /* EMC_PCHG2PDEN */

			0x00000000, /* EMC_ACT2PDEN */

			0x00000008, /* EMC_AR2PDEN */

			0x0000000f, /* EMC_RW2PDEN */

			0x0000000c, /* EMC_TXSR */

			0x0000000c, /* EMC_TXSRDLL */

			0x00000004, /* EMC_TCKE */

			0x00000004, /* EMC_TCKESR */

			0x00000004, /* EMC_TPD */

			0x00000004, /* EMC_TFAW */

			0x00000000, /* EMC_TRPAB */

			0x00000004, /* EMC_TCLKSTABLE */

			0x00000005, /* EMC_TCLKSTOP */

			0x0000013f, /* EMC_TREFBW */

			0x00000005, /* EMC_QUSE_EXTRA */

			0x00000020, /* EMC_ODT_WRITE */

			0x00000000, /* EMC_ODT_READ */

			0x0000aa88, /* EMC_FBIO_CFG5 */

			0x002c00a0, /* EMC_CFG_DIG_DLL */

			0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */

			0x00064000, /* EMC_DLL_XFORM_DQS4 */

			0x00064000, /* EMC_DLL_XFORM_DQS5 */

			0x00064000, /* EMC_DLL_XFORM_DQS6 */

			0x00064000, /* EMC_DLL_XFORM_DQS7 */

			0x00000000, /* EMC_DLL_XFORM_QUSE4 */

			0x00000000, /* EMC_DLL_XFORM_QUSE5 */

			0x00000000, /* EMC_DLL_XFORM_QUSE6 */

			0x00000000, /* EMC_DLL_XFORM_QUSE7 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS4 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS5 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS6 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS7 */

			0x001112a0, /* EMC_XM2CMDPADCTRL */

			0x00000000, /* EMC_XM2CMDPADCTRL4 */

			0x0000a11c, /* EMC_XM2DQSPADCTRL2 */

			0x00000000, /* EMC_XM2DQPADCTRL2 */

			0x77ffc085, /* EMC_XM2CLKPADCTRL */

			0x81f1f108, /* EMC_XM2COMPPADCTRL */

			0x03037504, /* EMC_XM2VTTGENPADCTRL */

			0x0000003f, /* EMC_XM2VTTGENPADCTRL2 */

			0x0000003f, /* EMC_DSR_VTTGEN_DRV */

			0x00000015, /* EMC_TXDSRVTTGEN */

			0x02000000, /* EMC_FBIO_SPARE */

			0x00000802, /* EMC_CTT_TERM_CTRL */

			0x00000000, /* EMC_ZCAL_INTERVAL */

			0x00000042, /* EMC_ZCAL_WAIT_CNT */

			0x000c000c, /* EMC_MRS_WAIT_CNT */

			0x000c000c, /* EMC_MRS_WAIT_CNT2 */

			0x00000000, /* EMC_AUTO_CAL_CONFIG2 */

			0x00000000, /* EMC_AUTO_CAL_CONFIG3 */

			0x00000000, /* EMC_CTT */

			0x00000000, /* EMC_CTT_DURATION */

			0x80000370, /* EMC_DYN_SELF_REF_CONTROL */

			0x1f7df7df, /* EMC_CA_TRAINING_TIMING_CNTL1 */

			0x0000001f, /* EMC_CA_TRAINING_TIMING_CNTL2 */

			0xa0000001, /* MC_EMEM_ARB_CFG */

			0x8000005b, /* MC_EMEM_ARB_OUTSTANDING_REQ */

			0x00000001, /* MC_EMEM_ARB_TIMING_RCD */

			0x00000001, /* MC_EMEM_ARB_TIMING_RP */

			0x00000002, /* MC_EMEM_ARB_TIMING_RC */

			0x00000000, /* MC_EMEM_ARB_TIMING_RAS */

			0x00000001, /* MC_EMEM_ARB_TIMING_FAW */

			0x00000001, /* MC_EMEM_ARB_TIMING_RRD */

			0x00000002, /* MC_EMEM_ARB_TIMING_RAP2PRE */

			0x00000008, /* MC_EMEM_ARB_TIMING_WAP2PRE */

			0x00000002, /* MC_EMEM_ARB_TIMING_R2R */

			0x00000001, /* MC_EMEM_ARB_TIMING_W2W */

			0x00000003, /* MC_EMEM_ARB_TIMING_R2W */

			0x00000006, /* MC_EMEM_ARB_TIMING_W2R */

			0x06030102, /* MC_EMEM_ARB_DA_TURNS */

			0x000a0402, /* MC_EMEM_ARB_DA_COVERS */

			0x74a30303, /* MC_EMEM_ARB_MISC0 */

			0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */

			0x00040320, /* EMC_SEL_DPD_CTRL */

		},

		{

			0x00000000, /* EMC_CDB_CNTL_1 */

			0x00000006, /* EMC_FBIO_CFG6 */

			0x00000006, /* EMC_QUSE */

			0x00000004, /* EMC_EINPUT */

			0x00000004, /* EMC_EINPUT_DURATION */

			0x00064000, /* EMC_DLL_XFORM_DQS0 */

			0x00000009, /* EMC_QSAFE */

			0x00000000, /* EMC_DLL_XFORM_QUSE0 */

			0x0000000d, /* EMC_RDV */

			0x00249249, /* EMC_XM2DQSPADCTRL4 */

			0x20820800, /* EMC_XM2DQSPADCTRL3 */

			0x0007c000, /* EMC_DLL_XFORM_DQ0 */

			0xa0f10f0f, /* EMC_AUTO_CAL_CONFIG */

			0x00000000, /* EMC_DLL_XFORM_ADDR0 */

			0x00000d0d, /* EMC_XM2CLKPADCTRL2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

			0x00000000, /* EMC_DLL_XFORM_ADDR1 */

			0x00000000, /* EMC_DLL_XFORM_ADDR2 */

			0x00064000, /* EMC_DLL_XFORM_DQS1 */

			0x00064000, /* EMC_DLL_XFORM_DQS2 */

			0x00064000, /* EMC_DLL_XFORM_DQS3 */

			0x0007c000, /* EMC_DLL_XFORM_DQ1 */

			0x0007c000, /* EMC_DLL_XFORM_DQ2 */

			0x0007c000, /* EMC_DLL_XFORM_DQ3 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

			0x00000000, /* EMC_DLL_XFORM_QUSE1 */

			0x00000000, /* EMC_DLL_XFORM_QUSE2 */

			0x00000000, /* EMC_DLL_XFORM_QUSE3 */

		},

		{

			0x00000000, /* EMC_CDB_CNTL_1 */

			0x00000006, /* EMC_FBIO_CFG6 */

			0x00000006, /* EMC_QUSE */

			0x00000004, /* EMC_EINPUT */

			0x00000004, /* EMC_EINPUT_DURATION */

			0x00064000, /* EMC_DLL_XFORM_DQS0 */

			0x00000009, /* EMC_QSAFE */

			0x00000000, /* EMC_DLL_XFORM_QUSE0 */

			0x0000000d, /* EMC_RDV */

			0x00249249, /* EMC_XM2DQSPADCTRL4 */

			0x20820800, /* EMC_XM2DQSPADCTRL3 */

			0x0007c000, /* EMC_DLL_XFORM_DQ0 */

			0xa8f10f0f, /* EMC_AUTO_CAL_CONFIG */

			0x00000000, /* EMC_DLL_XFORM_ADDR0 */

			0x00000d0d, /* EMC_XM2CLKPADCTRL2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

			0x00000000, /* EMC_DLL_XFORM_ADDR1 */

			0x00000000, /* EMC_DLL_XFORM_ADDR2 */

			0x00064000, /* EMC_DLL_XFORM_DQS1 */

			0x00064000, /* EMC_DLL_XFORM_DQS2 */

			0x00064000, /* EMC_DLL_XFORM_DQS3 */

			0x0007c000, /* EMC_DLL_XFORM_DQ1 */

			0x0007c000, /* EMC_DLL_XFORM_DQ2 */

			0x0007c000, /* EMC_DLL_XFORM_DQ3 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

			0x00000000, /* EMC_DLL_XFORM_QUSE1 */

			0x00000000, /* EMC_DLL_XFORM_QUSE2 */

			0x00000000, /* EMC_DLL_XFORM_QUSE3 */

		},

		{

			0x00000015, /* MC_PTSA_GRANT_DECREMENT */

			0x00b000b0, /* MC_LATENCY_ALLOWANCE_G2_0 */

			0x00b000c4, /* MC_LATENCY_ALLOWANCE_G2_1 */

			0x00d700eb, /* MC_LATENCY_ALLOWANCE_NV_0 */

			0x000000eb, /* MC_LATENCY_ALLOWANCE_NV2_0 */

			0x00eb00eb, /* MC_LATENCY_ALLOWANCE_NV_2 */

			0x00ff00eb, /* MC_LATENCY_ALLOWANCE_NV_1 */

			0x000000ff, /* MC_LATENCY_ALLOWANCE_NV2_1 */

			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_NV3 */

			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_EPP_0 */

			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_EPP_1 */

			0x4E564441, /* System Verification tag */

			0x04010400, /* Reg_tool Version */

			0x02000400, /* DVFS_tool Version */

			40800,      /* SDRAM Frequency */

		},

		0x00000042, /* EMC_ZCAL_WAIT_CNT after clock change */

		0x001fffff, /* EMC_AUTO_CAL_INTERVAL */

		0x7324000e, /* EMC_CFG */

		0x80001221, /* Mode Register 0 */

		0x80100003, /* Mode Register 1 */

		0x80200008, /* Mode Register 2 */

		0x00000000, /* Mode Register 4 */

		20850,      /* expected dvfs latency (ns) */

	},

	{

		0x42,       /* Rev 4.0.3 */

		68000,      /* SDRAM frequency */

		900,        /* min voltage */

		"pll_p",    /* clock source id */

		0x4400000a, /* CLK_SOURCE_EMC */

		100,        /* number of burst_regs */

		30,         /* number of trim_regs (each channel) */

		11,         /* number of up_down_regs */

		{

			0x00000003, /* EMC_RC */

			0x00000011, /* EMC_RFC */

			0x00000000, /* EMC_RFC_SLR */

			0x00000002, /* EMC_RAS */

			0x00000000, /* EMC_RP */

			0x00000004, /* EMC_R2W */

			0x0000000a, /* EMC_W2R */

			0x00000003, /* EMC_R2P */

			0x0000000b, /* EMC_W2P */

			0x00000000, /* EMC_RD_RCD */

			0x00000000, /* EMC_WR_RCD */

			0x00000003, /* EMC_RRD */

			0x00000001, /* EMC_REXT */

			0x00000000, /* EMC_WEXT */

			0x00000005, /* EMC_WDV */

			0x0000000f, /* EMC_WDV_MASK */

			0x00000006, /* EMC_IBDLY */

			0x00010000, /* EMC_PUTERM_EXTRA */

			0x00000000, /* EMC_CDB_CNTL_2 */

			0x00000004, /* EMC_QRST */

			0x0000000f, /* EMC_RDV_MASK */

			0x00000202, /* EMC_REFRESH */

			0x00000000, /* EMC_BURST_REFRESH_NUM */

			0x00000080, /* EMC_PRE_REFRESH_REQ_CNT */

			0x00000002, /* EMC_PDEX2WR */

			0x00000002, /* EMC_PDEX2RD */

			0x00000001, /* EMC_PCHG2PDEN */

			0x00000000, /* EMC_ACT2PDEN */

			0x0000000f, /* EMC_AR2PDEN */

			0x0000000f, /* EMC_RW2PDEN */

			0x00000013, /* EMC_TXSR */

			0x00000013, /* EMC_TXSRDLL */

			0x00000004, /* EMC_TCKE */

			0x00000004, /* EMC_TCKESR */

			0x00000004, /* EMC_TPD */

			0x00000004, /* EMC_TFAW */

			0x00000000, /* EMC_TRPAB */

			0x00000004, /* EMC_TCLKSTABLE */

			0x00000005, /* EMC_TCLKSTOP */

			0x00000213, /* EMC_TREFBW */

			0x00000005, /* EMC_QUSE_EXTRA */

			0x00000020, /* EMC_ODT_WRITE */

			0x00000000, /* EMC_ODT_READ */

			0x0000aa88, /* EMC_FBIO_CFG5 */

			0x002c00a0, /* EMC_CFG_DIG_DLL */

			0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */

			0x00064000, /* EMC_DLL_XFORM_DQS4 */

			0x00064000, /* EMC_DLL_XFORM_DQS5 */

			0x00064000, /* EMC_DLL_XFORM_DQS6 */

			0x00064000, /* EMC_DLL_XFORM_DQS7 */

			0x00000000, /* EMC_DLL_XFORM_QUSE4 */

			0x00000000, /* EMC_DLL_XFORM_QUSE5 */

			0x00000000, /* EMC_DLL_XFORM_QUSE6 */

			0x00000000, /* EMC_DLL_XFORM_QUSE7 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS4 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS5 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS6 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS7 */

			0x001112a0, /* EMC_XM2CMDPADCTRL */

			0x00000000, /* EMC_XM2CMDPADCTRL4 */

			0x0000a11c, /* EMC_XM2DQSPADCTRL2 */

			0x00000000, /* EMC_XM2DQPADCTRL2 */

			0x77ffc085, /* EMC_XM2CLKPADCTRL */

			0x81f1f108, /* EMC_XM2COMPPADCTRL */

			0x03037504, /* EMC_XM2VTTGENPADCTRL */

			0x0000003f, /* EMC_XM2VTTGENPADCTRL2 */

			0x0000003f, /* EMC_DSR_VTTGEN_DRV */

			0x00000022, /* EMC_TXDSRVTTGEN */

			0x02000000, /* EMC_FBIO_SPARE */

			0x00000802, /* EMC_CTT_TERM_CTRL */

			0x00000000, /* EMC_ZCAL_INTERVAL */

			0x00000042, /* EMC_ZCAL_WAIT_CNT */

			0x000c000c, /* EMC_MRS_WAIT_CNT */

			0x000c000c, /* EMC_MRS_WAIT_CNT2 */

			0x00000000, /* EMC_AUTO_CAL_CONFIG2 */

			0x00000000, /* EMC_AUTO_CAL_CONFIG3 */

			0x00000000, /* EMC_CTT */

			0x00000000, /* EMC_CTT_DURATION */

			0x8000050e, /* EMC_DYN_SELF_REF_CONTROL */

			0x1f7df7df, /* EMC_CA_TRAINING_TIMING_CNTL1 */

			0x0000001f, /* EMC_CA_TRAINING_TIMING_CNTL2 */

			0x00000001, /* MC_EMEM_ARB_CFG */

			0x80000076, /* MC_EMEM_ARB_OUTSTANDING_REQ */

			0x00000001, /* MC_EMEM_ARB_TIMING_RCD */

			0x00000001, /* MC_EMEM_ARB_TIMING_RP */

			0x00000002, /* MC_EMEM_ARB_TIMING_RC */

			0x00000000, /* MC_EMEM_ARB_TIMING_RAS */

			0x00000001, /* MC_EMEM_ARB_TIMING_FAW */

			0x00000001, /* MC_EMEM_ARB_TIMING_RRD */

			0x00000002, /* MC_EMEM_ARB_TIMING_RAP2PRE */

			0x00000008, /* MC_EMEM_ARB_TIMING_WAP2PRE */

			0x00000002, /* MC_EMEM_ARB_TIMING_R2R */

			0x00000001, /* MC_EMEM_ARB_TIMING_W2W */

			0x00000003, /* MC_EMEM_ARB_TIMING_R2W */

			0x00000006, /* MC_EMEM_ARB_TIMING_W2R */

			0x06030102, /* MC_EMEM_ARB_DA_TURNS */

			0x000a0402, /* MC_EMEM_ARB_DA_COVERS */

			0x74230403, /* MC_EMEM_ARB_MISC0 */

			0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */

			0x00040320, /* EMC_SEL_DPD_CTRL */

		},

		{

			0x00000000, /* EMC_CDB_CNTL_1 */

			0x00000006, /* EMC_FBIO_CFG6 */

			0x00000006, /* EMC_QUSE */

			0x00000004, /* EMC_EINPUT */

			0x00000004, /* EMC_EINPUT_DURATION */

			0x00064000, /* EMC_DLL_XFORM_DQS0 */

			0x00000009, /* EMC_QSAFE */

			0x00000000, /* EMC_DLL_XFORM_QUSE0 */

			0x0000000d, /* EMC_RDV */

			0x00249249, /* EMC_XM2DQSPADCTRL4 */

			0x20820800, /* EMC_XM2DQSPADCTRL3 */

			0x0007c000, /* EMC_DLL_XFORM_DQ0 */

			0xa0f10f0f, /* EMC_AUTO_CAL_CONFIG */

			0x00000000, /* EMC_DLL_XFORM_ADDR0 */

			0x00000d0d, /* EMC_XM2CLKPADCTRL2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

			0x00000000, /* EMC_DLL_XFORM_ADDR1 */

			0x00000000, /* EMC_DLL_XFORM_ADDR2 */

			0x00064000, /* EMC_DLL_XFORM_DQS1 */

			0x00064000, /* EMC_DLL_XFORM_DQS2 */

			0x00064000, /* EMC_DLL_XFORM_DQS3 */

			0x0007c000, /* EMC_DLL_XFORM_DQ1 */

			0x0007c000, /* EMC_DLL_XFORM_DQ2 */

			0x0007c000, /* EMC_DLL_XFORM_DQ3 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

			0x00000000, /* EMC_DLL_XFORM_QUSE1 */

			0x00000000, /* EMC_DLL_XFORM_QUSE2 */

			0x00000000, /* EMC_DLL_XFORM_QUSE3 */

		},

		{

			0x00000000, /* EMC_CDB_CNTL_1 */

			0x00000006, /* EMC_FBIO_CFG6 */

			0x00000006, /* EMC_QUSE */

			0x00000004, /* EMC_EINPUT */

			0x00000004, /* EMC_EINPUT_DURATION */

			0x00064000, /* EMC_DLL_XFORM_DQS0 */

			0x00000009, /* EMC_QSAFE */

			0x00000000, /* EMC_DLL_XFORM_QUSE0 */

			0x0000000d, /* EMC_RDV */

			0x00249249, /* EMC_XM2DQSPADCTRL4 */

			0x20820800, /* EMC_XM2DQSPADCTRL3 */

			0x0007c000, /* EMC_DLL_XFORM_DQ0 */

			0xa8f10f0f, /* EMC_AUTO_CAL_CONFIG */

			0x00000000, /* EMC_DLL_XFORM_ADDR0 */

			0x00000d0d, /* EMC_XM2CLKPADCTRL2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

			0x00000000, /* EMC_DLL_XFORM_ADDR1 */

			0x00000000, /* EMC_DLL_XFORM_ADDR2 */

			0x00064000, /* EMC_DLL_XFORM_DQS1 */

			0x00064000, /* EMC_DLL_XFORM_DQS2 */

			0x00064000, /* EMC_DLL_XFORM_DQS3 */

			0x0007c000, /* EMC_DLL_XFORM_DQ1 */

			0x0007c000, /* EMC_DLL_XFORM_DQ2 */

			0x0007c000, /* EMC_DLL_XFORM_DQ3 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

			0x00000000, /* EMC_DLL_XFORM_QUSE1 */

			0x00000000, /* EMC_DLL_XFORM_QUSE2 */

			0x00000000, /* EMC_DLL_XFORM_QUSE3 */

		},

		{

			0x00000023, /* MC_PTSA_GRANT_DECREMENT */

			0x00690069, /* MC_LATENCY_ALLOWANCE_G2_0 */

			0x00690075, /* MC_LATENCY_ALLOWANCE_G2_1 */

			0x0081008d, /* MC_LATENCY_ALLOWANCE_NV_0 */

			0x0000008d, /* MC_LATENCY_ALLOWANCE_NV2_0 */

			0x008d008d, /* MC_LATENCY_ALLOWANCE_NV_2 */

			0x00bc008d, /* MC_LATENCY_ALLOWANCE_NV_1 */

			0x000000bc, /* MC_LATENCY_ALLOWANCE_NV2_1 */

			0x00bc00bc, /* MC_LATENCY_ALLOWANCE_NV3 */

			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_EPP_0 */

			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_EPP_1 */

			0x4E564441, /* System Verification tag */

			0x04010400, /* Reg_tool Version */

			0x02000400, /* DVFS_tool Version */

			68000,      /* SDRAM Frequency */

		},

		0x00000042, /* EMC_ZCAL_WAIT_CNT after clock change */

		0x001fffff, /* EMC_AUTO_CAL_INTERVAL */

		0x7324000e, /* EMC_CFG */

		0x80001221, /* Mode Register 0 */

		0x80100003, /* Mode Register 1 */

		0x80200008, /* Mode Register 2 */

		0x00000000, /* Mode Register 4 */

		10720,      /* expected dvfs latency (ns) */

	},

	{

		0x42,       /* Rev 4.0.3 */

		102000,     /* SDRAM frequency */

		900,        /* min voltage */

		"pll_p",    /* clock source id */

		0x44000006, /* CLK_SOURCE_EMC */

		100,        /* number of burst_regs */

		30,         /* number of trim_regs (each channel) */

		11,         /* number of up_down_regs */

		{

			0x00000004, /* EMC_RC */

			0x0000001a, /* EMC_RFC */

			0x00000000, /* EMC_RFC_SLR */

			0x00000003, /* EMC_RAS */

			0x00000001, /* EMC_RP */

			0x00000004, /* EMC_R2W */

			0x0000000a, /* EMC_W2R */

			0x00000003, /* EMC_R2P */

			0x0000000b, /* EMC_W2P */

			0x00000001, /* EMC_RD_RCD */

			0x00000001, /* EMC_WR_RCD */

			0x00000003, /* EMC_RRD */

			0x00000001, /* EMC_REXT */

			0x00000000, /* EMC_WEXT */

			0x00000005, /* EMC_WDV */

			0x0000000f, /* EMC_WDV_MASK */

			0x00000006, /* EMC_IBDLY */

			0x00010000, /* EMC_PUTERM_EXTRA */

			0x00000000, /* EMC_CDB_CNTL_2 */

			0x00000004, /* EMC_QRST */

			0x0000000f, /* EMC_RDV_MASK */

			0x00000303, /* EMC_REFRESH */

			0x00000000, /* EMC_BURST_REFRESH_NUM */

			0x000000c0, /* EMC_PRE_REFRESH_REQ_CNT */

			0x00000002, /* EMC_PDEX2WR */

			0x00000002, /* EMC_PDEX2RD */

			0x00000001, /* EMC_PCHG2PDEN */

			0x00000000, /* EMC_ACT2PDEN */

			0x00000018, /* EMC_AR2PDEN */

			0x0000000f, /* EMC_RW2PDEN */

			0x0000001c, /* EMC_TXSR */

			0x0000001c, /* EMC_TXSRDLL */

			0x00000004, /* EMC_TCKE */

			0x00000004, /* EMC_TCKESR */

			0x00000004, /* EMC_TPD */

			0x00000005, /* EMC_TFAW */

			0x00000000, /* EMC_TRPAB */

			0x00000004, /* EMC_TCLKSTABLE */

			0x00000005, /* EMC_TCLKSTOP */

			0x0000031c, /* EMC_TREFBW */

			0x00000005, /* EMC_QUSE_EXTRA */

			0x00000020, /* EMC_ODT_WRITE */

			0x00000000, /* EMC_ODT_READ */

			0x0000aa88, /* EMC_FBIO_CFG5 */

			0x002c00a0, /* EMC_CFG_DIG_DLL */

			0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */

			0x00064000, /* EMC_DLL_XFORM_DQS4 */

			0x00064000, /* EMC_DLL_XFORM_DQS5 */

			0x00064000, /* EMC_DLL_XFORM_DQS6 */

			0x00064000, /* EMC_DLL_XFORM_DQS7 */

			0x00000000, /* EMC_DLL_XFORM_QUSE4 */

			0x00000000, /* EMC_DLL_XFORM_QUSE5 */

			0x00000000, /* EMC_DLL_XFORM_QUSE6 */

			0x00000000, /* EMC_DLL_XFORM_QUSE7 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS4 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS5 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS6 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS7 */

			0x001112a0, /* EMC_XM2CMDPADCTRL */

			0x00000000, /* EMC_XM2CMDPADCTRL4 */

			0x0000a11c, /* EMC_XM2DQSPADCTRL2 */

			0x00000000, /* EMC_XM2DQPADCTRL2 */

			0x77ffc085, /* EMC_XM2CLKPADCTRL */

			0x81f1f108, /* EMC_XM2COMPPADCTRL */

			0x03037504, /* EMC_XM2VTTGENPADCTRL */

			0x0000003f, /* EMC_XM2VTTGENPADCTRL2 */

			0x0000003f, /* EMC_DSR_VTTGEN_DRV */

			0x00000033, /* EMC_TXDSRVTTGEN */

			0x02000000, /* EMC_FBIO_SPARE */

			0x00000802, /* EMC_CTT_TERM_CTRL */

			0x00000000, /* EMC_ZCAL_INTERVAL */

			0x00000042, /* EMC_ZCAL_WAIT_CNT */

			0x000c000c, /* EMC_MRS_WAIT_CNT */

			0x000c000c, /* EMC_MRS_WAIT_CNT2 */

			0x00000000, /* EMC_AUTO_CAL_CONFIG2 */

			0x00000000, /* EMC_AUTO_CAL_CONFIG3 */

			0x00000000, /* EMC_CTT */

			0x00000000, /* EMC_CTT_DURATION */

			0x80000713, /* EMC_DYN_SELF_REF_CONTROL */

			0x1f7df7df, /* EMC_CA_TRAINING_TIMING_CNTL1 */

			0x0000001f, /* EMC_CA_TRAINING_TIMING_CNTL2 */

			0x08000001, /* MC_EMEM_ARB_CFG */

			0x80000098, /* MC_EMEM_ARB_OUTSTANDING_REQ */

			0x00000001, /* MC_EMEM_ARB_TIMING_RCD */

			0x00000001, /* MC_EMEM_ARB_TIMING_RP */

			0x00000003, /* MC_EMEM_ARB_TIMING_RC */

			0x00000000, /* MC_EMEM_ARB_TIMING_RAS */

			0x00000002, /* MC_EMEM_ARB_TIMING_FAW */

			0x00000001, /* MC_EMEM_ARB_TIMING_RRD */

			0x00000002, /* MC_EMEM_ARB_TIMING_RAP2PRE */

			0x00000008, /* MC_EMEM_ARB_TIMING_WAP2PRE */

			0x00000002, /* MC_EMEM_ARB_TIMING_R2R */

			0x00000001, /* MC_EMEM_ARB_TIMING_W2W */

			0x00000003, /* MC_EMEM_ARB_TIMING_R2W */

			0x00000006, /* MC_EMEM_ARB_TIMING_W2R */

			0x06030102, /* MC_EMEM_ARB_DA_TURNS */

			0x000a0403, /* MC_EMEM_ARB_DA_COVERS */

			0x73c30504, /* MC_EMEM_ARB_MISC0 */

			0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */

			0x00040320, /* EMC_SEL_DPD_CTRL */

		},

		{

			0x00000000, /* EMC_CDB_CNTL_1 */

			0x00000006, /* EMC_FBIO_CFG6 */

			0x00000006, /* EMC_QUSE */

			0x00000004, /* EMC_EINPUT */

			0x00000004, /* EMC_EINPUT_DURATION */

			0x00064000, /* EMC_DLL_XFORM_DQS0 */

			0x00000009, /* EMC_QSAFE */

			0x00000000, /* EMC_DLL_XFORM_QUSE0 */

			0x0000000d, /* EMC_RDV */

			0x00249249, /* EMC_XM2DQSPADCTRL4 */

			0x20820800, /* EMC_XM2DQSPADCTRL3 */

			0x0007c000, /* EMC_DLL_XFORM_DQ0 */

			0xa0f10f0f, /* EMC_AUTO_CAL_CONFIG */

			0x00000000, /* EMC_DLL_XFORM_ADDR0 */

			0x00000d0d, /* EMC_XM2CLKPADCTRL2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

			0x00000000, /* EMC_DLL_XFORM_ADDR1 */

			0x00000000, /* EMC_DLL_XFORM_ADDR2 */

			0x00064000, /* EMC_DLL_XFORM_DQS1 */

			0x00064000, /* EMC_DLL_XFORM_DQS2 */

			0x00064000, /* EMC_DLL_XFORM_DQS3 */

			0x0007c000, /* EMC_DLL_XFORM_DQ1 */

			0x0007c000, /* EMC_DLL_XFORM_DQ2 */

			0x0007c000, /* EMC_DLL_XFORM_DQ3 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

			0x00000000, /* EMC_DLL_XFORM_QUSE1 */

			0x00000000, /* EMC_DLL_XFORM_QUSE2 */

			0x00000000, /* EMC_DLL_XFORM_QUSE3 */

		},

		{

			0x00000000, /* EMC_CDB_CNTL_1 */

			0x00000006, /* EMC_FBIO_CFG6 */

			0x00000006, /* EMC_QUSE */

			0x00000004, /* EMC_EINPUT */

			0x00000004, /* EMC_EINPUT_DURATION */

			0x00064000, /* EMC_DLL_XFORM_DQS0 */

			0x00000009, /* EMC_QSAFE */

			0x00000000, /* EMC_DLL_XFORM_QUSE0 */

			0x0000000d, /* EMC_RDV */

			0x00249249, /* EMC_XM2DQSPADCTRL4 */

			0x20820800, /* EMC_XM2DQSPADCTRL3 */

			0x0007c000, /* EMC_DLL_XFORM_DQ0 */

			0xa8f10f0f, /* EMC_AUTO_CAL_CONFIG */

			0x00000000, /* EMC_DLL_XFORM_ADDR0 */

			0x00000d0d, /* EMC_XM2CLKPADCTRL2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

			0x00000000, /* EMC_DLL_XFORM_ADDR1 */

			0x00000000, /* EMC_DLL_XFORM_ADDR2 */

			0x00064000, /* EMC_DLL_XFORM_DQS1 */

			0x00064000, /* EMC_DLL_XFORM_DQS2 */

			0x00064000, /* EMC_DLL_XFORM_DQS3 */

			0x0007c000, /* EMC_DLL_XFORM_DQ1 */

			0x0007c000, /* EMC_DLL_XFORM_DQ2 */

			0x0007c000, /* EMC_DLL_XFORM_DQ3 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

			0x00000000, /* EMC_DLL_XFORM_QUSE1 */

			0x00000000, /* EMC_DLL_XFORM_QUSE2 */

			0x00000000, /* EMC_DLL_XFORM_QUSE3 */

		},

		{

			0x00000034, /* MC_PTSA_GRANT_DECREMENT */

			0x00460046, /* MC_LATENCY_ALLOWANCE_G2_0 */

			0x0046004e, /* MC_LATENCY_ALLOWANCE_G2_1 */

			0x0056005e, /* MC_LATENCY_ALLOWANCE_NV_0 */

			0x0000005e, /* MC_LATENCY_ALLOWANCE_NV2_0 */

			0x005e005e, /* MC_LATENCY_ALLOWANCE_NV_2 */

			0x007d005e, /* MC_LATENCY_ALLOWANCE_NV_1 */

			0x0000007d, /* MC_LATENCY_ALLOWANCE_NV2_1 */

			0x007d007d, /* MC_LATENCY_ALLOWANCE_NV3 */

			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_EPP_0 */

			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_EPP_1 */

			0x4E564441, /* System Verification tag */

			0x04010400, /* Reg_tool Version */

			0x02000400, /* DVFS_tool Version */

			102000,     /* SDRAM Frequency */

		},

		0x00000042, /* EMC_ZCAL_WAIT_CNT after clock change */

		0x001fffff, /* EMC_AUTO_CAL_INTERVAL */

		0x7324000e, /* EMC_CFG */

		0x80001221, /* Mode Register 0 */

		0x80100003, /* Mode Register 1 */

		0x80200008, /* Mode Register 2 */

		0x00000000, /* Mode Register 4 */

		6890,       /* expected dvfs latency (ns) */

	},
	{

		0x42,       /* Rev 4.0.3 */

		204000,     /* SDRAM frequency */

		900,        /* min voltage */

		"pll_p",    /* clock source id */

		0x44000002, /* CLK_SOURCE_EMC */

		100,        /* number of burst_regs */

		30,         /* number of trim_regs (each channel) */

		11,         /* number of up_down_regs */

		{

			0x00000009, /* EMC_RC */

			0x00000035, /* EMC_RFC */

			0x00000000, /* EMC_RFC_SLR */

			0x00000007, /* EMC_RAS */

			0x00000002, /* EMC_RP */

			0x00000004, /* EMC_R2W */

			0x0000000a, /* EMC_W2R */

			0x00000003, /* EMC_R2P */

			0x0000000b, /* EMC_W2P */

			0x00000002, /* EMC_RD_RCD */

			0x00000002, /* EMC_WR_RCD */

			0x00000003, /* EMC_RRD */

			0x00000001, /* EMC_REXT */

			0x00000000, /* EMC_WEXT */

			0x00000005, /* EMC_WDV */

			0x0000000f, /* EMC_WDV_MASK */

			0x00000006, /* EMC_IBDLY */

			0x00010000, /* EMC_PUTERM_EXTRA */

			0x00000000, /* EMC_CDB_CNTL_2 */

			0x00000004, /* EMC_QRST */

			0x0000000f, /* EMC_RDV_MASK */

			0x00000607, /* EMC_REFRESH */

			0x00000000, /* EMC_BURST_REFRESH_NUM */

			0x00000181, /* EMC_PRE_REFRESH_REQ_CNT */

			0x00000002, /* EMC_PDEX2WR */

			0x00000002, /* EMC_PDEX2RD */

			0x00000001, /* EMC_PCHG2PDEN */

			0x00000000, /* EMC_ACT2PDEN */

			0x00000032, /* EMC_AR2PDEN */

			0x0000000f, /* EMC_RW2PDEN */

			0x00000038, /* EMC_TXSR */

			0x00000038, /* EMC_TXSRDLL */

			0x00000004, /* EMC_TCKE */

			0x00000004, /* EMC_TCKESR */

			0x00000004, /* EMC_TPD */

			0x00000009, /* EMC_TFAW */

			0x00000000, /* EMC_TRPAB */

			0x00000004, /* EMC_TCLKSTABLE */

			0x00000005, /* EMC_TCLKSTOP */

			0x00000638, /* EMC_TREFBW */

			0x00000006, /* EMC_QUSE_EXTRA */

			0x00000020, /* EMC_ODT_WRITE */

			0x00000000, /* EMC_ODT_READ */

			0x0000aa88, /* EMC_FBIO_CFG5 */

			0x002c00a0, /* EMC_CFG_DIG_DLL */

			0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */

			0x00064000, /* EMC_DLL_XFORM_DQS4 */

			0x00064000, /* EMC_DLL_XFORM_DQS5 */

			0x00064000, /* EMC_DLL_XFORM_DQS6 */

			0x00064000, /* EMC_DLL_XFORM_DQS7 */

			0x00000000, /* EMC_DLL_XFORM_QUSE4 */

			0x00000000, /* EMC_DLL_XFORM_QUSE5 */

			0x00000000, /* EMC_DLL_XFORM_QUSE6 */

			0x00000000, /* EMC_DLL_XFORM_QUSE7 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS4 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS5 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS6 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS7 */

			0x001112a0, /* EMC_XM2CMDPADCTRL */

			0x00000000, /* EMC_XM2CMDPADCTRL4 */

			0x0000a11c, /* EMC_XM2DQSPADCTRL2 */

			0x00000000, /* EMC_XM2DQPADCTRL2 */

			0x77ffc085, /* EMC_XM2CLKPADCTRL */

			0x81f1f108, /* EMC_XM2COMPPADCTRL */

			0x03037504, /* EMC_XM2VTTGENPADCTRL */

			0x0000003f, /* EMC_XM2VTTGENPADCTRL2 */

			0x0000003f, /* EMC_DSR_VTTGEN_DRV */

			0x00000000, /* EMC_TXDSRVTTGEN */

			0x02000000, /* EMC_FBIO_SPARE */

			0x00000802, /* EMC_CTT_TERM_CTRL */

			0x00020000, /* EMC_ZCAL_INTERVAL */

			0x00000100, /* EMC_ZCAL_WAIT_CNT */

			0x000c000c, /* EMC_MRS_WAIT_CNT */

			0x000c000c, /* EMC_MRS_WAIT_CNT2 */

			0x00000000, /* EMC_AUTO_CAL_CONFIG2 */

			0x00000000, /* EMC_AUTO_CAL_CONFIG3 */

			0x00000000, /* EMC_CTT */

			0x00000000, /* EMC_CTT_DURATION */

			0x80000d22, /* EMC_DYN_SELF_REF_CONTROL */

			0x1f7df7df, /* EMC_CA_TRAINING_TIMING_CNTL1 */

			0x0000001f, /* EMC_CA_TRAINING_TIMING_CNTL2 */

			0x01000003, /* MC_EMEM_ARB_CFG */

			0x800000fe, /* MC_EMEM_ARB_OUTSTANDING_REQ */

			0x00000001, /* MC_EMEM_ARB_TIMING_RCD */

			0x00000001, /* MC_EMEM_ARB_TIMING_RP */

			0x00000005, /* MC_EMEM_ARB_TIMING_RC */

			0x00000002, /* MC_EMEM_ARB_TIMING_RAS */

			0x00000004, /* MC_EMEM_ARB_TIMING_FAW */

			0x00000001, /* MC_EMEM_ARB_TIMING_RRD */

			0x00000002, /* MC_EMEM_ARB_TIMING_RAP2PRE */

			0x00000008, /* MC_EMEM_ARB_TIMING_WAP2PRE */

			0x00000002, /* MC_EMEM_ARB_TIMING_R2R */

			0x00000001, /* MC_EMEM_ARB_TIMING_W2W */

			0x00000003, /* MC_EMEM_ARB_TIMING_R2W */

			0x00000006, /* MC_EMEM_ARB_TIMING_W2R */

			0x06030102, /* MC_EMEM_ARB_DA_TURNS */

			0x000a0405, /* MC_EMEM_ARB_DA_COVERS */

			0x73840a06, /* MC_EMEM_ARB_MISC0 */

			0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */

			0x00040320, /* EMC_SEL_DPD_CTRL */

		},

		{

			0x00000000, /* EMC_CDB_CNTL_1 */

			0x00000004, /* EMC_FBIO_CFG6 */

			0x00000007, /* EMC_QUSE */

			0x00000004, /* EMC_EINPUT */

			0x00000004, /* EMC_EINPUT_DURATION */

			0x00064000, /* EMC_DLL_XFORM_DQS0 */

			0x00000009, /* EMC_QSAFE */

			0x00000000, /* EMC_DLL_XFORM_QUSE0 */

			0x0000000d, /* EMC_RDV */

			0x00249249, /* EMC_XM2DQSPADCTRL4 */

			0x20820800, /* EMC_XM2DQSPADCTRL3 */

			0x0007c000, /* EMC_DLL_XFORM_DQ0 */

			0xa0f10f0f, /* EMC_AUTO_CAL_CONFIG */

			0x00000000, /* EMC_DLL_XFORM_ADDR0 */

			0x00000d0d, /* EMC_XM2CLKPADCTRL2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

			0x00000000, /* EMC_DLL_XFORM_ADDR1 */

			0x00000000, /* EMC_DLL_XFORM_ADDR2 */

			0x00064000, /* EMC_DLL_XFORM_DQS1 */

			0x00064000, /* EMC_DLL_XFORM_DQS2 */

			0x00064000, /* EMC_DLL_XFORM_DQS3 */

			0x0007c000, /* EMC_DLL_XFORM_DQ1 */

			0x0007c000, /* EMC_DLL_XFORM_DQ2 */

			0x0007c000, /* EMC_DLL_XFORM_DQ3 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

			0x00000000, /* EMC_DLL_XFORM_QUSE1 */

			0x00000000, /* EMC_DLL_XFORM_QUSE2 */

			0x00000000, /* EMC_DLL_XFORM_QUSE3 */

		},

		{

			0x00000000, /* EMC_CDB_CNTL_1 */

			0x00000004, /* EMC_FBIO_CFG6 */

			0x00000007, /* EMC_QUSE */

			0x00000004, /* EMC_EINPUT */

			0x00000004, /* EMC_EINPUT_DURATION */

			0x00064000, /* EMC_DLL_XFORM_DQS0 */

			0x00000009, /* EMC_QSAFE */

			0x00000000, /* EMC_DLL_XFORM_QUSE0 */

			0x0000000d, /* EMC_RDV */

			0x00249249, /* EMC_XM2DQSPADCTRL4 */

			0x20820800, /* EMC_XM2DQSPADCTRL3 */

			0x0007c000, /* EMC_DLL_XFORM_DQ0 */

			0xa8f10f0f, /* EMC_AUTO_CAL_CONFIG */

			0x00000000, /* EMC_DLL_XFORM_ADDR0 */

			0x00000d0d, /* EMC_XM2CLKPADCTRL2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

			0x00000000, /* EMC_DLL_XFORM_ADDR1 */

			0x00000000, /* EMC_DLL_XFORM_ADDR2 */

			0x00064000, /* EMC_DLL_XFORM_DQS1 */

			0x00064000, /* EMC_DLL_XFORM_DQS2 */

			0x00064000, /* EMC_DLL_XFORM_DQS3 */

			0x0007c000, /* EMC_DLL_XFORM_DQ1 */

			0x0007c000, /* EMC_DLL_XFORM_DQ2 */

			0x0007c000, /* EMC_DLL_XFORM_DQ3 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

			0x00000000, /* EMC_DLL_XFORM_QUSE1 */

			0x00000000, /* EMC_DLL_XFORM_QUSE2 */

			0x00000000, /* EMC_DLL_XFORM_QUSE3 */

		},

		{

			0x00000068, /* MC_PTSA_GRANT_DECREMENT */

			0x00230023, /* MC_LATENCY_ALLOWANCE_G2_0 */

			0x00230027, /* MC_LATENCY_ALLOWANCE_G2_1 */

			0x002b002f, /* MC_LATENCY_ALLOWANCE_NV_0 */

			0x0000002f, /* MC_LATENCY_ALLOWANCE_NV2_0 */

			0x002f002f, /* MC_LATENCY_ALLOWANCE_NV_2 */

			0x003e002f, /* MC_LATENCY_ALLOWANCE_NV_1 */

			0x0000003e, /* MC_LATENCY_ALLOWANCE_NV2_1 */

			0x003e003e, /* MC_LATENCY_ALLOWANCE_NV3 */

			0x00ff00c8, /* MC_LATENCY_ALLOWANCE_EPP_0 */

			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_EPP_1 */

			0x4E564441, /* System Verification tag */

			0x04010400, /* Reg_tool Version */

			0x02000400, /* DVFS_tool Version */

			204000,     /* SDRAM Frequency */

		},

		0x00000042, /* EMC_ZCAL_WAIT_CNT after clock change */

		0x001fffff, /* EMC_AUTO_CAL_INTERVAL */

		0x7320000e, /* EMC_CFG */

		0x80001221, /* Mode Register 0 */

		0x80100003, /* Mode Register 1 */

		0x80200008, /* Mode Register 2 */

		0x00000000, /* Mode Register 4 */

		3420,       /* expected dvfs latency (ns) */

	},
	{

		0x42,       /* Rev 4.0.3 */

		312000,     /* SDRAM frequency */

		1000,       /* min voltage */

		"pll_c",    /* clock source id */

		0x24000002, /* CLK_SOURCE_EMC */

		100,        /* number of burst_regs */

		30,         /* number of trim_regs (each channel) */

		11,         /* number of up_down_regs */

		{

			0x0000000e, /* EMC_RC */

			0x00000050, /* EMC_RFC */

			0x00000000, /* EMC_RFC_SLR */

			0x00000009, /* EMC_RAS */

			0x00000003, /* EMC_RP */

			0x00000004, /* EMC_R2W */

			0x00000008, /* EMC_W2R */

			0x00000002, /* EMC_R2P */

			0x00000009, /* EMC_W2P */

			0x00000003, /* EMC_RD_RCD */

			0x00000003, /* EMC_WR_RCD */

			0x00000002, /* EMC_RRD */

			0x00000001, /* EMC_REXT */

			0x00000000, /* EMC_WEXT */

			0x00000004, /* EMC_WDV */

			0x0000000f, /* EMC_WDV_MASK */

			0x00000006, /* EMC_IBDLY */

			0x00010000, /* EMC_PUTERM_EXTRA */

			0x00000000, /* EMC_CDB_CNTL_2 */

			0x00000004, /* EMC_QRST */

			0x0000000f, /* EMC_RDV_MASK */

			0x00000941, /* EMC_REFRESH */

			0x00000000, /* EMC_BURST_REFRESH_NUM */

			0x00000250, /* EMC_PRE_REFRESH_REQ_CNT */

			0x00000001, /* EMC_PDEX2WR */

			0x00000008, /* EMC_PDEX2RD */

			0x00000001, /* EMC_PCHG2PDEN */

			0x00000000, /* EMC_ACT2PDEN */

			0x0000004d, /* EMC_AR2PDEN */

			0x0000000e, /* EMC_RW2PDEN */

			0x00000055, /* EMC_TXSR */

			0x00000200, /* EMC_TXSRDLL */

			0x00000004, /* EMC_TCKE */

			0x00000004, /* EMC_TCKESR */

			0x00000004, /* EMC_TPD */

			0x0000000d, /* EMC_TFAW */

			0x00000000, /* EMC_TRPAB */

			0x00000004, /* EMC_TCLKSTABLE */

			0x00000005, /* EMC_TCLKSTOP */

			0x00000982, /* EMC_TREFBW */

			0x00000000, /* EMC_QUSE_EXTRA */

			0x00000020, /* EMC_ODT_WRITE */

			0x00000000, /* EMC_ODT_READ */

			0x00005088, /* EMC_FBIO_CFG5 */

			0x002c00a0, /* EMC_CFG_DIG_DLL */

			0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */

			0x00018000, /* EMC_DLL_XFORM_DQS4 */

			0x00018000, /* EMC_DLL_XFORM_DQS5 */

			0x00018000, /* EMC_DLL_XFORM_DQS6 */

			0x00018000, /* EMC_DLL_XFORM_DQS7 */

			0x00028000, /* EMC_DLL_XFORM_QUSE4 */

			0x00028000, /* EMC_DLL_XFORM_QUSE5 */

			0x00028000, /* EMC_DLL_XFORM_QUSE6 */

			0x00028000, /* EMC_DLL_XFORM_QUSE7 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS4 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS5 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS6 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS7 */

			0x001112a0, /* EMC_XM2CMDPADCTRL */

			0x00000000, /* EMC_XM2CMDPADCTRL4 */

			0x0001013d, /* EMC_XM2DQSPADCTRL2 */

			0x00000000, /* EMC_XM2DQPADCTRL2 */

			0x77ffc085, /* EMC_XM2CLKPADCTRL */

			0x81f1f108, /* EMC_XM2COMPPADCTRL */

			0x03037504, /* EMC_XM2VTTGENPADCTRL */

			0x00000000, /* EMC_XM2VTTGENPADCTRL2 */

			0x0000003f, /* EMC_DSR_VTTGEN_DRV */

			0x00000000, /* EMC_TXDSRVTTGEN */

			0x02000000, /* EMC_FBIO_SPARE */

			0x00000802, /* EMC_CTT_TERM_CTRL */

			0x00020000, /* EMC_ZCAL_INTERVAL */

			0x00000100, /* EMC_ZCAL_WAIT_CNT */

			0x0171000c, /* EMC_MRS_WAIT_CNT */

			0x0171000c, /* EMC_MRS_WAIT_CNT2 */

			0x00000000, /* EMC_AUTO_CAL_CONFIG2 */

			0x00000000, /* EMC_AUTO_CAL_CONFIG3 */

			0x00000000, /* EMC_CTT */

			0x00000000, /* EMC_CTT_DURATION */

			0x8000138d, /* EMC_DYN_SELF_REF_CONTROL */

			0x1f7df7df, /* EMC_CA_TRAINING_TIMING_CNTL1 */

			0x0000001f, /* EMC_CA_TRAINING_TIMING_CNTL2 */

			0x0b000004, /* MC_EMEM_ARB_CFG */

			0x8000016a, /* MC_EMEM_ARB_OUTSTANDING_REQ */

			0x00000001, /* MC_EMEM_ARB_TIMING_RCD */

			0x00000002, /* MC_EMEM_ARB_TIMING_RP */

			0x00000007, /* MC_EMEM_ARB_TIMING_RC */

			0x00000004, /* MC_EMEM_ARB_TIMING_RAS */

			0x00000006, /* MC_EMEM_ARB_TIMING_FAW */

			0x00000001, /* MC_EMEM_ARB_TIMING_RRD */

			0x00000002, /* MC_EMEM_ARB_TIMING_RAP2PRE */

			0x00000007, /* MC_EMEM_ARB_TIMING_WAP2PRE */

			0x00000002, /* MC_EMEM_ARB_TIMING_R2R */

			0x00000002, /* MC_EMEM_ARB_TIMING_W2W */

			0x00000004, /* MC_EMEM_ARB_TIMING_R2W */

			0x00000006, /* MC_EMEM_ARB_TIMING_W2R */

			0x06040202, /* MC_EMEM_ARB_DA_TURNS */

			0x000b0607, /* MC_EMEM_ARB_DA_COVERS */

			0x76e50f08, /* MC_EMEM_ARB_MISC0 */

			0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */

			0x00040320, /* EMC_SEL_DPD_CTRL */

		},

		{

			0x00000000, /* EMC_CDB_CNTL_1 */

			0x00000004, /* EMC_FBIO_CFG6 */

			0x00000006, /* EMC_QUSE */

			0x00000005, /* EMC_EINPUT */

			0x00000004, /* EMC_EINPUT_DURATION */

			0x00038000, /* EMC_DLL_XFORM_DQS0 */

			0x0000000b, /* EMC_QSAFE */

			0x00028000, /* EMC_DLL_XFORM_QUSE0 */

			0x0000000d, /* EMC_RDV */

			0x00249249, /* EMC_XM2DQSPADCTRL4 */

			0x20820800, /* EMC_XM2DQSPADCTRL3 */

			0x00038000, /* EMC_DLL_XFORM_DQ0 */

			0xa0f10f0f, /* EMC_AUTO_CAL_CONFIG */

			0x00014000, /* EMC_DLL_XFORM_ADDR0 */

			0x00000000, /* EMC_XM2CLKPADCTRL2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

			0x00000000, /* EMC_DLL_XFORM_ADDR1 */

			0x00014000, /* EMC_DLL_XFORM_ADDR2 */

			0x00038000, /* EMC_DLL_XFORM_DQS1 */

			0x00038000, /* EMC_DLL_XFORM_DQS2 */

			0x00038000, /* EMC_DLL_XFORM_DQS3 */

			0x00038000, /* EMC_DLL_XFORM_DQ1 */

			0x00038000, /* EMC_DLL_XFORM_DQ2 */

			0x00038000, /* EMC_DLL_XFORM_DQ3 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

			0x00028000, /* EMC_DLL_XFORM_QUSE1 */

			0x00028000, /* EMC_DLL_XFORM_QUSE2 */

			0x00028000, /* EMC_DLL_XFORM_QUSE3 */

		},

		{

			0x00000000, /* EMC_CDB_CNTL_1 */

			0x00000004, /* EMC_FBIO_CFG6 */

			0x00000006, /* EMC_QUSE */

			0x00000005, /* EMC_EINPUT */

			0x00000004, /* EMC_EINPUT_DURATION */

			0x00038000, /* EMC_DLL_XFORM_DQS0 */

			0x0000000b, /* EMC_QSAFE */

			0x00028000, /* EMC_DLL_XFORM_QUSE0 */

			0x0000000d, /* EMC_RDV */

			0x00249249, /* EMC_XM2DQSPADCTRL4 */

			0x20820800, /* EMC_XM2DQSPADCTRL3 */

			0x00038000, /* EMC_DLL_XFORM_DQ0 */

			0xa8f10f0f, /* EMC_AUTO_CAL_CONFIG */

			0x00014000, /* EMC_DLL_XFORM_ADDR0 */

			0x00000000, /* EMC_XM2CLKPADCTRL2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

			0x00000000, /* EMC_DLL_XFORM_ADDR1 */

			0x00014000, /* EMC_DLL_XFORM_ADDR2 */

			0x00038000, /* EMC_DLL_XFORM_DQS1 */

			0x00038000, /* EMC_DLL_XFORM_DQS2 */

			0x00038000, /* EMC_DLL_XFORM_DQS3 */

			0x00038000, /* EMC_DLL_XFORM_DQ1 */

			0x00038000, /* EMC_DLL_XFORM_DQ2 */

			0x00038000, /* EMC_DLL_XFORM_DQ3 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

			0x00028000, /* EMC_DLL_XFORM_QUSE1 */

			0x00028000, /* EMC_DLL_XFORM_QUSE2 */

			0x00028000, /* EMC_DLL_XFORM_QUSE3 */

		},

		{

			0x000000a0, /* MC_PTSA_GRANT_DECREMENT */

			0x00170017, /* MC_LATENCY_ALLOWANCE_G2_0 */

			0x00170019, /* MC_LATENCY_ALLOWANCE_G2_1 */

			0x001c001e, /* MC_LATENCY_ALLOWANCE_NV_0 */

			0x0000001e, /* MC_LATENCY_ALLOWANCE_NV2_0 */

			0x001e001e, /* MC_LATENCY_ALLOWANCE_NV_2 */

			0x0029001e, /* MC_LATENCY_ALLOWANCE_NV_1 */

			0x00000029, /* MC_LATENCY_ALLOWANCE_NV2_1 */

			0x00290029, /* MC_LATENCY_ALLOWANCE_NV3 */

			0x00ff0082, /* MC_LATENCY_ALLOWANCE_EPP_0 */

			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_EPP_1 */

			0x4E564441, /* System Verification tag */

			0x04010400, /* Reg_tool Version */

			0x02000400, /* DVFS_tool Version */

			312000,     /* SDRAM Frequency */

		},

		0x00000042, /* EMC_ZCAL_WAIT_CNT after clock change */

		0x001fffff, /* EMC_AUTO_CAL_INTERVAL */

		0x5300000e, /* EMC_CFG */

		0x80000321, /* Mode Register 0 */

		0x80100002, /* Mode Register 1 */

		0x80200000, /* Mode Register 2 */

		0x00000000, /* Mode Register 4 */

		2180,       /* expected dvfs latency (ns) */

	},

	{

		0x42,       /* Rev 4.0.3 */

		408000,     /* SDRAM frequency */

		1000,       /* min voltage */

		"pll_p",    /* clock source id */

		0x44000000, /* CLK_SOURCE_EMC */

		100,        /* number of burst_regs */

		30,         /* number of trim_regs (each channel) */

		11,         /* number of up_down_regs */

		{

			0x00000012, /* EMC_RC */

			0x00000069, /* EMC_RFC */

			0x00000000, /* EMC_RFC_SLR */

			0x0000000d, /* EMC_RAS */

			0x00000004, /* EMC_RP */

			0x00000005, /* EMC_R2W */

			0x00000009, /* EMC_W2R */

			0x00000002, /* EMC_R2P */

			0x0000000c, /* EMC_W2P */

			0x00000004, /* EMC_RD_RCD */

			0x00000004, /* EMC_WR_RCD */

			0x00000002, /* EMC_RRD */

			0x00000001, /* EMC_REXT */

			0x00000000, /* EMC_WEXT */

			0x00000004, /* EMC_WDV */

			0x0000000f, /* EMC_WDV_MASK */

			0x00000006, /* EMC_IBDLY */

			0x00010000, /* EMC_PUTERM_EXTRA */

			0x00000000, /* EMC_CDB_CNTL_2 */

			0x00000004, /* EMC_QRST */

			0x00000010, /* EMC_RDV_MASK */

			0x00000c2e, /* EMC_REFRESH */

			0x00000000, /* EMC_BURST_REFRESH_NUM */

			0x0000030b, /* EMC_PRE_REFRESH_REQ_CNT */

			0x00000001, /* EMC_PDEX2WR */

			0x00000008, /* EMC_PDEX2RD */

			0x00000001, /* EMC_PCHG2PDEN */

			0x00000000, /* EMC_ACT2PDEN */

			0x00000066, /* EMC_AR2PDEN */

			0x00000011, /* EMC_RW2PDEN */

			0x0000006f, /* EMC_TXSR */

			0x00000200, /* EMC_TXSRDLL */

			0x00000004, /* EMC_TCKE */

			0x00000004, /* EMC_TCKESR */

			0x00000004, /* EMC_TPD */

			0x00000011, /* EMC_TFAW */

			0x00000000, /* EMC_TRPAB */

			0x00000004, /* EMC_TCLKSTABLE */

			0x00000005, /* EMC_TCLKSTOP */

			0x00000c6f, /* EMC_TREFBW */

			0x00000000, /* EMC_QUSE_EXTRA */

			0x00000020, /* EMC_ODT_WRITE */

			0x00000000, /* EMC_ODT_READ */

			0x00005088, /* EMC_FBIO_CFG5 */

			0x002c0080, /* EMC_CFG_DIG_DLL */

			0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */

			0x00030000, /* EMC_DLL_XFORM_DQS4 */

			0x00030000, /* EMC_DLL_XFORM_DQS5 */

			0x00030000, /* EMC_DLL_XFORM_DQS6 */

			0x00030000, /* EMC_DLL_XFORM_DQS7 */

			0x00020000, /* EMC_DLL_XFORM_QUSE4 */

			0x00020000, /* EMC_DLL_XFORM_QUSE5 */

			0x00020000, /* EMC_DLL_XFORM_QUSE6 */

			0x00020000, /* EMC_DLL_XFORM_QUSE7 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS4 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS5 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS6 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS7 */

			0x001112a0, /* EMC_XM2CMDPADCTRL */

			0x00000000, /* EMC_XM2CMDPADCTRL4 */

			0x0001013d, /* EMC_XM2DQSPADCTRL2 */

			0x00000000, /* EMC_XM2DQPADCTRL2 */

			0x77ffc085, /* EMC_XM2CLKPADCTRL */

			0x81f1f108, /* EMC_XM2COMPPADCTRL */

			0x03037504, /* EMC_XM2VTTGENPADCTRL */

			0x00000000, /* EMC_XM2VTTGENPADCTRL2 */

			0x0000003f, /* EMC_DSR_VTTGEN_DRV */

			0x00000000, /* EMC_TXDSRVTTGEN */

			0x02000000, /* EMC_FBIO_SPARE */

			0x00000802, /* EMC_CTT_TERM_CTRL */

			0x00020000, /* EMC_ZCAL_INTERVAL */

			0x00000100, /* EMC_ZCAL_WAIT_CNT */

			0x0158000c, /* EMC_MRS_WAIT_CNT */

			0x0158000c, /* EMC_MRS_WAIT_CNT2 */

			0x00000000, /* EMC_AUTO_CAL_CONFIG2 */

			0x00000000, /* EMC_AUTO_CAL_CONFIG3 */

			0x00000000, /* EMC_CTT */

			0x00000000, /* EMC_CTT_DURATION */

			0x80001941, /* EMC_DYN_SELF_REF_CONTROL */

			0x1f7df7df, /* EMC_CA_TRAINING_TIMING_CNTL1 */

			0x0000001f, /* EMC_CA_TRAINING_TIMING_CNTL2 */

			0x02000006, /* MC_EMEM_ARB_CFG */

			0x80000190, /* MC_EMEM_ARB_OUTSTANDING_REQ */

			0x00000001, /* MC_EMEM_ARB_TIMING_RCD */

			0x00000002, /* MC_EMEM_ARB_TIMING_RP */

			0x0000000a, /* MC_EMEM_ARB_TIMING_RC */

			0x00000006, /* MC_EMEM_ARB_TIMING_RAS */

			0x00000008, /* MC_EMEM_ARB_TIMING_FAW */

			0x00000001, /* MC_EMEM_ARB_TIMING_RRD */

			0x00000002, /* MC_EMEM_ARB_TIMING_RAP2PRE */

			0x00000009, /* MC_EMEM_ARB_TIMING_WAP2PRE */

			0x00000002, /* MC_EMEM_ARB_TIMING_R2R */

			0x00000002, /* MC_EMEM_ARB_TIMING_W2W */

			0x00000004, /* MC_EMEM_ARB_TIMING_R2W */

			0x00000006, /* MC_EMEM_ARB_TIMING_W2R */

			0x06040202, /* MC_EMEM_ARB_DA_TURNS */

			0x000e070a, /* MC_EMEM_ARB_DA_COVERS */

			0x7547130b, /* MC_EMEM_ARB_MISC0 */

			0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */

			0x00040320, /* EMC_SEL_DPD_CTRL */

		},

		{

			0x00000000, /* EMC_CDB_CNTL_1 */

			0x00000004, /* EMC_FBIO_CFG6 */

			0x00000006, /* EMC_QUSE */

			0x00000005, /* EMC_EINPUT */

			0x00000004, /* EMC_EINPUT_DURATION */

			0x00030000, /* EMC_DLL_XFORM_DQS0 */

			0x0000000c, /* EMC_QSAFE */

			0x00020000, /* EMC_DLL_XFORM_QUSE0 */

			0x0000000e, /* EMC_RDV */

			0x00249249, /* EMC_XM2DQSPADCTRL4 */

			0x20820800, /* EMC_XM2DQSPADCTRL3 */

			0x00028000, /* EMC_DLL_XFORM_DQ0 */

			0xa0f10f0f, /* EMC_AUTO_CAL_CONFIG */

			0x00000000, /* EMC_DLL_XFORM_ADDR0 */

			0x00000909, /* EMC_XM2CLKPADCTRL2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

			0x00000000, /* EMC_DLL_XFORM_ADDR1 */

			0x00000000, /* EMC_DLL_XFORM_ADDR2 */

			0x00030000, /* EMC_DLL_XFORM_DQS1 */

			0x00030000, /* EMC_DLL_XFORM_DQS2 */

			0x00030000, /* EMC_DLL_XFORM_DQS3 */

			0x00028000, /* EMC_DLL_XFORM_DQ1 */

			0x00028000, /* EMC_DLL_XFORM_DQ2 */

			0x00028000, /* EMC_DLL_XFORM_DQ3 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

			0x00020000, /* EMC_DLL_XFORM_QUSE1 */

			0x00020000, /* EMC_DLL_XFORM_QUSE2 */

			0x00020000, /* EMC_DLL_XFORM_QUSE3 */

		},

		{

			0x00000000, /* EMC_CDB_CNTL_1 */

			0x00000004, /* EMC_FBIO_CFG6 */

			0x00000006, /* EMC_QUSE */

			0x00000005, /* EMC_EINPUT */

			0x00000004, /* EMC_EINPUT_DURATION */

			0x00030000, /* EMC_DLL_XFORM_DQS0 */

			0x0000000c, /* EMC_QSAFE */

			0x00020000, /* EMC_DLL_XFORM_QUSE0 */

			0x0000000e, /* EMC_RDV */

			0x00249249, /* EMC_XM2DQSPADCTRL4 */

			0x20820800, /* EMC_XM2DQSPADCTRL3 */

			0x00028000, /* EMC_DLL_XFORM_DQ0 */

			0xa8f10f0f, /* EMC_AUTO_CAL_CONFIG */

			0x00000000, /* EMC_DLL_XFORM_ADDR0 */

			0x00000909, /* EMC_XM2CLKPADCTRL2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

			0x00000000, /* EMC_DLL_XFORM_ADDR1 */

			0x00000000, /* EMC_DLL_XFORM_ADDR2 */

			0x00030000, /* EMC_DLL_XFORM_DQS1 */

			0x00030000, /* EMC_DLL_XFORM_DQS2 */

			0x00030000, /* EMC_DLL_XFORM_DQS3 */

			0x00028000, /* EMC_DLL_XFORM_DQ1 */

			0x00028000, /* EMC_DLL_XFORM_DQ2 */

			0x00028000, /* EMC_DLL_XFORM_DQ3 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

			0x00020000, /* EMC_DLL_XFORM_QUSE1 */

			0x00020000, /* EMC_DLL_XFORM_QUSE2 */

			0x00020000, /* EMC_DLL_XFORM_QUSE3 */

		},

		{

			0x000000d1, /* MC_PTSA_GRANT_DECREMENT */

			0x00110011, /* MC_LATENCY_ALLOWANCE_G2_0 */

			0x00110013, /* MC_LATENCY_ALLOWANCE_G2_1 */

			0x00150017, /* MC_LATENCY_ALLOWANCE_NV_0 */

			0x00000017, /* MC_LATENCY_ALLOWANCE_NV2_0 */

			0x00170017, /* MC_LATENCY_ALLOWANCE_NV_2 */

			0x001f0017, /* MC_LATENCY_ALLOWANCE_NV_1 */

			0x0000001f, /* MC_LATENCY_ALLOWANCE_NV2_1 */

			0x001f001f, /* MC_LATENCY_ALLOWANCE_NV3 */

			0x00d30064, /* MC_LATENCY_ALLOWANCE_EPP_0 */

			0x00d300d3, /* MC_LATENCY_ALLOWANCE_EPP_1 */

			0x4E564441, /* System Verification tag */

			0x04010400, /* Reg_tool Version */

			0x02000400, /* DVFS_tool Version */

			408000,     /* SDRAM Frequency */

		},

		0x00000042, /* EMC_ZCAL_WAIT_CNT after clock change */

		0x001fffff, /* EMC_AUTO_CAL_INTERVAL */

		0x53000006, /* EMC_CFG */

		0x80000731, /* Mode Register 0 */

		0x80100002, /* Mode Register 1 */

		0x80200008, /* Mode Register 2 */

		0x00000000, /* Mode Register 4 */

		1750,       /* expected dvfs latency (ns) */

	},

	{

		0x42,       /* Rev 4.0.3 */

		528000,     /* SDRAM frequency */

		1050,       /* min voltage */

		"pll_m",    /* clock source id */

		0x84000000, /* CLK_SOURCE_EMC */

		100,        /* number of burst_regs */

		30,         /* number of trim_regs (each channel) */

		11,         /* number of up_down_regs */

		{

			0x00000018, /* EMC_RC */

			0x00000088, /* EMC_RFC */

			0x00000000, /* EMC_RFC_SLR */

			0x00000011, /* EMC_RAS */

			0x00000006, /* EMC_RP */

			0x00000006, /* EMC_R2W */

			0x00000009, /* EMC_W2R */

			0x00000002, /* EMC_R2P */

			0x0000000d, /* EMC_W2P */

			0x00000006, /* EMC_RD_RCD */

			0x00000006, /* EMC_WR_RCD */

			0x00000002, /* EMC_RRD */

			0x00000001, /* EMC_REXT */

			0x00000000, /* EMC_WEXT */

			0x00000005, /* EMC_WDV */

			0x0000000f, /* EMC_WDV_MASK */

			0x00000009, /* EMC_IBDLY */

			0x00010000, /* EMC_PUTERM_EXTRA */

			0x00000000, /* EMC_CDB_CNTL_2 */

			0x00000006, /* EMC_QRST */

			0x00000012, /* EMC_RDV_MASK */

			0x00000fd6, /* EMC_REFRESH */

			0x00000000, /* EMC_BURST_REFRESH_NUM */

			0x000003f5, /* EMC_PRE_REFRESH_REQ_CNT */

			0x00000002, /* EMC_PDEX2WR */

			0x0000000b, /* EMC_PDEX2RD */

			0x00000001, /* EMC_PCHG2PDEN */

			0x00000000, /* EMC_ACT2PDEN */

			0x00000084, /* EMC_AR2PDEN */

			0x00000012, /* EMC_RW2PDEN */

			0x0000008f, /* EMC_TXSR */

			0x00000200, /* EMC_TXSRDLL */

			0x00000004, /* EMC_TCKE */

			0x00000004, /* EMC_TCKESR */

			0x00000004, /* EMC_TPD */

			0x00000016, /* EMC_TFAW */

			0x00000000, /* EMC_TRPAB */

			0x00000005, /* EMC_TCLKSTABLE */

			0x00000006, /* EMC_TCLKSTOP */

			0x00001017, /* EMC_TREFBW */

			0x00000000, /* EMC_QUSE_EXTRA */

			0x00000020, /* EMC_ODT_WRITE */

			0x00000000, /* EMC_ODT_READ */

			0x00005088, /* EMC_FBIO_CFG5 */

			0xf0120091, /* EMC_CFG_DIG_DLL */

			0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */

			0x0000000a, /* EMC_DLL_XFORM_DQS4 */

			0x0000000a, /* EMC_DLL_XFORM_DQS5 */

			0x0000000a, /* EMC_DLL_XFORM_DQS6 */

			0x0000000a, /* EMC_DLL_XFORM_DQS7 */

			0x00000000, /* EMC_DLL_XFORM_QUSE4 */

			0x00000000, /* EMC_DLL_XFORM_QUSE5 */

			0x00000000, /* EMC_DLL_XFORM_QUSE6 */

			0x00000000, /* EMC_DLL_XFORM_QUSE7 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS4 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS5 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS6 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS7 */

			0x001112a0, /* EMC_XM2CMDPADCTRL */

			0x00000000, /* EMC_XM2CMDPADCTRL4 */

			0x0000013d, /* EMC_XM2DQSPADCTRL2 */

			0x00000000, /* EMC_XM2DQPADCTRL2 */

			0x77ffc085, /* EMC_XM2CLKPADCTRL */

			0x81f1f108, /* EMC_XM2COMPPADCTRL */

			0x07077504, /* EMC_XM2VTTGENPADCTRL */

			0x00000000, /* EMC_XM2VTTGENPADCTRL2 */

			0x0000003f, /* EMC_DSR_VTTGEN_DRV */

			0x00000000, /* EMC_TXDSRVTTGEN */

			0x02000000, /* EMC_FBIO_SPARE */

			0x00000802, /* EMC_CTT_TERM_CTRL */

			0x00020000, /* EMC_ZCAL_INTERVAL */

			0x00000100, /* EMC_ZCAL_WAIT_CNT */

			0x013a000c, /* EMC_MRS_WAIT_CNT */

			0x013a000c, /* EMC_MRS_WAIT_CNT2 */

			0x00000000, /* EMC_AUTO_CAL_CONFIG2 */

			0x00000000, /* EMC_AUTO_CAL_CONFIG3 */

			0x00000000, /* EMC_CTT */

			0x00000000, /* EMC_CTT_DURATION */

			0x80002062, /* EMC_DYN_SELF_REF_CONTROL */

			0x1f7df7df, /* EMC_CA_TRAINING_TIMING_CNTL1 */

			0x0000001f, /* EMC_CA_TRAINING_TIMING_CNTL2 */

			0x0f000007, /* MC_EMEM_ARB_CFG */

			0x80000190, /* MC_EMEM_ARB_OUTSTANDING_REQ */

			0x00000002, /* MC_EMEM_ARB_TIMING_RCD */

			0x00000003, /* MC_EMEM_ARB_TIMING_RP */

			0x0000000d, /* MC_EMEM_ARB_TIMING_RC */

			0x00000008, /* MC_EMEM_ARB_TIMING_RAS */

			0x0000000a, /* MC_EMEM_ARB_TIMING_FAW */

			0x00000001, /* MC_EMEM_ARB_TIMING_RRD */

			0x00000002, /* MC_EMEM_ARB_TIMING_RAP2PRE */

			0x00000009, /* MC_EMEM_ARB_TIMING_WAP2PRE */

			0x00000002, /* MC_EMEM_ARB_TIMING_R2R */

			0x00000002, /* MC_EMEM_ARB_TIMING_W2W */

			0x00000005, /* MC_EMEM_ARB_TIMING_R2W */

			0x00000006, /* MC_EMEM_ARB_TIMING_W2R */

			0x06050202, /* MC_EMEM_ARB_DA_TURNS */

			0x0010090d, /* MC_EMEM_ARB_DA_COVERS */

			0x7428180e, /* MC_EMEM_ARB_MISC0 */

			0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */

			0x00040320, /* EMC_SEL_DPD_CTRL */

		},

		{

			0x00000000, /* EMC_CDB_CNTL_1 */

			0x00000006, /* EMC_FBIO_CFG6 */

			0x00000008, /* EMC_QUSE */

			0x00000007, /* EMC_EINPUT */

			0x00000004, /* EMC_EINPUT_DURATION */

			0x0000000a, /* EMC_DLL_XFORM_DQS0 */

			0x0000000c, /* EMC_QSAFE */

			0x00000000, /* EMC_DLL_XFORM_QUSE0 */

			0x00000010, /* EMC_RDV */

			0x00249249, /* EMC_XM2DQSPADCTRL4 */

			0x20820800, /* EMC_XM2DQSPADCTRL3 */

			0x0000000c, /* EMC_DLL_XFORM_DQ0 */

			0xa0f10f0f, /* EMC_AUTO_CAL_CONFIG */

			0x00000000, /* EMC_DLL_XFORM_ADDR0 */

			0x00000b0b, /* EMC_XM2CLKPADCTRL2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

			0x00000000, /* EMC_DLL_XFORM_ADDR1 */

			0x00000000, /* EMC_DLL_XFORM_ADDR2 */

			0x0000000a, /* EMC_DLL_XFORM_DQS1 */

			0x0000000a, /* EMC_DLL_XFORM_DQS2 */

			0x0000000a, /* EMC_DLL_XFORM_DQS3 */

			0x0000000c, /* EMC_DLL_XFORM_DQ1 */

			0x0000000c, /* EMC_DLL_XFORM_DQ2 */

			0x0000000c, /* EMC_DLL_XFORM_DQ3 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

			0x00000000, /* EMC_DLL_XFORM_QUSE1 */

			0x00000000, /* EMC_DLL_XFORM_QUSE2 */

			0x00000000, /* EMC_DLL_XFORM_QUSE3 */

		},

		{

			0x00000000, /* EMC_CDB_CNTL_1 */

			0x00000006, /* EMC_FBIO_CFG6 */

			0x00000008, /* EMC_QUSE */

			0x00000007, /* EMC_EINPUT */

			0x00000004, /* EMC_EINPUT_DURATION */

			0x0000000a, /* EMC_DLL_XFORM_DQS0 */

			0x0000000c, /* EMC_QSAFE */

			0x00000000, /* EMC_DLL_XFORM_QUSE0 */

			0x00000010, /* EMC_RDV */

			0x00249249, /* EMC_XM2DQSPADCTRL4 */

			0x20820800, /* EMC_XM2DQSPADCTRL3 */

			0x0000000c, /* EMC_DLL_XFORM_DQ0 */

			0xa8f10f0f, /* EMC_AUTO_CAL_CONFIG */

			0x00000000, /* EMC_DLL_XFORM_ADDR0 */

			0x00000b0b, /* EMC_XM2CLKPADCTRL2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

			0x00000000, /* EMC_DLL_XFORM_ADDR1 */

			0x00000000, /* EMC_DLL_XFORM_ADDR2 */

			0x0000000a, /* EMC_DLL_XFORM_DQS1 */

			0x0000000a, /* EMC_DLL_XFORM_DQS2 */

			0x0000000a, /* EMC_DLL_XFORM_DQS3 */

			0x0000000c, /* EMC_DLL_XFORM_DQ1 */

			0x0000000c, /* EMC_DLL_XFORM_DQ2 */

			0x0000000c, /* EMC_DLL_XFORM_DQ3 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

			0x00000000, /* EMC_DLL_XFORM_QUSE1 */

			0x00000000, /* EMC_DLL_XFORM_QUSE2 */

			0x00000000, /* EMC_DLL_XFORM_QUSE3 */

		},

		{

			0x0000010e, /* MC_PTSA_GRANT_DECREMENT */

			0x000d000d, /* MC_LATENCY_ALLOWANCE_G2_0 */

			0x000d000f, /* MC_LATENCY_ALLOWANCE_G2_1 */

			0x00100012, /* MC_LATENCY_ALLOWANCE_NV_0 */

			0x00000012, /* MC_LATENCY_ALLOWANCE_NV2_0 */

			0x00120012, /* MC_LATENCY_ALLOWANCE_NV_2 */

			0x00180012, /* MC_LATENCY_ALLOWANCE_NV_1 */

			0x00000018, /* MC_LATENCY_ALLOWANCE_NV2_1 */

			0x00180018, /* MC_LATENCY_ALLOWANCE_NV3 */

			0x00a3004d, /* MC_LATENCY_ALLOWANCE_EPP_0 */

			0x00a300a3, /* MC_LATENCY_ALLOWANCE_EPP_1 */

			0x4E564441, /* System Verification tag */

			0x04010700, /* Reg_tool Version */

			0x02000400, /* DVFS_tool Version */

			528000,     /* SDRAM Frequency */

		},

		0x00000042, /* EMC_ZCAL_WAIT_CNT after clock change */

		0x001fffff, /* EMC_AUTO_CAL_INTERVAL */

		0x53000004, /* EMC_CFG */

		0x80000941, /* Mode Register 0 */

		0x80100002, /* Mode Register 1 */

		0x80200008, /* Mode Register 2 */

		0x00000000, /* Mode Register 4 */

		1440,       /* expected dvfs latency (ns) */

	},

	{

		0x42,       /* Rev 4.0.3 */

		624000,     /* SDRAM frequency */

		1100,       /* min voltage */

		"pll_c",    /* clock source id */

		0x24000000, /* CLK_SOURCE_EMC */

		100,        /* number of burst_regs */

		30,         /* number of trim_regs (each channel) */

		11,         /* number of up_down_regs */

		{

			0x0000001d, /* EMC_RC */

			0x000000a1, /* EMC_RFC */

			0x00000000, /* EMC_RFC_SLR */

			0x00000014, /* EMC_RAS */

			0x00000007, /* EMC_RP */

			0x00000007, /* EMC_R2W */

			0x0000000b, /* EMC_W2R */

			0x00000003, /* EMC_R2P */

			0x00000010, /* EMC_W2P */

			0x00000007, /* EMC_RD_RCD */

			0x00000007, /* EMC_WR_RCD */

			0x00000002, /* EMC_RRD */

			0x00000001, /* EMC_REXT */

			0x00000000, /* EMC_WEXT */

			0x00000005, /* EMC_WDV */

			0x0000000f, /* EMC_WDV_MASK */

			0x0000000a, /* EMC_IBDLY */

			0x00010000, /* EMC_PUTERM_EXTRA */

			0x00000000, /* EMC_CDB_CNTL_2 */

			0x00000007, /* EMC_QRST */

			0x00000014, /* EMC_RDV_MASK */

			0x000012c3, /* EMC_REFRESH */

			0x00000000, /* EMC_BURST_REFRESH_NUM */

			0x000004b0, /* EMC_PRE_REFRESH_REQ_CNT */

			0x00000002, /* EMC_PDEX2WR */

			0x0000000d, /* EMC_PDEX2RD */

			0x00000001, /* EMC_PCHG2PDEN */

			0x00000000, /* EMC_ACT2PDEN */

			0x0000009c, /* EMC_AR2PDEN */

			0x00000015, /* EMC_RW2PDEN */

			0x000000a9, /* EMC_TXSR */

			0x00000200, /* EMC_TXSRDLL */

			0x00000005, /* EMC_TCKE */

			0x00000005, /* EMC_TCKESR */

			0x00000005, /* EMC_TPD */

			0x00000019, /* EMC_TFAW */

			0x00000000, /* EMC_TRPAB */

			0x00000006, /* EMC_TCLKSTABLE */

			0x00000007, /* EMC_TCLKSTOP */

			0x00001304, /* EMC_TREFBW */

			0x00000009, /* EMC_QUSE_EXTRA */

			0x80000000, /* EMC_ODT_WRITE */

			0x00000000, /* EMC_ODT_READ */

			0x0000ba88, /* EMC_FBIO_CFG5 */

			0xf00d0191, /* EMC_CFG_DIG_DLL */

			0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */

			0x00000009, /* EMC_DLL_XFORM_DQS4 */

			0x00000009, /* EMC_DLL_XFORM_DQS5 */

			0x00000009, /* EMC_DLL_XFORM_DQS6 */

			0x00000009, /* EMC_DLL_XFORM_DQS7 */

			0x00018000, /* EMC_DLL_XFORM_QUSE4 */

			0x00018000, /* EMC_DLL_XFORM_QUSE5 */

			0x00018000, /* EMC_DLL_XFORM_QUSE6 */

			0x00018000, /* EMC_DLL_XFORM_QUSE7 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS4 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS5 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS6 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS7 */

			0x001112a0, /* EMC_XM2CMDPADCTRL */

			0x00000000, /* EMC_XM2CMDPADCTRL4 */

			0x0000013d, /* EMC_XM2DQSPADCTRL2 */

			0x00000000, /* EMC_XM2DQPADCTRL2 */

			0x77ffc085, /* EMC_XM2CLKPADCTRL */

			0x81f1f108, /* EMC_XM2COMPPADCTRL */

			0x07077504, /* EMC_XM2VTTGENPADCTRL */

			0x00000000, /* EMC_XM2VTTGENPADCTRL2 */

			0x0000003f, /* EMC_DSR_VTTGEN_DRV */

			0x00000000, /* EMC_TXDSRVTTGEN */

			0x02000000, /* EMC_FBIO_SPARE */

			0x00000802, /* EMC_CTT_TERM_CTRL */

			0x00020000, /* EMC_ZCAL_INTERVAL */

			0x00000100, /* EMC_ZCAL_WAIT_CNT */

			0x0122000c, /* EMC_MRS_WAIT_CNT */

			0x0122000c, /* EMC_MRS_WAIT_CNT2 */

			0x00000000, /* EMC_AUTO_CAL_CONFIG2 */

			0x00000000, /* EMC_AUTO_CAL_CONFIG3 */

			0x00000000, /* EMC_CTT */

			0x00000000, /* EMC_CTT_DURATION */

			0x80002617, /* EMC_DYN_SELF_REF_CONTROL */

			0x1f7df7df, /* EMC_CA_TRAINING_TIMING_CNTL1 */

			0x0000001f, /* EMC_CA_TRAINING_TIMING_CNTL2 */

			0x06000009, /* MC_EMEM_ARB_CFG */

			0x80000190, /* MC_EMEM_ARB_OUTSTANDING_REQ */

			0x00000003, /* MC_EMEM_ARB_TIMING_RCD */

			0x00000004, /* MC_EMEM_ARB_TIMING_RP */

			0x0000000f, /* MC_EMEM_ARB_TIMING_RC */

			0x00000009, /* MC_EMEM_ARB_TIMING_RAS */

			0x0000000c, /* MC_EMEM_ARB_TIMING_FAW */

			0x00000001, /* MC_EMEM_ARB_TIMING_RRD */

			0x00000003, /* MC_EMEM_ARB_TIMING_RAP2PRE */

			0x0000000b, /* MC_EMEM_ARB_TIMING_WAP2PRE */

			0x00000002, /* MC_EMEM_ARB_TIMING_R2R */

			0x00000002, /* MC_EMEM_ARB_TIMING_W2W */

			0x00000005, /* MC_EMEM_ARB_TIMING_R2W */

			0x00000007, /* MC_EMEM_ARB_TIMING_W2R */

			0x07050202, /* MC_EMEM_ARB_DA_TURNS */

			0x00130b0f, /* MC_EMEM_ARB_DA_COVERS */

			0x736a1d10, /* MC_EMEM_ARB_MISC0 */

			0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */

			0x00040320, /* EMC_SEL_DPD_CTRL */

		},

		{

			0x00000000, /* EMC_CDB_CNTL_1 */

			0x00000006, /* EMC_FBIO_CFG6 */

			0x00000009, /* EMC_QUSE */

			0x00000008, /* EMC_EINPUT */

			0x00000004, /* EMC_EINPUT_DURATION */

			0x00000009, /* EMC_DLL_XFORM_DQS0 */

			0x0000000c, /* EMC_QSAFE */

			0x00018000, /* EMC_DLL_XFORM_QUSE0 */

			0x00000012, /* EMC_RDV */

			0x00249249, /* EMC_XM2DQSPADCTRL4 */

			0x20820800, /* EMC_XM2DQSPADCTRL3 */

			0x0000000a, /* EMC_DLL_XFORM_DQ0 */

			0xa0f10f0f, /* EMC_AUTO_CAL_CONFIG */

			0x00000000, /* EMC_DLL_XFORM_ADDR0 */

			0x00000c0c, /* EMC_XM2CLKPADCTRL2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

			0x00000000, /* EMC_DLL_XFORM_ADDR1 */

			0x00000000, /* EMC_DLL_XFORM_ADDR2 */

			0x00000009, /* EMC_DLL_XFORM_DQS1 */

			0x00000009, /* EMC_DLL_XFORM_DQS2 */

			0x00000009, /* EMC_DLL_XFORM_DQS3 */

			0x0000000a, /* EMC_DLL_XFORM_DQ1 */

			0x0000000a, /* EMC_DLL_XFORM_DQ2 */

			0x0000000a, /* EMC_DLL_XFORM_DQ3 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

			0x00018000, /* EMC_DLL_XFORM_QUSE1 */

			0x00018000, /* EMC_DLL_XFORM_QUSE2 */

			0x00018000, /* EMC_DLL_XFORM_QUSE3 */

		},

		{

			0x00000000, /* EMC_CDB_CNTL_1 */

			0x00000006, /* EMC_FBIO_CFG6 */

			0x00000009, /* EMC_QUSE */

			0x00000008, /* EMC_EINPUT */

			0x00000004, /* EMC_EINPUT_DURATION */

			0x00000009, /* EMC_DLL_XFORM_DQS0 */

			0x0000000c, /* EMC_QSAFE */

			0x00018000, /* EMC_DLL_XFORM_QUSE0 */

			0x00000012, /* EMC_RDV */

			0x00249249, /* EMC_XM2DQSPADCTRL4 */

			0x20820800, /* EMC_XM2DQSPADCTRL3 */

			0x0000000a, /* EMC_DLL_XFORM_DQ0 */

			0xa8f10f0f, /* EMC_AUTO_CAL_CONFIG */

			0x00000000, /* EMC_DLL_XFORM_ADDR0 */

			0x00000b0b, /* EMC_XM2CLKPADCTRL2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

			0x00000000, /* EMC_DLL_XFORM_ADDR1 */

			0x00000000, /* EMC_DLL_XFORM_ADDR2 */

			0x00000009, /* EMC_DLL_XFORM_DQS1 */

			0x00000009, /* EMC_DLL_XFORM_DQS2 */

			0x00000009, /* EMC_DLL_XFORM_DQS3 */

			0x0000000a, /* EMC_DLL_XFORM_DQ1 */

			0x0000000a, /* EMC_DLL_XFORM_DQ2 */

			0x0000000a, /* EMC_DLL_XFORM_DQ3 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

			0x00018000, /* EMC_DLL_XFORM_QUSE1 */

			0x00018000, /* EMC_DLL_XFORM_QUSE2 */

			0x00018000, /* EMC_DLL_XFORM_QUSE3 */

		},

		{

			0x0000013f, /* MC_PTSA_GRANT_DECREMENT */

			0x000b000b, /* MC_LATENCY_ALLOWANCE_G2_0 */

			0x000b000c, /* MC_LATENCY_ALLOWANCE_G2_1 */

			0x000e000f, /* MC_LATENCY_ALLOWANCE_NV_0 */

			0x0000000f, /* MC_LATENCY_ALLOWANCE_NV2_0 */

			0x000f000f, /* MC_LATENCY_ALLOWANCE_NV_2 */

			0x0014000f, /* MC_LATENCY_ALLOWANCE_NV_1 */

			0x00000014, /* MC_LATENCY_ALLOWANCE_NV2_1 */

			0x00140014, /* MC_LATENCY_ALLOWANCE_NV3 */

			0x008a0041, /* MC_LATENCY_ALLOWANCE_EPP_0 */

			0x008a008a, /* MC_LATENCY_ALLOWANCE_EPP_1 */

			0x4E564441, /* System Verification tag */

			0x04010400, /* Reg_tool Version */

			0x02000400, /* DVFS_tool Version */

			624000,     /* SDRAM Frequency */

		},

		0x00000042, /* EMC_ZCAL_WAIT_CNT after clock change */

		0x001fffff, /* EMC_AUTO_CAL_INTERVAL */

		0x53200000, /* EMC_CFG */

		0x80000b61, /* Mode Register 0 */

		0x80100002, /* Mode Register 1 */

		0x80200410, /* Mode Register 2 */

		0x00000000, /* Mode Register 4 */

		1290,       /* expected dvfs latency (ns) */

	},

	{

		0x42,       /* Rev 4.0.3 */

		792000,     /* SDRAM frequency */

		1100,       /* min voltage */

		"pll_m",    /* clock source id */

		0x84000000, /* CLK_SOURCE_EMC */

		100,        /* number of burst_regs */

		30,         /* number of trim_regs (each channel) */

		11,         /* number of up_down_regs */

		{

			0x00000025, /* EMC_RC */

			0x000000cc, /* EMC_RFC */

			0x00000000, /* EMC_RFC_SLR */

			0x0000001a, /* EMC_RAS */

			0x00000009, /* EMC_RP */

			0x00000008, /* EMC_R2W */

			0x0000000d, /* EMC_W2R */

			0x00000004, /* EMC_R2P */

			0x00000013, /* EMC_W2P */

			0x00000009, /* EMC_RD_RCD */

			0x00000009, /* EMC_WR_RCD */

			0x00000003, /* EMC_RRD */

			0x00000001, /* EMC_REXT */

			0x00000000, /* EMC_WEXT */

			0x00000006, /* EMC_WDV */

			0x0000000f, /* EMC_WDV_MASK */

			0x0000000b, /* EMC_IBDLY */

			0x00010000, /* EMC_PUTERM_EXTRA */

			0x00000000, /* EMC_CDB_CNTL_2 */

			0x00000008, /* EMC_QRST */

			0x00000016, /* EMC_RDV_MASK */

			0x000017e1, /* EMC_REFRESH */

			0x00000000, /* EMC_BURST_REFRESH_NUM */

			0x000005f8, /* EMC_PRE_REFRESH_REQ_CNT */

			0x00000003, /* EMC_PDEX2WR */

			0x00000011, /* EMC_PDEX2RD */

			0x00000001, /* EMC_PCHG2PDEN */

			0x00000000, /* EMC_ACT2PDEN */

			0x000000c6, /* EMC_AR2PDEN */

			0x00000018, /* EMC_RW2PDEN */

			0x000000d6, /* EMC_TXSR */

			0x00000200, /* EMC_TXSRDLL */

			0x00000005, /* EMC_TCKE */

			0x00000005, /* EMC_TCKESR */

			0x00000005, /* EMC_TPD */

			0x00000020, /* EMC_TFAW */

			0x00000000, /* EMC_TRPAB */

			0x00000007, /* EMC_TCLKSTABLE */

			0x00000008, /* EMC_TCLKSTOP */

			0x00001822, /* EMC_TREFBW */

			0x00000000, /* EMC_QUSE_EXTRA */

			0x80000000, /* EMC_ODT_WRITE */

			0x00000000, /* EMC_ODT_READ */

			0x00005088, /* EMC_FBIO_CFG5 */

			0xf0070191, /* EMC_CFG_DIG_DLL */

			0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */

			0x007fc00a, /* EMC_DLL_XFORM_DQS4 */

			0x007fc00a, /* EMC_DLL_XFORM_DQS5 */

			0x007fc00a, /* EMC_DLL_XFORM_DQS6 */

			0x007fc00a, /* EMC_DLL_XFORM_DQS7 */

			0x0002c000, /* EMC_DLL_XFORM_QUSE4 */

			0x0002c000, /* EMC_DLL_XFORM_QUSE5 */

			0x0002c000, /* EMC_DLL_XFORM_QUSE6 */

			0x0002c000, /* EMC_DLL_XFORM_QUSE7 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS4 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS5 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS6 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS7 */

			0x001112a0, /* EMC_XM2CMDPADCTRL */

			0x00000000, /* EMC_XM2CMDPADCTRL4 */

			0x0000013d, /* EMC_XM2DQSPADCTRL2 */

			0x00000000, /* EMC_XM2DQPADCTRL2 */

			0x77ffc085, /* EMC_XM2CLKPADCTRL */

			0x81f1f108, /* EMC_XM2COMPPADCTRL */

			0x07077504, /* EMC_XM2VTTGENPADCTRL */

			0x00000000, /* EMC_XM2VTTGENPADCTRL2 */

			0x0000003f, /* EMC_DSR_VTTGEN_DRV */

			0x00000000, /* EMC_TXDSRVTTGEN */

			0x02000000, /* EMC_FBIO_SPARE */

			0x00000802, /* EMC_CTT_TERM_CTRL */

			0x00020000, /* EMC_ZCAL_INTERVAL */

			0x00000100, /* EMC_ZCAL_WAIT_CNT */

			0x00f8000c, /* EMC_MRS_WAIT_CNT */

			0x00f8000c, /* EMC_MRS_WAIT_CNT2 */

			0x00000000, /* EMC_AUTO_CAL_CONFIG2 */

			0x00000000, /* EMC_AUTO_CAL_CONFIG3 */

			0x00000000, /* EMC_CTT */

			0x00000000, /* EMC_CTT_DURATION */

			0x80003012, /* EMC_DYN_SELF_REF_CONTROL */

			0x1f7df7df, /* EMC_CA_TRAINING_TIMING_CNTL1 */

			0x0000001f, /* EMC_CA_TRAINING_TIMING_CNTL2 */

			0x0e00000b, /* MC_EMEM_ARB_CFG */

			0x80000190, /* MC_EMEM_ARB_OUTSTANDING_REQ */

			0x00000004, /* MC_EMEM_ARB_TIMING_RCD */

			0x00000005, /* MC_EMEM_ARB_TIMING_RP */

			0x00000013, /* MC_EMEM_ARB_TIMING_RC */

			0x0000000c, /* MC_EMEM_ARB_TIMING_RAS */

			0x0000000f, /* MC_EMEM_ARB_TIMING_FAW */

			0x00000002, /* MC_EMEM_ARB_TIMING_RRD */

			0x00000003, /* MC_EMEM_ARB_TIMING_RAP2PRE */

			0x0000000c, /* MC_EMEM_ARB_TIMING_WAP2PRE */

			0x00000002, /* MC_EMEM_ARB_TIMING_R2R */

			0x00000002, /* MC_EMEM_ARB_TIMING_W2W */

			0x00000006, /* MC_EMEM_ARB_TIMING_R2W */

			0x00000008, /* MC_EMEM_ARB_TIMING_W2R */

			0x08060202, /* MC_EMEM_ARB_DA_TURNS */

			0x00160d13, /* MC_EMEM_ARB_DA_COVERS */

			0x734c2414, /* MC_EMEM_ARB_MISC0 */

			0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */

			0x00040000, /* EMC_SEL_DPD_CTRL */

		},

		{

			0x00000000, /* EMC_CDB_CNTL_1 */

			0x00000006, /* EMC_FBIO_CFG6 */

			0x0000000a, /* EMC_QUSE */

			0x00000008, /* EMC_EINPUT */

			0x00000006, /* EMC_EINPUT_DURATION */

			0x0000000a, /* EMC_DLL_XFORM_DQS0 */

			0x0000000d, /* EMC_QSAFE */

			0x00014000, /* EMC_DLL_XFORM_QUSE0 */

			0x00000014, /* EMC_RDV */

			0x00249249, /* EMC_XM2DQSPADCTRL4 */

			0x20820800, /* EMC_XM2DQSPADCTRL3 */

			0x0000000a, /* EMC_DLL_XFORM_DQ0 */

			0xa0f10f0f, /* EMC_AUTO_CAL_CONFIG */

			0x00000000, /* EMC_DLL_XFORM_ADDR0 */

			0x00000b0b, /* EMC_XM2CLKPADCTRL2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

			0x00000000, /* EMC_DLL_XFORM_ADDR1 */

			0x00000000, /* EMC_DLL_XFORM_ADDR2 */

			0x0000000a, /* EMC_DLL_XFORM_DQS1 */

			0x0000000a, /* EMC_DLL_XFORM_DQS2 */

			0x0000000a, /* EMC_DLL_XFORM_DQS3 */

			0x0000000a, /* EMC_DLL_XFORM_DQ1 */

			0x0000000a, /* EMC_DLL_XFORM_DQ2 */

			0x0000000a, /* EMC_DLL_XFORM_DQ3 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

			0x00014000, /* EMC_DLL_XFORM_QUSE1 */

			0x00014000, /* EMC_DLL_XFORM_QUSE2 */

			0x00014000, /* EMC_DLL_XFORM_QUSE3 */

		},

		{

			0x00000000, /* EMC_CDB_CNTL_1 */

			0x00000006, /* EMC_FBIO_CFG6 */

			0x0000000a, /* EMC_QUSE */

			0x00000008, /* EMC_EINPUT */

			0x00000006, /* EMC_EINPUT_DURATION */

			0x0000000a, /* EMC_DLL_XFORM_DQS0 */

			0x0000000d, /* EMC_QSAFE */

			0x00014000, /* EMC_DLL_XFORM_QUSE0 */

			0x00000014, /* EMC_RDV */

			0x00249249, /* EMC_XM2DQSPADCTRL4 */

			0x20820800, /* EMC_XM2DQSPADCTRL3 */

			0x0000000a, /* EMC_DLL_XFORM_DQ0 */

			0xa8f10f0f, /* EMC_AUTO_CAL_CONFIG */

			0x00000000, /* EMC_DLL_XFORM_ADDR0 */

			0x00000b0b, /* EMC_XM2CLKPADCTRL2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */

			0x00000000, /* EMC_DLL_XFORM_ADDR1 */

			0x00000000, /* EMC_DLL_XFORM_ADDR2 */

			0x0000000a, /* EMC_DLL_XFORM_DQS1 */

			0x0000000a, /* EMC_DLL_XFORM_DQS2 */

			0x0000000a, /* EMC_DLL_XFORM_DQS3 */

			0x0000000a, /* EMC_DLL_XFORM_DQ1 */

			0x0000000a, /* EMC_DLL_XFORM_DQ2 */

			0x0000000a, /* EMC_DLL_XFORM_DQ3 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */

			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */

			0x00014000, /* EMC_DLL_XFORM_QUSE1 */

			0x00014000, /* EMC_DLL_XFORM_QUSE2 */

			0x00014000, /* EMC_DLL_XFORM_QUSE3 */

		},

		{

			0x00000196, /* MC_PTSA_GRANT_DECREMENT */

			0x00090009, /* MC_LATENCY_ALLOWANCE_G2_0 */

			0x0009000a, /* MC_LATENCY_ALLOWANCE_G2_1 */

			0x000b000c, /* MC_LATENCY_ALLOWANCE_NV_0 */

			0x0000000c, /* MC_LATENCY_ALLOWANCE_NV2_0 */

			0x000c000c, /* MC_LATENCY_ALLOWANCE_NV_2 */

			0x0010000c, /* MC_LATENCY_ALLOWANCE_NV_1 */

			0x00000010, /* MC_LATENCY_ALLOWANCE_NV2_1 */

			0x00100010, /* MC_LATENCY_ALLOWANCE_NV3 */

			0x006d0033, /* MC_LATENCY_ALLOWANCE_EPP_0 */

			0x006d006d, /* MC_LATENCY_ALLOWANCE_EPP_1 */

			0x4E564441, /* System Verification tag */

			0x04010400, /* Reg_tool Version */

			0x02000400, /* DVFS_tool Version */

			792000,     /* SDRAM Frequency */

		},

		0x00000042, /* EMC_ZCAL_WAIT_CNT after clock change */

		0x001fffff, /* EMC_AUTO_CAL_INTERVAL */

		0x53000000, /* EMC_CFG */

		0x80000d71, /* Mode Register 0 */

		0x80100002, /* Mode Register 1 */

		0x80200418, /* Mode Register 2 */

		0x00000000, /* Mode Register 4 */

		1200,       /* expected dvfs latency (ns) */

	},

};

static struct tegra11_emc_table Bowser_dvfs_table_Micron_0110_table[] = {
	{
		0x42,       /* Rev 4.0.3 */
		12750,      /* SDRAM frequency */
		900,        /* min voltage */
		"pll_p",    /* clock source id */
		0x4400003e, /* CLK_SOURCE_EMC */
		100,        /* number of burst_regs */
		30,         /* number of trim_regs (each channel) */
		11,         /* number of up_down_regs */
		{
			0x00000000, /* EMC_RC */
			0x00000003, /* EMC_RFC */
			0x00000000, /* EMC_RFC_SLR */
			0x00000000, /* EMC_RAS */
			0x00000000, /* EMC_RP */
			0x00000004, /* EMC_R2W */
			0x0000000a, /* EMC_W2R */
			0x00000003, /* EMC_R2P */
			0x0000000b, /* EMC_W2P */
			0x00000000, /* EMC_RD_RCD */
			0x00000000, /* EMC_WR_RCD */
			0x00000003, /* EMC_RRD */
			0x00000001, /* EMC_REXT */
			0x00000000, /* EMC_WEXT */
			0x00000005, /* EMC_WDV */
			0x0000000f, /* EMC_WDV_MASK */
			0x00000006, /* EMC_IBDLY */
			0x00010000, /* EMC_PUTERM_EXTRA */
			0x00000000, /* EMC_CDB_CNTL_2 */
			0x00000004, /* EMC_QRST */
			0x0000000f, /* EMC_RDV_MASK */
			0x00000060, /* EMC_REFRESH */
			0x00000000, /* EMC_BURST_REFRESH_NUM */
			0x00000018, /* EMC_PRE_REFRESH_REQ_CNT */
			0x00000002, /* EMC_PDEX2WR */
			0x00000002, /* EMC_PDEX2RD */
			0x00000001, /* EMC_PCHG2PDEN */
			0x00000000, /* EMC_ACT2PDEN */
			0x00000007, /* EMC_AR2PDEN */
			0x0000000f, /* EMC_RW2PDEN */
			0x00000005, /* EMC_TXSR */
			0x00000005, /* EMC_TXSRDLL */
			0x00000004, /* EMC_TCKE */
			0x00000004, /* EMC_TCKESR */
			0x00000004, /* EMC_TPD */
			0x00000004, /* EMC_TFAW */
			0x00000000, /* EMC_TRPAB */
			0x00000004, /* EMC_TCLKSTABLE */
			0x00000005, /* EMC_TCLKSTOP */
			0x00000064, /* EMC_TREFBW */
			0x00000005, /* EMC_QUSE_EXTRA */
			0x00000020, /* EMC_ODT_WRITE */
			0x00000000, /* EMC_ODT_READ */
			0x0000aa88, /* EMC_FBIO_CFG5 */
			0x002c00a0, /* EMC_CFG_DIG_DLL */
			0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */
			0x00064000, /* EMC_DLL_XFORM_DQS4 */
			0x00064000, /* EMC_DLL_XFORM_DQS5 */
			0x00064000, /* EMC_DLL_XFORM_DQS6 */
			0x00064000, /* EMC_DLL_XFORM_DQS7 */
			0x00000000, /* EMC_DLL_XFORM_QUSE4 */
			0x00000000, /* EMC_DLL_XFORM_QUSE5 */
			0x00000000, /* EMC_DLL_XFORM_QUSE6 */
			0x00000000, /* EMC_DLL_XFORM_QUSE7 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS4 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS5 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS6 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS7 */
			0x001112a0, /* EMC_XM2CMDPADCTRL */
			0x00000000, /* EMC_XM2CMDPADCTRL4 */
			0x0000a11c, /* EMC_XM2DQSPADCTRL2 */
			0x00000000, /* EMC_XM2DQPADCTRL2 */
			0x77ffc085, /* EMC_XM2CLKPADCTRL */
			0x81f1f108, /* EMC_XM2COMPPADCTRL */
			0x03037504, /* EMC_XM2VTTGENPADCTRL */
			0x0000003f, /* EMC_XM2VTTGENPADCTRL2 */
			0x0000003f, /* EMC_DSR_VTTGEN_DRV */
			0x00000007, /* EMC_TXDSRVTTGEN */
			0x02000000, /* EMC_FBIO_SPARE */
			0x00000802, /* EMC_CTT_TERM_CTRL */
			0x00000000, /* EMC_ZCAL_INTERVAL */
			0x00000042, /* EMC_ZCAL_WAIT_CNT */
			0x000c000c, /* EMC_MRS_WAIT_CNT */
			0x000c000c, /* EMC_MRS_WAIT_CNT2 */
			0x00000000, /* EMC_AUTO_CAL_CONFIG2 */
			0x00000000, /* EMC_AUTO_CAL_CONFIG3 */
			0x00000000, /* EMC_CTT */
			0x00000000, /* EMC_CTT_DURATION */
			0x800001c5, /* EMC_DYN_SELF_REF_CONTROL */
			0x1f7df7df, /* EMC_CA_TRAINING_TIMING_CNTL1 */
			0x0000001f, /* EMC_CA_TRAINING_TIMING_CNTL2 */
			0x40040001, /* MC_EMEM_ARB_CFG */
			0x8000003f, /* MC_EMEM_ARB_OUTSTANDING_REQ */
			0x00000001, /* MC_EMEM_ARB_TIMING_RCD */
			0x00000001, /* MC_EMEM_ARB_TIMING_RP */
			0x00000002, /* MC_EMEM_ARB_TIMING_RC */
			0x00000000, /* MC_EMEM_ARB_TIMING_RAS */
			0x00000001, /* MC_EMEM_ARB_TIMING_FAW */
			0x00000001, /* MC_EMEM_ARB_TIMING_RRD */
			0x00000002, /* MC_EMEM_ARB_TIMING_RAP2PRE */
			0x00000008, /* MC_EMEM_ARB_TIMING_WAP2PRE */
			0x00000002, /* MC_EMEM_ARB_TIMING_R2R */
			0x00000001, /* MC_EMEM_ARB_TIMING_W2W */
			0x00000003, /* MC_EMEM_ARB_TIMING_R2W */
			0x00000006, /* MC_EMEM_ARB_TIMING_W2R */
			0x06030102, /* MC_EMEM_ARB_DA_TURNS */
			0x000a0402, /* MC_EMEM_ARB_DA_COVERS */
			0x77e30303, /* MC_EMEM_ARB_MISC0 */
			0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */
			0x00040320, /* EMC_SEL_DPD_CTRL */
		},
		{
			0x00000000, /* EMC_CDB_CNTL_1 */
			0x00000006, /* EMC_FBIO_CFG6 */
			0x00000006, /* EMC_QUSE */
			0x00000004, /* EMC_EINPUT */
			0x00000004, /* EMC_EINPUT_DURATION */
			0x00064000, /* EMC_DLL_XFORM_DQS0 */
			0x00000009, /* EMC_QSAFE */
			0x00000000, /* EMC_DLL_XFORM_QUSE0 */
			0x0000000d, /* EMC_RDV */
			0x00249249, /* EMC_XM2DQSPADCTRL4 */
			0x20820800, /* EMC_XM2DQSPADCTRL3 */
			0x0007c000, /* EMC_DLL_XFORM_DQ0 */
			0xa0f10f0f, /* EMC_AUTO_CAL_CONFIG */
			0x00000000, /* EMC_DLL_XFORM_ADDR0 */
			0x00000d0d, /* EMC_XM2CLKPADCTRL2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */
			0x00000000, /* EMC_DLL_XFORM_ADDR1 */
			0x00000000, /* EMC_DLL_XFORM_ADDR2 */
			0x00064000, /* EMC_DLL_XFORM_DQS1 */
			0x00064000, /* EMC_DLL_XFORM_DQS2 */
			0x00064000, /* EMC_DLL_XFORM_DQS3 */
			0x0007c000, /* EMC_DLL_XFORM_DQ1 */
			0x0007c000, /* EMC_DLL_XFORM_DQ2 */
			0x0007c000, /* EMC_DLL_XFORM_DQ3 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */
			0x00000000, /* EMC_DLL_XFORM_QUSE1 */
			0x00000000, /* EMC_DLL_XFORM_QUSE2 */
			0x00000000, /* EMC_DLL_XFORM_QUSE3 */
		},
		{
			0x00000000, /* EMC_CDB_CNTL_1 */
			0x00000006, /* EMC_FBIO_CFG6 */
			0x00000006, /* EMC_QUSE */
			0x00000004, /* EMC_EINPUT */
			0x00000004, /* EMC_EINPUT_DURATION */
			0x00064000, /* EMC_DLL_XFORM_DQS0 */
			0x00000009, /* EMC_QSAFE */
			0x00000000, /* EMC_DLL_XFORM_QUSE0 */
			0x0000000d, /* EMC_RDV */
			0x00249249, /* EMC_XM2DQSPADCTRL4 */
			0x20820800, /* EMC_XM2DQSPADCTRL3 */
			0x0007c000, /* EMC_DLL_XFORM_DQ0 */
			0xa8f10f0f, /* EMC_AUTO_CAL_CONFIG */
			0x00000000, /* EMC_DLL_XFORM_ADDR0 */
			0x00000d0d, /* EMC_XM2CLKPADCTRL2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */
			0x00000000, /* EMC_DLL_XFORM_ADDR1 */
			0x00000000, /* EMC_DLL_XFORM_ADDR2 */
			0x00064000, /* EMC_DLL_XFORM_DQS1 */
			0x00064000, /* EMC_DLL_XFORM_DQS2 */
			0x00064000, /* EMC_DLL_XFORM_DQS3 */
			0x0007c000, /* EMC_DLL_XFORM_DQ1 */
			0x0007c000, /* EMC_DLL_XFORM_DQ2 */
			0x0007c000, /* EMC_DLL_XFORM_DQ3 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */
			0x00000000, /* EMC_DLL_XFORM_QUSE1 */
			0x00000000, /* EMC_DLL_XFORM_QUSE2 */
			0x00000000, /* EMC_DLL_XFORM_QUSE3 */
		},
		{
			0x00000007, /* MC_PTSA_GRANT_DECREMENT */
			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_G2_0 */
			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_G2_1 */
			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_NV_0 */
			0x000000ff, /* MC_LATENCY_ALLOWANCE_NV2_0 */
			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_NV_2 */
			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_NV_1 */
			0x000000ff, /* MC_LATENCY_ALLOWANCE_NV2_1 */
			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_NV3 */
			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_EPP_0 */
			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_EPP_1 */
			0x4E564441, /* System Verification tag */
			0x04010400, /* Reg_tool Version */
			0x02000400, /* DVFS_tool Version */
			12750,      /* SDRAM Frequency */
		},
		0x00000042, /* EMC_ZCAL_WAIT_CNT after clock change */
		0x001fffff, /* EMC_AUTO_CAL_INTERVAL */
		0x7324000e, /* EMC_CFG */
		0x80001221, /* Mode Register 0 */
		0x80100003, /* Mode Register 1 */
		0x80200008, /* Mode Register 2 */
		0x00000000, /* Mode Register 4 */
		57820,      /* expected dvfs latency (ns) */
	},
	{
		0x42,       /* Rev 4.0.3 */
		20400,      /* SDRAM frequency */
		900,        /* min voltage */
		"pll_p",    /* clock source id */
		0x44000026, /* CLK_SOURCE_EMC */
		100,        /* number of burst_regs */
		30,         /* number of trim_regs (each channel) */
		11,         /* number of up_down_regs */
		{
			0x00000000, /* EMC_RC */
			0x00000005, /* EMC_RFC */
			0x00000000, /* EMC_RFC_SLR */
			0x00000000, /* EMC_RAS */
			0x00000000, /* EMC_RP */
			0x00000004, /* EMC_R2W */
			0x0000000a, /* EMC_W2R */
			0x00000003, /* EMC_R2P */
			0x0000000b, /* EMC_W2P */
			0x00000000, /* EMC_RD_RCD */
			0x00000000, /* EMC_WR_RCD */
			0x00000003, /* EMC_RRD */
			0x00000001, /* EMC_REXT */
			0x00000000, /* EMC_WEXT */
			0x00000005, /* EMC_WDV */
			0x0000000f, /* EMC_WDV_MASK */
			0x00000006, /* EMC_IBDLY */
			0x00010000, /* EMC_PUTERM_EXTRA */
			0x00000000, /* EMC_CDB_CNTL_2 */
			0x00000004, /* EMC_QRST */
			0x0000000f, /* EMC_RDV_MASK */
			0x0000009a, /* EMC_REFRESH */
			0x00000000, /* EMC_BURST_REFRESH_NUM */
			0x00000026, /* EMC_PRE_REFRESH_REQ_CNT */
			0x00000002, /* EMC_PDEX2WR */
			0x00000002, /* EMC_PDEX2RD */
			0x00000001, /* EMC_PCHG2PDEN */
			0x00000000, /* EMC_ACT2PDEN */
			0x00000007, /* EMC_AR2PDEN */
			0x0000000f, /* EMC_RW2PDEN */
			0x00000006, /* EMC_TXSR */
			0x00000006, /* EMC_TXSRDLL */
			0x00000004, /* EMC_TCKE */
			0x00000004, /* EMC_TCKESR */
			0x00000004, /* EMC_TPD */
			0x00000004, /* EMC_TFAW */
			0x00000000, /* EMC_TRPAB */
			0x00000004, /* EMC_TCLKSTABLE */
			0x00000005, /* EMC_TCLKSTOP */
			0x000000a0, /* EMC_TREFBW */
			0x00000005, /* EMC_QUSE_EXTRA */
			0x00000020, /* EMC_ODT_WRITE */
			0x00000000, /* EMC_ODT_READ */
			0x0000aa88, /* EMC_FBIO_CFG5 */
			0x002c00a0, /* EMC_CFG_DIG_DLL */
			0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */
			0x00064000, /* EMC_DLL_XFORM_DQS4 */
			0x00064000, /* EMC_DLL_XFORM_DQS5 */
			0x00064000, /* EMC_DLL_XFORM_DQS6 */
			0x00064000, /* EMC_DLL_XFORM_DQS7 */
			0x00000000, /* EMC_DLL_XFORM_QUSE4 */
			0x00000000, /* EMC_DLL_XFORM_QUSE5 */
			0x00000000, /* EMC_DLL_XFORM_QUSE6 */
			0x00000000, /* EMC_DLL_XFORM_QUSE7 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS4 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS5 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS6 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS7 */
			0x001112a0, /* EMC_XM2CMDPADCTRL */
			0x00000000, /* EMC_XM2CMDPADCTRL4 */
			0x0000a11c, /* EMC_XM2DQSPADCTRL2 */
			0x00000000, /* EMC_XM2DQPADCTRL2 */
			0x77ffc085, /* EMC_XM2CLKPADCTRL */
			0x81f1f108, /* EMC_XM2COMPPADCTRL */
			0x03037504, /* EMC_XM2VTTGENPADCTRL */
			0x0000003f, /* EMC_XM2VTTGENPADCTRL2 */
			0x0000003f, /* EMC_DSR_VTTGEN_DRV */
			0x0000000b, /* EMC_TXDSRVTTGEN */
			0x02000000, /* EMC_FBIO_SPARE */
			0x00000802, /* EMC_CTT_TERM_CTRL */
			0x00000000, /* EMC_ZCAL_INTERVAL */
			0x00000042, /* EMC_ZCAL_WAIT_CNT */
			0x000c000c, /* EMC_MRS_WAIT_CNT */
			0x000c000c, /* EMC_MRS_WAIT_CNT2 */
			0x00000000, /* EMC_AUTO_CAL_CONFIG2 */
			0x00000000, /* EMC_AUTO_CAL_CONFIG3 */
			0x00000000, /* EMC_CTT */
			0x00000000, /* EMC_CTT_DURATION */
			0x8000023a, /* EMC_DYN_SELF_REF_CONTROL */
			0x1f7df7df, /* EMC_CA_TRAINING_TIMING_CNTL1 */
			0x0000001f, /* EMC_CA_TRAINING_TIMING_CNTL2 */
			0x40020001, /* MC_EMEM_ARB_CFG */
			0x80000046, /* MC_EMEM_ARB_OUTSTANDING_REQ */
			0x00000001, /* MC_EMEM_ARB_TIMING_RCD */
			0x00000001, /* MC_EMEM_ARB_TIMING_RP */
			0x00000002, /* MC_EMEM_ARB_TIMING_RC */
			0x00000000, /* MC_EMEM_ARB_TIMING_RAS */
			0x00000001, /* MC_EMEM_ARB_TIMING_FAW */
			0x00000001, /* MC_EMEM_ARB_TIMING_RRD */
			0x00000002, /* MC_EMEM_ARB_TIMING_RAP2PRE */
			0x00000008, /* MC_EMEM_ARB_TIMING_WAP2PRE */
			0x00000002, /* MC_EMEM_ARB_TIMING_R2R */
			0x00000001, /* MC_EMEM_ARB_TIMING_W2W */
			0x00000003, /* MC_EMEM_ARB_TIMING_R2W */
			0x00000006, /* MC_EMEM_ARB_TIMING_W2R */
			0x06030102, /* MC_EMEM_ARB_DA_TURNS */
			0x000a0402, /* MC_EMEM_ARB_DA_COVERS */
			0x76230303, /* MC_EMEM_ARB_MISC0 */
			0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */
			0x00040320, /* EMC_SEL_DPD_CTRL */
		},
		{
			0x00000000, /* EMC_CDB_CNTL_1 */
			0x00000006, /* EMC_FBIO_CFG6 */
			0x00000006, /* EMC_QUSE */
			0x00000004, /* EMC_EINPUT */
			0x00000004, /* EMC_EINPUT_DURATION */
			0x00064000, /* EMC_DLL_XFORM_DQS0 */
			0x00000009, /* EMC_QSAFE */
			0x00000000, /* EMC_DLL_XFORM_QUSE0 */
			0x0000000d, /* EMC_RDV */
			0x00249249, /* EMC_XM2DQSPADCTRL4 */
			0x20820800, /* EMC_XM2DQSPADCTRL3 */
			0x0007c000, /* EMC_DLL_XFORM_DQ0 */
			0xa0f10f0f, /* EMC_AUTO_CAL_CONFIG */
			0x00000000, /* EMC_DLL_XFORM_ADDR0 */
			0x00000d0d, /* EMC_XM2CLKPADCTRL2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */
			0x00000000, /* EMC_DLL_XFORM_ADDR1 */
			0x00000000, /* EMC_DLL_XFORM_ADDR2 */
			0x00064000, /* EMC_DLL_XFORM_DQS1 */
			0x00064000, /* EMC_DLL_XFORM_DQS2 */
			0x00064000, /* EMC_DLL_XFORM_DQS3 */
			0x0007c000, /* EMC_DLL_XFORM_DQ1 */
			0x0007c000, /* EMC_DLL_XFORM_DQ2 */
			0x0007c000, /* EMC_DLL_XFORM_DQ3 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */
			0x00000000, /* EMC_DLL_XFORM_QUSE1 */
			0x00000000, /* EMC_DLL_XFORM_QUSE2 */
			0x00000000, /* EMC_DLL_XFORM_QUSE3 */
		},
		{
			0x00000000, /* EMC_CDB_CNTL_1 */
			0x00000006, /* EMC_FBIO_CFG6 */
			0x00000006, /* EMC_QUSE */
			0x00000004, /* EMC_EINPUT */
			0x00000004, /* EMC_EINPUT_DURATION */
			0x00064000, /* EMC_DLL_XFORM_DQS0 */
			0x00000009, /* EMC_QSAFE */
			0x00000000, /* EMC_DLL_XFORM_QUSE0 */
			0x0000000d, /* EMC_RDV */
			0x00249249, /* EMC_XM2DQSPADCTRL4 */
			0x20820800, /* EMC_XM2DQSPADCTRL3 */
			0x0007c000, /* EMC_DLL_XFORM_DQ0 */
			0xa8f10f0f, /* EMC_AUTO_CAL_CONFIG */
			0x00000000, /* EMC_DLL_XFORM_ADDR0 */
			0x00000d0d, /* EMC_XM2CLKPADCTRL2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */
			0x00000000, /* EMC_DLL_XFORM_ADDR1 */
			0x00000000, /* EMC_DLL_XFORM_ADDR2 */
			0x00064000, /* EMC_DLL_XFORM_DQS1 */
			0x00064000, /* EMC_DLL_XFORM_DQS2 */
			0x00064000, /* EMC_DLL_XFORM_DQS3 */
			0x0007c000, /* EMC_DLL_XFORM_DQ1 */
			0x0007c000, /* EMC_DLL_XFORM_DQ2 */
			0x0007c000, /* EMC_DLL_XFORM_DQ3 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */
			0x00000000, /* EMC_DLL_XFORM_QUSE1 */
			0x00000000, /* EMC_DLL_XFORM_QUSE2 */
			0x00000000, /* EMC_DLL_XFORM_QUSE3 */
		},
		{
			0x0000000a, /* MC_PTSA_GRANT_DECREMENT */
			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_G2_0 */
			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_G2_1 */
			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_NV_0 */
			0x000000ff, /* MC_LATENCY_ALLOWANCE_NV2_0 */
			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_NV_2 */
			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_NV_1 */
			0x000000ff, /* MC_LATENCY_ALLOWANCE_NV2_1 */
			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_NV3 */
			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_EPP_0 */
			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_EPP_1 */
			0x4E564441, /* System Verification tag */
			0x04010400, /* Reg_tool Version */
			0x02000400, /* DVFS_tool Version */
			20400,      /* SDRAM Frequency */
		},
		0x00000042, /* EMC_ZCAL_WAIT_CNT after clock change */
		0x001fffff, /* EMC_AUTO_CAL_INTERVAL */
		0x7324000e, /* EMC_CFG */
		0x80001221, /* Mode Register 0 */
		0x80100003, /* Mode Register 1 */
		0x80200008, /* Mode Register 2 */
		0x00000000, /* Mode Register 4 */
		35610,      /* expected dvfs latency (ns) */
	},
	{
		0x42,       /* Rev 4.0.3 */
		40800,      /* SDRAM frequency */
		900,        /* min voltage */
		"pll_p",    /* clock source id */
		0x44000012, /* CLK_SOURCE_EMC */
		100,        /* number of burst_regs */
		30,         /* number of trim_regs (each channel) */
		11,         /* number of up_down_regs */
		{
			0x00000001, /* EMC_RC */
			0x0000000a, /* EMC_RFC */
			0x00000000, /* EMC_RFC_SLR */
			0x00000001, /* EMC_RAS */
			0x00000000, /* EMC_RP */
			0x00000004, /* EMC_R2W */
			0x0000000a, /* EMC_W2R */
			0x00000003, /* EMC_R2P */
			0x0000000b, /* EMC_W2P */
			0x00000000, /* EMC_RD_RCD */
			0x00000000, /* EMC_WR_RCD */
			0x00000003, /* EMC_RRD */
			0x00000001, /* EMC_REXT */
			0x00000000, /* EMC_WEXT */
			0x00000005, /* EMC_WDV */
			0x0000000f, /* EMC_WDV_MASK */
			0x00000006, /* EMC_IBDLY */
			0x00010000, /* EMC_PUTERM_EXTRA */
			0x00000000, /* EMC_CDB_CNTL_2 */
			0x00000004, /* EMC_QRST */
			0x0000000f, /* EMC_RDV_MASK */
			0x00000134, /* EMC_REFRESH */
			0x00000000, /* EMC_BURST_REFRESH_NUM */
			0x0000004d, /* EMC_PRE_REFRESH_REQ_CNT */
			0x00000002, /* EMC_PDEX2WR */
			0x00000002, /* EMC_PDEX2RD */
			0x00000001, /* EMC_PCHG2PDEN */
			0x00000000, /* EMC_ACT2PDEN */
			0x00000008, /* EMC_AR2PDEN */
			0x0000000f, /* EMC_RW2PDEN */
			0x0000000c, /* EMC_TXSR */
			0x0000000c, /* EMC_TXSRDLL */
			0x00000004, /* EMC_TCKE */
			0x00000004, /* EMC_TCKESR */
			0x00000004, /* EMC_TPD */
			0x00000004, /* EMC_TFAW */
			0x00000000, /* EMC_TRPAB */
			0x00000004, /* EMC_TCLKSTABLE */
			0x00000005, /* EMC_TCLKSTOP */
			0x0000013f, /* EMC_TREFBW */
			0x00000005, /* EMC_QUSE_EXTRA */
			0x00000020, /* EMC_ODT_WRITE */
			0x00000000, /* EMC_ODT_READ */
			0x0000aa88, /* EMC_FBIO_CFG5 */
			0x002c00a0, /* EMC_CFG_DIG_DLL */
			0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */
			0x00064000, /* EMC_DLL_XFORM_DQS4 */
			0x00064000, /* EMC_DLL_XFORM_DQS5 */
			0x00064000, /* EMC_DLL_XFORM_DQS6 */
			0x00064000, /* EMC_DLL_XFORM_DQS7 */
			0x00000000, /* EMC_DLL_XFORM_QUSE4 */
			0x00000000, /* EMC_DLL_XFORM_QUSE5 */
			0x00000000, /* EMC_DLL_XFORM_QUSE6 */
			0x00000000, /* EMC_DLL_XFORM_QUSE7 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS4 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS5 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS6 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS7 */
			0x001112a0, /* EMC_XM2CMDPADCTRL */
			0x00000000, /* EMC_XM2CMDPADCTRL4 */
			0x0000a11c, /* EMC_XM2DQSPADCTRL2 */
			0x00000000, /* EMC_XM2DQPADCTRL2 */
			0x77ffc085, /* EMC_XM2CLKPADCTRL */
			0x81f1f108, /* EMC_XM2COMPPADCTRL */
			0x03037504, /* EMC_XM2VTTGENPADCTRL */
			0x0000003f, /* EMC_XM2VTTGENPADCTRL2 */
			0x0000003f, /* EMC_DSR_VTTGEN_DRV */
			0x00000015, /* EMC_TXDSRVTTGEN */
			0x02000000, /* EMC_FBIO_SPARE */
			0x00000802, /* EMC_CTT_TERM_CTRL */
			0x00000000, /* EMC_ZCAL_INTERVAL */
			0x00000042, /* EMC_ZCAL_WAIT_CNT */
			0x000c000c, /* EMC_MRS_WAIT_CNT */
			0x000c000c, /* EMC_MRS_WAIT_CNT2 */
			0x00000000, /* EMC_AUTO_CAL_CONFIG2 */
			0x00000000, /* EMC_AUTO_CAL_CONFIG3 */
			0x00000000, /* EMC_CTT */
			0x00000000, /* EMC_CTT_DURATION */
			0x80000370, /* EMC_DYN_SELF_REF_CONTROL */
			0x1f7df7df, /* EMC_CA_TRAINING_TIMING_CNTL1 */
			0x0000001f, /* EMC_CA_TRAINING_TIMING_CNTL2 */
			0xa0000001, /* MC_EMEM_ARB_CFG */
			0x8000005b, /* MC_EMEM_ARB_OUTSTANDING_REQ */
			0x00000001, /* MC_EMEM_ARB_TIMING_RCD */
			0x00000001, /* MC_EMEM_ARB_TIMING_RP */
			0x00000002, /* MC_EMEM_ARB_TIMING_RC */
			0x00000000, /* MC_EMEM_ARB_TIMING_RAS */
			0x00000001, /* MC_EMEM_ARB_TIMING_FAW */
			0x00000001, /* MC_EMEM_ARB_TIMING_RRD */
			0x00000002, /* MC_EMEM_ARB_TIMING_RAP2PRE */
			0x00000008, /* MC_EMEM_ARB_TIMING_WAP2PRE */
			0x00000002, /* MC_EMEM_ARB_TIMING_R2R */
			0x00000001, /* MC_EMEM_ARB_TIMING_W2W */
			0x00000003, /* MC_EMEM_ARB_TIMING_R2W */
			0x00000006, /* MC_EMEM_ARB_TIMING_W2R */
			0x06030102, /* MC_EMEM_ARB_DA_TURNS */
			0x000a0402, /* MC_EMEM_ARB_DA_COVERS */
			0x74a30303, /* MC_EMEM_ARB_MISC0 */
			0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */
			0x00040320, /* EMC_SEL_DPD_CTRL */
		},
		{
			0x00000000, /* EMC_CDB_CNTL_1 */
			0x00000006, /* EMC_FBIO_CFG6 */
			0x00000006, /* EMC_QUSE */
			0x00000004, /* EMC_EINPUT */
			0x00000004, /* EMC_EINPUT_DURATION */
			0x00064000, /* EMC_DLL_XFORM_DQS0 */
			0x00000009, /* EMC_QSAFE */
			0x00000000, /* EMC_DLL_XFORM_QUSE0 */
			0x0000000d, /* EMC_RDV */
			0x00249249, /* EMC_XM2DQSPADCTRL4 */
			0x20820800, /* EMC_XM2DQSPADCTRL3 */
			0x0007c000, /* EMC_DLL_XFORM_DQ0 */
			0xa0f10f0f, /* EMC_AUTO_CAL_CONFIG */
			0x00000000, /* EMC_DLL_XFORM_ADDR0 */
			0x00000d0d, /* EMC_XM2CLKPADCTRL2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */
			0x00000000, /* EMC_DLL_XFORM_ADDR1 */
			0x00000000, /* EMC_DLL_XFORM_ADDR2 */
			0x00064000, /* EMC_DLL_XFORM_DQS1 */
			0x00064000, /* EMC_DLL_XFORM_DQS2 */
			0x00064000, /* EMC_DLL_XFORM_DQS3 */
			0x0007c000, /* EMC_DLL_XFORM_DQ1 */
			0x0007c000, /* EMC_DLL_XFORM_DQ2 */
			0x0007c000, /* EMC_DLL_XFORM_DQ3 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */
			0x00000000, /* EMC_DLL_XFORM_QUSE1 */
			0x00000000, /* EMC_DLL_XFORM_QUSE2 */
			0x00000000, /* EMC_DLL_XFORM_QUSE3 */
		},
		{
			0x00000000, /* EMC_CDB_CNTL_1 */
			0x00000006, /* EMC_FBIO_CFG6 */
			0x00000006, /* EMC_QUSE */
			0x00000004, /* EMC_EINPUT */
			0x00000004, /* EMC_EINPUT_DURATION */
			0x00064000, /* EMC_DLL_XFORM_DQS0 */
			0x00000009, /* EMC_QSAFE */
			0x00000000, /* EMC_DLL_XFORM_QUSE0 */
			0x0000000d, /* EMC_RDV */
			0x00249249, /* EMC_XM2DQSPADCTRL4 */
			0x20820800, /* EMC_XM2DQSPADCTRL3 */
			0x0007c000, /* EMC_DLL_XFORM_DQ0 */
			0xa8f10f0f, /* EMC_AUTO_CAL_CONFIG */
			0x00000000, /* EMC_DLL_XFORM_ADDR0 */
			0x00000d0d, /* EMC_XM2CLKPADCTRL2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */
			0x00000000, /* EMC_DLL_XFORM_ADDR1 */
			0x00000000, /* EMC_DLL_XFORM_ADDR2 */
			0x00064000, /* EMC_DLL_XFORM_DQS1 */
			0x00064000, /* EMC_DLL_XFORM_DQS2 */
			0x00064000, /* EMC_DLL_XFORM_DQS3 */
			0x0007c000, /* EMC_DLL_XFORM_DQ1 */
			0x0007c000, /* EMC_DLL_XFORM_DQ2 */
			0x0007c000, /* EMC_DLL_XFORM_DQ3 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */
			0x00000000, /* EMC_DLL_XFORM_QUSE1 */
			0x00000000, /* EMC_DLL_XFORM_QUSE2 */
			0x00000000, /* EMC_DLL_XFORM_QUSE3 */
		},
		{
			0x00000015, /* MC_PTSA_GRANT_DECREMENT */
			0x00b000b0, /* MC_LATENCY_ALLOWANCE_G2_0 */
			0x00b000c4, /* MC_LATENCY_ALLOWANCE_G2_1 */
			0x00d700eb, /* MC_LATENCY_ALLOWANCE_NV_0 */
			0x000000eb, /* MC_LATENCY_ALLOWANCE_NV2_0 */
			0x00eb00eb, /* MC_LATENCY_ALLOWANCE_NV_2 */
			0x00ff00eb, /* MC_LATENCY_ALLOWANCE_NV_1 */
			0x000000ff, /* MC_LATENCY_ALLOWANCE_NV2_1 */
			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_NV3 */
			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_EPP_0 */
			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_EPP_1 */
			0x4E564441, /* System Verification tag */
			0x04010400, /* Reg_tool Version */
			0x02000400, /* DVFS_tool Version */
			40800,      /* SDRAM Frequency */
		},
		0x00000042, /* EMC_ZCAL_WAIT_CNT after clock change */
		0x001fffff, /* EMC_AUTO_CAL_INTERVAL */
		0x7324000e, /* EMC_CFG */
		0x80001221, /* Mode Register 0 */
		0x80100003, /* Mode Register 1 */
		0x80200008, /* Mode Register 2 */
		0x00000000, /* Mode Register 4 */
		20850,      /* expected dvfs latency (ns) */
	},
	{
		0x42,       /* Rev 4.0.3 */
		68000,      /* SDRAM frequency */
		900,        /* min voltage */
		"pll_p",    /* clock source id */
		0x4400000a, /* CLK_SOURCE_EMC */
		100,        /* number of burst_regs */
		30,         /* number of trim_regs (each channel) */
		11,         /* number of up_down_regs */
		{
			0x00000003, /* EMC_RC */
			0x00000011, /* EMC_RFC */
			0x00000000, /* EMC_RFC_SLR */
			0x00000002, /* EMC_RAS */
			0x00000000, /* EMC_RP */
			0x00000004, /* EMC_R2W */
			0x0000000a, /* EMC_W2R */
			0x00000003, /* EMC_R2P */
			0x0000000b, /* EMC_W2P */
			0x00000000, /* EMC_RD_RCD */
			0x00000000, /* EMC_WR_RCD */
			0x00000003, /* EMC_RRD */
			0x00000001, /* EMC_REXT */
			0x00000000, /* EMC_WEXT */
			0x00000005, /* EMC_WDV */
			0x0000000f, /* EMC_WDV_MASK */
			0x00000006, /* EMC_IBDLY */
			0x00010000, /* EMC_PUTERM_EXTRA */
			0x00000000, /* EMC_CDB_CNTL_2 */
			0x00000004, /* EMC_QRST */
			0x0000000f, /* EMC_RDV_MASK */
			0x00000202, /* EMC_REFRESH */
			0x00000000, /* EMC_BURST_REFRESH_NUM */
			0x00000080, /* EMC_PRE_REFRESH_REQ_CNT */
			0x00000002, /* EMC_PDEX2WR */
			0x00000002, /* EMC_PDEX2RD */
			0x00000001, /* EMC_PCHG2PDEN */
			0x00000000, /* EMC_ACT2PDEN */
			0x0000000f, /* EMC_AR2PDEN */
			0x0000000f, /* EMC_RW2PDEN */
			0x00000013, /* EMC_TXSR */
			0x00000013, /* EMC_TXSRDLL */
			0x00000004, /* EMC_TCKE */
			0x00000004, /* EMC_TCKESR */
			0x00000004, /* EMC_TPD */
			0x00000004, /* EMC_TFAW */
			0x00000000, /* EMC_TRPAB */
			0x00000004, /* EMC_TCLKSTABLE */
			0x00000005, /* EMC_TCLKSTOP */
			0x00000213, /* EMC_TREFBW */
			0x00000005, /* EMC_QUSE_EXTRA */
			0x00000020, /* EMC_ODT_WRITE */
			0x00000000, /* EMC_ODT_READ */
			0x0000aa88, /* EMC_FBIO_CFG5 */
			0x002c00a0, /* EMC_CFG_DIG_DLL */
			0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */
			0x00064000, /* EMC_DLL_XFORM_DQS4 */
			0x00064000, /* EMC_DLL_XFORM_DQS5 */
			0x00064000, /* EMC_DLL_XFORM_DQS6 */
			0x00064000, /* EMC_DLL_XFORM_DQS7 */
			0x00000000, /* EMC_DLL_XFORM_QUSE4 */
			0x00000000, /* EMC_DLL_XFORM_QUSE5 */
			0x00000000, /* EMC_DLL_XFORM_QUSE6 */
			0x00000000, /* EMC_DLL_XFORM_QUSE7 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS4 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS5 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS6 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS7 */
			0x001112a0, /* EMC_XM2CMDPADCTRL */
			0x00000000, /* EMC_XM2CMDPADCTRL4 */
			0x0000a11c, /* EMC_XM2DQSPADCTRL2 */
			0x00000000, /* EMC_XM2DQPADCTRL2 */
			0x77ffc085, /* EMC_XM2CLKPADCTRL */
			0x81f1f108, /* EMC_XM2COMPPADCTRL */
			0x03037504, /* EMC_XM2VTTGENPADCTRL */
			0x0000003f, /* EMC_XM2VTTGENPADCTRL2 */
			0x0000003f, /* EMC_DSR_VTTGEN_DRV */
			0x00000022, /* EMC_TXDSRVTTGEN */
			0x02000000, /* EMC_FBIO_SPARE */
			0x00000802, /* EMC_CTT_TERM_CTRL */
			0x00000000, /* EMC_ZCAL_INTERVAL */
			0x00000042, /* EMC_ZCAL_WAIT_CNT */
			0x000c000c, /* EMC_MRS_WAIT_CNT */
			0x000c000c, /* EMC_MRS_WAIT_CNT2 */
			0x00000000, /* EMC_AUTO_CAL_CONFIG2 */
			0x00000000, /* EMC_AUTO_CAL_CONFIG3 */
			0x00000000, /* EMC_CTT */
			0x00000000, /* EMC_CTT_DURATION */
			0x8000050e, /* EMC_DYN_SELF_REF_CONTROL */
			0x1f7df7df, /* EMC_CA_TRAINING_TIMING_CNTL1 */
			0x0000001f, /* EMC_CA_TRAINING_TIMING_CNTL2 */
			0x00000001, /* MC_EMEM_ARB_CFG */
			0x80000076, /* MC_EMEM_ARB_OUTSTANDING_REQ */
			0x00000001, /* MC_EMEM_ARB_TIMING_RCD */
			0x00000001, /* MC_EMEM_ARB_TIMING_RP */
			0x00000002, /* MC_EMEM_ARB_TIMING_RC */
			0x00000000, /* MC_EMEM_ARB_TIMING_RAS */
			0x00000001, /* MC_EMEM_ARB_TIMING_FAW */
			0x00000001, /* MC_EMEM_ARB_TIMING_RRD */
			0x00000002, /* MC_EMEM_ARB_TIMING_RAP2PRE */
			0x00000008, /* MC_EMEM_ARB_TIMING_WAP2PRE */
			0x00000002, /* MC_EMEM_ARB_TIMING_R2R */
			0x00000001, /* MC_EMEM_ARB_TIMING_W2W */
			0x00000003, /* MC_EMEM_ARB_TIMING_R2W */
			0x00000006, /* MC_EMEM_ARB_TIMING_W2R */
			0x06030102, /* MC_EMEM_ARB_DA_TURNS */
			0x000a0402, /* MC_EMEM_ARB_DA_COVERS */
			0x74230403, /* MC_EMEM_ARB_MISC0 */
			0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */
			0x00040320, /* EMC_SEL_DPD_CTRL */
		},
		{
			0x00000000, /* EMC_CDB_CNTL_1 */
			0x00000006, /* EMC_FBIO_CFG6 */
			0x00000006, /* EMC_QUSE */
			0x00000004, /* EMC_EINPUT */
			0x00000004, /* EMC_EINPUT_DURATION */
			0x00064000, /* EMC_DLL_XFORM_DQS0 */
			0x00000009, /* EMC_QSAFE */
			0x00000000, /* EMC_DLL_XFORM_QUSE0 */
			0x0000000d, /* EMC_RDV */
			0x00249249, /* EMC_XM2DQSPADCTRL4 */
			0x20820800, /* EMC_XM2DQSPADCTRL3 */
			0x0007c000, /* EMC_DLL_XFORM_DQ0 */
			0xa0f10f0f, /* EMC_AUTO_CAL_CONFIG */
			0x00000000, /* EMC_DLL_XFORM_ADDR0 */
			0x00000d0d, /* EMC_XM2CLKPADCTRL2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */
			0x00000000, /* EMC_DLL_XFORM_ADDR1 */
			0x00000000, /* EMC_DLL_XFORM_ADDR2 */
			0x00064000, /* EMC_DLL_XFORM_DQS1 */
			0x00064000, /* EMC_DLL_XFORM_DQS2 */
			0x00064000, /* EMC_DLL_XFORM_DQS3 */
			0x0007c000, /* EMC_DLL_XFORM_DQ1 */
			0x0007c000, /* EMC_DLL_XFORM_DQ2 */
			0x0007c000, /* EMC_DLL_XFORM_DQ3 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */
			0x00000000, /* EMC_DLL_XFORM_QUSE1 */
			0x00000000, /* EMC_DLL_XFORM_QUSE2 */
			0x00000000, /* EMC_DLL_XFORM_QUSE3 */
		},
		{
			0x00000000, /* EMC_CDB_CNTL_1 */
			0x00000006, /* EMC_FBIO_CFG6 */
			0x00000006, /* EMC_QUSE */
			0x00000004, /* EMC_EINPUT */
			0x00000004, /* EMC_EINPUT_DURATION */
			0x00064000, /* EMC_DLL_XFORM_DQS0 */
			0x00000009, /* EMC_QSAFE */
			0x00000000, /* EMC_DLL_XFORM_QUSE0 */
			0x0000000d, /* EMC_RDV */
			0x00249249, /* EMC_XM2DQSPADCTRL4 */
			0x20820800, /* EMC_XM2DQSPADCTRL3 */
			0x0007c000, /* EMC_DLL_XFORM_DQ0 */
			0xa8f10f0f, /* EMC_AUTO_CAL_CONFIG */
			0x00000000, /* EMC_DLL_XFORM_ADDR0 */
			0x00000d0d, /* EMC_XM2CLKPADCTRL2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */
			0x00000000, /* EMC_DLL_XFORM_ADDR1 */
			0x00000000, /* EMC_DLL_XFORM_ADDR2 */
			0x00064000, /* EMC_DLL_XFORM_DQS1 */
			0x00064000, /* EMC_DLL_XFORM_DQS2 */
			0x00064000, /* EMC_DLL_XFORM_DQS3 */
			0x0007c000, /* EMC_DLL_XFORM_DQ1 */
			0x0007c000, /* EMC_DLL_XFORM_DQ2 */
			0x0007c000, /* EMC_DLL_XFORM_DQ3 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */
			0x00000000, /* EMC_DLL_XFORM_QUSE1 */
			0x00000000, /* EMC_DLL_XFORM_QUSE2 */
			0x00000000, /* EMC_DLL_XFORM_QUSE3 */
		},
		{
			0x00000023, /* MC_PTSA_GRANT_DECREMENT */
			0x00690069, /* MC_LATENCY_ALLOWANCE_G2_0 */
			0x00690075, /* MC_LATENCY_ALLOWANCE_G2_1 */
			0x0081008d, /* MC_LATENCY_ALLOWANCE_NV_0 */
			0x0000008d, /* MC_LATENCY_ALLOWANCE_NV2_0 */
			0x008d008d, /* MC_LATENCY_ALLOWANCE_NV_2 */
			0x00bc008d, /* MC_LATENCY_ALLOWANCE_NV_1 */
			0x000000bc, /* MC_LATENCY_ALLOWANCE_NV2_1 */
			0x00bc00bc, /* MC_LATENCY_ALLOWANCE_NV3 */
			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_EPP_0 */
			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_EPP_1 */
			0x4E564441, /* System Verification tag */
			0x04010400, /* Reg_tool Version */
			0x02000400, /* DVFS_tool Version */
			68000,      /* SDRAM Frequency */
		},
		0x00000042, /* EMC_ZCAL_WAIT_CNT after clock change */
		0x001fffff, /* EMC_AUTO_CAL_INTERVAL */
		0x7324000e, /* EMC_CFG */
		0x80001221, /* Mode Register 0 */
		0x80100003, /* Mode Register 1 */
		0x80200008, /* Mode Register 2 */
		0x00000000, /* Mode Register 4 */
		10720,      /* expected dvfs latency (ns) */
	},
	{
		0x42,       /* Rev 4.0.3 */
		102000,     /* SDRAM frequency */
		900,        /* min voltage */
		"pll_p",    /* clock source id */
		0x44000006, /* CLK_SOURCE_EMC */
		100,        /* number of burst_regs */
		30,         /* number of trim_regs (each channel) */
		11,         /* number of up_down_regs */
		{
			0x00000004, /* EMC_RC */
			0x0000001a, /* EMC_RFC */
			0x00000000, /* EMC_RFC_SLR */
			0x00000003, /* EMC_RAS */
			0x00000001, /* EMC_RP */
			0x00000004, /* EMC_R2W */
			0x0000000a, /* EMC_W2R */
			0x00000003, /* EMC_R2P */
			0x0000000b, /* EMC_W2P */
			0x00000001, /* EMC_RD_RCD */
			0x00000001, /* EMC_WR_RCD */
			0x00000003, /* EMC_RRD */
			0x00000001, /* EMC_REXT */
			0x00000000, /* EMC_WEXT */
			0x00000005, /* EMC_WDV */
			0x0000000f, /* EMC_WDV_MASK */
			0x00000006, /* EMC_IBDLY */
			0x00010000, /* EMC_PUTERM_EXTRA */
			0x00000000, /* EMC_CDB_CNTL_2 */
			0x00000004, /* EMC_QRST */
			0x0000000f, /* EMC_RDV_MASK */
			0x00000303, /* EMC_REFRESH */
			0x00000000, /* EMC_BURST_REFRESH_NUM */
			0x000000c0, /* EMC_PRE_REFRESH_REQ_CNT */
			0x00000002, /* EMC_PDEX2WR */
			0x00000002, /* EMC_PDEX2RD */
			0x00000001, /* EMC_PCHG2PDEN */
			0x00000000, /* EMC_ACT2PDEN */
			0x00000018, /* EMC_AR2PDEN */
			0x0000000f, /* EMC_RW2PDEN */
			0x0000001c, /* EMC_TXSR */
			0x0000001c, /* EMC_TXSRDLL */
			0x00000004, /* EMC_TCKE */
			0x00000004, /* EMC_TCKESR */
			0x00000004, /* EMC_TPD */
			0x00000005, /* EMC_TFAW */
			0x00000000, /* EMC_TRPAB */
			0x00000004, /* EMC_TCLKSTABLE */
			0x00000005, /* EMC_TCLKSTOP */
			0x0000031c, /* EMC_TREFBW */
			0x00000005, /* EMC_QUSE_EXTRA */
			0x00000020, /* EMC_ODT_WRITE */
			0x00000000, /* EMC_ODT_READ */
			0x0000aa88, /* EMC_FBIO_CFG5 */
			0x002c00a0, /* EMC_CFG_DIG_DLL */
			0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */
			0x00064000, /* EMC_DLL_XFORM_DQS4 */
			0x00064000, /* EMC_DLL_XFORM_DQS5 */
			0x00064000, /* EMC_DLL_XFORM_DQS6 */
			0x00064000, /* EMC_DLL_XFORM_DQS7 */
			0x00000000, /* EMC_DLL_XFORM_QUSE4 */
			0x00000000, /* EMC_DLL_XFORM_QUSE5 */
			0x00000000, /* EMC_DLL_XFORM_QUSE6 */
			0x00000000, /* EMC_DLL_XFORM_QUSE7 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS4 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS5 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS6 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS7 */
			0x001112a0, /* EMC_XM2CMDPADCTRL */
			0x00000000, /* EMC_XM2CMDPADCTRL4 */
			0x0000a11c, /* EMC_XM2DQSPADCTRL2 */
			0x00000000, /* EMC_XM2DQPADCTRL2 */
			0x77ffc085, /* EMC_XM2CLKPADCTRL */
			0x81f1f108, /* EMC_XM2COMPPADCTRL */
			0x03037504, /* EMC_XM2VTTGENPADCTRL */
			0x0000003f, /* EMC_XM2VTTGENPADCTRL2 */
			0x0000003f, /* EMC_DSR_VTTGEN_DRV */
			0x00000033, /* EMC_TXDSRVTTGEN */
			0x02000000, /* EMC_FBIO_SPARE */
			0x00000802, /* EMC_CTT_TERM_CTRL */
			0x00000000, /* EMC_ZCAL_INTERVAL */
			0x00000042, /* EMC_ZCAL_WAIT_CNT */
			0x000c000c, /* EMC_MRS_WAIT_CNT */
			0x000c000c, /* EMC_MRS_WAIT_CNT2 */
			0x00000000, /* EMC_AUTO_CAL_CONFIG2 */
			0x00000000, /* EMC_AUTO_CAL_CONFIG3 */
			0x00000000, /* EMC_CTT */
			0x00000000, /* EMC_CTT_DURATION */
			0x80000713, /* EMC_DYN_SELF_REF_CONTROL */
			0x1f7df7df, /* EMC_CA_TRAINING_TIMING_CNTL1 */
			0x0000001f, /* EMC_CA_TRAINING_TIMING_CNTL2 */
			0x08000001, /* MC_EMEM_ARB_CFG */
			0x80000098, /* MC_EMEM_ARB_OUTSTANDING_REQ */
			0x00000001, /* MC_EMEM_ARB_TIMING_RCD */
			0x00000001, /* MC_EMEM_ARB_TIMING_RP */
			0x00000003, /* MC_EMEM_ARB_TIMING_RC */
			0x00000000, /* MC_EMEM_ARB_TIMING_RAS */
			0x00000002, /* MC_EMEM_ARB_TIMING_FAW */
			0x00000001, /* MC_EMEM_ARB_TIMING_RRD */
			0x00000002, /* MC_EMEM_ARB_TIMING_RAP2PRE */
			0x00000008, /* MC_EMEM_ARB_TIMING_WAP2PRE */
			0x00000002, /* MC_EMEM_ARB_TIMING_R2R */
			0x00000001, /* MC_EMEM_ARB_TIMING_W2W */
			0x00000003, /* MC_EMEM_ARB_TIMING_R2W */
			0x00000006, /* MC_EMEM_ARB_TIMING_W2R */
			0x06030102, /* MC_EMEM_ARB_DA_TURNS */
			0x000a0403, /* MC_EMEM_ARB_DA_COVERS */
			0x73c30504, /* MC_EMEM_ARB_MISC0 */
			0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */
			0x00040320, /* EMC_SEL_DPD_CTRL */
		},
		{
			0x00000000, /* EMC_CDB_CNTL_1 */
			0x00000006, /* EMC_FBIO_CFG6 */
			0x00000006, /* EMC_QUSE */
			0x00000004, /* EMC_EINPUT */
			0x00000004, /* EMC_EINPUT_DURATION */
			0x00064000, /* EMC_DLL_XFORM_DQS0 */
			0x00000009, /* EMC_QSAFE */
			0x00000000, /* EMC_DLL_XFORM_QUSE0 */
			0x0000000d, /* EMC_RDV */
			0x00249249, /* EMC_XM2DQSPADCTRL4 */
			0x20820800, /* EMC_XM2DQSPADCTRL3 */
			0x0007c000, /* EMC_DLL_XFORM_DQ0 */
			0xa0f10f0f, /* EMC_AUTO_CAL_CONFIG */
			0x00000000, /* EMC_DLL_XFORM_ADDR0 */
			0x00000d0d, /* EMC_XM2CLKPADCTRL2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */
			0x00000000, /* EMC_DLL_XFORM_ADDR1 */
			0x00000000, /* EMC_DLL_XFORM_ADDR2 */
			0x00064000, /* EMC_DLL_XFORM_DQS1 */
			0x00064000, /* EMC_DLL_XFORM_DQS2 */
			0x00064000, /* EMC_DLL_XFORM_DQS3 */
			0x0007c000, /* EMC_DLL_XFORM_DQ1 */
			0x0007c000, /* EMC_DLL_XFORM_DQ2 */
			0x0007c000, /* EMC_DLL_XFORM_DQ3 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */
			0x00000000, /* EMC_DLL_XFORM_QUSE1 */
			0x00000000, /* EMC_DLL_XFORM_QUSE2 */
			0x00000000, /* EMC_DLL_XFORM_QUSE3 */
		},
		{
			0x00000000, /* EMC_CDB_CNTL_1 */
			0x00000006, /* EMC_FBIO_CFG6 */
			0x00000006, /* EMC_QUSE */
			0x00000004, /* EMC_EINPUT */
			0x00000004, /* EMC_EINPUT_DURATION */
			0x00064000, /* EMC_DLL_XFORM_DQS0 */
			0x00000009, /* EMC_QSAFE */
			0x00000000, /* EMC_DLL_XFORM_QUSE0 */
			0x0000000d, /* EMC_RDV */
			0x00249249, /* EMC_XM2DQSPADCTRL4 */
			0x20820800, /* EMC_XM2DQSPADCTRL3 */
			0x0007c000, /* EMC_DLL_XFORM_DQ0 */
			0xa8f10f0f, /* EMC_AUTO_CAL_CONFIG */
			0x00000000, /* EMC_DLL_XFORM_ADDR0 */
			0x00000d0d, /* EMC_XM2CLKPADCTRL2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */
			0x00000000, /* EMC_DLL_XFORM_ADDR1 */
			0x00000000, /* EMC_DLL_XFORM_ADDR2 */
			0x00064000, /* EMC_DLL_XFORM_DQS1 */
			0x00064000, /* EMC_DLL_XFORM_DQS2 */
			0x00064000, /* EMC_DLL_XFORM_DQS3 */
			0x0007c000, /* EMC_DLL_XFORM_DQ1 */
			0x0007c000, /* EMC_DLL_XFORM_DQ2 */
			0x0007c000, /* EMC_DLL_XFORM_DQ3 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */
			0x00000000, /* EMC_DLL_XFORM_QUSE1 */
			0x00000000, /* EMC_DLL_XFORM_QUSE2 */
			0x00000000, /* EMC_DLL_XFORM_QUSE3 */
		},
		{
			0x00000034, /* MC_PTSA_GRANT_DECREMENT */
			0x00460046, /* MC_LATENCY_ALLOWANCE_G2_0 */
			0x0046004e, /* MC_LATENCY_ALLOWANCE_G2_1 */
			0x0056005e, /* MC_LATENCY_ALLOWANCE_NV_0 */
			0x0000005e, /* MC_LATENCY_ALLOWANCE_NV2_0 */
			0x005e005e, /* MC_LATENCY_ALLOWANCE_NV_2 */
			0x007d005e, /* MC_LATENCY_ALLOWANCE_NV_1 */
			0x0000007d, /* MC_LATENCY_ALLOWANCE_NV2_1 */
			0x007d007d, /* MC_LATENCY_ALLOWANCE_NV3 */
			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_EPP_0 */
			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_EPP_1 */
			0x4E564441, /* System Verification tag */
			0x04010400, /* Reg_tool Version */
			0x02000400, /* DVFS_tool Version */
			102000,     /* SDRAM Frequency */
		},
		0x00000042, /* EMC_ZCAL_WAIT_CNT after clock change */
		0x001fffff, /* EMC_AUTO_CAL_INTERVAL */
		0x7324000e, /* EMC_CFG */
		0x80001221, /* Mode Register 0 */
		0x80100003, /* Mode Register 1 */
		0x80200008, /* Mode Register 2 */
		0x00000000, /* Mode Register 4 */
		6890,       /* expected dvfs latency (ns) */
	},
	{
		0x42,       /* Rev 4.0.3 */
		204000,     /* SDRAM frequency */
		900,        /* min voltage */
		"pll_p",    /* clock source id */
		0x44000002, /* CLK_SOURCE_EMC */
		100,        /* number of burst_regs */
		30,         /* number of trim_regs (each channel) */
		11,         /* number of up_down_regs */
		{
			0x00000009, /* EMC_RC */
			0x00000035, /* EMC_RFC */
			0x00000000, /* EMC_RFC_SLR */
			0x00000007, /* EMC_RAS */
			0x00000002, /* EMC_RP */
			0x00000004, /* EMC_R2W */
			0x0000000a, /* EMC_W2R */
			0x00000003, /* EMC_R2P */
			0x0000000b, /* EMC_W2P */
			0x00000002, /* EMC_RD_RCD */
			0x00000002, /* EMC_WR_RCD */
			0x00000003, /* EMC_RRD */
			0x00000001, /* EMC_REXT */
			0x00000000, /* EMC_WEXT */
			0x00000005, /* EMC_WDV */
			0x0000000f, /* EMC_WDV_MASK */
			0x00000006, /* EMC_IBDLY */
			0x00010000, /* EMC_PUTERM_EXTRA */
			0x00000000, /* EMC_CDB_CNTL_2 */
			0x00000004, /* EMC_QRST */
			0x0000000f, /* EMC_RDV_MASK */
			0x00000607, /* EMC_REFRESH */
			0x00000000, /* EMC_BURST_REFRESH_NUM */
			0x00000181, /* EMC_PRE_REFRESH_REQ_CNT */
			0x00000002, /* EMC_PDEX2WR */
			0x00000002, /* EMC_PDEX2RD */
			0x00000001, /* EMC_PCHG2PDEN */
			0x00000000, /* EMC_ACT2PDEN */
			0x00000032, /* EMC_AR2PDEN */
			0x0000000f, /* EMC_RW2PDEN */
			0x00000038, /* EMC_TXSR */
			0x00000038, /* EMC_TXSRDLL */
			0x00000004, /* EMC_TCKE */
			0x00000004, /* EMC_TCKESR */
			0x00000004, /* EMC_TPD */
			0x00000009, /* EMC_TFAW */
			0x00000000, /* EMC_TRPAB */
			0x00000004, /* EMC_TCLKSTABLE */
			0x00000005, /* EMC_TCLKSTOP */
			0x00000638, /* EMC_TREFBW */
			0x00000006, /* EMC_QUSE_EXTRA */
			0x00000020, /* EMC_ODT_WRITE */
			0x00000000, /* EMC_ODT_READ */
			0x0000aa88, /* EMC_FBIO_CFG5 */
			0x002c00a0, /* EMC_CFG_DIG_DLL */
			0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */
			0x00064000, /* EMC_DLL_XFORM_DQS4 */
			0x00064000, /* EMC_DLL_XFORM_DQS5 */
			0x00064000, /* EMC_DLL_XFORM_DQS6 */
			0x00064000, /* EMC_DLL_XFORM_DQS7 */
			0x00000000, /* EMC_DLL_XFORM_QUSE4 */
			0x00000000, /* EMC_DLL_XFORM_QUSE5 */
			0x00000000, /* EMC_DLL_XFORM_QUSE6 */
			0x00000000, /* EMC_DLL_XFORM_QUSE7 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS4 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS5 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS6 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS7 */
			0x001112a0, /* EMC_XM2CMDPADCTRL */
			0x00000000, /* EMC_XM2CMDPADCTRL4 */
			0x0000a11c, /* EMC_XM2DQSPADCTRL2 */
			0x00000000, /* EMC_XM2DQPADCTRL2 */
			0x77ffc085, /* EMC_XM2CLKPADCTRL */
			0x81f1f108, /* EMC_XM2COMPPADCTRL */
			0x03037504, /* EMC_XM2VTTGENPADCTRL */
			0x0000003f, /* EMC_XM2VTTGENPADCTRL2 */
			0x0000003f, /* EMC_DSR_VTTGEN_DRV */
			0x00000000, /* EMC_TXDSRVTTGEN */
			0x02000000, /* EMC_FBIO_SPARE */
			0x00000802, /* EMC_CTT_TERM_CTRL */
			0x00020000, /* EMC_ZCAL_INTERVAL */
			0x00000100, /* EMC_ZCAL_WAIT_CNT */
			0x000c000c, /* EMC_MRS_WAIT_CNT */
			0x000c000c, /* EMC_MRS_WAIT_CNT2 */
			0x00000000, /* EMC_AUTO_CAL_CONFIG2 */
			0x00000000, /* EMC_AUTO_CAL_CONFIG3 */
			0x00000000, /* EMC_CTT */
			0x00000000, /* EMC_CTT_DURATION */
			0x80000d22, /* EMC_DYN_SELF_REF_CONTROL */
			0x1f7df7df, /* EMC_CA_TRAINING_TIMING_CNTL1 */
			0x0000001f, /* EMC_CA_TRAINING_TIMING_CNTL2 */
			0x01000003, /* MC_EMEM_ARB_CFG */
			0x800000fe, /* MC_EMEM_ARB_OUTSTANDING_REQ */
			0x00000001, /* MC_EMEM_ARB_TIMING_RCD */
			0x00000001, /* MC_EMEM_ARB_TIMING_RP */
			0x00000005, /* MC_EMEM_ARB_TIMING_RC */
			0x00000002, /* MC_EMEM_ARB_TIMING_RAS */
			0x00000004, /* MC_EMEM_ARB_TIMING_FAW */
			0x00000001, /* MC_EMEM_ARB_TIMING_RRD */
			0x00000002, /* MC_EMEM_ARB_TIMING_RAP2PRE */
			0x00000008, /* MC_EMEM_ARB_TIMING_WAP2PRE */
			0x00000002, /* MC_EMEM_ARB_TIMING_R2R */
			0x00000001, /* MC_EMEM_ARB_TIMING_W2W */
			0x00000003, /* MC_EMEM_ARB_TIMING_R2W */
			0x00000006, /* MC_EMEM_ARB_TIMING_W2R */
			0x06030102, /* MC_EMEM_ARB_DA_TURNS */
			0x000a0405, /* MC_EMEM_ARB_DA_COVERS */
			0x73840a06, /* MC_EMEM_ARB_MISC0 */
			0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */
			0x00040320, /* EMC_SEL_DPD_CTRL */
		},
		{
			0x00000000, /* EMC_CDB_CNTL_1 */
			0x00000004, /* EMC_FBIO_CFG6 */
			0x00000007, /* EMC_QUSE */
			0x00000004, /* EMC_EINPUT */
			0x00000004, /* EMC_EINPUT_DURATION */
			0x00064000, /* EMC_DLL_XFORM_DQS0 */
			0x00000009, /* EMC_QSAFE */
			0x00000000, /* EMC_DLL_XFORM_QUSE0 */
			0x0000000d, /* EMC_RDV */
			0x00249249, /* EMC_XM2DQSPADCTRL4 */
			0x20820800, /* EMC_XM2DQSPADCTRL3 */
			0x0007c000, /* EMC_DLL_XFORM_DQ0 */
			0xa0f10f0f, /* EMC_AUTO_CAL_CONFIG */
			0x00000000, /* EMC_DLL_XFORM_ADDR0 */
			0x00000d0d, /* EMC_XM2CLKPADCTRL2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */
			0x00000000, /* EMC_DLL_XFORM_ADDR1 */
			0x00000000, /* EMC_DLL_XFORM_ADDR2 */
			0x00064000, /* EMC_DLL_XFORM_DQS1 */
			0x00064000, /* EMC_DLL_XFORM_DQS2 */
			0x00064000, /* EMC_DLL_XFORM_DQS3 */
			0x0007c000, /* EMC_DLL_XFORM_DQ1 */
			0x0007c000, /* EMC_DLL_XFORM_DQ2 */
			0x0007c000, /* EMC_DLL_XFORM_DQ3 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */
			0x00000000, /* EMC_DLL_XFORM_QUSE1 */
			0x00000000, /* EMC_DLL_XFORM_QUSE2 */
			0x00000000, /* EMC_DLL_XFORM_QUSE3 */
		},
		{
			0x00000000, /* EMC_CDB_CNTL_1 */
			0x00000004, /* EMC_FBIO_CFG6 */
			0x00000007, /* EMC_QUSE */
			0x00000004, /* EMC_EINPUT */
			0x00000004, /* EMC_EINPUT_DURATION */
			0x00064000, /* EMC_DLL_XFORM_DQS0 */
			0x00000009, /* EMC_QSAFE */
			0x00000000, /* EMC_DLL_XFORM_QUSE0 */
			0x0000000d, /* EMC_RDV */
			0x00249249, /* EMC_XM2DQSPADCTRL4 */
			0x20820800, /* EMC_XM2DQSPADCTRL3 */
			0x0007c000, /* EMC_DLL_XFORM_DQ0 */
			0xa8f10f0f, /* EMC_AUTO_CAL_CONFIG */
			0x00000000, /* EMC_DLL_XFORM_ADDR0 */
			0x00000d0d, /* EMC_XM2CLKPADCTRL2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */
			0x00000000, /* EMC_DLL_XFORM_ADDR1 */
			0x00000000, /* EMC_DLL_XFORM_ADDR2 */
			0x00064000, /* EMC_DLL_XFORM_DQS1 */
			0x00064000, /* EMC_DLL_XFORM_DQS2 */
			0x00064000, /* EMC_DLL_XFORM_DQS3 */
			0x0007c000, /* EMC_DLL_XFORM_DQ1 */
			0x0007c000, /* EMC_DLL_XFORM_DQ2 */
			0x0007c000, /* EMC_DLL_XFORM_DQ3 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */
			0x00000000, /* EMC_DLL_XFORM_QUSE1 */
			0x00000000, /* EMC_DLL_XFORM_QUSE2 */
			0x00000000, /* EMC_DLL_XFORM_QUSE3 */
		},
		{
			0x00000068, /* MC_PTSA_GRANT_DECREMENT */
			0x00230023, /* MC_LATENCY_ALLOWANCE_G2_0 */
			0x00230027, /* MC_LATENCY_ALLOWANCE_G2_1 */
			0x002b002f, /* MC_LATENCY_ALLOWANCE_NV_0 */
			0x0000002f, /* MC_LATENCY_ALLOWANCE_NV2_0 */
			0x002f002f, /* MC_LATENCY_ALLOWANCE_NV_2 */
			0x003e002f, /* MC_LATENCY_ALLOWANCE_NV_1 */
			0x0000003e, /* MC_LATENCY_ALLOWANCE_NV2_1 */
			0x003e003e, /* MC_LATENCY_ALLOWANCE_NV3 */
			0x00ff00c8, /* MC_LATENCY_ALLOWANCE_EPP_0 */
			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_EPP_1 */
			0x4E564441, /* System Verification tag */
			0x04010400, /* Reg_tool Version */
			0x02000400, /* DVFS_tool Version */
			204000,     /* SDRAM Frequency */
		},
		0x00000042, /* EMC_ZCAL_WAIT_CNT after clock change */
		0x001fffff, /* EMC_AUTO_CAL_INTERVAL */
		0x7320000e, /* EMC_CFG */
		0x80001221, /* Mode Register 0 */
		0x80100003, /* Mode Register 1 */
		0x80200008, /* Mode Register 2 */
		0x00000000, /* Mode Register 4 */
		3420,       /* expected dvfs latency (ns) */
	},
	{
		0x42,       /* Rev 4.0.3 */
		312000,     /* SDRAM frequency */
		1000,       /* min voltage */
		"pll_c",    /* clock source id */
		0x24000002, /* CLK_SOURCE_EMC */
		100,        /* number of burst_regs */
		30,         /* number of trim_regs (each channel) */
		11,         /* number of up_down_regs */
		{
			0x0000000e, /* EMC_RC */
			0x00000050, /* EMC_RFC */
			0x00000000, /* EMC_RFC_SLR */
			0x00000009, /* EMC_RAS */
			0x00000003, /* EMC_RP */
			0x00000004, /* EMC_R2W */
			0x00000008, /* EMC_W2R */
			0x00000002, /* EMC_R2P */
			0x00000009, /* EMC_W2P */
			0x00000003, /* EMC_RD_RCD */
			0x00000003, /* EMC_WR_RCD */
			0x00000002, /* EMC_RRD */
			0x00000001, /* EMC_REXT */
			0x00000000, /* EMC_WEXT */
			0x00000004, /* EMC_WDV */
			0x0000000f, /* EMC_WDV_MASK */
			0x00000006, /* EMC_IBDLY */
			0x00010000, /* EMC_PUTERM_EXTRA */
			0x00000000, /* EMC_CDB_CNTL_2 */
			0x00000004, /* EMC_QRST */
			0x0000000f, /* EMC_RDV_MASK */
			0x00000941, /* EMC_REFRESH */
			0x00000000, /* EMC_BURST_REFRESH_NUM */
			0x00000250, /* EMC_PRE_REFRESH_REQ_CNT */
			0x00000001, /* EMC_PDEX2WR */
			0x00000008, /* EMC_PDEX2RD */
			0x00000001, /* EMC_PCHG2PDEN */
			0x00000000, /* EMC_ACT2PDEN */
			0x0000004d, /* EMC_AR2PDEN */
			0x0000000e, /* EMC_RW2PDEN */
			0x00000055, /* EMC_TXSR */
			0x00000200, /* EMC_TXSRDLL */
			0x00000004, /* EMC_TCKE */
			0x00000004, /* EMC_TCKESR */
			0x00000004, /* EMC_TPD */
			0x0000000d, /* EMC_TFAW */
			0x00000000, /* EMC_TRPAB */
			0x00000004, /* EMC_TCLKSTABLE */
			0x00000005, /* EMC_TCLKSTOP */
			0x00000982, /* EMC_TREFBW */
			0x00000000, /* EMC_QUSE_EXTRA */
			0x00000020, /* EMC_ODT_WRITE */
			0x00000000, /* EMC_ODT_READ */
			0x00005088, /* EMC_FBIO_CFG5 */
			0x002c00a0, /* EMC_CFG_DIG_DLL */
			0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */
			0x00018000, /* EMC_DLL_XFORM_DQS4 */
			0x00018000, /* EMC_DLL_XFORM_DQS5 */
			0x00018000, /* EMC_DLL_XFORM_DQS6 */
			0x00018000, /* EMC_DLL_XFORM_DQS7 */
			0x00028000, /* EMC_DLL_XFORM_QUSE4 */
			0x00028000, /* EMC_DLL_XFORM_QUSE5 */
			0x00028000, /* EMC_DLL_XFORM_QUSE6 */
			0x00028000, /* EMC_DLL_XFORM_QUSE7 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS4 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS5 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS6 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS7 */
			0x001112a0, /* EMC_XM2CMDPADCTRL */
			0x00000000, /* EMC_XM2CMDPADCTRL4 */
			0x0001013d, /* EMC_XM2DQSPADCTRL2 */
			0x00000000, /* EMC_XM2DQPADCTRL2 */
			0x77ffc085, /* EMC_XM2CLKPADCTRL */
			0x81f1f108, /* EMC_XM2COMPPADCTRL */
			0x03037504, /* EMC_XM2VTTGENPADCTRL */
			0x00000000, /* EMC_XM2VTTGENPADCTRL2 */
			0x0000003f, /* EMC_DSR_VTTGEN_DRV */
			0x00000000, /* EMC_TXDSRVTTGEN */
			0x02000000, /* EMC_FBIO_SPARE */
			0x00000802, /* EMC_CTT_TERM_CTRL */
			0x00020000, /* EMC_ZCAL_INTERVAL */
			0x00000100, /* EMC_ZCAL_WAIT_CNT */
			0x0171000c, /* EMC_MRS_WAIT_CNT */
			0x0171000c, /* EMC_MRS_WAIT_CNT2 */
			0x00000000, /* EMC_AUTO_CAL_CONFIG2 */
			0x00000000, /* EMC_AUTO_CAL_CONFIG3 */
			0x00000000, /* EMC_CTT */
			0x00000000, /* EMC_CTT_DURATION */
			0x8000138d, /* EMC_DYN_SELF_REF_CONTROL */
			0x1f7df7df, /* EMC_CA_TRAINING_TIMING_CNTL1 */
			0x0000001f, /* EMC_CA_TRAINING_TIMING_CNTL2 */
			0x0b000004, /* MC_EMEM_ARB_CFG */
			0x8000016a, /* MC_EMEM_ARB_OUTSTANDING_REQ */
			0x00000001, /* MC_EMEM_ARB_TIMING_RCD */
			0x00000002, /* MC_EMEM_ARB_TIMING_RP */
			0x00000007, /* MC_EMEM_ARB_TIMING_RC */
			0x00000004, /* MC_EMEM_ARB_TIMING_RAS */
			0x00000006, /* MC_EMEM_ARB_TIMING_FAW */
			0x00000001, /* MC_EMEM_ARB_TIMING_RRD */
			0x00000002, /* MC_EMEM_ARB_TIMING_RAP2PRE */
			0x00000007, /* MC_EMEM_ARB_TIMING_WAP2PRE */
			0x00000002, /* MC_EMEM_ARB_TIMING_R2R */
			0x00000002, /* MC_EMEM_ARB_TIMING_W2W */
			0x00000004, /* MC_EMEM_ARB_TIMING_R2W */
			0x00000006, /* MC_EMEM_ARB_TIMING_W2R */
			0x06040202, /* MC_EMEM_ARB_DA_TURNS */
			0x000b0607, /* MC_EMEM_ARB_DA_COVERS */
			0x76e50f08, /* MC_EMEM_ARB_MISC0 */
			0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */
			0x00040320, /* EMC_SEL_DPD_CTRL */
		},
		{
			0x00000000, /* EMC_CDB_CNTL_1 */
			0x00000004, /* EMC_FBIO_CFG6 */
			0x00000006, /* EMC_QUSE */
			0x00000005, /* EMC_EINPUT */
			0x00000004, /* EMC_EINPUT_DURATION */
			0x00038000, /* EMC_DLL_XFORM_DQS0 */
			0x0000000b, /* EMC_QSAFE */
			0x00028000, /* EMC_DLL_XFORM_QUSE0 */
			0x0000000d, /* EMC_RDV */
			0x00249249, /* EMC_XM2DQSPADCTRL4 */
			0x20820800, /* EMC_XM2DQSPADCTRL3 */
			0x00038000, /* EMC_DLL_XFORM_DQ0 */
			0xa0f10f0f, /* EMC_AUTO_CAL_CONFIG */
			0x00014000, /* EMC_DLL_XFORM_ADDR0 */
			0x00000000, /* EMC_XM2CLKPADCTRL2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */
			0x00000000, /* EMC_DLL_XFORM_ADDR1 */
			0x00014000, /* EMC_DLL_XFORM_ADDR2 */
			0x00038000, /* EMC_DLL_XFORM_DQS1 */
			0x00038000, /* EMC_DLL_XFORM_DQS2 */
			0x00038000, /* EMC_DLL_XFORM_DQS3 */
			0x00038000, /* EMC_DLL_XFORM_DQ1 */
			0x00038000, /* EMC_DLL_XFORM_DQ2 */
			0x00038000, /* EMC_DLL_XFORM_DQ3 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */
			0x00028000, /* EMC_DLL_XFORM_QUSE1 */
			0x00028000, /* EMC_DLL_XFORM_QUSE2 */
			0x00028000, /* EMC_DLL_XFORM_QUSE3 */
		},
		{
			0x00000000, /* EMC_CDB_CNTL_1 */
			0x00000004, /* EMC_FBIO_CFG6 */
			0x00000006, /* EMC_QUSE */
			0x00000005, /* EMC_EINPUT */
			0x00000004, /* EMC_EINPUT_DURATION */
			0x00038000, /* EMC_DLL_XFORM_DQS0 */
			0x0000000b, /* EMC_QSAFE */
			0x00028000, /* EMC_DLL_XFORM_QUSE0 */
			0x0000000d, /* EMC_RDV */
			0x00249249, /* EMC_XM2DQSPADCTRL4 */
			0x20820800, /* EMC_XM2DQSPADCTRL3 */
			0x00038000, /* EMC_DLL_XFORM_DQ0 */
			0xa8f10f0f, /* EMC_AUTO_CAL_CONFIG */
			0x00014000, /* EMC_DLL_XFORM_ADDR0 */
			0x00000000, /* EMC_XM2CLKPADCTRL2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */
			0x00000000, /* EMC_DLL_XFORM_ADDR1 */
			0x00014000, /* EMC_DLL_XFORM_ADDR2 */
			0x00038000, /* EMC_DLL_XFORM_DQS1 */
			0x00038000, /* EMC_DLL_XFORM_DQS2 */
			0x00038000, /* EMC_DLL_XFORM_DQS3 */
			0x00038000, /* EMC_DLL_XFORM_DQ1 */
			0x00038000, /* EMC_DLL_XFORM_DQ2 */
			0x00038000, /* EMC_DLL_XFORM_DQ3 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */
			0x00028000, /* EMC_DLL_XFORM_QUSE1 */
			0x00028000, /* EMC_DLL_XFORM_QUSE2 */
			0x00028000, /* EMC_DLL_XFORM_QUSE3 */
		},
		{
			0x000000a0, /* MC_PTSA_GRANT_DECREMENT */
			0x00170017, /* MC_LATENCY_ALLOWANCE_G2_0 */
			0x00170019, /* MC_LATENCY_ALLOWANCE_G2_1 */
			0x001c001e, /* MC_LATENCY_ALLOWANCE_NV_0 */
			0x0000001e, /* MC_LATENCY_ALLOWANCE_NV2_0 */
			0x001e001e, /* MC_LATENCY_ALLOWANCE_NV_2 */
			0x0029001e, /* MC_LATENCY_ALLOWANCE_NV_1 */
			0x00000029, /* MC_LATENCY_ALLOWANCE_NV2_1 */
			0x00290029, /* MC_LATENCY_ALLOWANCE_NV3 */
			0x00ff0082, /* MC_LATENCY_ALLOWANCE_EPP_0 */
			0x00ff00ff, /* MC_LATENCY_ALLOWANCE_EPP_1 */
			0x4E564441, /* System Verification tag */
			0x04010400, /* Reg_tool Version */
			0x02000400, /* DVFS_tool Version */
			312000,     /* SDRAM Frequency */
		},
		0x00000042, /* EMC_ZCAL_WAIT_CNT after clock change */
		0x001fffff, /* EMC_AUTO_CAL_INTERVAL */
		0x5300000e, /* EMC_CFG */
		0x80000321, /* Mode Register 0 */
		0x80100002, /* Mode Register 1 */
		0x80200000, /* Mode Register 2 */
		0x00000000, /* Mode Register 4 */
		2180,       /* expected dvfs latency (ns) */
	},
	{
		0x42,       /* Rev 4.0.3 */
		408000,     /* SDRAM frequency */
		1000,       /* min voltage */
		"pll_p",    /* clock source id */
		0x44000000, /* CLK_SOURCE_EMC */
		100,        /* number of burst_regs */
		30,         /* number of trim_regs (each channel) */
		11,         /* number of up_down_regs */
		{
			0x00000012, /* EMC_RC */
			0x00000069, /* EMC_RFC */
			0x00000000, /* EMC_RFC_SLR */
			0x0000000d, /* EMC_RAS */
			0x00000004, /* EMC_RP */
			0x00000005, /* EMC_R2W */
			0x00000009, /* EMC_W2R */
			0x00000002, /* EMC_R2P */
			0x0000000c, /* EMC_W2P */
			0x00000004, /* EMC_RD_RCD */
			0x00000004, /* EMC_WR_RCD */
			0x00000002, /* EMC_RRD */
			0x00000001, /* EMC_REXT */
			0x00000000, /* EMC_WEXT */
			0x00000004, /* EMC_WDV */
			0x0000000f, /* EMC_WDV_MASK */
			0x00000006, /* EMC_IBDLY */
			0x00010000, /* EMC_PUTERM_EXTRA */
			0x00000000, /* EMC_CDB_CNTL_2 */
			0x00000004, /* EMC_QRST */
			0x00000010, /* EMC_RDV_MASK */
			0x00000c2e, /* EMC_REFRESH */
			0x00000000, /* EMC_BURST_REFRESH_NUM */
			0x0000030b, /* EMC_PRE_REFRESH_REQ_CNT */
			0x00000001, /* EMC_PDEX2WR */
			0x00000008, /* EMC_PDEX2RD */
			0x00000001, /* EMC_PCHG2PDEN */
			0x00000000, /* EMC_ACT2PDEN */
			0x00000066, /* EMC_AR2PDEN */
			0x00000011, /* EMC_RW2PDEN */
			0x0000006f, /* EMC_TXSR */
			0x00000200, /* EMC_TXSRDLL */
			0x00000004, /* EMC_TCKE */
			0x00000004, /* EMC_TCKESR */
			0x00000004, /* EMC_TPD */
			0x00000011, /* EMC_TFAW */
			0x00000000, /* EMC_TRPAB */
			0x00000004, /* EMC_TCLKSTABLE */
			0x00000005, /* EMC_TCLKSTOP */
			0x00000c6f, /* EMC_TREFBW */
			0x00000000, /* EMC_QUSE_EXTRA */
			0x00000020, /* EMC_ODT_WRITE */
			0x00000000, /* EMC_ODT_READ */
			0x00005088, /* EMC_FBIO_CFG5 */
			0x002c0080, /* EMC_CFG_DIG_DLL */
			0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */
			0x00030000, /* EMC_DLL_XFORM_DQS4 */
			0x00030000, /* EMC_DLL_XFORM_DQS5 */
			0x00030000, /* EMC_DLL_XFORM_DQS6 */
			0x00030000, /* EMC_DLL_XFORM_DQS7 */
			0x00020000, /* EMC_DLL_XFORM_QUSE4 */
			0x00020000, /* EMC_DLL_XFORM_QUSE5 */
			0x00020000, /* EMC_DLL_XFORM_QUSE6 */
			0x00020000, /* EMC_DLL_XFORM_QUSE7 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS4 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS5 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS6 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS7 */
			0x001112a0, /* EMC_XM2CMDPADCTRL */
			0x00000000, /* EMC_XM2CMDPADCTRL4 */
			0x0001013d, /* EMC_XM2DQSPADCTRL2 */
			0x00000000, /* EMC_XM2DQPADCTRL2 */
			0x77ffc085, /* EMC_XM2CLKPADCTRL */
			0x81f1f108, /* EMC_XM2COMPPADCTRL */
			0x03037504, /* EMC_XM2VTTGENPADCTRL */
			0x00000000, /* EMC_XM2VTTGENPADCTRL2 */
			0x0000003f, /* EMC_DSR_VTTGEN_DRV */
			0x00000000, /* EMC_TXDSRVTTGEN */
			0x02000000, /* EMC_FBIO_SPARE */
			0x00000802, /* EMC_CTT_TERM_CTRL */
			0x00020000, /* EMC_ZCAL_INTERVAL */
			0x00000100, /* EMC_ZCAL_WAIT_CNT */
			0x0158000c, /* EMC_MRS_WAIT_CNT */
			0x0158000c, /* EMC_MRS_WAIT_CNT2 */
			0x00000000, /* EMC_AUTO_CAL_CONFIG2 */
			0x00000000, /* EMC_AUTO_CAL_CONFIG3 */
			0x00000000, /* EMC_CTT */
			0x00000000, /* EMC_CTT_DURATION */
			0x80001941, /* EMC_DYN_SELF_REF_CONTROL */
			0x1f7df7df, /* EMC_CA_TRAINING_TIMING_CNTL1 */
			0x0000001f, /* EMC_CA_TRAINING_TIMING_CNTL2 */
			0x02000006, /* MC_EMEM_ARB_CFG */
			0x80000190, /* MC_EMEM_ARB_OUTSTANDING_REQ */
			0x00000001, /* MC_EMEM_ARB_TIMING_RCD */
			0x00000002, /* MC_EMEM_ARB_TIMING_RP */
			0x0000000a, /* MC_EMEM_ARB_TIMING_RC */
			0x00000006, /* MC_EMEM_ARB_TIMING_RAS */
			0x00000008, /* MC_EMEM_ARB_TIMING_FAW */
			0x00000001, /* MC_EMEM_ARB_TIMING_RRD */
			0x00000002, /* MC_EMEM_ARB_TIMING_RAP2PRE */
			0x00000009, /* MC_EMEM_ARB_TIMING_WAP2PRE */
			0x00000002, /* MC_EMEM_ARB_TIMING_R2R */
			0x00000002, /* MC_EMEM_ARB_TIMING_W2W */
			0x00000004, /* MC_EMEM_ARB_TIMING_R2W */
			0x00000006, /* MC_EMEM_ARB_TIMING_W2R */
			0x06040202, /* MC_EMEM_ARB_DA_TURNS */
			0x000e070a, /* MC_EMEM_ARB_DA_COVERS */
			0x7547130b, /* MC_EMEM_ARB_MISC0 */
			0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */
			0x00040320, /* EMC_SEL_DPD_CTRL */
		},
		{
			0x00000000, /* EMC_CDB_CNTL_1 */
			0x00000004, /* EMC_FBIO_CFG6 */
			0x00000006, /* EMC_QUSE */
			0x00000005, /* EMC_EINPUT */
			0x00000004, /* EMC_EINPUT_DURATION */
			0x00030000, /* EMC_DLL_XFORM_DQS0 */
			0x0000000c, /* EMC_QSAFE */
			0x00020000, /* EMC_DLL_XFORM_QUSE0 */
			0x0000000e, /* EMC_RDV */
			0x00249249, /* EMC_XM2DQSPADCTRL4 */
			0x20820800, /* EMC_XM2DQSPADCTRL3 */
			0x00028000, /* EMC_DLL_XFORM_DQ0 */
			0xa0f10f0f, /* EMC_AUTO_CAL_CONFIG */
			0x00000000, /* EMC_DLL_XFORM_ADDR0 */
			0x00000909, /* EMC_XM2CLKPADCTRL2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */
			0x00000000, /* EMC_DLL_XFORM_ADDR1 */
			0x00000000, /* EMC_DLL_XFORM_ADDR2 */
			0x00030000, /* EMC_DLL_XFORM_DQS1 */
			0x00030000, /* EMC_DLL_XFORM_DQS2 */
			0x00030000, /* EMC_DLL_XFORM_DQS3 */
			0x00028000, /* EMC_DLL_XFORM_DQ1 */
			0x00028000, /* EMC_DLL_XFORM_DQ2 */
			0x00028000, /* EMC_DLL_XFORM_DQ3 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */
			0x00020000, /* EMC_DLL_XFORM_QUSE1 */
			0x00020000, /* EMC_DLL_XFORM_QUSE2 */
			0x00020000, /* EMC_DLL_XFORM_QUSE3 */
		},
		{
			0x00000000, /* EMC_CDB_CNTL_1 */
			0x00000004, /* EMC_FBIO_CFG6 */
			0x00000006, /* EMC_QUSE */
			0x00000005, /* EMC_EINPUT */
			0x00000004, /* EMC_EINPUT_DURATION */
			0x00030000, /* EMC_DLL_XFORM_DQS0 */
			0x0000000c, /* EMC_QSAFE */
			0x00020000, /* EMC_DLL_XFORM_QUSE0 */
			0x0000000e, /* EMC_RDV */
			0x00249249, /* EMC_XM2DQSPADCTRL4 */
			0x20820800, /* EMC_XM2DQSPADCTRL3 */
			0x00028000, /* EMC_DLL_XFORM_DQ0 */
			0xa8f10f0f, /* EMC_AUTO_CAL_CONFIG */
			0x00000000, /* EMC_DLL_XFORM_ADDR0 */
			0x00000909, /* EMC_XM2CLKPADCTRL2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */
			0x00000000, /* EMC_DLL_XFORM_ADDR1 */
			0x00000000, /* EMC_DLL_XFORM_ADDR2 */
			0x00030000, /* EMC_DLL_XFORM_DQS1 */
			0x00030000, /* EMC_DLL_XFORM_DQS2 */
			0x00030000, /* EMC_DLL_XFORM_DQS3 */
			0x00028000, /* EMC_DLL_XFORM_DQ1 */
			0x00028000, /* EMC_DLL_XFORM_DQ2 */
			0x00028000, /* EMC_DLL_XFORM_DQ3 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */
			0x00020000, /* EMC_DLL_XFORM_QUSE1 */
			0x00020000, /* EMC_DLL_XFORM_QUSE2 */
			0x00020000, /* EMC_DLL_XFORM_QUSE3 */
		},
		{
			0x000000d1, /* MC_PTSA_GRANT_DECREMENT */
			0x00110011, /* MC_LATENCY_ALLOWANCE_G2_0 */
			0x00110013, /* MC_LATENCY_ALLOWANCE_G2_1 */
			0x00150017, /* MC_LATENCY_ALLOWANCE_NV_0 */
			0x00000017, /* MC_LATENCY_ALLOWANCE_NV2_0 */
			0x00170017, /* MC_LATENCY_ALLOWANCE_NV_2 */
			0x001f0017, /* MC_LATENCY_ALLOWANCE_NV_1 */
			0x0000001f, /* MC_LATENCY_ALLOWANCE_NV2_1 */
			0x001f001f, /* MC_LATENCY_ALLOWANCE_NV3 */
			0x00d30064, /* MC_LATENCY_ALLOWANCE_EPP_0 */
			0x00d300d3, /* MC_LATENCY_ALLOWANCE_EPP_1 */
			0x4E564441, /* System Verification tag */
			0x04010400, /* Reg_tool Version */
			0x02000400, /* DVFS_tool Version */
			408000,     /* SDRAM Frequency */
		},
		0x00000042, /* EMC_ZCAL_WAIT_CNT after clock change */
		0x001fffff, /* EMC_AUTO_CAL_INTERVAL */
		0x53000006, /* EMC_CFG */
		0x80000731, /* Mode Register 0 */
		0x80100002, /* Mode Register 1 */
		0x80200008, /* Mode Register 2 */
		0x00000000, /* Mode Register 4 */
		1750,       /* expected dvfs latency (ns) */
	},
	{
		0x42,       /* Rev 4.0.3 */
		528000,     /* SDRAM frequency */
		1050,       /* min voltage */
		"pll_m",    /* clock source id */
		0x84000000, /* CLK_SOURCE_EMC */
		100,        /* number of burst_regs */
		30,         /* number of trim_regs (each channel) */
		11,         /* number of up_down_regs */
		{
			0x00000018, /* EMC_RC */
			0x00000088, /* EMC_RFC */
			0x00000000, /* EMC_RFC_SLR */
			0x00000011, /* EMC_RAS */
			0x00000006, /* EMC_RP */
			0x00000006, /* EMC_R2W */
			0x00000009, /* EMC_W2R */
			0x00000002, /* EMC_R2P */
			0x0000000d, /* EMC_W2P */
			0x00000006, /* EMC_RD_RCD */
			0x00000006, /* EMC_WR_RCD */
			0x00000002, /* EMC_RRD */
			0x00000001, /* EMC_REXT */
			0x00000000, /* EMC_WEXT */
			0x00000005, /* EMC_WDV */
			0x0000000f, /* EMC_WDV_MASK */
			0x00000009, /* EMC_IBDLY */
			0x00010000, /* EMC_PUTERM_EXTRA */
			0x00000000, /* EMC_CDB_CNTL_2 */
			0x00000006, /* EMC_QRST */
			0x00000012, /* EMC_RDV_MASK */
			0x00000fd6, /* EMC_REFRESH */
			0x00000000, /* EMC_BURST_REFRESH_NUM */
			0x000003f5, /* EMC_PRE_REFRESH_REQ_CNT */
			0x00000002, /* EMC_PDEX2WR */
			0x0000000b, /* EMC_PDEX2RD */
			0x00000001, /* EMC_PCHG2PDEN */
			0x00000000, /* EMC_ACT2PDEN */
			0x00000084, /* EMC_AR2PDEN */
			0x00000012, /* EMC_RW2PDEN */
			0x0000008f, /* EMC_TXSR */
			0x00000200, /* EMC_TXSRDLL */
			0x00000004, /* EMC_TCKE */
			0x00000004, /* EMC_TCKESR */
			0x00000004, /* EMC_TPD */
			0x00000016, /* EMC_TFAW */
			0x00000000, /* EMC_TRPAB */
			0x00000005, /* EMC_TCLKSTABLE */
			0x00000006, /* EMC_TCLKSTOP */
			0x00001017, /* EMC_TREFBW */
			0x00000000, /* EMC_QUSE_EXTRA */
			0x00000020, /* EMC_ODT_WRITE */
			0x00000000, /* EMC_ODT_READ */
			0x00005088, /* EMC_FBIO_CFG5 */
			0xf0120091, /* EMC_CFG_DIG_DLL */
			0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */
			0x0000000a, /* EMC_DLL_XFORM_DQS4 */
			0x0000000a, /* EMC_DLL_XFORM_DQS5 */
			0x0000000a, /* EMC_DLL_XFORM_DQS6 */
			0x0000000a, /* EMC_DLL_XFORM_DQS7 */
			0x00000000, /* EMC_DLL_XFORM_QUSE4 */
			0x00000000, /* EMC_DLL_XFORM_QUSE5 */
			0x00000000, /* EMC_DLL_XFORM_QUSE6 */
			0x00000000, /* EMC_DLL_XFORM_QUSE7 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS4 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS5 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS6 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS7 */
			0x001112a0, /* EMC_XM2CMDPADCTRL */
			0x00000000, /* EMC_XM2CMDPADCTRL4 */
			0x0000013d, /* EMC_XM2DQSPADCTRL2 */
			0x00000000, /* EMC_XM2DQPADCTRL2 */
			0x77ffc085, /* EMC_XM2CLKPADCTRL */
			0x81f1f108, /* EMC_XM2COMPPADCTRL */
			0x07077504, /* EMC_XM2VTTGENPADCTRL */
			0x00000000, /* EMC_XM2VTTGENPADCTRL2 */
			0x0000003f, /* EMC_DSR_VTTGEN_DRV */
			0x00000000, /* EMC_TXDSRVTTGEN */
			0x02000000, /* EMC_FBIO_SPARE */
			0x00000802, /* EMC_CTT_TERM_CTRL */
			0x00020000, /* EMC_ZCAL_INTERVAL */
			0x00000100, /* EMC_ZCAL_WAIT_CNT */
			0x013a000c, /* EMC_MRS_WAIT_CNT */
			0x013a000c, /* EMC_MRS_WAIT_CNT2 */
			0x00000000, /* EMC_AUTO_CAL_CONFIG2 */
			0x00000000, /* EMC_AUTO_CAL_CONFIG3 */
			0x00000000, /* EMC_CTT */
			0x00000000, /* EMC_CTT_DURATION */
			0x80002062, /* EMC_DYN_SELF_REF_CONTROL */
			0x1f7df7df, /* EMC_CA_TRAINING_TIMING_CNTL1 */
			0x0000001f, /* EMC_CA_TRAINING_TIMING_CNTL2 */
			0x0f000007, /* MC_EMEM_ARB_CFG */
			0x80000190, /* MC_EMEM_ARB_OUTSTANDING_REQ */
			0x00000002, /* MC_EMEM_ARB_TIMING_RCD */
			0x00000003, /* MC_EMEM_ARB_TIMING_RP */
			0x0000000d, /* MC_EMEM_ARB_TIMING_RC */
			0x00000008, /* MC_EMEM_ARB_TIMING_RAS */
			0x0000000a, /* MC_EMEM_ARB_TIMING_FAW */
			0x00000001, /* MC_EMEM_ARB_TIMING_RRD */
			0x00000002, /* MC_EMEM_ARB_TIMING_RAP2PRE */
			0x00000009, /* MC_EMEM_ARB_TIMING_WAP2PRE */
			0x00000002, /* MC_EMEM_ARB_TIMING_R2R */
			0x00000002, /* MC_EMEM_ARB_TIMING_W2W */
			0x00000005, /* MC_EMEM_ARB_TIMING_R2W */
			0x00000006, /* MC_EMEM_ARB_TIMING_W2R */
			0x06050202, /* MC_EMEM_ARB_DA_TURNS */
			0x0010090d, /* MC_EMEM_ARB_DA_COVERS */
			0x7428180e, /* MC_EMEM_ARB_MISC0 */
			0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */
			0x00040320, /* EMC_SEL_DPD_CTRL */
		},
		{
			0x00000000, /* EMC_CDB_CNTL_1 */
			0x00000006, /* EMC_FBIO_CFG6 */
			0x00000008, /* EMC_QUSE */
			0x00000007, /* EMC_EINPUT */
			0x00000004, /* EMC_EINPUT_DURATION */
			0x00000009, /* EMC_DLL_XFORM_DQS0 */
			0x0000000c, /* EMC_QSAFE */
			0x00000000, /* EMC_DLL_XFORM_QUSE0 */
			0x00000010, /* EMC_RDV */
			0x0028a28a, /* EMC_XM2DQSPADCTRL4 */
			0x20820800, /* EMC_XM2DQSPADCTRL3 */
			0x0000000c, /* EMC_DLL_XFORM_DQ0 */
			0xa0f10f0f, /* EMC_AUTO_CAL_CONFIG */
			0x00000000, /* EMC_DLL_XFORM_ADDR0 */
			0x00000b0b, /* EMC_XM2CLKPADCTRL2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */
			0x00000000, /* EMC_DLL_XFORM_ADDR1 */
			0x00000000, /* EMC_DLL_XFORM_ADDR2 */
			0x00000009, /* EMC_DLL_XFORM_DQS1 */
			0x00000009, /* EMC_DLL_XFORM_DQS2 */
			0x00000009, /* EMC_DLL_XFORM_DQS3 */
			0x0000000c, /* EMC_DLL_XFORM_DQ1 */
			0x0000000c, /* EMC_DLL_XFORM_DQ2 */
			0x0000000c, /* EMC_DLL_XFORM_DQ3 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */
			0x00000000, /* EMC_DLL_XFORM_QUSE1 */
			0x00000000, /* EMC_DLL_XFORM_QUSE2 */
			0x00000000, /* EMC_DLL_XFORM_QUSE3 */
		},
		{
			0x00000000, /* EMC_CDB_CNTL_1 */
			0x00000006, /* EMC_FBIO_CFG6 */
			0x00000008, /* EMC_QUSE */
			0x00000007, /* EMC_EINPUT */
			0x00000004, /* EMC_EINPUT_DURATION */
			0x00000009, /* EMC_DLL_XFORM_DQS0 */
			0x0000000c, /* EMC_QSAFE */
			0x00000000, /* EMC_DLL_XFORM_QUSE0 */
			0x00000010, /* EMC_RDV */
			0x0028a28a, /* EMC_XM2DQSPADCTRL4 */
			0x20820800, /* EMC_XM2DQSPADCTRL3 */
			0x0000000c, /* EMC_DLL_XFORM_DQ0 */
			0xa8f10f0f, /* EMC_AUTO_CAL_CONFIG */
			0x00000000, /* EMC_DLL_XFORM_ADDR0 */
			0x00000b0b, /* EMC_XM2CLKPADCTRL2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */
			0x00000000, /* EMC_DLL_XFORM_ADDR1 */
			0x00000000, /* EMC_DLL_XFORM_ADDR2 */
			0x00000009, /* EMC_DLL_XFORM_DQS1 */
			0x00000009, /* EMC_DLL_XFORM_DQS2 */
			0x00000009, /* EMC_DLL_XFORM_DQS3 */
			0x0000000c, /* EMC_DLL_XFORM_DQ1 */
			0x0000000c, /* EMC_DLL_XFORM_DQ2 */
			0x0000000c, /* EMC_DLL_XFORM_DQ3 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */
			0x00000000, /* EMC_DLL_XFORM_QUSE1 */
			0x00000000, /* EMC_DLL_XFORM_QUSE2 */
			0x00000000, /* EMC_DLL_XFORM_QUSE3 */
		},
		{
			0x0000010e, /* MC_PTSA_GRANT_DECREMENT */
			0x000d000d, /* MC_LATENCY_ALLOWANCE_G2_0 */
			0x000d000f, /* MC_LATENCY_ALLOWANCE_G2_1 */
			0x00100012, /* MC_LATENCY_ALLOWANCE_NV_0 */
			0x00000012, /* MC_LATENCY_ALLOWANCE_NV2_0 */
			0x00120012, /* MC_LATENCY_ALLOWANCE_NV_2 */
			0x00180012, /* MC_LATENCY_ALLOWANCE_NV_1 */
			0x00000018, /* MC_LATENCY_ALLOWANCE_NV2_1 */
			0x00180018, /* MC_LATENCY_ALLOWANCE_NV3 */
			0x00a3004d, /* MC_LATENCY_ALLOWANCE_EPP_0 */
			0x00a300a3, /* MC_LATENCY_ALLOWANCE_EPP_1 */
			0x4E564441, /* System Verification tag */
			0x04010700, /* Reg_tool Version */
			0x02000400, /* DVFS_tool Version */
			528000,     /* SDRAM Frequency */
		},
		0x00000042, /* EMC_ZCAL_WAIT_CNT after clock change */
		0x001fffff, /* EMC_AUTO_CAL_INTERVAL */
		0x53000004, /* EMC_CFG */
		0x80000941, /* Mode Register 0 */
		0x80100002, /* Mode Register 1 */
		0x80200008, /* Mode Register 2 */
		0x00000000, /* Mode Register 4 */
		1440,       /* expected dvfs latency (ns) */
	},
	{
		0x42,       /* Rev 4.0.3 */
		624000,     /* SDRAM frequency */
		1100,       /* min voltage */
		"pll_c",    /* clock source id */
		0x24000000, /* CLK_SOURCE_EMC */
		100,        /* number of burst_regs */
		30,         /* number of trim_regs (each channel) */
		11,         /* number of up_down_regs */
		{
			0x0000001d, /* EMC_RC */
			0x000000a1, /* EMC_RFC */
			0x00000000, /* EMC_RFC_SLR */
			0x00000014, /* EMC_RAS */
			0x00000007, /* EMC_RP */
			0x00000007, /* EMC_R2W */
			0x0000000b, /* EMC_W2R */
			0x00000003, /* EMC_R2P */
			0x00000010, /* EMC_W2P */
			0x00000007, /* EMC_RD_RCD */
			0x00000007, /* EMC_WR_RCD */
			0x00000002, /* EMC_RRD */
			0x00000001, /* EMC_REXT */
			0x00000000, /* EMC_WEXT */
			0x00000005, /* EMC_WDV */
			0x0000000f, /* EMC_WDV_MASK */
			0x0000000a, /* EMC_IBDLY */
			0x00010000, /* EMC_PUTERM_EXTRA */
			0x00000000, /* EMC_CDB_CNTL_2 */
			0x00000007, /* EMC_QRST */
			0x00000014, /* EMC_RDV_MASK */
			0x000012c3, /* EMC_REFRESH */
			0x00000000, /* EMC_BURST_REFRESH_NUM */
			0x000004b0, /* EMC_PRE_REFRESH_REQ_CNT */
			0x00000002, /* EMC_PDEX2WR */
			0x0000000d, /* EMC_PDEX2RD */
			0x00000001, /* EMC_PCHG2PDEN */
			0x00000000, /* EMC_ACT2PDEN */
			0x0000009c, /* EMC_AR2PDEN */
			0x00000015, /* EMC_RW2PDEN */
			0x000000a9, /* EMC_TXSR */
			0x00000200, /* EMC_TXSRDLL */
			0x00000005, /* EMC_TCKE */
			0x00000005, /* EMC_TCKESR */
			0x00000005, /* EMC_TPD */
			0x00000019, /* EMC_TFAW */
			0x00000000, /* EMC_TRPAB */
			0x00000006, /* EMC_TCLKSTABLE */
			0x00000007, /* EMC_TCLKSTOP */
			0x00001304, /* EMC_TREFBW */
			0x00000009, /* EMC_QUSE_EXTRA */
			0x80000000, /* EMC_ODT_WRITE */
			0x00000000, /* EMC_ODT_READ */
			0x0000ba88, /* EMC_FBIO_CFG5 */
			0xf00d0191, /* EMC_CFG_DIG_DLL */
			0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */
			0x00000009, /* EMC_DLL_XFORM_DQS4 */
			0x00000009, /* EMC_DLL_XFORM_DQS5 */
			0x00000009, /* EMC_DLL_XFORM_DQS6 */
			0x00000009, /* EMC_DLL_XFORM_DQS7 */
			0x00018000, /* EMC_DLL_XFORM_QUSE4 */
			0x00018000, /* EMC_DLL_XFORM_QUSE5 */
			0x00018000, /* EMC_DLL_XFORM_QUSE6 */
			0x00018000, /* EMC_DLL_XFORM_QUSE7 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS4 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS5 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS6 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS7 */
			0x001112a0, /* EMC_XM2CMDPADCTRL */
			0x00000000, /* EMC_XM2CMDPADCTRL4 */
			0x0000013d, /* EMC_XM2DQSPADCTRL2 */
			0x00000000, /* EMC_XM2DQPADCTRL2 */
			0x77ffc085, /* EMC_XM2CLKPADCTRL */
			0x81f1f108, /* EMC_XM2COMPPADCTRL */
			0x07077504, /* EMC_XM2VTTGENPADCTRL */
			0x00000000, /* EMC_XM2VTTGENPADCTRL2 */
			0x0000003f, /* EMC_DSR_VTTGEN_DRV */
			0x00000000, /* EMC_TXDSRVTTGEN */
			0x02000000, /* EMC_FBIO_SPARE */
			0x00000802, /* EMC_CTT_TERM_CTRL */
			0x00020000, /* EMC_ZCAL_INTERVAL */
			0x00000100, /* EMC_ZCAL_WAIT_CNT */
			0x0122000c, /* EMC_MRS_WAIT_CNT */
			0x0122000c, /* EMC_MRS_WAIT_CNT2 */
			0x00000000, /* EMC_AUTO_CAL_CONFIG2 */
			0x00000000, /* EMC_AUTO_CAL_CONFIG3 */
			0x00000000, /* EMC_CTT */
			0x00000000, /* EMC_CTT_DURATION */
			0x80002617, /* EMC_DYN_SELF_REF_CONTROL */
			0x1f7df7df, /* EMC_CA_TRAINING_TIMING_CNTL1 */
			0x0000001f, /* EMC_CA_TRAINING_TIMING_CNTL2 */
			0x06000009, /* MC_EMEM_ARB_CFG */
			0x80000190, /* MC_EMEM_ARB_OUTSTANDING_REQ */
			0x00000003, /* MC_EMEM_ARB_TIMING_RCD */
			0x00000004, /* MC_EMEM_ARB_TIMING_RP */
			0x0000000f, /* MC_EMEM_ARB_TIMING_RC */
			0x00000009, /* MC_EMEM_ARB_TIMING_RAS */
			0x0000000c, /* MC_EMEM_ARB_TIMING_FAW */
			0x00000001, /* MC_EMEM_ARB_TIMING_RRD */
			0x00000003, /* MC_EMEM_ARB_TIMING_RAP2PRE */
			0x0000000b, /* MC_EMEM_ARB_TIMING_WAP2PRE */
			0x00000002, /* MC_EMEM_ARB_TIMING_R2R */
			0x00000002, /* MC_EMEM_ARB_TIMING_W2W */
			0x00000005, /* MC_EMEM_ARB_TIMING_R2W */
			0x00000007, /* MC_EMEM_ARB_TIMING_W2R */
			0x07050202, /* MC_EMEM_ARB_DA_TURNS */
			0x00130b0f, /* MC_EMEM_ARB_DA_COVERS */
			0x736a1d10, /* MC_EMEM_ARB_MISC0 */
			0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */
			0x00040320, /* EMC_SEL_DPD_CTRL */
		},
		{
			0x00000000, /* EMC_CDB_CNTL_1 */
			0x00000006, /* EMC_FBIO_CFG6 */
			0x00000009, /* EMC_QUSE */
			0x00000008, /* EMC_EINPUT */
			0x00000004, /* EMC_EINPUT_DURATION */
			0x007fc009, /* EMC_DLL_XFORM_DQS0 */
			0x0000000c, /* EMC_QSAFE */
			0x00018000, /* EMC_DLL_XFORM_QUSE0 */
			0x00000012, /* EMC_RDV */
			0x0028a28a, /* EMC_XM2DQSPADCTRL4 */
			0x20820800, /* EMC_XM2DQSPADCTRL3 */
			0x0000000a, /* EMC_DLL_XFORM_DQ0 */
			0xa0f10f0f, /* EMC_AUTO_CAL_CONFIG */
			0x00000000, /* EMC_DLL_XFORM_ADDR0 */
			0x00000c0c, /* EMC_XM2CLKPADCTRL2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */
			0x00000000, /* EMC_DLL_XFORM_ADDR1 */
			0x00000000, /* EMC_DLL_XFORM_ADDR2 */
			0x007fc008, /* EMC_DLL_XFORM_DQS1 */
			0x007fc009, /* EMC_DLL_XFORM_DQS2 */
			0x007f8008, /* EMC_DLL_XFORM_DQS3 */
			0x0000000a, /* EMC_DLL_XFORM_DQ1 */
			0x0000000a, /* EMC_DLL_XFORM_DQ2 */
			0x0000000a, /* EMC_DLL_XFORM_DQ3 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */
			0x00018000, /* EMC_DLL_XFORM_QUSE1 */
			0x00018000, /* EMC_DLL_XFORM_QUSE2 */
			0x00018000, /* EMC_DLL_XFORM_QUSE3 */
		},
		{
			0x00000000, /* EMC_CDB_CNTL_1 */
			0x00000006, /* EMC_FBIO_CFG6 */
			0x00000009, /* EMC_QUSE */
			0x00000008, /* EMC_EINPUT */
			0x00000004, /* EMC_EINPUT_DURATION */
			0x007fc009, /* EMC_DLL_XFORM_DQS0 */
			0x0000000c, /* EMC_QSAFE */
			0x00018000, /* EMC_DLL_XFORM_QUSE0 */
			0x00000012, /* EMC_RDV */
			0x0028a28a, /* EMC_XM2DQSPADCTRL4 */
			0x20820800, /* EMC_XM2DQSPADCTRL3 */
			0x0000000a, /* EMC_DLL_XFORM_DQ0 */
			0xa8f10f0f, /* EMC_AUTO_CAL_CONFIG */
			0x00000000, /* EMC_DLL_XFORM_ADDR0 */
			0x00000b0b, /* EMC_XM2CLKPADCTRL2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */
			0x00000000, /* EMC_DLL_XFORM_ADDR1 */
			0x00000000, /* EMC_DLL_XFORM_ADDR2 */
			0x007fc008, /* EMC_DLL_XFORM_DQS1 */
			0x007fc009, /* EMC_DLL_XFORM_DQS2 */
			0x007f8008, /* EMC_DLL_XFORM_DQS3 */
			0x0000000a, /* EMC_DLL_XFORM_DQ1 */
			0x0000000a, /* EMC_DLL_XFORM_DQ2 */
			0x0000000a, /* EMC_DLL_XFORM_DQ3 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */
			0x00018000, /* EMC_DLL_XFORM_QUSE1 */
			0x00018000, /* EMC_DLL_XFORM_QUSE2 */
			0x00018000, /* EMC_DLL_XFORM_QUSE3 */
		},
		{
			0x0000013f, /* MC_PTSA_GRANT_DECREMENT */
			0x000b000b, /* MC_LATENCY_ALLOWANCE_G2_0 */
			0x000b000c, /* MC_LATENCY_ALLOWANCE_G2_1 */
			0x000e000f, /* MC_LATENCY_ALLOWANCE_NV_0 */
			0x0000000f, /* MC_LATENCY_ALLOWANCE_NV2_0 */
			0x000f000f, /* MC_LATENCY_ALLOWANCE_NV_2 */
			0x0014000f, /* MC_LATENCY_ALLOWANCE_NV_1 */
			0x00000014, /* MC_LATENCY_ALLOWANCE_NV2_1 */
			0x00140014, /* MC_LATENCY_ALLOWANCE_NV3 */
			0x008a0041, /* MC_LATENCY_ALLOWANCE_EPP_0 */
			0x008a008a, /* MC_LATENCY_ALLOWANCE_EPP_1 */
			0x4E564441, /* System Verification tag */
			0x04010400, /* Reg_tool Version */
			0x02000400, /* DVFS_tool Version */
			624000,     /* SDRAM Frequency */
		},
		0x00000042, /* EMC_ZCAL_WAIT_CNT after clock change */
		0x001fffff, /* EMC_AUTO_CAL_INTERVAL */
		0x53200000, /* EMC_CFG */
		0x80000b61, /* Mode Register 0 */
		0x80100002, /* Mode Register 1 */
		0x80200410, /* Mode Register 2 */
		0x00000000, /* Mode Register 4 */
		1290,       /* expected dvfs latency (ns) */
	},
	{
		0x42,       /* Rev 4.0.3 */
		792000,     /* SDRAM frequency */
		1100,       /* min voltage */
		"pll_m",    /* clock source id */
		0x84000000, /* CLK_SOURCE_EMC */
		100,        /* number of burst_regs */
		30,         /* number of trim_regs (each channel) */
		11,         /* number of up_down_regs */
		{
			0x00000025, /* EMC_RC */
			0x000000cc, /* EMC_RFC */
			0x00000000, /* EMC_RFC_SLR */
			0x0000001a, /* EMC_RAS */
			0x00000009, /* EMC_RP */
			0x00000008, /* EMC_R2W */
			0x0000000d, /* EMC_W2R */
			0x00000004, /* EMC_R2P */
			0x00000013, /* EMC_W2P */
			0x00000009, /* EMC_RD_RCD */
			0x00000009, /* EMC_WR_RCD */
			0x00000003, /* EMC_RRD */
			0x00000001, /* EMC_REXT */
			0x00000000, /* EMC_WEXT */
			0x00000006, /* EMC_WDV */
			0x0000000f, /* EMC_WDV_MASK */
			0x0000000b, /* EMC_IBDLY */
			0x00010000, /* EMC_PUTERM_EXTRA */
			0x00000000, /* EMC_CDB_CNTL_2 */
			0x00000008, /* EMC_QRST */
			0x00000016, /* EMC_RDV_MASK */
			0x000017e1, /* EMC_REFRESH */
			0x00000000, /* EMC_BURST_REFRESH_NUM */
			0x000005f8, /* EMC_PRE_REFRESH_REQ_CNT */
			0x00000003, /* EMC_PDEX2WR */
			0x00000011, /* EMC_PDEX2RD */
			0x00000001, /* EMC_PCHG2PDEN */
			0x00000000, /* EMC_ACT2PDEN */
			0x000000c6, /* EMC_AR2PDEN */
			0x00000018, /* EMC_RW2PDEN */
			0x000000d6, /* EMC_TXSR */
			0x00000200, /* EMC_TXSRDLL */
			0x00000005, /* EMC_TCKE */
			0x00000005, /* EMC_TCKESR */
			0x00000005, /* EMC_TPD */
			0x00000020, /* EMC_TFAW */
			0x00000000, /* EMC_TRPAB */
			0x00000007, /* EMC_TCLKSTABLE */
			0x00000008, /* EMC_TCLKSTOP */
			0x00001822, /* EMC_TREFBW */
			0x00000000, /* EMC_QUSE_EXTRA */
			0x80000000, /* EMC_ODT_WRITE */
			0x00000000, /* EMC_ODT_READ */
			0x00005088, /* EMC_FBIO_CFG5 */
			0xf0070191, /* EMC_CFG_DIG_DLL */
			0x00008000, /* EMC_CFG_DIG_DLL_PERIOD */
			0x007fc00a, /* EMC_DLL_XFORM_DQS4 */
			0x007fc00a, /* EMC_DLL_XFORM_DQS5 */
			0x007fc00a, /* EMC_DLL_XFORM_DQS6 */
			0x007fc00a, /* EMC_DLL_XFORM_DQS7 */
			0x0002c000, /* EMC_DLL_XFORM_QUSE4 */
			0x0002c000, /* EMC_DLL_XFORM_QUSE5 */
			0x0002c000, /* EMC_DLL_XFORM_QUSE6 */
			0x0002c000, /* EMC_DLL_XFORM_QUSE7 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS4 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS5 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS6 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS7 */
			0x001112a0, /* EMC_XM2CMDPADCTRL */
			0x00000000, /* EMC_XM2CMDPADCTRL4 */
			0x0000013d, /* EMC_XM2DQSPADCTRL2 */
			0x00000000, /* EMC_XM2DQPADCTRL2 */
			0x77ffc085, /* EMC_XM2CLKPADCTRL */
			0x81f1f108, /* EMC_XM2COMPPADCTRL */
			0x07077504, /* EMC_XM2VTTGENPADCTRL */
			0x00000000, /* EMC_XM2VTTGENPADCTRL2 */
			0x0000003f, /* EMC_DSR_VTTGEN_DRV */
			0x00000000, /* EMC_TXDSRVTTGEN */
			0x02000000, /* EMC_FBIO_SPARE */
			0x00000802, /* EMC_CTT_TERM_CTRL */
			0x00020000, /* EMC_ZCAL_INTERVAL */
			0x00000100, /* EMC_ZCAL_WAIT_CNT */
			0x00f8000c, /* EMC_MRS_WAIT_CNT */
			0x00f8000c, /* EMC_MRS_WAIT_CNT2 */
			0x00000000, /* EMC_AUTO_CAL_CONFIG2 */
			0x00000000, /* EMC_AUTO_CAL_CONFIG3 */
			0x00000000, /* EMC_CTT */
			0x00000000, /* EMC_CTT_DURATION */
			0x80003012, /* EMC_DYN_SELF_REF_CONTROL */
			0x1f7df7df, /* EMC_CA_TRAINING_TIMING_CNTL1 */
			0x0000001f, /* EMC_CA_TRAINING_TIMING_CNTL2 */
			0x0e00000b, /* MC_EMEM_ARB_CFG */
			0x80000190, /* MC_EMEM_ARB_OUTSTANDING_REQ */
			0x00000004, /* MC_EMEM_ARB_TIMING_RCD */
			0x00000005, /* MC_EMEM_ARB_TIMING_RP */
			0x00000013, /* MC_EMEM_ARB_TIMING_RC */
			0x0000000c, /* MC_EMEM_ARB_TIMING_RAS */
			0x0000000f, /* MC_EMEM_ARB_TIMING_FAW */
			0x00000002, /* MC_EMEM_ARB_TIMING_RRD */
			0x00000003, /* MC_EMEM_ARB_TIMING_RAP2PRE */
			0x0000000c, /* MC_EMEM_ARB_TIMING_WAP2PRE */
			0x00000002, /* MC_EMEM_ARB_TIMING_R2R */
			0x00000002, /* MC_EMEM_ARB_TIMING_W2W */
			0x00000006, /* MC_EMEM_ARB_TIMING_R2W */
			0x00000008, /* MC_EMEM_ARB_TIMING_W2R */
			0x08060202, /* MC_EMEM_ARB_DA_TURNS */
			0x00160d13, /* MC_EMEM_ARB_DA_COVERS */
			0x734c2414, /* MC_EMEM_ARB_MISC0 */
			0x001f0000, /* MC_EMEM_ARB_RING1_THROTTLE */
			0x00040000, /* EMC_SEL_DPD_CTRL */
		},
		{
			0x00000000, /* EMC_CDB_CNTL_1 */
			0x00000006, /* EMC_FBIO_CFG6 */
			0x0000000a, /* EMC_QUSE */
			0x00000008, /* EMC_EINPUT */
			0x00000006, /* EMC_EINPUT_DURATION */
			0x007fc00a, /* EMC_DLL_XFORM_DQS0 */
			0x0000000d, /* EMC_QSAFE */
			0x00014000, /* EMC_DLL_XFORM_QUSE0 */
			0x00000014, /* EMC_RDV */
			0x0028a28a, /* EMC_XM2DQSPADCTRL4 */
			0x20820800, /* EMC_XM2DQSPADCTRL3 */
			0x0000000a, /* EMC_DLL_XFORM_DQ0 */
			0xa0f10f0f, /* EMC_AUTO_CAL_CONFIG */
			0x00000000, /* EMC_DLL_XFORM_ADDR0 */
			0x00000b0b, /* EMC_XM2CLKPADCTRL2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */
			0x00000000, /* EMC_DLL_XFORM_ADDR1 */
			0x00000000, /* EMC_DLL_XFORM_ADDR2 */
			0x007fc00a, /* EMC_DLL_XFORM_DQS1 */
			0x007fc00a, /* EMC_DLL_XFORM_DQS2 */
			0x007f800a, /* EMC_DLL_XFORM_DQS3 */
			0x0000000a, /* EMC_DLL_XFORM_DQ1 */
			0x0000000a, /* EMC_DLL_XFORM_DQ2 */
			0x0000000a, /* EMC_DLL_XFORM_DQ3 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */
			0x00014000, /* EMC_DLL_XFORM_QUSE1 */
			0x00014000, /* EMC_DLL_XFORM_QUSE2 */
			0x00014000, /* EMC_DLL_XFORM_QUSE3 */
		},
		{
			0x00000000, /* EMC_CDB_CNTL_1 */
			0x00000006, /* EMC_FBIO_CFG6 */
			0x0000000a, /* EMC_QUSE */
			0x00000008, /* EMC_EINPUT */
			0x00000006, /* EMC_EINPUT_DURATION */
			0x007fc00a, /* EMC_DLL_XFORM_DQS0 */
			0x0000000d, /* EMC_QSAFE */
			0x00014000, /* EMC_DLL_XFORM_QUSE0 */
			0x00000014, /* EMC_RDV */
			0x0028a28a, /* EMC_XM2DQSPADCTRL4 */
			0x20820800, /* EMC_XM2DQSPADCTRL3 */
			0x0000000a, /* EMC_DLL_XFORM_DQ0 */
			0xa8f10f0f, /* EMC_AUTO_CAL_CONFIG */
			0x00000000, /* EMC_DLL_XFORM_ADDR0 */
			0x00000b0b, /* EMC_XM2CLKPADCTRL2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS0 */
			0x00000000, /* EMC_DLL_XFORM_ADDR1 */
			0x00000000, /* EMC_DLL_XFORM_ADDR2 */
			0x007fc00a, /* EMC_DLL_XFORM_DQS1 */
			0x007fc00a, /* EMC_DLL_XFORM_DQS2 */
			0x007f800a, /* EMC_DLL_XFORM_DQS3 */
			0x0000000a, /* EMC_DLL_XFORM_DQ1 */
			0x0000000a, /* EMC_DLL_XFORM_DQ2 */
			0x0000000a, /* EMC_DLL_XFORM_DQ3 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS1 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS2 */
			0x00000000, /* EMC_DLI_TRIM_TXDQS3 */
			0x00014000, /* EMC_DLL_XFORM_QUSE1 */
			0x00014000, /* EMC_DLL_XFORM_QUSE2 */
			0x00014000, /* EMC_DLL_XFORM_QUSE3 */
		},
		{
			0x00000196, /* MC_PTSA_GRANT_DECREMENT */
			0x00090009, /* MC_LATENCY_ALLOWANCE_G2_0 */
			0x0009000a, /* MC_LATENCY_ALLOWANCE_G2_1 */
			0x000b000c, /* MC_LATENCY_ALLOWANCE_NV_0 */
			0x0000000c, /* MC_LATENCY_ALLOWANCE_NV2_0 */
			0x000c000c, /* MC_LATENCY_ALLOWANCE_NV_2 */
			0x0010000c, /* MC_LATENCY_ALLOWANCE_NV_1 */
			0x00000010, /* MC_LATENCY_ALLOWANCE_NV2_1 */
			0x00100010, /* MC_LATENCY_ALLOWANCE_NV3 */
			0x006d0033, /* MC_LATENCY_ALLOWANCE_EPP_0 */
			0x006d006d, /* MC_LATENCY_ALLOWANCE_EPP_1 */
			0x4E564441, /* System Verification tag */
			0x04010400, /* Reg_tool Version */
			0x02000400, /* DVFS_tool Version */
			792000,     /* SDRAM Frequency */
		},
		0x00000042, /* EMC_ZCAL_WAIT_CNT after clock change */
		0x001fffff, /* EMC_AUTO_CAL_INTERVAL */
		0x53000000, /* EMC_CFG */
		0x80000d71, /* Mode Register 0 */
		0x80100002, /* Mode Register 1 */
		0x80200418, /* Mode Register 2 */
		0x00000000, /* Mode Register 4 */
		1200,       /* expected dvfs latency (ns) */
	},
};

static struct tegra11_emc_pdata Bowser_dvfs_table_Hynix_0116_pdata = {
	.description = "Bowser_dvfs_table_Hynix_0116",
	.tables = Bowser_dvfs_table_Hynix_0116_table,
	.num_tables = ARRAY_SIZE(Bowser_dvfs_table_Hynix_0116_table),
};

static struct tegra11_emc_pdata Bowser_dvfs_table_Samsung_0314_pdata = {
	.description = "Bowser_dvfs_table_Samsung_0314",
	.tables = Bowser_dvfs_table_Samsung_0314_table,
	.num_tables = ARRAY_SIZE(Bowser_dvfs_table_Samsung_0314_table),
};

static struct tegra11_emc_pdata Bowser_dvfs_table_Micron_0110_pdata = {
	.description = "Bowser_dvfs_table_Micron_0110",
	.tables = Bowser_dvfs_table_Micron_0110_table,
	.num_tables = ARRAY_SIZE(Bowser_dvfs_table_Micron_0110_table),
};

static struct tegra11_emc_pdata *bowser_get_emc_data(void)
{
	if (tegra_bct_strapping == 0) {
		//Load Samsung Q-Die DVFS table
		pr_info("DVFS table : Samsung.\n");
		return &Bowser_dvfs_table_Samsung_0314_pdata;
	} else if (tegra_bct_strapping == 1) {
		//Load Micron DVFS table
		pr_info("DVFS table : Micron\n");
		return &Bowser_dvfs_table_Micron_0110_pdata;
	} else if (tegra_bct_strapping == 2) {
		//Load Elpida DVFS table
		pr_err("Cann't find DVFS table, failed to load DVFS table.\n");
	} else if (tegra_bct_strapping == 3) {
		//Load Hynix A-Die DVFS table
		pr_info("DVFS table : Hynix A-Die\n");
		return &Bowser_dvfs_table_Hynix_0116_pdata;
	} else {
		pr_err("Uknown bct strapping, failed to load DVFS table.\n");
	}

	return NULL;
}

int __init bowser_emc_init(void)
{
	tegra_emc_device.dev.platform_data = bowser_get_emc_data();
	platform_device_register(&tegra_emc_device);
	tegra11_emc_init();
	return 0;
}
