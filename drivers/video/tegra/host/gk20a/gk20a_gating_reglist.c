/*
 * Copyright (c) 2012-2013, NVIDIA Corporation.  All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License.
 *
 *  This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 * This file is autogenerated.  Do not edit.
 */

#ifndef __gk20a_gating_reglist_h__
#define __gk20a_gating_reglist_h__

#include <linux/types.h>
#include "dev.h"
#include "gk20a_gating_reglist.h"

struct gating_desc {
	u32 addr;
	u32 prod;
	u32 disable;
};
/* slcg gr */
const struct gating_desc gk20a_slcg_gr[] = {
	{.addr = 0x004041f4, .prod = 0x00000000, .disable = 0x03fffffe},
	{.addr = 0x00409894, .prod = 0x00000040, .disable = 0x0003fffe},
	{.addr = 0x004078c4, .prod = 0x00000000, .disable = 0x000001fe},
	{.addr = 0x00406004, .prod = 0x00000000, .disable = 0x0001fffe},
	{.addr = 0x00405864, .prod = 0x00000000, .disable = 0x000001fe},
	{.addr = 0x00405910, .prod = 0x00000000, .disable = 0xfffffffe},
	{.addr = 0x00408044, .prod = 0x00000000, .disable = 0x000007fe},
	{.addr = 0x00407004, .prod = 0x00000000, .disable = 0x0000001e},
	{.addr = 0x0041a894, .prod = 0x00000000, .disable = 0x0003fffe},
	{.addr = 0x00418504, .prod = 0x00000000, .disable = 0x0001fffe},
	{.addr = 0x0041860c, .prod = 0x00000000, .disable = 0x000001fe},
	{.addr = 0x0041868c, .prod = 0x00000000, .disable = 0x0000001e},
	{.addr = 0x0041871c, .prod = 0x00000000, .disable = 0x0000003e},
	{.addr = 0x00418388, .prod = 0x00000000, .disable = 0x00000001},
	{.addr = 0x0041882c, .prod = 0x00000000, .disable = 0x0001fffe},
	{.addr = 0x00418bc0, .prod = 0x00000000, .disable = 0x000001fe},
	{.addr = 0x00418974, .prod = 0x00000000, .disable = 0x0001fffe},
	{.addr = 0x00418c74, .prod = 0x00000000, .disable = 0xfffffffe},
	{.addr = 0x00418cf4, .prod = 0x00000000, .disable = 0xfffffffe},
	{.addr = 0x00418d74, .prod = 0x00000000, .disable = 0xfffffffe},
	{.addr = 0x00418f10, .prod = 0x00000000, .disable = 0xfffffffe},
	{.addr = 0x00418e10, .prod = 0x00000000, .disable = 0xfffffffe},
	{.addr = 0x00419024, .prod = 0x00000000, .disable = 0x000001fe},
	{.addr = 0x00419a44, .prod = 0x00000000, .disable = 0x0000000e},
	{.addr = 0x00419a4c, .prod = 0x00000000, .disable = 0x000001fe},
	{.addr = 0x00419a54, .prod = 0x00000000, .disable = 0x0000003e},
	{.addr = 0x00419a5c, .prod = 0x00000000, .disable = 0x0000000e},
	{.addr = 0x00419a64, .prod = 0x00000000, .disable = 0x000001fe},
	{.addr = 0x00419a6c, .prod = 0x00000000, .disable = 0x0000000e},
	{.addr = 0x00419a74, .prod = 0x00000000, .disable = 0x0000000e},
	{.addr = 0x00419a7c, .prod = 0x00000000, .disable = 0x0000003e},
	{.addr = 0x00419a84, .prod = 0x00000000, .disable = 0x0000000e},
	{.addr = 0x00419ad0, .prod = 0x00000000, .disable = 0x0000000e},
	{.addr = 0x0041986c, .prod = 0x0000dfc0, .disable = 0x00fffffe},
	{.addr = 0x00419cd8, .prod = 0x00000000, .disable = 0x001ffffe},
	{.addr = 0x00419ce0, .prod = 0x00000000, .disable = 0x001ffffe},
	{.addr = 0x00419c74, .prod = 0x00000000, .disable = 0x0000001e},
	{.addr = 0x00419fd4, .prod = 0x00000000, .disable = 0x0003fffe},
	{.addr = 0x00419fdc, .prod = 0x00000000, .disable = 0xfffffffe},
	{.addr = 0x00419fe4, .prod = 0x00000000, .disable = 0x0000000e},
	{.addr = 0x00419ff4, .prod = 0x00000000, .disable = 0x00003ffe},
	{.addr = 0x00419ffc, .prod = 0x00000000, .disable = 0x0001fffe},
	{.addr = 0x0041be2c, .prod = 0x020bbfc0, .disable = 0xfffffffe},
	{.addr = 0x0041bfec, .prod = 0x00000000, .disable = 0xfffffffe},
	{.addr = 0x0041bed4, .prod = 0x00000000, .disable = 0xfffffffe},
	{.addr = 0x00408814, .prod = 0x00000000, .disable = 0x0001fffe},
	{.addr = 0x0040881c, .prod = 0x00000000, .disable = 0x0001fffe},
	{.addr = 0x00408a84, .prod = 0x00000000, .disable = 0x0001fffe},
	{.addr = 0x00408a8c, .prod = 0x00000000, .disable = 0x0001fffe},
	{.addr = 0x00408a94, .prod = 0x00000000, .disable = 0x0001fffe},
	{.addr = 0x00408a9c, .prod = 0x00000000, .disable = 0x0001fffe},
	{.addr = 0x00408aa4, .prod = 0x00000000, .disable = 0x0001fffe},
	{.addr = 0x00408aac, .prod = 0x00000000, .disable = 0x0001fffe},
	{.addr = 0x004089ac, .prod = 0x00000000, .disable = 0x0001fffe},
	{.addr = 0x00408a24, .prod = 0x00000000, .disable = 0x000001ff},
};

