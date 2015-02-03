/*
 * Copyright (c) 2014 Samsung Electronics Co., Ltd.
 * Author: Chanwoo Choi <cw00.choi@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _DT_BINDINGS_CLOCK_EXYNOS5433_H
#define _DT_BINDINGS_CLOCK_EXYNOS5433_H

/* CMU_TOP */
#define CLK_FOUT_ISP_PLL		1
#define CLK_FOUT_AUD_PLL		2

#define CLK_MOUT_AUD_PLL		10
#define CLK_MOUT_ISP_PLL		11
#define CLK_MOUT_AUD_PLL_USER_T		12
#define CLK_MOUT_MPHY_PLL_USER		13
#define CLK_MOUT_MFC_PLL_USER		14
#define CLK_MOUT_BUS_PLL_USER		15
#define CLK_MOUT_ACLK_HEVC_400		16
#define CLK_MOUT_ACLK_CAM1_333		17
#define CLK_MOUT_ACLK_CAM1_552_B	18
#define CLK_MOUT_ACLK_CAM1_552_A	19
#define CLK_MOUT_ACLK_ISP_DIS_400	20
#define CLK_MOUT_ACLK_ISP_400		21
#define CLK_MOUT_ACLK_BUS0_400		22
#define CLK_MOUT_ACLK_MSCL_400_B	23
#define CLK_MOUT_ACLK_MSCL_400_A	24
#define CLK_MOUT_ACLK_GSCL_333		25
#define CLK_MOUT_ACLK_G2D_400_B		26
#define CLK_MOUT_ACLK_G2D_400_A		27
#define CLK_MOUT_SCLK_JPEG_C		28
#define CLK_MOUT_SCLK_JPEG_B		29
#define CLK_MOUT_SCLK_JPEG_A		30
#define CLK_MOUT_SCLK_MMC2_B		31
#define CLK_MOUT_SCLK_MMC2_A		32
#define CLK_MOUT_SCLK_MMC1_B		33
#define CLK_MOUT_SCLK_MMC1_A		34
#define CLK_MOUT_SCLK_MMC0_D		35
#define CLK_MOUT_SCLK_MMC0_C		36
#define CLK_MOUT_SCLK_MMC0_B		37
#define CLK_MOUT_SCLK_MMC0_A		38
#define CLK_MOUT_SCLK_SPI4		39
#define CLK_MOUT_SCLK_SPI3		40
#define CLK_MOUT_SCLK_UART2		41
#define CLK_MOUT_SCLK_UART1		42
#define CLK_MOUT_SCLK_UART0		43
#define CLK_MOUT_SCLK_SPI2		44
#define CLK_MOUT_SCLK_SPI1		45
#define CLK_MOUT_SCLK_SPI0		46
#define CLK_MOUT_ACLK_MFC_400_C		47
#define CLK_MOUT_ACLK_MFC_400_B		48
#define CLK_MOUT_ACLK_MFC_400_A		49
#define CLK_MOUT_SCLK_ISP_SENSOR2	50
#define CLK_MOUT_SCLK_ISP_SENSOR1	51
#define CLK_MOUT_SCLK_ISP_SENSOR0	52
#define CLK_MOUT_SCLK_ISP_UART		53
#define CLK_MOUT_SCLK_ISP_SPI1		54
#define CLK_MOUT_SCLK_ISP_SPI0		55
#define CLK_MOUT_SCLK_PCIE_100		56
#define CLK_MOUT_SCLK_UFSUNIPRO		57
#define CLK_MOUT_SCLK_USBHOST30		58
#define CLK_MOUT_SCLK_USBDRD30		59
#define CLK_MOUT_SCLK_SLIMBUS		60
#define CLK_MOUT_SCLK_SPDIF		61
#define CLK_MOUT_SCLK_AUDIO1		62
#define CLK_MOUT_SCLK_AUDIO0		63
#define CLK_MOUT_SCLK_HDMI_SPDIF	64

#define CLK_DIV_ACLK_FSYS_200		100
#define CLK_DIV_ACLK_IMEM_SSSX_266	101
#define CLK_DIV_ACLK_IMEM_200		102
#define CLK_DIV_ACLK_IMEM_266		103
#define CLK_DIV_ACLK_PERIC_66_B		104
#define CLK_DIV_ACLK_PERIC_66_A		105
#define CLK_DIV_ACLK_PERIS_66_B		106
#define CLK_DIV_ACLK_PERIS_66_A		107
#define CLK_DIV_SCLK_MMC1_B		108
#define CLK_DIV_SCLK_MMC1_A		109
#define CLK_DIV_SCLK_MMC0_B		110
#define CLK_DIV_SCLK_MMC0_A		111
#define CLK_DIV_SCLK_MMC2_B		112
#define CLK_DIV_SCLK_MMC2_A		113
#define CLK_DIV_SCLK_SPI1_B		114
#define CLK_DIV_SCLK_SPI1_A		115
#define CLK_DIV_SCLK_SPI0_B		116
#define CLK_DIV_SCLK_SPI0_A		117
#define CLK_DIV_SCLK_SPI2_B		118
#define CLK_DIV_SCLK_SPI2_A		119
#define CLK_DIV_SCLK_UART2		120
#define CLK_DIV_SCLK_UART1		121
#define CLK_DIV_SCLK_UART0		122
#define CLK_DIV_SCLK_SPI4_B		123
#define CLK_DIV_SCLK_SPI4_A		124
#define CLK_DIV_SCLK_SPI3_B		125
#define CLK_DIV_SCLK_SPI3_A		126
#define CLK_DIV_SCLK_I2S1		127
#define CLK_DIV_SCLK_PCM1		128
#define CLK_DIV_SCLK_AUDIO1		129
#define CLK_DIV_SCLK_AUDIO0		130
#define CLK_DIV_ACLK_GSCL_111		131
#define CLK_DIV_ACLK_GSCL_333		132
#define CLK_DIV_ACLK_HEVC_400		133
#define CLK_DIV_ACLK_MFC_400		134
#define CLK_DIV_ACLK_G2D_266		135
#define CLK_DIV_ACLK_G2D_400		136
#define CLK_DIV_ACLK_G3D_400		137
#define CLK_DIV_ACLK_BUS0_400		138
#define CLK_DIV_ACLK_BUS1_400		139
#define CLK_DIV_SCLK_PCIE_100		140
#define CLK_DIV_SCLK_USBHOST30		141
#define CLK_DIV_SCLK_UFSUNIPRO		142
#define CLK_DIV_SCLK_USBDRD30		143

