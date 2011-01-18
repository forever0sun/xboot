#ifndef __S5PV210_REG_LCD_H__
#define __S5PV210_REG_LCD_H__

#include <configs.h>
#include <default.h>

#define S5PV210_VIDCON0	  						(0xf8000000)
#define S5PV210_VIDCON1	  						(0xf8000004)
#define S5PV210_VIDCON2	  						(0xf8000008)
#define S5PV210_VIDCON3	  						(0xf800000c)

#define S5PV210_VIDTCON0	  					(0xf8000010)
#define S5PV210_VIDTCON1	  					(0xf8000014)
#define S5PV210_VIDTCON2	  					(0xf8000018)
#define S5PV210_VIDTCON3	  					(0xf800001c)

#define S5PV210_WINCON0	  						(0xf8000020)
#define S5PV210_WINCON1	  						(0xf8000024)
#define S5PV210_WINCON2	  						(0xf8000028)
#define S5PV210_WINCON3	  						(0xf800002C)
#define S5PV210_WINCON4	  						(0xf8000030)

#define S5PV210_SHADOWCON  						(0xf8000034)

#define S5PV210_VIDOSD0A  						(0xf8000040)
#define S5PV210_VIDOSD0B  						(0xf8000044)
#define S5PV210_VIDOSD0C  						(0xf8000048)

#define S5PV210_VIDOSD1A  						(0xf8000050)
#define S5PV210_VIDOSD1B  						(0xf8000054)
#define S5PV210_VIDOSD1C  						(0xf8000058)
#define S5PV210_VIDOSD1D  						(0xf800005c)

#define S5PV210_VIDOSD2A  						(0xf8000060)
#define S5PV210_VIDOSD2B  						(0xf8000064)
#define S5PV210_VIDOSD2C  						(0xf8000068)
#define S5PV210_VIDOSD2D  						(0xf800006c)

#define S5PV210_VIDOSD3A  						(0xf8000070)
#define S5PV210_VIDOSD3B  						(0xf8000074)
#define S5PV210_VIDOSD3C  						(0xf8000078)

#define S5PV210_VIDOSD4A  						(0xf8000080)
#define S5PV210_VIDOSD4B  						(0xf8000084)
#define S5PV210_VIDOSD4C  						(0xf8000088)

#define S5PV210_VIDW00ADD0B0					(0xf80000a0)
#define S5PV210_VIDW00ADD0B1					(0xf80000a4)
#define S5PV210_VIDW00ADD0B2					(0xf80020a0)
#define S5PV210_VIDW01ADD0B0					(0xf80000a8)
#define S5PV210_VIDW01ADD0B1					(0xf80000ac)
#define S5PV210_VIDW01ADD0B2					(0xf80020a8)
#define S5PV210_VIDW02ADD0B0					(0xf80000b0)
#define S5PV210_VIDW02ADD0B1					(0xf80000b4)
#define S5PV210_VIDW02ADD0B2					(0xf80020b0)
#define S5PV210_VIDW03ADD0B0					(0xf80000b8)
#define S5PV210_VIDW03ADD0B1					(0xf80000bc)
#define S5PV210_VIDW03ADD0B2					(0xf80020b8)
#define S5PV210_VIDW04ADD0B0					(0xf80000c0)
#define S5PV210_VIDW04ADD0B1					(0xf80000c4)
#define S5PV210_VIDW04ADD0B2					(0xf80020c0)

#define S5PV210_VIDW00ADD1B0					(0xf80000d0)
#define S5PV210_VIDW00ADD1B1					(0xf80000d4)
#define S5PV210_VIDW00ADD1B2					(0xf80020d0)
#define S5PV210_VIDW01ADD1B0					(0xf80000d8)
#define S5PV210_VIDW01ADD1B1					(0xf80000dc)
#define S5PV210_VIDW01ADD1B2					(0xf80020d8)
#define S5PV210_VIDW02ADD1B0					(0xf80000e0)
#define S5PV210_VIDW02ADD1B1					(0xf80000e4)
#define S5PV210_VIDW02ADD1B2					(0xf80020e0)
#define S5PV210_VIDW03ADD1B0					(0xf80000e8)
#define S5PV210_VIDW03ADD1B1					(0xf80000ec)
#define S5PV210_VIDW03ADD1B2					(0xf80020e8)
#define S5PV210_VIDW04ADD1B0					(0xf80000f0)
#define S5PV210_VIDW04ADD1B1					(0xf80000f4)
#define S5PV210_VIDW04ADD1B2					(0xf80020f0)

