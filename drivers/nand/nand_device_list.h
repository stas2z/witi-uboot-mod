#ifndef __NAND_DEVICE_LIST_H__
#define __NAND_DEVICE_LIST_H__

static const flashdev_info gen_FlashTable[]={
	/* Macronix */
	{0xC2F1, 0x801DC2, 4, 8,  128, 128, 2048,  64, 0x00844333, "MX30LF1G08AA", 0},
	{0xC2F1, 0x809502, 4, 8,  128, 128, 2048,  64, 0x00444332, "MX30LF1G18AC", 0},
	{0xC2DA, 0x909506, 5, 8,  256, 128, 2048,  64, 0x00444332, "MX30LF2G18AC", 0},
	{0xC2DC, 0x909556, 5, 8,  512, 128, 2048,  64, 0x00444332, "MX30LF4G18AC", 0},

	/* ESMT */
	{0x92F1, 0x8095FF, 4, 8,  128, 128, 2048,  64, 0x00844333, "F59L1G81A", 0},
	{0xC8DA, 0x909544, 5, 8,  256, 128, 2048,  64, 0x00844333, "F59L2G81A", 0},
	{0xC8DC, 0x909554, 5, 8,  512, 128, 2048,  64, 0x00844333, "F59L4G81A", 0},

	/* Spansion */
	{0x01F1, 0x801D01, 4, 8,  128, 128, 2048,  64, 0x00844333, "S34ML01G100TF", 0},
	{0x01DA, 0x909546, 5, 8,  256, 128, 2048, 112, 0x00844333, "S34ML02G200TF", 0},
	{0x01DC, 0x909556, 5, 8,  512, 128, 2048, 112, 0x00844333, "S34ML04G200TF", 0},

	/* Samsung */
	{0xECD3, 0x519558, 5, 8, 1024, 128, 2048,  64, 0x00044333, "K9K8G8000", 0},

	/* Toshiba */
	{0x98D3, 0x902676, 5, 8, 1024, 256, 4096, 224, 0x00C25332, "TC58NVG3S0F", 0},

	/* Micron */
	{0x2CF1, 0x809504, 4, 8,  128, 128, 2048,  64, 0x00844333, "MT29F1G08ABAEA", 0},
	{0x2C48, 0x0026A9, 5, 8, 2048, 512, 4096, 224, 0x00844333, "MT29F16G08ABABA", 0},

	{0x0000, 0x000000, 0, 0,    0,   0,    0,   0,          0, {0}, 0},
};

#endif