#define CLK_ACLK_PERIC_66		200
#define CLK_ACLK_PERIS_66		201
#define CLK_ACLK_FSYS_200		202
#define CLK_SCLK_MMC2_FSYS		203
#define CLK_SCLK_MMC1_FSYS		204
#define CLK_SCLK_MMC0_FSYS		205
#define CLK_SCLK_SPI4_PERIC		206
#define CLK_SCLK_SPI3_PERIC		207
#define CLK_SCLK_UART2_PERIC		208
#define CLK_SCLK_UART1_PERIC		209
#define CLK_SCLK_UART0_PERIC		210
#define CLK_SCLK_SPI2_PERIC		211
#define CLK_SCLK_SPI1_PERIC		212
#define CLK_SCLK_SPI0_PERIC		213
#define CLK_SCLK_SPDIF_PERIC		214
#define CLK_SCLK_I2S1_PERIC		215
#define CLK_SCLK_PCM1_PERIC		216
#define CLK_SCLK_SLIMBUS		217
#define CLK_SCLK_AUDIO1			218
#define CLK_SCLK_AUDIO0			219
#define CLK_ACLK_G2D_266		220
#define CLK_ACLK_G2D_400		221
#define CLK_ACLK_G3D_400		222
#define CLK_ACLK_IMEM_SSX_266		223
#define CLK_ACLK_BUS0_400		224
#define CLK_ACLK_BUS1_400		225
#define CLK_ACLK_IMEM_200		226
#define CLK_ACLK_IMEM_266		227
#define CLK_SCLK_PCIE_100_FSYS		228
#define CLK_SCLK_UFSUNIPRO_FSYS		229
#define CLK_SCLK_USBHOST30_FSYS		230
#define CLK_SCLK_USBDRD30_FSYS		231
#define CLK_ACLK_GSCL_111		232
#define CLK_ACLK_GSCL_333		233

#define TOP_NR_CLK			234

/* CMU_CPIF */
#define CLK_FOUT_MPHY_PLL		1

#define CLK_MOUT_MPHY_PLL		2

#define CLK_DIV_SCLK_MPHY		10

#define CLK_SCLK_MPHY_PLL		11
#define CLK_SCLK_UFS_MPHY		11

#define CPIF_NR_CLK			12

/* CMU_MIF */
#define CLK_FOUT_MEM0_PLL		1
#define CLK_FOUT_MEM1_PLL		2
#define CLK_FOUT_BUS_PLL		3
#define CLK_FOUT_MFC_PLL		4
#define CLK_DOUT_MFC_PLL		5
#define CLK_DOUT_BUS_PLL		6
#define CLK_DOUT_MEM1_PLL		7
#define CLK_DOUT_MEM0_PLL		8

#define CLK_MOUT_MFC_PLL_DIV2		10
#define CLK_MOUT_BUS_PLL_DIV2		11
#define CLK_MOUT_MEM1_PLL_DIV2		12
#define CLK_MOUT_MEM0_PLL_DIV2		13
#define CLK_MOUT_MFC_PLL		14
#define CLK_MOUT_BUS_PLL		15
#define CLK_MOUT_MEM1_PLL		16
#define CLK_MOUT_MEM0_PLL		17
#define CLK_MOUT_CLK2X_PHY_C		18
#define CLK_MOUT_CLK2X_PHY_B		19
#define CLK_MOUT_CLK2X_PHY_A		20
#define CLK_MOUT_CLKM_PHY_C		21
#define CLK_MOUT_CLKM_PHY_B		22
#define CLK_MOUT_CLKM_PHY_A		23
#define CLK_MOUT_ACLK_MIFNM_200		24
#define CLK_MOUT_ACLK_MIFNM_400		25
#define CLK_MOUT_ACLK_DISP_333_B	26
#define CLK_MOUT_ACLK_DISP_333_A	27
#define CLK_MOUT_SCLK_DECON_VCLK_C	28
#define CLK_MOUT_SCLK_DECON_VCLK_B	29
#define CLK_MOUT_SCLK_DECON_VCLK_A	30
#define CLK_MOUT_SCLK_DECON_ECLK_C	31
#define CLK_MOUT_SCLK_DECON_ECLK_B	32
#define CLK_MOUT_SCLK_DECON_ECLK_A	33
#define CLK_MOUT_SCLK_DECON_TV_ECLK_C	34
#define CLK_MOUT_SCLK_DECON_TV_ECLK_B	35
#define CLK_MOUT_SCLK_DECON_TV_ECLK_A	36
#define CLK_MOUT_SCLK_DSD_C		37
#define CLK_MOUT_SCLK_DSD_B		38
#define CLK_MOUT_SCLK_DSD_A		39
#define CLK_MOUT_SCLK_DSIM0_C		40
#define CLK_MOUT_SCLK_DSIM0_B		41
#define CLK_MOUT_SCLK_DSIM0_A		42
#define CLK_MOUT_SCLK_DECON_TV_VCLK_C	46
#define CLK_MOUT_SCLK_DECON_TV_VCLK_B	47
#define CLK_MOUT_SCLK_DECON_TV_VCLK_A	48
#define CLK_MOUT_SCLK_DSIM1_C		49
#define CLK_MOUT_SCLK_DSIM1_B		50
#define CLK_MOUT_SCLK_DSIM1_A		51

#define CLK_DIV_SCLK_HPM_MIF		55
#define CLK_DIV_ACLK_DREX1		56
#define CLK_DIV_ACLK_DREX0		57
#define CLK_DIV_CLK2XPHY		58
#define CLK_DIV_ACLK_MIF_266		59
#define CLK_DIV_ACLK_MIFND_133		60
#define CLK_DIV_ACLK_MIF_133		61
#define CLK_DIV_ACLK_MIFNM_200		62
#define CLK_DIV_ACLK_MIF_200		63
#define CLK_DIV_ACLK_MIF_400		64
#define CLK_DIV_ACLK_BUS2_400		65
#define CLK_DIV_ACLK_DISP_333		66
#define CLK_DIV_ACLK_CPIF_200		67
#define CLK_DIV_SCLK_DSIM1		68
#define CLK_DIV_SCLK_DECON_TV_VCLK	69
#define CLK_DIV_SCLK_DSIM0		70
#define CLK_DIV_SCLK_DSD		71
#define CLK_DIV_SCLK_DECON_TV_ECLK	72
#define CLK_DIV_SCLK_DECON_VCLK		73
#define CLK_DIV_SCLK_DECON_ECLK		74
#define CLK_DIV_MIF_PRE			75