#define S5PV210_VIDW00ADD2						(0xf8000100)
#define S5PV210_VIDW01ADD2						(0xf8000104)
#define S5PV210_VIDW02ADD2						(0xf8000108)
#define S5PV210_VIDW03ADD2						(0xf800010c)
#define S5PV210_VIDW04ADD2						(0xf8000110)

#define S5PV210_VIDINTCON0 						(0xf8000130)
#define S5PV210_VIDINTCON1 						(0xf8000134)

#define S5PV210_W1KEYCON0 						(0xf8000140)
#define S5PV210_W1KEYCON1 						(0xf8000144)
#define S5PV210_W2KEYCON0 						(0xf8000148)
#define S5PV210_W2KEYCON1 						(0xf800014c)
#define S5PV210_W3KEYCON0 						(0xf8000150)
#define S5PV210_W3KEYCON1 						(0xf8000154)
#define S5PV210_W4KEYCON0 						(0xf8000158)
#define S5PV210_W4KEYCON1 						(0xf800015c)

#define S5PV210_W1KEYALPHA 						(0xf8000160)
#define S5PV210_W2KEYALPHA 						(0xf8000164)
#define S5PV210_W3KEYALPHA 						(0xf8000168)
#define S5PV210_W4KEYALPHA 						(0xf800016c)

#define S5PV210_DITHMODE  						(0xf8000170)

#define S5PV210_WIN0MAP  						(0xf8000180)
#define S5PV210_WIN1MAP  						(0xf8000184)
#define S5PV210_WIN2MAP  						(0xf8000188)
#define S5PV210_WIN3MAP  						(0xf800018c)
#define S5PV210_WIN4MAP  						(0xf8000190)

#define S5PV210_WPALCON_H  						(0xf800019c)
#define S5PV210_WPALCON_L  						(0xf80001ac)

#define S5PV210_TRIGCON  						(0xf80001a4)

#define S5PV210_ITUIFCON0  						(0xf80001a8)

#define S5PV210_I80IFCONA0 						(0xf80001b0)
#define S5PV210_I80IFCONA1 						(0xf80001b4)
#define S5PV210_I80IFCONB0 						(0xf80001b8)
#define S5PV210_I80IFCONB1 						(0xf80001bc)

#define S5PV210_COLORGAINCON					(0xf80001c0)

#define S5PV210_LDI_CMDCON0						(0xf80001d0)
#define S5PV210_LDI_CMDCON1						(0xf80001d4)

#define S5PV210_SIFCCON0						(0xf80001e0)
#define S5PV210_SIFCCON1						(0xf80001e4)
#define S5PV210_SIFCCON2						(0xf80001e8)

#define S5PV210_HUECODEF00						(0xf80001ec)
#define S5PV210_HUECODEF01						(0xf80001f0)
#define S5PV210_HUECODEF10						(0xf80001f4)
#define S5PV210_HUECODEF11						(0xf80001f8)
#define S5PV210_HUEOFFSET						(0xf80001fc)

#define S5PV210_VIDW0ALPHA0						(0xf8000200)
#define S5PV210_VIDW0ALPHA1						(0xf8000204)
#define S5PV210_VIDW1ALPHA0						(0xf8000208)
#define S5PV210_VIDW1ALPHA1						(0xf800020c)
#define S5PV210_VIDW2ALPHA0						(0xf8000210)
#define S5PV210_VIDW2ALPHA1						(0xf8000214)
#define S5PV210_VIDW3ALPHA0						(0xf8000218)
#define S5PV210_VIDW3ALPHA1						(0xf800021c)
#define S5PV210_VIDW4ALPHA0						(0xf8000220)
#define S5PV210_VIDW4ALPHA1						(0xf8000224)

