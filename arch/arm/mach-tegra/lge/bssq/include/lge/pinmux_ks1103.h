
	{TEGRA_PINGROUP_ATA,   TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// NC
	{TEGRA_PINGROUP_ATB,   TEGRA_MUX_SDIO4,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// microsd_det, mmc_clk, mmc_cmd
	{TEGRA_PINGROUP_ATC,   TEGRA_MUX_GMI,			TEGRA_PUPD_PULL_UP,		TEGRA_TRI_NORMAL},		// muic_sda_scl, thermal_irq, vol_key_up_down, gmi_oe_n
	{TEGRA_PINGROUP_ATD,   TEGRA_MUX_GMI,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// NC
	{TEGRA_PINGROUP_ATE,   TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// strapping pins(PD)
	{TEGRA_PINGROUP_CDEV1, TEGRA_MUX_PLLA_OUT,		TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// audio_mclk
	{TEGRA_PINGROUP_CDEV2, TEGRA_MUX_PLLP_OUT4,		TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// NC
	{TEGRA_PINGROUP_CRTP,  TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// NC
	{TEGRA_PINGROUP_CSUS,  TEGRA_MUX_VI_SENSOR_CLK, TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// cam_mclk
	{TEGRA_PINGROUP_DAP1,  TEGRA_MUX_DAP1,          TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// dap1
	{TEGRA_PINGROUP_DAP2,  TEGRA_MUX_DAP2,          TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// dap2
	{TEGRA_PINGROUP_DAP3,  TEGRA_MUX_DAP3,          TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// dap3
	{TEGRA_PINGROUP_DAP4,  TEGRA_MUX_DAP4,          TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// dap4
	{TEGRA_PINGROUP_DDC,   TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// ddc_sdl_sca
	{TEGRA_PINGROUP_DTA,   TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// vt_cam_pwdn
	{TEGRA_PINGROUP_DTB,   TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// vt_reset, 8m_reset
	{TEGRA_PINGROUP_DTC,   TEGRA_MUX_VI,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// vt_vsync, vt_hsync
	{TEGRA_PINGROUP_DTD,   TEGRA_MUX_VI,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// vt_pclk, vt_data[0..7]
	{TEGRA_PINGROUP_DTE,   TEGRA_MUX_RSVD,			TEGRA_PUPD_PULL_UP,		TEGRA_TRI_NORMAL},		// All NC => GPIO_PD2(VI_GP5) in Rev C
#ifdef USE_GEN3_I2C_GPIO
	{TEGRA_PINGROUP_DTF,   TEGRA_MUX_NONE,			TEGRA_PUPD_PULL_UP,		TEGRA_TRI_NORMAL},		// cam_i2c_scal_sda
#else
	{TEGRA_PINGROUP_DTF,   TEGRA_MUX_I2C3,			TEGRA_PUPD_PULL_UP,		TEGRA_TRI_NORMAL},		// cam_i2c_scal_sda
#endif
	{TEGRA_PINGROUP_GMA,   TEGRA_MUX_SDIO4,			TEGRA_PUPD_NORMAL, 	TEGRA_TRI_NORMAL},		// mmc_dat[0..3]
	{TEGRA_PINGROUP_GMB,   TEGRA_MUX_GMI,			TEGRA_PUPD_PULL_DOWN,	TEGRA_TRI_TRISTATE},		// bt_host_wakeup
	{TEGRA_PINGROUP_GMC,   TEGRA_MUX_UARTD,			TEGRA_PUPD_NORMAL, 	TEGRA_TRI_TRISTATE},		// hook_det_n
	{TEGRA_PINGROUP_GMD,   TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// NC
	{TEGRA_PINGROUP_GME,   TEGRA_MUX_SDIO4, 		TEGRA_PUPD_NORMAL, 	TEGRA_TRI_NORMAL},		// mmc_dat[4..7]
	{TEGRA_PINGROUP_GPU,   TEGRA_MUX_PWM,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// wlan_hostwakeup_n, muic_uart_sw, vibe_pwm, vibe_en, muic_int_n, ipc_srdy2
	{TEGRA_PINGROUP_GPU7,  TEGRA_MUX_RTCK,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// jtag rtck
	{TEGRA_PINGROUP_GPV,   TEGRA_MUX_PCIE,			TEGRA_PUPD_PULL_DOWN,		TEGRA_TRI_TRISTATE},		// NC
	{TEGRA_PINGROUP_HDINT, TEGRA_MUX_HDMI,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// hdmi_int
	{TEGRA_PINGROUP_I2CP,  TEGRA_MUX_I2C,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// pwr_i2c_scl_sda
	{TEGRA_PINGROUP_IRRX,  TEGRA_MUX_GMI,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// ipc_mrdy2 (NU)
	{TEGRA_PINGROUP_IRTX,  TEGRA_MUX_GMI,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// NC
	{TEGRA_PINGROUP_KBCA,  TEGRA_MUX_KBC,			TEGRA_PUPD_NORMAL, 	TEGRA_TRI_TRISTATE},		// NC
	{TEGRA_PINGROUP_KBCB,  TEGRA_MUX_KBC,			TEGRA_PUPD_PULL_UP, 	TEGRA_TRI_TRISTATE},		// wlan_host_wakeup_n
	{TEGRA_PINGROUP_KBCC,  TEGRA_MUX_KBC,			TEGRA_PUPD_NORMAL, 	TEGRA_TRI_TRISTATE},		// NC
	{TEGRA_PINGROUP_KBCD,  TEGRA_MUX_KBC,			TEGRA_PUPD_NORMAL, 	TEGRA_TRI_TRISTATE},		// NC
	{TEGRA_PINGROUP_KBCE,  TEGRA_MUX_KBC,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// NC
	{TEGRA_PINGROUP_KBCF,  TEGRA_MUX_KBC,			TEGRA_PUPD_NORMAL, 	TEGRA_TRI_TRISTATE},		// NC
	{TEGRA_PINGROUP_LCSN,  TEGRA_MUX_DISPLAYA,		TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// lcd_cs_n
	{TEGRA_PINGROUP_LD9,   TEGRA_MUX_RSVD,			TEGRA_PUPD_PULL_UP, 	TEGRA_TRI_NORMAL},		// cp_usb_vbus_en
	{TEGRA_PINGROUP_LD0,   TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// NC
	{TEGRA_PINGROUP_LD1,   TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// i2c2_sw
	{TEGRA_PINGROUP_LD10,  TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// 1seg_a_1.2v_en
	{TEGRA_PINGROUP_LD11,  TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// 1seg_en
	{TEGRA_PINGROUP_LD12,  TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// motion_int_n
	{TEGRA_PINGROUP_LD13,  TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// NC
	{TEGRA_PINGROUP_LD14,  TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// gyro_int_n
	{TEGRA_PINGROUP_LD15,  TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// wm_ldo_en
	{TEGRA_PINGROUP_LD16,  TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// NC
	{TEGRA_PINGROUP_LD17,  TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// touch_id
	{TEGRA_PINGROUP_LD2,   TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// audio_int_n
	{TEGRA_PINGROUP_LD3,   TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// lcd_cp_en
	{TEGRA_PINGROUP_LD4,   TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// NC
	{TEGRA_PINGROUP_LD5,   TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// NC
	{TEGRA_PINGROUP_LD6,   TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// NC
	{TEGRA_PINGROUP_LD7,   TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// lcd_reset_n
	{TEGRA_PINGROUP_LD8,   TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// com_int
	{TEGRA_PINGROUP_LDC,   TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// NC
	{TEGRA_PINGROUP_LDI,   TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// cp_state (NU)
	{TEGRA_PINGROUP_LHP0,  TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// ap_state (NU)
	{TEGRA_PINGROUP_LHP1,  TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// bt_en
	{TEGRA_PINGROUP_LHP2,  TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// wlan_en
	{TEGRA_PINGROUP_LHS,   TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// bl_dsds_scl
	{TEGRA_PINGROUP_LM0,   TEGRA_MUX_SPI3,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// 1seg_spi3_cs
	{TEGRA_PINGROUP_LM1,   TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// NC
	{TEGRA_PINGROUP_LPP,   TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// NC
	{TEGRA_PINGROUP_LPW0,  TEGRA_MUX_SPI3,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// 1seg_spi3_sdo
	{TEGRA_PINGROUP_LPW1,  TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// NC
	{TEGRA_PINGROUP_LPW2,  TEGRA_MUX_SPI3,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// 1seg_spi3_sdi
	{TEGRA_PINGROUP_LSC0,  TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// earjack_sense
	{TEGRA_PINGROUP_LSC1,  TEGRA_MUX_SPI3,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// 1seg_spi3_clk
	{TEGRA_PINGROUP_LSCK,  TEGRA_MUX_DISPLAYA,		TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// NC
	{TEGRA_PINGROUP_LSDA,  TEGRA_MUX_DISPLAYA,		TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// pmic_low_int_n
	{TEGRA_PINGROUP_LSDI,  TEGRA_MUX_DISPLAYA,		TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// gauge_low_int_n
#ifndef CONFIG_TEGRA_DSI
	{TEGRA_PINGROUP_LSPI,  TEGRA_MUX_DISPLAYA,		TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},
	{TEGRA_PINGROUP_LVP0,  TEGRA_MUX_DISPLAYA,		TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},
#else
	{TEGRA_PINGROUP_LSPI,  TEGRA_MUX_DISPLAYA,		TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// lcd_te
	{TEGRA_PINGROUP_LVP0,  TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// NC
#endif
	{TEGRA_PINGROUP_LVP1,  TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// lcd_maker_id
	//                                                                                                          
	{TEGRA_PINGROUP_LVS,   TEGRA_MUX_RSVD,			TEGRA_PUPD_PULL_UP, 	TEGRA_TRI_NORMAL},		// bl_dcdc_sda
	{TEGRA_PINGROUP_OWC,   TEGRA_MUX_OWR,			TEGRA_PUPD_NORMAL, 	TEGRA_TRI_TRISTATE},		// TP
	{TEGRA_PINGROUP_PMC,   TEGRA_MUX_PWR_ON,		TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// clk32k, TP, core_pwr_req, cpu_pwr_req, pwr_int_n
	{TEGRA_PINGROUP_PTA,   TEGRA_MUX_I2C2,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// gen2_i2c_scl_sda
	{TEGRA_PINGROUP_RM,    TEGRA_MUX_I2C,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// gen1_i2c_scl_sda
	{TEGRA_PINGROUP_SDB,   TEGRA_MUX_SDIO3, 		TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// microsd_cmd
	{TEGRA_PINGROUP_SDC,   TEGRA_MUX_SDIO3, 		TEGRA_PUPD_NORMAL, 	TEGRA_TRI_NORMAL},		// microsd_data[0..3]
	{TEGRA_PINGROUP_SDD,   TEGRA_MUX_SDIO3, 		TEGRA_PUPD_NORMAL, 	TEGRA_TRI_NORMAL},		// microsd_clk
	{TEGRA_PINGROUP_SDIO1, TEGRA_MUX_SDIO1, 		TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// wlan_clk_cmd_sdio[0..3]
	{TEGRA_PINGROUP_SLXA,  TEGRA_MUX_SDIO3, 		TEGRA_PUPD_PULL_DOWN,		TEGRA_TRI_TRISTATE},		// NC
	{TEGRA_PINGROUP_SLXC,  TEGRA_MUX_SDIO3, 		TEGRA_PUPD_PULL_DOWN,		TEGRA_TRI_TRISTATE},		// NC
	{TEGRA_PINGROUP_SLXD,  TEGRA_MUX_SDIO3, 		TEGRA_PUPD_PULL_DOWN,		TEGRA_TRI_TRISTATE},		// NC
	{TEGRA_PINGROUP_SLXK,  TEGRA_MUX_SDIO3, 		TEGRA_PUPD_PULL_DOWN,		TEGRA_TRI_TRISTATE},		// NC
	{TEGRA_PINGROUP_SPDI,  TEGRA_MUX_RSVD, 			TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// touch_reset_n
	{TEGRA_PINGROUP_SPDO,  TEGRA_MUX_RSVD, 			TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// hdmi_reg_en
	{TEGRA_PINGROUP_SPIA,  TEGRA_MUX_GMI,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// spi2_ipc_mosi (NU)
	{TEGRA_PINGROUP_SPIB,  TEGRA_MUX_GMI,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// spi2_ipc_miso (NU)
	{TEGRA_PINGROUP_SPIC,  TEGRA_MUX_GMI,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// spi2_ipc_sck_cs_n (NU)
	{TEGRA_PINGROUP_SPID,  TEGRA_MUX_GMI,			TEGRA_PUPD_PULL_UP, 	TEGRA_TRI_NORMAL},		// bt_wake_up_n
	{TEGRA_PINGROUP_SPIE,  TEGRA_MUX_GMI,			TEGRA_PUPD_NORMAL, 	TEGRA_TRI_TRISTATE},		// prox_out, touch_int_n
	{TEGRA_PINGROUP_SPIF,  TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// ear_bias_en
	{TEGRA_PINGROUP_SPIG,  TEGRA_MUX_SPI2_ALT,		TEGRA_PUPD_NORMAL,		TEGRA_TRI_TRISTATE},		// charger_irqb
	{TEGRA_PINGROUP_SPIH,  TEGRA_MUX_SPI2_ALT,		TEGRA_PUPD_PULL_UP, 	TEGRA_TRI_TRISTATE},		// batt_low_int_n
	{TEGRA_PINGROUP_UAA,   TEGRA_MUX_UARTA, 		TEGRA_PUPD_PULL_DOWN, 	TEGRA_TRI_NORMAL},		// uart1_ipc_rxd_txd_rts_cts
	{TEGRA_PINGROUP_UAB,   TEGRA_MUX_UARTA,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// ipc_srdy1, ipc_mrdy1, 1seg_int
	{TEGRA_PINGROUP_UAC,   TEGRA_MUX_RSVD,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// cp_reset, cp_pwron, ap_pwr_on_n, cp_reset_flag
	{TEGRA_PINGROUP_UAD,   TEGRA_MUX_IRDA,			TEGRA_PUPD_PULL_UP, 	TEGRA_TRI_NORMAL},		// uart2_tx_rx_ap20
	{TEGRA_PINGROUP_UCA,   TEGRA_MUX_UARTC, 		TEGRA_PUPD_PULL_UP, 	TEGRA_TRI_NORMAL},		// bt_uart
	{TEGRA_PINGROUP_UCB,   TEGRA_MUX_UARTC, 		TEGRA_PUPD_PULL_UP, 	TEGRA_TRI_NORMAL},		// bt_uart
	{TEGRA_PINGROUP_UDA,   TEGRA_MUX_SPI1,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},		// spi1_ipc
	{TEGRA_PINGROUP_CK32,  TEGRA_MUX_NONE,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},
	{TEGRA_PINGROUP_DDRC,  TEGRA_MUX_NONE,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},
	{TEGRA_PINGROUP_PMCA,  TEGRA_MUX_NONE,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},
	{TEGRA_PINGROUP_PMCB,  TEGRA_MUX_NONE,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},
	{TEGRA_PINGROUP_PMCC,  TEGRA_MUX_NONE,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},
	{TEGRA_PINGROUP_PMCD,  TEGRA_MUX_NONE,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},
	{TEGRA_PINGROUP_PMCE,  TEGRA_MUX_NONE,			TEGRA_PUPD_PULL_UP, 	TEGRA_TRI_NORMAL},
	{TEGRA_PINGROUP_XM2C,  TEGRA_MUX_NONE,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},
	{TEGRA_PINGROUP_XM2D,  TEGRA_MUX_NONE,			TEGRA_PUPD_NORMAL,		TEGRA_TRI_NORMAL},