#define CLK_CLK2X_PHY1			80
#define CLK_CLK2X_PHY0			81
#define CLK_CLKM_PHY1			82
#define CLK_CLKM_PHY0			83
#define CLK_RCLK_DREX1			84
#define CLK_RCLK_DREX0			85
#define CLK_ACLK_DREX1_TZ		86
#define CLK_ACLK_DREX0_TZ		87
#define CLK_ACLK_DREX1_PEREV		88
#define CLK_ACLK_DREX0_PEREV		89
#define CLK_ACLK_DREX1_MEMIF		90
#define CLK_ACLK_DREX0_MEMIF		91
#define CLK_ACLK_DREX1_SCH		92
#define CLK_ACLK_DREX0_SCH		93
#define CLK_ACLK_DREX1_BUSIF		94
#define CLK_ACLK_DREX0_BUSIF		95
#define CLK_ACLK_DREX1_BUSIF_RD		96
#define CLK_ACLK_DREX0_BUSIF_RD		97
#define CLK_ACLK_DREX1			98
#define CLK_ACLK_DREX0			99
#define CLK_ACLK_ASYNCAXIM_ATLAS_CCIX	100
#define CLK_ACLK_ASYNCAXIS_ATLAS_MIF	101
#define CLK_ACLK_ASYNCAXIM_ATLAS_MIF	102
#define CLK_ACLK_ASYNCAXIS_MIF_IMEM	103
#define CLK_ACLK_ASYNCAXIS_NOC_P_CCI	104
#define CLK_ACLK_ASYNCAXIM_NOC_P_CCI	105
#define CLK_ACLK_ASYNCAXIS_CP1		106
#define CLK_ACLK_ASYNCAXIM_CP1		107
#define CLK_ACLK_ASYNCAXIS_CP0		108
#define CLK_ACLK_ASYNCAXIM_CP0		109
#define CLK_ACLK_ASYNCAXIS_DREX1_3	110
#define CLK_ACLK_ASYNCAXIM_DREX1_3	111
#define CLK_ACLK_ASYNCAXIS_DREX1_1	112
#define CLK_ACLK_ASYNCAXIM_DREX1_1	113
#define CLK_ACLK_ASYNCAXIS_DREX1_0	114
#define CLK_ACLK_ASYNCAXIM_DREX1_0	115
#define CLK_ACLK_ASYNCAXIS_DREX0_3	116
#define CLK_ACLK_ASYNCAXIM_DREX0_3	117
#define CLK_ACLK_ASYNCAXIS_DREX0_1	118
#define CLK_ACLK_ASYNCAXIM_DREX0_1	119
#define CLK_ACLK_ASYNCAXIS_DREX0_0	120
#define CLK_ACLK_ASYNCAXIM_DREX0_0	121
#define CLK_ACLK_AHB2APB_MIF2P		122
#define CLK_ACLK_AHB2APB_MIF1P		123
#define CLK_ACLK_AHB2APB_MIF0P		124
#define CLK_ACLK_IXIU_CCI		125
#define CLK_ACLK_XIU_MIFSFRX		126
#define CLK_ACLK_MIFNP_133		127
#define CLK_ACLK_MIFNM_200		128
#define CLK_ACLK_MIFND_133		129
#define CLK_ACLK_MIFND_400		130
#define CLK_ACLK_CCI			131
#define CLK_ACLK_MIFND_266		132
#define CLK_ACLK_PPMU_DREX1S3		133
#define CLK_ACLK_PPMU_DREX1S1		134
#define CLK_ACLK_PPMU_DREX1S0		135
#define CLK_ACLK_PPMU_DREX0S3		136
#define CLK_ACLK_PPMU_DREX0S1		137
#define CLK_ACLK_PPMU_DREX0S0		138
#define CLK_ACLK_BTS_APOLLO		139
#define CLK_ACLK_BTS_ATLAS		140
#define CLK_ACLK_ACE_SEL_APOLL		141
#define CLK_ACLK_ACE_SEL_ATLAS		142
#define CLK_ACLK_AXIDS_CCI_MIFSFRX	143
#define CLK_ACLK_AXIUS_ATLAS_CCI	144
#define CLK_ACLK_AXISYNCDNS_CCI		145
#define CLK_ACLK_AXISYNCDN_CCI		146
#define CLK_ACLK_AXISYNCDN_NOC_D	147
#define CLK_ACLK_ASYNCACEM_APOLLO_CCI	148
#define CLK_ACLK_ASYNCACEM_ATLAS_CCI	149
#define CLK_ACLK_ASYNCAPBS_MIF_CSSYS	150
#define CLK_ACLK_BUS2_400		151
#define CLK_ACLK_DISP_333		152
#define CLK_ACLK_CPIF_200		153
#define CLK_PCLK_PPMU_DREX1S3		154
#define CLK_PCLK_PPMU_DREX1S1		155
#define CLK_PCLK_PPMU_DREX1S0		156
#define CLK_PCLK_PPMU_DREX0S3		157
#define CLK_PCLK_PPMU_DREX0S1		158
#define CLK_PCLK_PPMU_DREX0S0		159
#define CLK_PCLK_BTS_APOLLO		160
#define CLK_PCLK_BTS_ATLAS		161
#define CLK_PCLK_ASYNCAXI_NOC_P_CCI	162
#define CLK_PCLK_ASYNCAXI_CP1		163
#define CLK_PCLK_ASYNCAXI_CP0		164
#define CLK_PCLK_ASYNCAXI_DREX1_3	165
#define CLK_PCLK_ASYNCAXI_DREX1_1	166
#define CLK_PCLK_ASYNCAXI_DREX1_0	167
#define CLK_PCLK_ASYNCAXI_DREX0_3	168
#define CLK_PCLK_ASYNCAXI_DREX0_1	169
#define CLK_PCLK_ASYNCAXI_DREX0_0	170
#define CLK_PCLK_MIFSRVND_133		171
#define CLK_PCLK_PMU_MIF		172
#define CLK_PCLK_SYSREG_MIF		173
#define CLK_PCLK_GPIO_ALIVE		174
#define CLK_PCLK_ABB			175
#define CLK_PCLK_PMU_APBIF		176
#define CLK_PCLK_DDR_PHY1		177
#define CLK_PCLK_DREX1			178
#define CLK_PCLK_DDR_PHY0		179
#define CLK_PCLK_DREX0			180
#define CLK_PCLK_DREX0_TZ		181
#define CLK_PCLK_DREX1_TZ		182
#define CLK_PCLK_MONOTONIC_CNT		183
#define CLK_PCLK_RTC			184
#define CLK_SCLK_DSIM1_DISP		185
#define CLK_SCLK_DECON_TV_VCLK_DISP	186
#define CLK_SCLK_FREQ_DET_BUS_PLL	187
#define CLK_SCLK_FREQ_DET_MFC_PLL	188
#define CLK_SCLK_FREQ_DET_MEM0_PLL	189
#define CLK_SCLK_FREQ_DET_MEM1_PLL	190
#define CLK_SCLK_DSIM0_DISP		191
#define CLK_SCLK_DSD_DISP		192
#define CLK_SCLK_DECON_TV_ECLK_DISP	193
#define CLK_SCLK_DECON_VCLK_DISP	194
#define CLK_SCLK_DECON_ECLK_DISP	195
#define CLK_SCLK_HPM_MIF		196
#define CLK_SCLK_MFC_PLL		197
#define CLK_SCLK_BUS_PLL		198
#define CLK_SCLK_BUS_PLL_APOLLO		199
#define CLK_SCLK_BUS_PLL_ATLAS		200
#define CLK_SCLK_HDMI_SPDIF_DISP	201