#define S5PV210_BLENDEQ1						(0xf8000244)
#define S5PV210_BLENDEQ2						(0xf8000248)
#define S5PV210_BLENDEQ3						(0xf800024c)
#define S5PV210_BLENDEQ4						(0xf8000250)
#define S5PV210_BLENDCON						(0xf8000260)

#define S5PV210_W0RTQOSCON						(0xf8000264)
#define S5PV210_W1RTQOSCON						(0xf8000268)
#define S5PV210_W2RTQOSCON						(0xf800026c)
#define S5PV210_W3RTQOSCON						(0xf8000270)
#define S5PV210_W4RTQOSCON						(0xf8000274)

#define S5PV210_LDI_CMD0						(0xf8000280)
#define S5PV210_LDI_CMD1						(0xf8000284)
#define S5PV210_LDI_CMD2						(0xf8000288)
#define S5PV210_LDI_CMD3						(0xf800028c)
#define S5PV210_LDI_CMD4						(0xf8000290)
#define S5PV210_LDI_CMD5						(0xf8000294)
#define S5PV210_LDI_CMD6						(0xf8000298)
#define S5PV210_LDI_CMD7						(0xf800029c)
#define S5PV210_LDI_CMD8						(0xf80002a0)
#define S5PV210_LDI_CMD9						(0xf80002a4)
#define S5PV210_LDI_CMD10						(0xf80002a8)
#define S5PV210_LDI_CMD11						(0xf80002ac)

#define S5PV210_GAMMALUT_01_00					(0xf800037c)
#define S5PV210_GAMMALUT_03_02					(0xf8000380)
#define S5PV210_GAMMALUT_05_04					(0xf8000384)
#define S5PV210_GAMMALUT_07_06					(0xf8000388)
#define S5PV210_GAMMALUT_09_08					(0xf800038c)
#define S5PV210_GAMMALUT_11_10					(0xf8000390)
#define S5PV210_GAMMALUT_13_12					(0xf8000394)
#define S5PV210_GAMMALUT_15_14					(0xf8000398)
#define S5PV210_GAMMALUT_17_16					(0xf800039c)
#define S5PV210_GAMMALUT_19_18					(0xf80003a0)
#define S5PV210_GAMMALUT_21_20					(0xf80003a4)
#define S5PV210_GAMMALUT_23_22					(0xf80003a8)
#define S5PV210_GAMMALUT_25_24					(0xf80003ac)
#define S5PV210_GAMMALUT_27_26					(0xf80003b0)
#define S5PV210_GAMMALUT_29_28					(0xf80003b4)
#define S5PV210_GAMMALUT_31_30					(0xf80003b8)
#define S5PV210_GAMMALUT_33_32					(0xf80003bc)
#define S5PV210_GAMMALUT_35_34					(0xf80003c0)
#define S5PV210_GAMMALUT_37_36					(0xf80003c4)
#define S5PV210_GAMMALUT_39_38					(0xf80003c8)
#define S5PV210_GAMMALUT_41_40					(0xf80003dc)
#define S5PV210_GAMMALUT_43_42					(0xf80003d0)
#define S5PV210_GAMMALUT_45_44					(0xf80003d4)
#define S5PV210_GAMMALUT_47_46					(0xf80003d8)
#define S5PV210_GAMMALUT_49_48					(0xf80003dc)
#define S5PV210_GAMMALUT_51_50					(0xf80003e0)
#define S5PV210_GAMMALUT_53_52					(0xf80003e4)
#define S5PV210_GAMMALUT_55_54					(0xf80003e8)
#define S5PV210_GAMMALUT_57_56					(0xf80003ec)
#define S5PV210_GAMMALUT_59_58					(0xf80003f0)
#define S5PV210_GAMMALUT_61_60					(0xf80003f4)
#define S5PV210_GAMMALUT_63_62					(0xf80003f8)
#define S5PV210_GAMMALUT_xx_64					(0xf80003fc)