/* slcg perf */
const struct gating_desc gk20a_slcg_perf[] = {
	{.addr = 0x001be018, .prod = 0x000001ff, .disable = 0x00000000},
	{.addr = 0x001bc018, .prod = 0x000001ff, .disable = 0x00000000},
	{.addr = 0x001b8018, .prod = 0x000001ff, .disable = 0x00000000},
	{.addr = 0x001b4124, .prod = 0x00000001, .disable = 0x00000000},
};

/* blcg gr */
const struct gating_desc gk20a_blcg_gr[] = {
	{.addr = 0x004041f0, .prod = 0x00004046, .disable = 0x00000000},
	{.addr = 0x00409890, .prod = 0x0000007f, .disable = 0x00000000},
	{.addr = 0x004098b0, .prod = 0x0000007f, .disable = 0x00000000},
	{.addr = 0x004078c0, .prod = 0x00000042, .disable = 0x00000000},
	{.addr = 0x00406000, .prod = 0x00004044, .disable = 0x00000000},
	{.addr = 0x00405860, .prod = 0x00004042, .disable = 0x00000000},
	{.addr = 0x0040590c, .prod = 0x00004044, .disable = 0x00000000},
	{.addr = 0x00408040, .prod = 0x00004044, .disable = 0x00000000},
	{.addr = 0x00407000, .prod = 0x00004041, .disable = 0x00000000},
	{.addr = 0x00405bf0, .prod = 0x00004044, .disable = 0x00000000},
	{.addr = 0x0041a890, .prod = 0x0000007f, .disable = 0x00000000},
	{.addr = 0x0041a8b0, .prod = 0x0000007f, .disable = 0x00000000},
	{.addr = 0x00418500, .prod = 0x00004044, .disable = 0x00000000},
	{.addr = 0x00418608, .prod = 0x00004042, .disable = 0x00000000},
	{.addr = 0x00418688, .prod = 0x00004042, .disable = 0x00000000},
	{.addr = 0x00418718, .prod = 0x00000042, .disable = 0x00000000},
	{.addr = 0x00418828, .prod = 0x00000044, .disable = 0x00000000},
	{.addr = 0x00418bbc, .prod = 0x00004042, .disable = 0x00000000},
	{.addr = 0x00418970, .prod = 0x00004042, .disable = 0x00000000},
	{.addr = 0x00418c70, .prod = 0x00004044, .disable = 0x00000000},
	{.addr = 0x00418cf0, .prod = 0x00004044, .disable = 0x00000000},
	{.addr = 0x00418d70, .prod = 0x00004044, .disable = 0x00000000},
	{.addr = 0x00418f0c, .prod = 0x00004044, .disable = 0x00000000},
	{.addr = 0x00418e0c, .prod = 0x00004044, .disable = 0x00000000},
	{.addr = 0x00419020, .prod = 0x00004042, .disable = 0x00000000},
	{.addr = 0x00419038, .prod = 0x00000042, .disable = 0x00000000},
	{.addr = 0x00419a40, .prod = 0x00004042, .disable = 0x00000000},
	{.addr = 0x00419a48, .prod = 0x00004042, .disable = 0x00000000},
	{.addr = 0x00419a50, .prod = 0x00004042, .disable = 0x00000000},
	{.addr = 0x00419a58, .prod = 0x00004042, .disable = 0x00000000},
	{.addr = 0x00419a60, .prod = 0x00004042, .disable = 0x00000000},
	{.addr = 0x00419a68, .prod = 0x00004042, .disable = 0x00000000},
	{.addr = 0x00419a70, .prod = 0x00004042, .disable = 0x00000000},
	{.addr = 0x00419a78, .prod = 0x00004042, .disable = 0x00000000},
	{.addr = 0x00419a80, .prod = 0x00004042, .disable = 0x00000000},
	{.addr = 0x00419acc, .prod = 0x00004047, .disable = 0x00000000},
	{.addr = 0x00419868, .prod = 0x00000043, .disable = 0x00000000},
	{.addr = 0x00419cd4, .prod = 0x00004042, .disable = 0x00000000},
	{.addr = 0x00419cdc, .prod = 0x00004042, .disable = 0x00000000},
	{.addr = 0x00419c70, .prod = 0x00004045, .disable = 0x00000000},
	{.addr = 0x00419fd0, .prod = 0x00004043, .disable = 0x00000000},
	{.addr = 0x00419fd8, .prod = 0x00004045, .disable = 0x00000000},
	{.addr = 0x00419fe0, .prod = 0x00004042, .disable = 0x00000000},
	{.addr = 0x00419fe8, .prod = 0x00004042, .disable = 0x00000000},
	{.addr = 0x00419ff0, .prod = 0x00004044, .disable = 0x00000000},
	{.addr = 0x00419ff8, .prod = 0x00004042, .disable = 0x00000000},
	{.addr = 0x00419f90, .prod = 0x00004042, .disable = 0x00000000},
	{.addr = 0x0041be28, .prod = 0x00000042, .disable = 0x00000000},
	{.addr = 0x0041bfe8, .prod = 0x00004044, .disable = 0x00000000},
	{.addr = 0x0041bed0, .prod = 0x00004044, .disable = 0x00000000},
	{.addr = 0x00408810, .prod = 0x00004042, .disable = 0x00000000},
	{.addr = 0x00408818, .prod = 0x00004042, .disable = 0x00000000},
	{.addr = 0x00408a80, .prod = 0x00004042, .disable = 0x00000000},
	{.addr = 0x00408a88, .prod = 0x00004042, .disable = 0x00000000},
	{.addr = 0x00408a90, .prod = 0x00004042, .disable = 0x00000000},
	{.addr = 0x00408a98, .prod = 0x00004042, .disable = 0x00000000},
	{.addr = 0x00408aa0, .prod = 0x00004042, .disable = 0x00000000},
	{.addr = 0x00408aa8, .prod = 0x00004042, .disable = 0x00000000},
	{.addr = 0x004089a8, .prod = 0x00004042, .disable = 0x00000000},
	{.addr = 0x004089b0, .prod = 0x00000042, .disable = 0x00000000},
	{.addr = 0x004089b8, .prod = 0x00004042, .disable = 0x00000000},
};