#define MIF_NR_CLK			202

/* CMU_PERIC */
#define CLK_PCLK_SPI2			1
#define CLK_PCLK_SPI1			2
#define CLK_PCLK_SPI0			3
#define CLK_PCLK_UART2			4
#define CLK_PCLK_UART1			5
#define CLK_PCLK_UART0			6
#define CLK_PCLK_HSI2C3			7
#define CLK_PCLK_HSI2C2			8
#define CLK_PCLK_HSI2C1			9
#define CLK_PCLK_HSI2C0			10
#define CLK_PCLK_I2C7			11
#define CLK_PCLK_I2C6			12
#define CLK_PCLK_I2C5			13
#define CLK_PCLK_I2C4			14
#define CLK_PCLK_I2C3			15
#define CLK_PCLK_I2C2			16
#define CLK_PCLK_I2C1			17
#define CLK_PCLK_I2C0			18
#define CLK_PCLK_SPI4			19
#define CLK_PCLK_SPI3			20
#define CLK_PCLK_HSI2C11		21
#define CLK_PCLK_HSI2C10		22
#define CLK_PCLK_HSI2C9			23
#define CLK_PCLK_HSI2C8			24
#define CLK_PCLK_HSI2C7			25
#define CLK_PCLK_HSI2C6			26
#define CLK_PCLK_HSI2C5			27
#define CLK_PCLK_HSI2C4			28
#define CLK_SCLK_SPI4			29
#define CLK_SCLK_SPI3			30
#define CLK_SCLK_SPI2			31
#define CLK_SCLK_SPI1			32
#define CLK_SCLK_SPI0			33
#define CLK_SCLK_UART2			34
#define CLK_SCLK_UART1			35
#define CLK_SCLK_UART0			36
#define CLK_ACLK_AHB2APB_PERIC2P	37
#define CLK_ACLK_AHB2APB_PERIC1P	38
#define CLK_ACLK_AHB2APB_PERIC0P	39
#define CLK_ACLK_PERICNP_66		40
#define CLK_PCLK_SCI			41
#define CLK_PCLK_GPIO_FINGER		42
#define CLK_PCLK_GPIO_ESE		43
#define CLK_PCLK_PWM			44
#define CLK_PCLK_SPDIF			45
#define CLK_PCLK_PCM1			46
#define CLK_PCLK_I2S1			47
#define CLK_PCLK_ADCIF			48
#define CLK_PCLK_GPIO_TOUCH		49
#define CLK_PCLK_GPIO_NFC		50
#define CLK_PCLK_GPIO_PERIC		51
#define CLK_PCLK_PMU_PERIC		52
#define CLK_PCLK_SYSREG_PERIC		53
#define CLK_SCLK_IOCLK_SPI4		54
#define CLK_SCLK_IOCLK_SPI3		55
#define CLK_SCLK_SCI			56
#define CLK_SCLK_SC_IN			57
#define CLK_SCLK_PWM			58
#define CLK_SCLK_IOCLK_SPI2		59
#define CLK_SCLK_IOCLK_SPI1		60
#define CLK_SCLK_IOCLK_SPI0		61
#define CLK_SCLK_IOCLK_I2S1_BCLK	62
#define CLK_SCLK_SPDIF			63
#define CLK_SCLK_PCM1			64
#define CLK_SCLK_I2S1			65

#define CLK_DIV_SCLK_SCI		70
#define CLK_DIV_SCLK_SC_IN		71

#define PERIC_NR_CLK			72