#define S5PV210_SHD_VIDW00ADD0					(0xf80040a0)
#define S5PV210_SHD_VIDW01ADD0					(0xf80040a8)
#define S5PV210_SHD_VIDW02ADD0					(0xf80040b0)
#define S5PV210_SHD_VIDW03ADD0					(0xf80040b8)
#define S5PV210_SHD_VIDW04ADD0					(0xf80040c0)

#define S5PV210_SHD_VIDW00ADD1					(0xf80040d0)
#define S5PV210_SHD_VIDW01ADD1					(0xf80040d8)
#define S5PV210_SHD_VIDW02ADD1					(0xf80040e0)
#define S5PV210_SHD_VIDW03ADD1					(0xf80040e8)
#define S5PV210_SHD_VIDW04ADD1					(0xf80040f0)

#define S5PV210_SHD_VIDW00ADD2					(0xf8004100)
#define S5PV210_SHD_VIDW01ADD2					(0xf8004104)
#define S5PV210_SHD_VIDW02ADD2					(0xf8004108)
#define S5PV210_SHD_VIDW03ADD2					(0xf800410c)
#define S5PV210_SHD_VIDW04ADD2					(0xf8004110)

#define S5PV210_WIN0_PALRAM						(0xf8002400)
#define S5PV210_WIN1_PALRAM						(0xf8002800)
#define S5PV210_WIN2_PALRAM						(0xf8002c00)
#define S5PV210_WIN3_PALRAM						(0xf8003000)
#define S5PV210_WIN4_PALRAM						(0xf8003400)


/* VIDCON0 */
#define S5PV210_VIDCON0_DSI_DISABLE				(0 << 30)
#define S5PV210_VIDCON0_DSI_ENABLE				(1 << 30)
#define S5PV210_VIDCON0_SCAN_PROGRESSIVE		(0 << 29)
#define S5PV210_VIDCON0_SCAN_INTERLACE			(1 << 29)
#define S5PV210_VIDCON0_SCAN_MASK				(1 << 29)
#define S5PV210_VIDCON0_VIDOUT_RGB				(0 << 26)
#define S5PV210_VIDCON0_VIDOUT_ITU				(1 << 26)
#define S5PV210_VIDCON0_VIDOUT_I80LDI0			(2 << 26)
#define S5PV210_VIDCON0_VIDOUT_I80LDI1			(3 << 26)
#define S5PV210_VIDCON0_VIDOUT_WB_RGB			(4 << 26)
#define S5PV210_VIDCON0_VIDOUT_WB_I80LDI0		(6 << 26)
#define S5PV210_VIDCON0_VIDOUT_WB_I80LDI1		(7 << 26)
#define S5PV210_VIDCON0_VIDOUT_MASK				(7 << 26)
#define S5PV210_VIDCON0_PNRMODE_RGB_P			(0 << 17)
#define S5PV210_VIDCON0_PNRMODE_BGR_P			(1 << 17)
#define S5PV210_VIDCON0_PNRMODE_RGB_S			(2 << 17)
#define S5PV210_VIDCON0_PNRMODE_BGR_S			(3 << 17)
#define S5PV210_VIDCON0_PNRMODE_MASK			(3 << 17)
#define S5PV210_VIDCON0_PNRMODE_SHIFT			(17)
#define S5PV210_VIDCON0_CLKVALUP_ALWAYS			(0 << 16)
#define S5PV210_VIDCON0_CLKVALUP_START_FRAME	(1 << 16)
#define S5PV210_VIDCON0_CLKVALUP_MASK			(1 << 16)
#define S5PV210_VIDCON0_CLKVAL_F(x)				(((x) & 0xff) << 6)
#define S5PV210_VIDCON0_VCLKEN_NORMAL			(0 << 5)
#define S5PV210_VIDCON0_VCLKEN_FREERUN			(1 << 5)
#define S5PV210_VIDCON0_VCLKEN_MASK				(1 << 5)
#define S5PV210_VIDCON0_CLKDIR_DIRECTED			(0 << 4)
#define S5PV210_VIDCON0_CLKDIR_DIVIDED			(1 << 4)
#define S5PV210_VIDCON0_CLKDIR_MASK				(1 << 4)
#define S5PV210_VIDCON0_CLKSEL_HCLK				(0 << 2)
#define S5PV210_VIDCON0_CLKSEL_SCLK				(1 << 2)
#define S5PV210_VIDCON0_CLKSEL_MASK				(1 << 2)
#define S5PV210_VIDCON0_ENVID_ENABLE			(1 << 1)
#define S5PV210_VIDCON0_ENVID_DISABLE			(0 << 1)
#define S5PV210_VIDCON0_ENVID_F_ENABLE			(1 << 0)
#define S5PV210_VIDCON0_ENVID_F_DISABLE			(0 << 0)

