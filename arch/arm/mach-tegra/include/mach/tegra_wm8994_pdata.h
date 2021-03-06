/*
 * arch/arm/mach-tegra/include/mach/tegra_wm8994_pdata.h
 *
 * Copyright 2011 NVIDIA, Inc.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

struct tegra_wm8994_platform_data {
	int gpio_spk_orientation;
	int gpio_hp_det;
	int gpio_mic_bias;
};