/* CMU_PERIS */
#define CLK_PCLK_HPM_APBIF		1
#define CLK_PCLK_TMU1_APBIF		2
#define CLK_PCLK_TMU0_APBIF		3
#define CLK_PCLK_PMU_PERIS		4
#define CLK_PCLK_SYSREG_PERIS		5
#define CLK_PCLK_CMU_TOP_APBIF		6
#define CLK_PCLK_WDT_APOLLO		7
#define CLK_PCLK_WDT_ATLAS		8
#define CLK_PCLK_MCT			9
#define CLK_PCLK_HDMI_CEC		10
#define CLK_ACLK_AHB2APB_PERIS1P	11
#define CLK_ACLK_AHB2APB_PERIS0P	12
#define CLK_ACLK_PERISNP_66		13
#define CLK_PCLK_TZPC12			14
#define CLK_PCLK_TZPC11			15
#define CLK_PCLK_TZPC10			16
#define CLK_PCLK_TZPC9			17
#define CLK_PCLK_TZPC8			18
#define CLK_PCLK_TZPC7			19
#define CLK_PCLK_TZPC6			20
#define CLK_PCLK_TZPC5			21
#define CLK_PCLK_TZPC4			22
#define CLK_PCLK_TZPC3			23
#define CLK_PCLK_TZPC2			24
#define CLK_PCLK_TZPC1			25
#define CLK_PCLK_TZPC0			26
#define CLK_PCLK_SECKEY_APBIF		27
#define CLK_PCLK_CHIPID_APBIF		28
#define CLK_PCLK_TOPRTC			29
#define CLK_PCLK_CUSTOM_EFUSE_APBIF	30
#define CLK_PCLK_ANTIRBK_CNT_APBIF	31
#define CLK_PCLK_OTP_CON_APBIF		32
#define CLK_SCLK_ASV_TB			33
#define CLK_SCLK_TMU1			34
#define CLK_SCLK_TMU0			35
#define CLK_SCLK_SECKEY			36
#define CLK_SCLK_CHIPID			37
#define CLK_SCLK_TOPRTC			38
#define CLK_SCLK_CUSTOM_EFUSE		39
#define CLK_SCLK_ANTIRBK_CNT		40
#define CLK_SCLK_OTP_CON		41

#define PERIS_NR_CLK			42

/* CMU_FSYS */
#define CLK_MOUT_ACLK_FSYS_200_USER	1
#define CLK_MOUT_SCLK_MMC2_USER		2
#define CLK_MOUT_SCLK_MMC1_USER		3
#define CLK_MOUT_SCLK_MMC0_USER		4
#define CLK_MOUT_SCLK_UFS_MPHY_USER	5
#define CLK_MOUT_SCLK_PCIE_100_USER	6
#define CLK_MOUT_SCLK_UFSUNIPRO_USER	7
#define CLK_MOUT_SCLK_USBHOST30_USER	8
#define CLK_MOUT_SCLK_USBDRD30_USER	9
#define CLK_MOUT_PHYCLK_USBHOST30_UHOST30_PIPE_PCLK_USER	10
#define CLK_MOUT_PHYCLK_USBHOST30_UHOST30_PHYCLOCK_USER		11
#define CLK_MOUT_PHYCLK_USBHOST20_PHY_HSIC1_USER		12
#define CLK_MOUT_PHYCLK_USBHOST20_PHY_CLK48MOHCI_USER		13
#define CLK_MOUT_PHYCLK_USBHOST20_PHY_PHYCLOCK_USER		14
#define CLK_MOUT_PHYCLK_USBHOST20_PHY_PHY_FREECLK_USER		15
#define CLK_MOUT_PHYCLK_USBDRD30_UDRD30_PIPE_PCLK_USER		16
#define CLK_MOUT_PHYCLK_USBDRD30_UDRD30_PHYCLOCK_USER		17
#define CLK_MOUT_PHYCLK_UFS_RX1_SYMBOL_USER			18
#define CLK_MOUT_PHYCLK_UFS_RX0_SYMBOL_USER			19
#define CLK_MOUT_PHYCLK_UFS_TX1_SYMBOL_USER			20
#define CLK_MOUT_PHYCLK_UFS_TX0_SYMBOL_USER			21
#define CLK_MOUT_PHYCLK_LLI_MPHY_TO_UFS_USER			22
#define CLK_MOUT_SCLK_MPHY					23

#define CLK_PHYCLK_USBDRD30_UDRD30_PHYCLOCK_PHY			25
#define CLK_PHYCLK_USBDRD30_UDRD30_PIPE_PCLK_PHY		26
#define CLK_PHYCLK_USBHOST30_UHOST30_PHYCLOCK_PHY		27
#define CLK_PHYCLK_USBHOST30_UHOST30_PIPE_PCLK_PHY		28
#define CLK_PHYCLK_USBHOST20_PHY_FREECLK_PHY			29
#define CLK_PHYCLK_USBHOST20_PHY_PHYCLOCK_PHY			30
#define CLK_PHYCLK_USBHOST20_PHY_CLK48MOHCI_PHY			31
#define CLK_PHYCLK_USBHOST20_PHY_HSIC1_PHY			32
#define CLK_PHYCLK_UFS_TX0_SYMBOL_PHY				33
#define CLK_PHYCLK_UFS_RX0_SYMBOL_PHY				34
#define CLK_PHYCLK_UFS_TX1_SYMBOL_PHY				35
#define CLK_PHYCLK_UFS_RX1_SYMBOL_PHY				36
#define CLK_PHYCLK_LLI_MPHY_TO_UFS_PHY				37