/* pg gr */
const struct gating_desc gk20a_pg_gr[] = {
	{.addr = 0x004041f8, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x004041fc, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00409898, .prod = 0x10140000, .disable = 0x00000000},
	{.addr = 0x0040989c, .prod = 0xff00000a, .disable = 0x00000000},
	{.addr = 0x004078c8, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x004078cc, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00406008, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x0040600c, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00405868, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x0040586c, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00405914, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x00405924, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00408048, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x0040804c, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00407008, .prod = 0x10140000, .disable = 0x00000000},
	{.addr = 0x0040700c, .prod = 0xff00000a, .disable = 0x00000000},
	{.addr = 0x00405bf8, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x00405bfc, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x0041a898, .prod = 0x10140000, .disable = 0x00000000},
	{.addr = 0x0041a89c, .prod = 0xff00000a, .disable = 0x00000000},
	{.addr = 0x00418510, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x00418514, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00418610, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x00418614, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00418690, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x00418694, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00418720, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x00418724, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00418840, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x00418844, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00418bc4, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x00418bc8, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00418978, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x0041897c, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00418c78, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x00418c7c, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00418cf8, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x00418cfc, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00418d78, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x00418d7c, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00418f14, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x00418f18, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00418e14, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x00418e18, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00419030, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x00419050, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00419a88, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x00419a8c, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00419a90, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x00419a94, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00419a98, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x00419a9c, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00419aa0, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x00419aa4, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00419ad4, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x00419ad8, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00419870, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x00419874, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00419ce4, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x00419cf0, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00419c78, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x00419c7c, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00419fa0, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x00419fa4, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00419fa8, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x00419fac, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00419fb0, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x00419fb4, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00419fb8, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x00419fbc, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00419fc0, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x00419fc4, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00419fc8, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x00419fcc, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x0041be30, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x0041be34, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x0041bff0, .prod = 0x10747c00, .disable = 0x00000000},
	{.addr = 0x0041bff4, .prod = 0xff00000a, .disable = 0x00000000},
	{.addr = 0x0041bed8, .prod = 0x10240a00, .disable = 0x00000000},
	{.addr = 0x0041bee0, .prod = 0xff00000a, .disable = 0x00000000},
	{.addr = 0x00408820, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x00408824, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00408828, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x0040882c, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00408ac0, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x00408ac4, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00408ac8, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x00408acc, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00408ad0, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x00408ad4, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00408ad8, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x00408adc, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00408ae0, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x00408ae4, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x00408ae8, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x00408aec, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x004089c0, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x004089c4, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x004089c8, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x004089cc, .prod = 0xff00a725, .disable = 0x00000000},
	{.addr = 0x004089d0, .prod = 0x10940000, .disable = 0x00000000},
	{.addr = 0x004089d4, .prod = 0xff00a725, .disable = 0x00000000},
};