/* VIDCON1 */
#define S5PV210_VIDCON1_IVCLK_FALLING_EDGE		(0 << 7)
#define S5PV210_VIDCON1_IVCLK_RISING_EDGE		(1 << 7)
#define S5PV210_VIDCON1_IHSYNC_NORMAL			(0 << 6)
#define S5PV210_VIDCON1_IHSYNC_INVERT			(1 << 6)
#define S5PV210_VIDCON1_IVSYNC_NORMAL			(0 << 5)
#define S5PV210_VIDCON1_IVSYNC_INVERT			(1 << 5)
#define S5PV210_VIDCON1_IVDEN_NORMAL			(0 << 4)
#define S5PV210_VIDCON1_IVDEN_INVERT			(1 << 4)

/* VIDCON2 */
#define S5PV210_VIDCON2_EN601_DISABLE			(0 << 23)
#define S5PV210_VIDCON2_EN601_ENABLE			(1 << 23)
#define S5PV210_VIDCON2_EN601_MASK				(1 << 23)
#define S5PV210_VIDCON2_WB_DISABLE				(0 << 15)
#define S5PV210_VIDCON2_WB_ENABLE				(1 << 15)
#define S5PV210_VIDCON2_WB_MASK					(1 << 15)
#define S5PV210_VIDCON2_TVFORMATSEL_HW			(0 << 14)
#define S5PV210_VIDCON2_TVFORMATSEL_SW			(1 << 14)
#define S5PV210_VIDCON2_TVFORMATSEL_MASK		(1 << 14)
#define S5PV210_VIDCON2_TVFORMATSEL_YUV422		(1 << 12)
#define S5PV210_VIDCON2_TVFORMATSEL_YUV444		(2 << 12)
#define S5PV210_VIDCON2_TVFORMATSEL_YUV_MASK	(3 << 12)
#define S5PV210_VIDCON2_ORGYUV_YCBCR			(0 << 8)
#define S5PV210_VIDCON2_ORGYUV_CBCRY			(1 << 8)
#define S5PV210_VIDCON2_ORGYUV_MASK				(1 << 8)
#define S5PV210_VIDCON2_YUVORD_CBCR				(0 << 7)
#define S5PV210_VIDCON2_YUVORD_CRCB				(1 << 7)
#define S5PV210_VIDCON2_YUVORD_MASK				(1 << 7)

/* VIDTCON0 */
#define S5PV210_VIDTCON0_VBPDE(x)				(((x) & 0xff) << 24)
#define S5PV210_VIDTCON0_VBPD(x)				(((x) & 0xff) << 16)
#define S5PV210_VIDTCON0_VFPD(x)				(((x) & 0xff) << 8)
#define S5PV210_VIDTCON0_VSPW(x)				(((x) & 0xff) << 0)

/* VIDTCON1 */
#define S5PV210_VIDTCON1_VFPDE(x)				(((x) & 0xff) << 24)
#define S5PV210_VIDTCON1_HBPD(x)				(((x) & 0xff) << 16)
#define S5PV210_VIDTCON1_HFPD(x)				(((x) & 0xff) << 8)
#define S5PV210_VIDTCON1_HSPW(x)				(((x) & 0xff) << 0)

/* VIDTCON2 */
#define S5PV210_VIDTCON2_LINEVAL(x)				(((x) & 0x7ff) << 11)
#define S5PV210_VIDTCON2_HOZVAL(x)				(((x) & 0x7ff) << 0)

#endif /* __S5PV210_REG_LCD_H__ */