#define CLK_ACLK_PCIE			50
#define CLK_ACLK_PDMA1			51
#define CLK_ACLK_TSI			52
#define CLK_ACLK_MMC2			53
#define CLK_ACLK_MMC1			54
#define CLK_ACLK_MMC0			55
#define CLK_ACLK_UFS			56
#define CLK_ACLK_USBHOST20		57
#define CLK_ACLK_USBHOST30		58
#define CLK_ACLK_USBDRD30		59
#define CLK_ACLK_PDMA0			60
#define CLK_SCLK_MMC2			61
#define CLK_SCLK_MMC1			62
#define CLK_SCLK_MMC0			63
#define CLK_PDMA1			64
#define CLK_PDMA0			65
#define CLK_ACLK_XIU_FSYSPX		66
#define CLK_ACLK_AHB_USBLINKH1		67
#define CLK_ACLK_SMMU_PDMA1		68
#define CLK_ACLK_BTS_PCIE		69
#define CLK_ACLK_AXIUS_PDMA1		70
#define CLK_ACLK_SMMU_PDMA0		71
#define CLK_ACLK_BTS_UFS		72
#define CLK_ACLK_BTS_USBHOST30		73
#define CLK_ACLK_BTS_USBDRD30		74
#define CLK_ACLK_AXIUS_PDMA0		75
#define CLK_ACLK_AXIUS_USBHS		76
#define CLK_ACLK_AXIUS_FSYSSX		77
#define CLK_ACLK_AHB2APB_FSYSP		78
#define CLK_ACLK_AHB2AXI_USBHS		79
#define CLK_ACLK_AHB_USBLINKH0		80
#define CLK_ACLK_AHB_USBHS		81
#define CLK_ACLK_AHB_FSYSH		82
#define CLK_ACLK_XIU_FSYSX		83
#define CLK_ACLK_XIU_FSYSSX		84
#define CLK_ACLK_FSYSNP_200		85
#define CLK_ACLK_FSYSND_200		86
#define CLK_PCLK_PCIE_CTRL		87
#define CLK_PCLK_SMMU_PDMA1		88
#define CLK_PCLK_PCIE_PHY		89
#define CLK_PCLK_BTS_PCIE		90
#define CLK_PCLK_SMMU_PDMA0		91
#define CLK_PCLK_BTS_UFS		92
#define CLK_PCLK_BTS_USBHOST30		93
#define CLK_PCLK_BTS_USBDRD30		94
#define CLK_PCLK_GPIO_FSYS		95
#define CLK_PCLK_PMU_FSYS		96
#define CLK_PCLK_SYSREG_FSYS		97
#define CLK_SCLK_PCIE_100		98
#define CLK_PHYCLK_USBHOST30_UHOST30_PIPE_PCLK	99
#define CLK_PHYCLK_USBHOST30_UHOST30_PHYCLOCK	100
#define CLK_PHYCLK_UFS_RX1_SYMBOL		101
#define CLK_PHYCLK_UFS_RX0_SYMBOL		102
#define CLK_PHYCLK_UFS_TX1_SYMBOL		103
#define CLK_PHYCLK_UFS_TX0_SYMBOL		104
#define CLK_PHYCLK_USBHOST20_PHY_HSIC1		105
#define CLK_PHYCLK_USBHOST20_PHY_CLK48MOHCI	106
#define CLK_PHYCLK_USBHOST20_PHY_PHYCLOCK	107
#define CLK_PHYCLK_USBHOST20_PHY_FREECLK	108
#define CLK_PHYCLK_USBDRD30_UDRD30_PIPE_PCLK	109
#define CLK_PHYCLK_USBDRD30_UDRD30_PHYCLOCK	110
#define CLK_SCLK_MPHY			111
#define CLK_SCLK_UFSUNIPRO		112
#define CLK_SCLK_USBHOST30		113
#define CLK_SCLK_USBDRD30		114

#define FSYS_NR_CLK			115

/* CMU_G2D */
#define CLK_MUX_ACLK_G2D_266_USER	1
#define CLK_MUX_ACLK_G2D_400_USER	2

#define CLK_DIV_PCLK_G2D		3

#define CLK_ACLK_SMMU_MDMA1		4
#define CLK_ACLK_BTS_MDMA1		5
#define CLK_ACLK_BTS_G2D		6
#define CLK_ACLK_ALB_G2D		7
#define CLK_ACLK_AXIUS_G2DX		8
#define CLK_ACLK_ASYNCAXI_SYSX		9
#define CLK_ACLK_AHB2APB_G2D1P		10
#define CLK_ACLK_AHB2APB_G2D0P		11
#define CLK_ACLK_XIU_G2DX		12
#define CLK_ACLK_G2DNP_133		13
#define CLK_ACLK_G2DND_400		14
#define CLK_ACLK_MDMA1			15
#define CLK_ACLK_G2D			16
#define CLK_ACLK_SMMU_G2D		17
#define CLK_PCLK_SMMU_MDMA1		18
#define CLK_PCLK_BTS_MDMA1		19
#define CLK_PCLK_BTS_G2D		20
#define CLK_PCLK_ALB_G2D		21
#define CLK_PCLK_ASYNCAXI_SYSX		22
#define CLK_PCLK_PMU_G2D		23
#define CLK_PCLK_SYSREG_G2D		24
#define CLK_PCLK_G2D			25
#define CLK_PCLK_SMMU_G2D		26

#define G2D_NR_CLK			27

/* CMU_DISP */
#define CLK_FOUT_DISP_PLL				1

#define CLK_MOUT_DISP_PLL				2
#define CLK_MOUT_SCLK_DSIM1_USER			3
#define CLK_MOUT_SCLK_DSIM0_USER			4
#define CLK_MOUT_SCLK_DSD_USER				5
#define CLK_MOUT_SCLK_DECON_TV_ECLK_USER		6
#define CLK_MOUT_SCLK_DECON_VCLK_USER			7
#define CLK_MOUT_SCLK_DECON_ECLK_USER			8
#define CLK_MOUT_SCLK_DECON_TV_VCLK_USER		9
#define CLK_MOUT_ACLK_DISP_333_USER			10
#define CLK_MOUT_PHYCLK_MIPIDPHY1_BITCLKDIV8_USER	11
#define CLK_MOUT_PHYCLK_MIPIDPHY1_RXCLKESC0_USER	12
#define CLK_MOUT_PHYCLK_MIPIDPHY0_BITCLKDIV8_USER	13
#define CLK_MOUT_PHYCLK_MIPIDPHY0_RXCLKESC0_USER	14
#define CLK_MOUT_PHYCLK_HDMIPHY_TMDS_CLKO_USER		15
#define CLK_MOUT_PHYCLK_HDMIPHY_PIXEL_CLKO_USER		16
#define CLK_MOUT_SCLK_DSIM0				17
#define CLK_MOUT_SCLK_DECON_TV_ECLK			18
#define CLK_MOUT_SCLK_DECON_VCLK			19
#define CLK_MOUT_SCLK_DECON_ECLK			20
#define CLK_MOUT_SCLK_DSIM1_B_DISP			21
#define CLK_MOUT_SCLK_DSIM1_A_DISP			22
#define CLK_MOUT_SCLK_DECON_TV_VCLK_C_DISP		23
#define CLK_MOUT_SCLK_DECON_TV_VCLK_B_DISP		24
#define CLK_MOUT_SCLK_DECON_TV_VCLK_A_DISP		25

#define CLK_DIV_SCLK_DSIM1_DISP				30
#define CLK_DIV_SCLK_DECON_TV_VCLK_DISP			31
#define CLK_DIV_SCLK_DSIM0_DISP				32
#define CLK_DIV_SCLK_DECON_TV_ECLK_DISP			33
#define CLK_DIV_SCLK_DECON_VCLK_DISP			34
#define CLK_DIV_SCLK_DECON_ECLK_DISP			35
#define CLK_DIV_PCLK_DISP				36