/* therm gr */
const struct gating_desc gk20a_slcg_therm[] = {
	{.addr = 0x000206b8, .prod = 0x00000000, .disable = 0x0000000f},
};

/* static inline functions */
void gr_gk20a_slcg_gr_load_gating_prod(struct gk20a *g,
	bool prod)
{
	u32 i;
	u32 size = sizeof(gk20a_slcg_gr) / sizeof(struct gating_desc);
	for (i = 0; i < size; i++) {
		if (prod)
			gk20a_writel(g, gk20a_slcg_gr[i].addr,
				gk20a_slcg_gr[i].prod);
		else
			gk20a_writel(g, gk20a_slcg_gr[i].addr,
				 gk20a_slcg_gr[i].disable);
	}
}

void gr_gk20a_slcg_perf_load_gating_prod(struct gk20a *g,
	bool prod)
{
	u32 i;
	u32 size = sizeof(gk20a_slcg_perf) / sizeof(struct gating_desc);
	for (i = 0; i < size; i++) {
		if (prod)
			gk20a_writel(g, gk20a_slcg_perf[i].addr,
				gk20a_slcg_perf[i].prod);
		else
			gk20a_writel(g, gk20a_slcg_perf[i].addr,
				gk20a_slcg_perf[i].disable);
	}
}

void gr_gk20a_blcg_gr_load_gating_prod(struct gk20a *g,
	bool prod)
{
	u32 i;
	u32 size = sizeof(gk20a_blcg_gr) / sizeof(struct gating_desc);
	for (i = 0; i < size; i++) {
		if (prod)
			gk20a_writel(g, gk20a_blcg_gr[i].addr,
				gk20a_blcg_gr[i].prod);
		else
			gk20a_writel(g, gk20a_blcg_gr[i].addr,
				gk20a_blcg_gr[i].disable);
	}
}

void gr_gk20a_pg_gr_load_gating_prod(struct gk20a *g,
	bool prod)
{
	u32 i;
	u32 size = sizeof(gk20a_pg_gr) / sizeof(struct gating_desc);
	for (i = 0; i < size; i++) {
		if (prod)
			gk20a_writel(g, gk20a_pg_gr[i].addr,
				gk20a_pg_gr[i].prod);
		else
			gk20a_writel(g, gk20a_pg_gr[i].addr,
				gk20a_pg_gr[i].disable);
	}
}

void gr_gk20a_slcg_therm_load_gating_prod(struct gk20a *g,
	bool prod)
{
	u32 i;
	u32 size = sizeof(gk20a_slcg_therm) / sizeof(struct gating_desc);
	for (i = 0; i < size; i++) {
		if (prod)
			gk20a_writel(g, gk20a_slcg_therm[i].addr,
				gk20a_slcg_therm[i].prod);
		else
			gk20a_writel(g, gk20a_slcg_therm[i].addr,
				gk20a_slcg_therm[i].disable);
	}
}

#endif /* __gk20a_gating_reglist_h__ */
