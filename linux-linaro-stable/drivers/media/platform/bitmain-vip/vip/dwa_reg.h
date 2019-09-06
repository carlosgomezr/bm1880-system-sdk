#ifndef _BMD_DWA_REG_H_
#define _BMD_DWA_REG_H_


#if defined(ENV_BMTEST) || defined(ENV_EMU)
#define REG_DWA_BASE 0x0A0A0000
#else
#define REG_DWA_BASE 0
#endif

#define REG_DWA_CMDQ_BASE (REG_DWA_BASE + 0x1000)

#define REG_DWA_GLB_CTRL			(REG_DWA_BASE + 0x00)
#define REG_DWA_DATA_FORMAT			(REG_DWA_BASE + 0x04)
#define REG_DWA_AXIM				(REG_DWA_BASE + 0x08)
#define REG_DWA_CG_EN				(REG_DWA_BASE + 0x0c)
#define REG_DWA_INT_EN				(REG_DWA_BASE + 0x20)
#define REG_DWA_INT_CLR				(REG_DWA_BASE + 0x24)
#define REG_DWA_INT_STATUS			(REG_DWA_BASE + 0x28)
#define REG_DWA_INT_RAW_STATUS			(REG_DWA_BASE + 0x2c)
#define REG_DWA_SRC_DATA_RD_BW			(REG_DWA_BASE + 0x80)
#define REG_DWA_DST_DATA_WR_BW			(REG_DWA_BASE + 0x84)
#define REG_DWA_MESH_ID_BW			(REG_DWA_BASE + 0x88)
#define REG_DWA_MESH_TABLE_BW			(REG_DWA_BASE + 0x8c)
#define REG_DWA_MESH_CACHE_HIT_NUM		(REG_DWA_BASE + 0x90)
#define REG_DWA_MESH_CACHE_MISS_NUM		(REG_DWA_BASE + 0x94)
#define REG_DWA_MESH_CACHE_SLICE_NUM		(REG_DWA_BASE + 0x98)
#define REG_DWA_FRAME_RUN_TIME			(REG_DWA_BASE + 0x9c)
#define REG_DWA_MESH_ID_RDMA_ERR_ADDR_LOW	(REG_DWA_BASE + 0xa0)
#define REG_DWA_MESH_ID_RDMA_ERR_ADDR_HIGH	(REG_DWA_BASE + 0xa4)
#define REG_DWA_MESH_TBL_RDMA_ERR_ADDR_LOW	(REG_DWA_BASE + 0xa8)
#define REG_DWA_MESH_TBL_RDMA_ERR_ADDR_HIGH	(REG_DWA_BASE + 0xac)
#define REG_DWA_MESH_TBL_RDMA_ERR_CNT		(REG_DWA_BASE + 0xb0)
#define REG_DWA_MESH_SLICE_START_ADDR_LOW	(REG_DWA_BASE + 0xb4)
#define REG_DWA_MESH_SLICE_START_ADDR_HIGH	(REG_DWA_BASE + 0xb8)
#define REG_DWA_DEBUG_BUS0			(REG_DWA_BASE + 0xd0)
#define REG_DWA_DEBUG_BUS1			(REG_DWA_BASE + 0xd4)
#define REG_DWA_DEBUG_BUS2			(REG_DWA_BASE + 0xd8)
#define REG_DWA_DEBUG_BUS3			(REG_DWA_BASE + 0xdc)
#define REG_DWA_DEBUG_BUS4			(REG_DWA_BASE + 0xe0)
#define REG_DWA_DEBUG_BUS5			(REG_DWA_BASE + 0xe4)
#define REG_DWA_DEBUG_BUS6			(REG_DWA_BASE + 0xe8)
#define REG_DWA_DEBUG_BUS7			(REG_DWA_BASE + 0xec)
#define REG_DWA_DEBUG_BUS8			(REG_DWA_BASE + 0xf0)
#define REG_DWA_DEBUG_BUS9			(REG_DWA_BASE + 0xf4)
#define REG_DWA_DEBUG_BUS10			(REG_DWA_BASE + 0xf8)
#define REG_DWA_DEBUG_BUS11			(REG_DWA_BASE + 0xfc)
#define REG_DWA_MESH_ID_BASE_ADDR_LOW		(REG_DWA_BASE + 0x100)
#define REG_DWA_MESH_ID_BASE_ADDR_HIGH		(REG_DWA_BASE + 0x104)
#define REG_DWA_IMG_SRC_SIZE			(REG_DWA_BASE + 0x110)
#define REG_DWA_R_Y_SRC_IMG_BASE_ADDR_LOW	(REG_DWA_BASE + 0x120)
#define REG_DWA_R_Y_SRC_IMG_BASE_ADDR_HIGH	(REG_DWA_BASE + 0x124)
#define REG_DWA_R_Y_SRC_PITCH			(REG_DWA_BASE + 0x128)
#define REG_DWA_R_Y_SRC_OFFSET			(REG_DWA_BASE + 0x130)
#define REG_DWA_G_U_SRC_IMG_BASE_ADDR_LOW	(REG_DWA_BASE + 0x134)
#define REG_DWA_G_U_SRC_IMG_BASE_ADDR_HIGH	(REG_DWA_BASE + 0x138)
#define REG_DWA_G_U_SRC_PITCH			(REG_DWA_BASE + 0x13c)
#define REG_DWA_G_U_SRC_OFFSET			(REG_DWA_BASE + 0x140)
#define REG_DWA_B_V_SRC_IMG_BASE_ADDR_LOW	(REG_DWA_BASE + 0x144)
#define REG_DWA_B_V_SRC_IMG_BASE_ADDR_HIGH	(REG_DWA_BASE + 0x148)
#define REG_DWA_B_V_SRC_PITCH			(REG_DWA_BASE + 0x14c)
#define REG_DWA_B_V_SRC_OFFSET			(REG_DWA_BASE + 0x150)
#define REG_DWA_IMG_DST_SIZE			(REG_DWA_BASE + 0x158)
#define REG_DWA_R_Y_DST_IMG_BASE_ADDR_LOW	(REG_DWA_BASE + 0x15c)
#define REG_DWA_R_Y_DST_IMG_BASE_ADDR_HIGH	(REG_DWA_BASE + 0x160)
#define REG_DWA_R_Y_DST_PITCH			(REG_DWA_BASE + 0x164)
#define REG_DWA_R_Y_DST_OFFSET			(REG_DWA_BASE + 0x16c)
#define REG_DWA_G_U_DST_IMG_BASE_ADDR_LOW	(REG_DWA_BASE + 0x170)
#define REG_DWA_G_U_DST_IMG_BASE_ADDR_HIGH	(REG_DWA_BASE + 0x174)
#define REG_DWA_G_U_DST_PITCH			(REG_DWA_BASE + 0x178)
#define REG_DWA_G_U_DST_OFFSET			(REG_DWA_BASE + 0x180)
#define REG_DWA_B_V_DST_IMG_BASE_ADDR_LOW	(REG_DWA_BASE + 0x184)
#define REG_DWA_B_V_DST_IMG_BASE_ADDR_HIGH	(REG_DWA_BASE + 0x188)
#define REG_DWA_B_V_DST_PITCH			(REG_DWA_BASE + 0x18c)
#define REG_DWA_B_V_DST_OFFSET			(REG_DWA_BASE + 0x194)
#define REG_DWA_INTERP_OUTPUT_CTRL0		(REG_DWA_BASE + 0x1b0)
#define REG_DWA_INTERP_OUTPUT_CTRL1		(REG_DWA_BASE + 0x1b4)
#define REG_DWA_INTERP_OUTPUT_CTRL2		(REG_DWA_BASE + 0x1b8)
#define REG_DWA_SRC_DATA_CACHE_CTRL		(REG_DWA_BASE + 0x1c0)
#define REG_DWA_INTERP_HCOEFF_PHASE0		(REG_DWA_BASE + 0x200)
#define REG_DWA_INTERP_HCOEFF_PHASE1		(REG_DWA_BASE + 0x204)
#define REG_DWA_INTERP_HCOEFF_PHASE2		(REG_DWA_BASE + 0x208)
#define REG_DWA_INTERP_HCOEFF_PHASE3		(REG_DWA_BASE + 0x20c)
#define REG_DWA_INTERP_HCOEFF_PHASE4		(REG_DWA_BASE + 0x210)
#define REG_DWA_INTERP_HCOEFF_PHASE5		(REG_DWA_BASE + 0x214)
#define REG_DWA_INTERP_HCOEFF_PHASE6		(REG_DWA_BASE + 0x218)
#define REG_DWA_INTERP_HCOEFF_PHASE7		(REG_DWA_BASE + 0x21c)
#define REG_DWA_INTERP_HCOEFF_PHASE8		(REG_DWA_BASE + 0x220)
#define REG_DWA_INTERP_HCOEFF_PHASE9		(REG_DWA_BASE + 0x224)
#define REG_DWA_INTERP_HCOEFF_PHASE10		(REG_DWA_BASE + 0x228)
#define REG_DWA_INTERP_HCOEFF_PHASE11		(REG_DWA_BASE + 0x22c)
#define REG_DWA_INTERP_HCOEFF_PHASE12		(REG_DWA_BASE + 0x230)
#define REG_DWA_INTERP_HCOEFF_PHASE13		(REG_DWA_BASE + 0x234)
#define REG_DWA_INTERP_HCOEFF_PHASE14		(REG_DWA_BASE + 0x238)
#define REG_DWA_INTERP_HCOEFF_PHASE15		(REG_DWA_BASE + 0x23c)
#define REG_DWA_INTERP_HCOEFF_PHASE16		(REG_DWA_BASE + 0x240)
#define REG_DWA_INTERP_HCOEFF_PHASE17		(REG_DWA_BASE + 0x244)
#define REG_DWA_INTERP_HCOEFF_PHASE18		(REG_DWA_BASE + 0x248)
#define REG_DWA_INTERP_HCOEFF_PHASE19		(REG_DWA_BASE + 0x24c)
#define REG_DWA_INTERP_HCOEFF_PHASE20		(REG_DWA_BASE + 0x250)
#define REG_DWA_INTERP_HCOEFF_PHASE21		(REG_DWA_BASE + 0x254)
#define REG_DWA_INTERP_HCOEFF_PHASE22		(REG_DWA_BASE + 0x258)
#define REG_DWA_INTERP_HCOEFF_PHASE23		(REG_DWA_BASE + 0x25c)
#define REG_DWA_INTERP_HCOEFF_PHASE24		(REG_DWA_BASE + 0x260)
#define REG_DWA_INTERP_HCOEFF_PHASE25		(REG_DWA_BASE + 0x264)
#define REG_DWA_INTERP_HCOEFF_PHASE26		(REG_DWA_BASE + 0x268)
#define REG_DWA_INTERP_HCOEFF_PHASE27		(REG_DWA_BASE + 0x26c)
#define REG_DWA_INTERP_HCOEFF_PHASE28		(REG_DWA_BASE + 0x270)
#define REG_DWA_INTERP_HCOEFF_PHASE29		(REG_DWA_BASE + 0x274)
#define REG_DWA_INTERP_HCOEFF_PHASE30		(REG_DWA_BASE + 0x278)
#define REG_DWA_INTERP_HCOEFF_PHASE31		(REG_DWA_BASE + 0x27c)
#define REG_DWA_INTERP_VCOEFF_PHASE0		(REG_DWA_BASE + 0x300)
#define REG_DWA_INTERP_VCOEFF_PHASE1		(REG_DWA_BASE + 0x304)
#define REG_DWA_INTERP_VCOEFF_PHASE2		(REG_DWA_BASE + 0x308)
#define REG_DWA_INTERP_VCOEFF_PHASE3		(REG_DWA_BASE + 0x30c)
#define REG_DWA_INTERP_VCOEFF_PHASE4		(REG_DWA_BASE + 0x310)
#define REG_DWA_INTERP_VCOEFF_PHASE5		(REG_DWA_BASE + 0x314)
#define REG_DWA_INTERP_VCOEFF_PHASE6		(REG_DWA_BASE + 0x318)
#define REG_DWA_INTERP_VCOEFF_PHASE7		(REG_DWA_BASE + 0x31c)
#define REG_DWA_INTERP_VCOEFF_PHASE8		(REG_DWA_BASE + 0x320)
#define REG_DWA_INTERP_VCOEFF_PHASE9		(REG_DWA_BASE + 0x324)
#define REG_DWA_INTERP_VCOEFF_PHASE10		(REG_DWA_BASE + 0x328)
#define REG_DWA_INTERP_VCOEFF_PHASE11		(REG_DWA_BASE + 0x32c)
#define REG_DWA_INTERP_VCOEFF_PHASE12		(REG_DWA_BASE + 0x330)
#define REG_DWA_INTERP_VCOEFF_PHASE13		(REG_DWA_BASE + 0x334)
#define REG_DWA_INTERP_VCOEFF_PHASE14		(REG_DWA_BASE + 0x338)
#define REG_DWA_INTERP_VCOEFF_PHASE15		(REG_DWA_BASE + 0x33c)
#define REG_DWA_INTERP_VCOEFF_PHASE16		(REG_DWA_BASE + 0x340)
#define REG_DWA_INTERP_VCOEFF_PHASE17		(REG_DWA_BASE + 0x344)
#define REG_DWA_INTERP_VCOEFF_PHASE18		(REG_DWA_BASE + 0x348)
#define REG_DWA_INTERP_VCOEFF_PHASE19		(REG_DWA_BASE + 0x34c)
#define REG_DWA_INTERP_VCOEFF_PHASE20		(REG_DWA_BASE + 0x350)
#define REG_DWA_INTERP_VCOEFF_PHASE21		(REG_DWA_BASE + 0x354)
#define REG_DWA_INTERP_VCOEFF_PHASE22		(REG_DWA_BASE + 0x358)
#define REG_DWA_INTERP_VCOEFF_PHASE23		(REG_DWA_BASE + 0x35c)
#define REG_DWA_INTERP_VCOEFF_PHASE24		(REG_DWA_BASE + 0x360)
#define REG_DWA_INTERP_VCOEFF_PHASE25		(REG_DWA_BASE + 0x364)
#define REG_DWA_INTERP_VCOEFF_PHASE26		(REG_DWA_BASE + 0x368)
#define REG_DWA_INTERP_VCOEFF_PHASE27		(REG_DWA_BASE + 0x36c)
#define REG_DWA_INTERP_VCOEFF_PHASE28		(REG_DWA_BASE + 0x370)
#define REG_DWA_INTERP_VCOEFF_PHASE29		(REG_DWA_BASE + 0x374)
#define REG_DWA_INTERP_VCOEFF_PHASE30		(REG_DWA_BASE + 0x378)
#define REG_DWA_INTERP_VCOEFF_PHASE31		(REG_DWA_BASE + 0x37c)


#endif // _BMD_DWA_REG_H_