#define CLK_ACLK_DECON_TV				40
#define CLK_ACLK_DECON					41
#define CLK_ACLK_SMMU_TV1X				42
#define CLK_ACLK_SMMU_TV0X				43
#define CLK_ACLK_SMMU_DECON1X				44
#define CLK_ACLK_SMMU_DECON0X				45
#define CLK_ACLK_BTS_DECON_TV_M3			46
#define CLK_ACLK_BTS_DECON_TV_M2			47
#define CLK_ACLK_BTS_DECON_TV_M1			48
#define CLK_ACLK_BTS_DECON_TV_M0			49
#define CLK_ACLK_BTS_DECON_NM4				50
#define CLK_ACLK_BTS_DECON_NM3				51
#define CLK_ACLK_BTS_DECON_NM2				52
#define CLK_ACLK_BTS_DECON_NM1				53
#define CLK_ACLK_BTS_DECON_NM0				54
#define CLK_ACLK_AHB2APB_DISPSFR2P			55
#define CLK_ACLK_AHB2APB_DISPSFR1P			56
#define CLK_ACLK_AHB2APB_DISPSFR0P			57
#define CLK_ACLK_AHB_DISPH				58
#define CLK_ACLK_XIU_TV1X				59
#define CLK_ACLK_XIU_TV0X				60
#define CLK_ACLK_XIU_DECON1X				61
#define CLK_ACLK_XIU_DECON0X				62
#define CLK_ACLK_XIU_DISP1X				63
#define CLK_ACLK_XIU_DISPNP_100				64
#define CLK_ACLK_DISP1ND_333				65
#define CLK_ACLK_DISP0ND_333				66
#define CLK_PCLK_SMMU_TV1X				67
#define CLK_PCLK_SMMU_TV0X				68
#define CLK_PCLK_SMMU_DECON1X				69
#define CLK_PCLK_SMMU_DECON0X				70
#define CLK_PCLK_BTS_DECON_TV_M3			71
#define CLK_PCLK_BTS_DECON_TV_M2			72
#define CLK_PCLK_BTS_DECON_TV_M1			73
#define CLK_PCLK_BTS_DECON_TV_M0			74
#define CLK_PCLK_BTS_DECONM4				75
#define CLK_PCLK_BTS_DECONM3				76
#define CLK_PCLK_BTS_DECONM2				77
#define CLK_PCLK_BTS_DECONM1				78
#define CLK_PCLK_BTS_DECONM0				79
#define CLK_PCLK_MIC1					80
#define CLK_PCLK_PMU_DISP				81
#define CLK_PCLK_SYSREG_DISP				82
#define CLK_PCLK_HDMIPHY				83
#define CLK_PCLK_HDMI					84
#define CLK_PCLK_MIC0					85
#define CLK_PCLK_DSIM1					86
#define CLK_PCLK_DSIM0					87
#define CLK_PCLK_DECON_TV				88
#define CLK_PHYCLK_MIPIDPHY1_BITCLKDIV8			89
#define CLK_PHYCLK_MIPIDPHY1_RXCLKESC0			90
#define CLK_SCLK_RGB_TV_VCLK_TO_DSIM1			91
#define CLK_SCLK_RGB_TV_VCLK_TO_MIC1			92
#define CLK_SCLK_DSIM1					93
#define CLK_SCLK_DECON_TV_VCLK				94
#define CLK_PHYCLK_MIPIDPHY0_BITCLKDIV8			95
#define CLK_PHYCLK_MIPIDPHY0_RXCLKESC0			96
#define CLK_PHYCLK_HDMIPHY_TMDS_CLKO			97
#define CLK_PHYCLK_HDMI_PIXEL				98
#define CLK_SCLK_RGB_VCLK_TO_SMIES			99
#define CLK_SCLK_FREQ_DET_DISP_PLL			100
#define CLK_SCLK_RGB_VCLK_TO_DSIM0			101
#define CLK_SCLK_RGB_VCLK_TO_MIC0			102
#define CLK_SCLK_DSD					103
#define CLK_SCLK_HDMI_SPDIF				104
#define CLK_SCLK_DSIM0					105
#define CLK_SCLK_DECON_TV_ECLK				106
#define CLK_SCLK_DECON_VCLK				107
#define CLK_SCLK_DECON_ECLK				108
#define CLK_SCLK_RGB_VCLK				109
#define CLK_SCLK_RGB_TV_VCLK				110

#define DISP_NR_CLK					111

/* CMU_AUD */
#define CLK_MOUT_AUD_PLL_USER				1
#define CLK_MOUT_SCLK_AUD_PCM				2
#define CLK_MOUT_SCLK_AUD_I2S				3

#define CLK_DIV_ATCLK_AUD				4
#define CLK_DIV_PCLK_DBG_AUD				5
#define CLK_DIV_ACLK_AUD				6
#define CLK_DIV_AUD_CA5					7
#define CLK_DIV_SCLK_AUD_SLIMBUS			8
#define CLK_DIV_SCLK_AUD_UART				9
#define CLK_DIV_SCLK_AUD_PCM				10
#define CLK_DIV_SCLK_AUD_I2S				11

#define CLK_ACLK_INTR_CTRL				12
#define CLK_ACLK_AXIDS2_LPASSP				13
#define CLK_ACLK_AXIDS1_LPASSP				14
#define CLK_ACLK_AXI2APB1_LPASSP			15
#define CLK_ACLK_AXI2APH_LPASSP				16
#define CLK_ACLK_SMMU_LPASSX				17
#define CLK_ACLK_AXIDS0_LPASSP				18
#define CLK_ACLK_AXI2APB0_LPASSP			19
#define CLK_ACLK_XIU_LPASSX				20
#define CLK_ACLK_AUDNP_133				21
#define CLK_ACLK_AUDND_133				22
#define CLK_ACLK_SRAMC					23
#define CLK_ACLK_DMAC					24
#define CLK_PCLK_WDT1					25
#define CLK_PCLK_WDT0					26
#define CLK_PCLK_SFR1					27
#define CLK_PCLK_SMMU_LPASSX				28
#define CLK_PCLK_GPIO_AUD				29
#define CLK_PCLK_PMU_AUD				30
#define CLK_PCLK_SYSREG_AUD				31
#define CLK_PCLK_AUD_SLIMBUS				32
#define CLK_PCLK_AUD_UART				33
#define CLK_PCLK_AUD_PCM				34
#define CLK_PCLK_AUD_I2S				35
#define CLK_PCLK_TIMER					36
#define CLK_PCLK_SFR0_CTRL				37
#define CLK_ATCLK_AUD					38
#define CLK_PCLK_DBG_AUD				39
#define CLK_SCLK_AUD_CA5				40
#define CLK_SCLK_JTAG_TCK				41
#define CLK_SCLK_SLIMBUS_CLKIN				42
#define CLK_SCLK_AUD_SLIMBUS				43
#define CLK_SCLK_AUD_UART				44
#define CLK_SCLK_AUD_PCM				45
#define CLK_SCLK_I2S_BCLK				46
#define CLK_SCLK_AUD_I2S				47

#define AUD_NR_CLK					48

/* CMU_BUS{0|1|2} */
#define CLK_DIV_PCLK_BUS_133				1

#define CLK_ACLK_AHB2APB_BUSP				2
#define CLK_ACLK_BUSNP_133				3
#define CLK_ACLK_BUSND_400				4
#define CLK_PCLK_BUSSRVND_133				5
#define CLK_PCLK_PMU_BUS				6
#define CLK_PCLK_SYSREG_BUS				7

#define CLK_MOUT_ACLK_BUS2_400_USER			8  /* Only CMU_BUS2 */
#define CLK_ACLK_BUS2BEND_400				9  /* Only CMU_BUS2 */
#define CLK_ACLK_BUS2RTND_400				10 /* Only CMU_BUS2 */

#define BUSx_NR_CLK					11

/* CMU_G3D */
#define CLK_FOUT_G3D_PLL				1

#define CLK_MOUT_ACLK_G3D_400				2
#define CLK_MOUT_G3D_PLL				3

#define CLK_DIV_SCLK_HPM_G3D				4
#define CLK_DIV_PCLK_G3D				5
#define CLK_DIV_ACLK_G3D				6
#define CLK_ACLK_BTS_G3D1				7
#define CLK_ACLK_BTS_G3D0				8
#define CLK_ACLK_ASYNCAPBS_G3D				9
#define CLK_ACLK_ASYNCAPBM_G3D				10
#define CLK_ACLK_AHB2APB_G3DP				11
#define CLK_ACLK_G3DNP_150				12
#define CLK_ACLK_G3DND_600				13
#define CLK_ACLK_G3D					14
#define CLK_PCLK_BTS_G3D1				15
#define CLK_PCLK_BTS_G3D0				16
#define CLK_PCLK_PMU_G3D				17
#define CLK_PCLK_SYSREG_G3D				18
#define CLK_SCLK_HPM_G3D				19

#define G3D_NR_CLK					20

/* CMU_GSCL */
#define CLK_MOUT_ACLK_GSCL_111_USER			1
#define CLK_MOUT_ACLK_GSCL_333_USER			2

#define CLK_ACLK_BTS_GSCL2				3
#define CLK_ACLK_BTS_GSCL1				4
#define CLK_ACLK_BTS_GSCL0				5
#define CLK_ACLK_AHB2APB_GSCLP				6
#define CLK_ACLK_XIU_GSCLX				7
#define CLK_ACLK_GSCLNP_111				8
#define CLK_ACLK_GSCLRTND_333				9
#define CLK_ACLK_GSCLBEND_333				10
#define CLK_ACLK_GSD					11
#define CLK_ACLK_GSCL2					12
#define CLK_ACLK_GSCL1					13
#define CLK_ACLK_GSCL0					14
#define CLK_ACLK_SMMU_GSCL0				15
#define CLK_ACLK_SMMU_GSCL1				16
#define CLK_ACLK_SMMU_GSCL2				17
#define CLK_PCLK_BTS_GSCL2				18
#define CLK_PCLK_BTS_GSCL1				19
#define CLK_PCLK_BTS_GSCL0				20
#define CLK_PCLK_PMU_GSCL				21
#define CLK_PCLK_SYSREG_GSCL				22
#define CLK_PCLK_GSCL2					23
#define CLK_PCLK_GSCL1					24
#define CLK_PCLK_GSCL0					25
#define CLK_PCLK_SMMU_GSCL0				26
#define CLK_PCLK_SMMU_GSCL1				27
#define CLK_PCLK_SMMU_GSCL2				28

#define GSCL_NR_CLK					29

/* CMU_APOLLO */
#define CLK_FOUT_APOLLO_PLL				1

#define CLK_MOUT_APOLLO_PLL				2
#define CLK_MOUT_BUS_PLL_APOLLO_USER			3
#define CLK_MOUT_APOLLO					4

#define CLK_DIV_CNTCLK_APOLLO				5
#define CLK_DIV_PCLK_DBG_APOLLO				6
#define CLK_DIV_ATCLK_APOLLO				7
#define CLK_DIV_PCLK_APOLLO				8
#define CLK_DIV_ACLK_APOLLO				9
#define CLK_DIV_APOLLO2					10
#define CLK_DIV_APOLLO1					11
#define CLK_DIV_SCLK_HPM_APOLLO				12
#define CLK_DIV_APOLLO_PLL				13

#define CLK_ACLK_ATBDS_APOLLO_3				14
#define CLK_ACLK_ATBDS_APOLLO_2				15
#define CLK_ACLK_ATBDS_APOLLO_1				16
#define CLK_ACLK_ATBDS_APOLLO_0				17
#define CLK_ACLK_ASATBSLV_APOLLO_3_CSSYS		18
#define CLK_ACLK_ASATBSLV_APOLLO_2_CSSYS		19
#define CLK_ACLK_ASATBSLV_APOLLO_1_CSSYS		20
#define CLK_ACLK_ASATBSLV_APOLLO_0_CSSYS		21
#define CLK_ACLK_ASYNCACES_APOLLO_CCI			22
#define CLK_ACLK_AHB2APB_APOLLOP			23
#define CLK_ACLK_APOLLONP_200				24
#define CLK_PCLK_ASAPBMST_CSSYS_APOLLO			25
#define CLK_PCLK_PMU_APOLLO				26
#define CLK_PCLK_SYSREG_APOLLO				27
#define CLK_CNTCLK_APOLLO				28
#define CLK_SCLK_HPM_APOLLO				29
#define CLK_SCLK_APOLLO					30

#define APOLLO_NR_CLK					31

#endif /* _DT_BINDINGS_CLOCK_EXYNOS5433_H */
