/*const enum XsColor vex3f {
	XS_COLOR_SNOW = vex3f(255 / 255, 250 / 255, 250 / 255),
	XS_COLOR_GHOST_WHITE = vex3f(248 / 255, 248 / 255, 255 / 255),
	XS_COLOR_WHITE_SMOKE = vex3f(245 / 255, 245 / 255, 245 / 255),
	XS_COLOR_GAINS_BORO = vex3f(220 / 255, 220 / 255, 220 / 255),
	XS_COLOR_FLORAL_WHITE = vex3f(255 / 255, 250 / 255, 240 / 255),
	XS_COLOR_OLD_LACE = vex3f(253 / 255, 245 / 255, 230 / 255),
	XS_COLOR_LINEN = vex3f(250 / 255, 240 / 255, 230 / 255),
	XS_COLOR_ANTIQUE_WHITE = vex3f(250 / 255, 235 / 255, 215 / 255),
	XS_COLOR_PAPAYA_WHIP = vex3f(255 / 255, 239 / 255, 213 / 255),
	XS_COLOR_BLANCHED_ALMOND = vex3f(255 / 255, 235 / 255, 205 / 255),
	XS_COLOR_BISQUE = vex3f(255 / 255, 228 / 255, 196 / 255),
	XS_COLOR_PEACH_PUFF = vex3f(255 / 255, 218 / 255, 185 / 255),
	XS_COLOR_NAVAJO_WHITE = vex3f(255 / 255, 222 / 255, 173 / 255),
	XS_COLOR_MOCCASIN = vex3f(255 / 255, 228 / 255, 181 / 255),
	XS_COLOR_CORNSILK = vex3f(255 / 255, 248 / 255, 220 / 255),
	XS_COLOR_IVORY = vex3f(255 / 255, 255 / 255, 240 / 255),
	XS_COLOR_LEMON_CHIFFON = vex3f(255 / 255, 250 / 255, 205 / 255),
	XS_COLOR_SEASHELL = vex3f(255 / 255, 245 / 255, 238 / 255),
	XS_COLOR_HONEYDEW = vex3f(240 / 255, 255 / 255, 240 / 255),
	XS_COLOR_MINT_CREAM = vex3f(245 / 255, 255 / 255, 250 / 255),
	XS_COLOR_AZURE = vex3f(240 / 255, 255 / 255, 255 / 255),
	XS_COLOR_ALICE_BLUE = vex3f(240 / 255, 248 / 255, 255 / 255),
	XS_COLOR_LAVENDER = vex3f(230 / 255, 230 / 255, 250 / 255),
	XS_COLOR_LAVENDER_BLUSH = vex3f(255 / 255, 240 / 255, 245 / 255),
	XS_COLOR_MISTY_ROSE = vex3f(255 / 255, 228 / 255, 225 / 255),
	XS_COLOR_DARK_SLATE_GREY = vex3f(47 / 255, 79 / 255, 79 / 255),
	XS_COLOR_DIM_GREY = vex3f(105 / 255, 105 / 255, 105 / 255),
	XS_COLOR_SLATE_GREY = vex3f(112 / 255, 128 / 255, 144 / 255),
	XS_COLOR_LIGHT_SLATE_GREY = vex3f(119 / 255, 136 / 255, 153 / 255),
	XS_COLOR_GRAY = vex3f(190 / 255, 190 / 255, 190 / 255),
	XS_COLOR_LIGHT_GREY = vex3f(211 / 255, 211 / 255, 211 / 255),
	XS_COLOR_MIDNIGHT_BLUE = vex3f(25 / 255, 25 / 255, 112 / 255),
	XS_COLOR_NAVY = vex3f(0 / 255, 0 / 255, 128 / 255),
	XS_COLOR_CORNFLOWER_BLUE = vex3f(100 / 255, 149 / 255, 237 / 255),
	XS_COLOR_DARK_SLATE_BLUE = vex3f(72 / 255, 61 / 255, 139 / 255),
	XS_COLOR_SLATE_BLUE = vex3f(106 / 255, 90 / 255, 205 / 255),
	XS_COLOR_MEDIUM_SLATE_BLUE = vex3f(123 / 255, 104 / 255, 238 / 255),
	XS_COLOR_LIGHT_SLATE_BLUE = vex3f(132 / 255, 112 / 255, 255 / 255),
	XS_COLOR_MEDIUM_BLUE = vex3f(0 / 255, 0 / 255, 205 / 255),
	XS_COLOR_ROYAL_BLUE = vex3f(65 / 255, 105 / 255, 225 / 255),
	XS_COLOR_BLUE = vex3f(0 / 255, 0 / 255, 255 / 255),
	XS_COLOR_DODGER_BLUE = vex3f(30 / 255, 144 / 255, 255 / 255),
	XS_COLOR_DEEP_SKY_BLUE = vex3f(0 / 255, 191 / 255, 255 / 255),
	XS_COLOR_SKY_BLUE = vex3f(135 / 255, 206 / 255, 235 / 255),
	XS_COLOR_STEEL_BLUE = vex3f(70 / 255, 130 / 255, 180 / 255),
	XS_COLOR_LIGHT_STEEL_BLUE = vex3f(176 / 255, 196 / 255, 222 / 255),
	XS_COLOR_LIGHT_BLUE = vex3f(173 / 255, 216 / 255, 230 / 255),
	XS_COLOR_POWDER_BLUE = vex3f(176 / 255, 224 / 255, 230 / 255),
	XS_COLOR_PALE_TURQUOSIE = vex3f(175 / 255, 238 / 255, 238 / 255),
	XS_COLOR_DARK_TURQUOSIE = vex3f(0 / 255, 206 / 255, 209 / 255),
	XS_COLOR_MEDIUM_TURQUOSIE = vex3f(72 / 255, 209 / 255, 204 / 255),
	XS_COLOR_TURQUOSIE = vex3f(64 / 255, 224 / 255, 208 / 255),
	XS_COLOR_CYAN = vex3f(0 / 255, 255 / 255, 255 / 255),
	XS_COLOR_LIGHT_CYAN = vex3f(224 / 255, 255 / 255, 255 / 255),
	XS_COLOR_CADET_BLUE = vex3f(95 / 255, 158 / 255, 160 / 255),
	XS_COLOR_MEDIUM_AQUAMARINE = vex3f(102 / 255, 205 / 255, 170 / 255),
	XS_COLOR_AQUAMARINE = vex3f(127 / 255, 255 / 255, 212 / 255),
	XS_COLOR_DARK_GREEN = vex3f(0 / 255, 100 / 255, 0 / 255),
	XS_COLOR_DARK_PLIVE_GREEN = vex3f(85 / 255, 107 / 255, 47 / 255),
	XS_COLOR_DARK_SEA_GREEN = vex3f(143 / 255, 188 / 255, 143 / 255),
	XS_COLOR_SEA_GREEN = vex3f(46 / 255, 139 / 255, 87 / 255),
	XS_COLOR_MEDIUM_SEA_GREEN = vex3f(60 / 255, 179 / 255, 113 / 255),
	XS_COLOR_LIGHT_SEA_GREEN = vex3f(32 / 255, 178 / 255, 170 / 255),
	XS_COLOR_PALE_GREEN = vex3f(152 / 255, 251 / 255, 152 / 255),
	XS_COLOR_SPRING_GREEN = vex3f(0 / 255, 255 / 255, 127 / 255),
	XS_COLOR_LAWN_GREEN = vex3f(124 / 255, 252 / 255, 0 / 255),
	XS_COLOR_GREEN = vex3f(0 / 255, 255 / 255, 0 / 255),
	XS_COLOR_CHARTREUSE = vex3f(127 / 255, 255 / 255, 0 / 255),
	XS_COLOR_GREEN_YELLOW = vex3f(173 / 255, 255 / 255, 47 / 255),
	XS_COLOR_LIME_GREEN = vex3f(50 / 255, 205 / 255, 50 / 255),
	XS_COLOR_FOREST_GREEN = vex3f(34 / 255, 139 / 255, 34 / 255),
	XS_COLOR_OLIVE_DRAB = vex3f(107 / 255, 142 / 255, 35 / 255),
	XS_COLOR_DARK_KHAKI = vex3f(189 / 255, 183 / 255, 107 / 255),
	XS_COLOR_PALE_GOLDENROD = vex3f(238 / 255, 232 / 255, 170 / 255),
	XS_COLOR_LIGHT_YELLOW = vex3f(255 / 255, 255 / 255, 224 / 255),
	XS_COLOR_YELLOW = vex3f(255 / 255, 255 / 255, 0 / 255),
	XS_COLOR_GOLD = vex3f(255 / 255, 215 / 255, 0 / 255),
	XS_COLOR_ROSY_BROWN = vex3f(188 / 255, 143 / 255, 143 / 255),
	XS_COLOR_INDIAN_RED = vex3f(205 / 255, 92 / 255, 92 / 255),
	XS_COLOR_SADDLE_BROWN = vex3f(139 / 255, 69 / 255, 19 / 255),
	XS_COLOR_SIENNA = vex3f(160 / 255, 82 / 255, 45 / 255),
	XS_COLOR_PERU = vex3f(205 / 255, 133 / 255, 63 / 255),
	XS_COLOR_BURLY_WOOD = vex3f(222 / 255, 184 / 255, 135 / 255),
	XS_COLOR_BEIGE = vex3f(245 / 255, 245 / 255, 220 / 255),
	XS_COLOR_WHEAT = vex3f(245 / 255, 222 / 255, 179 / 255),
	XS_COLOR_SANDY_BROWN = vex3f(244 / 255, 164 / 255, 96 / 255),
	XS_COLOR_TAN = vex3f(210 / 255, 180 / 255, 140 / 255),
	XS_COLOR_CHOCOLATE = vex3f(210 / 255, 105 / 255, 30 / 255),
	XS_COLOR_FIREBRICK = vex3f(178 / 255, 34 / 255, 34 / 255),
	XS_COLOR_BROWN = vex3f(165 / 255, 42 / 255, 42 / 255),
	XS_COLOR_DARK_SALMON = vex3f(233 / 255, 150 / 255, 122 / 255),
	XS_COLOR_SALMON = vex3f(250 / 255, 128 / 255, 114 / 255),
	XS_COLOR_LIGHT_SALMON = vex3f(255 / 255, 160 / 255, 122 / 255),
	XS_COLOR_ORANGE = vex3f(255 / 255, 165 / 255, 0 / 255),
	XS_COLOR_DARK_ORANGE = vex3f(255 / 255, 140 / 255, 0 / 255),
	XS_COLOR_CORAL = vex3f(255 / 255, 127 / 255, 80 / 255),
	XS_COLOR_LIGHT_CORAL = vex3f(240 / 255, 128 / 255, 128 / 255),
	XS_COLOR_TOMATO = vex3f(255 / 255, 99 / 255, 71 / 255),
	XS_COLOR_ORANGE_RED = vex3f(255 / 255, 69 / 255, 0 / 255),
	XS_COLOR_RED = vex3f(255 / 255, 0 / 255, 0 / 255),
	XS_COLOR_HOT_PINK = vex3f(255 / 255, 105 / 255, 180 / 255),
	XS_COLOR_DEEP_PINK = vex3f(255 / 255, 20 / 255, 147 / 255),
	XS_COLOR_PINK = vex3f(255 / 255, 192 / 255, 203 / 255),
	XS_COLOR_LIGHT_PINK = vex3f(255 / 255, 182 / 255, 193 / 255),
	XS_COLOR_PALE_VIOLET_RED = vex3f(219 / 255, 112 / 255, 147 / 255),
	XS_COLOR_MAROON = vex3f(176 / 255, 48 / 255, 96 / 255),
	XS_COLOR_MEDIUM_VIOLET_RED = vex3f(199 / 255, 21 / 255, 133 / 255),
	XS_COLOR_VIOLET_RED = vex3f(208 / 255, 32 / 255, 144 / 255),
	XS_COLOR_MAGENTA = vex3f(255 / 255, 0 / 255, 255 / 255),
	XS_COLOR_VIOLET = vex3f(238 / 255, 130 / 255, 238 / 255),
	XS_COLOR_PLUM = vex3f(221 / 255, 160 / 255, 221 / 255),
	XS_COLOR_ORCHID = vex3f(218 / 255, 112 / 255, 214 / 255),
	XS_COLOR_MEDIUM_ORCHID = vex3f(186 / 255, 85 / 255, 211 / 255),
	XS_COLOR_DARK_ORCHID = vex3f(153 / 255, 50 / 255, 204 / 255),
	XS_COLOR_DARK_VIOLET = vex3f(148 / 255, 0 / 255, 211 / 255),
	XS_COLOR_BLUE_VIOLET = vex3f(138 / 255, 43 / 255, 226 / 255),
	XS_COLOR_PURPLE = vex3f(160 / 255, 32 / 255, 240 / 255),
	XS_COLOR_THISTLE = vex3f(216 / 255, 191 / 255, 216 / 255)
};
*/
#define XS_COLOR_SNOW				255/255, 250/255, 250/255
#define XS_COLOR_GHOST_WHITE		248/255, 248/255, 255/255
#define XS_COLOR_WHITE_SMOKE		245/255, 245/255, 245/255
#define XS_COLOR_GAINS_BORO			220/255, 220/255, 220/255
#define XS_COLOR_FLORAL_WHITE		255/255, 250/255, 240/255
#define XS_COLOR_OLD_LACE			253/255, 245/255, 230/255
#define XS_COLOR_LINEN				250/255, 240/255, 230/255
#define XS_COLOR_ANTIQUE_WHITE		250/255, 235/255, 215/255
#define XS_COLOR_PAPAYA_WHIP		255/255, 239/255, 213/255
#define XS_COLOR_BLANCHED_ALMOND	255/255, 235/255, 205/255
#define XS_COLOR_BISQUE				255/255, 228/255, 196/255
#define XS_COLOR_PEACH_PUFF			255/255, 218/255, 185/255
#define XS_COLOR_NAVAJO_WHITE		255/255, 222/255, 173/255
#define XS_COLOR_MOCCASIN			255/255, 228/255, 181/255
#define XS_COLOR_CORNSILK			255/255, 248/255, 220/255
#define XS_COLOR_IVORY				255/255, 255/255, 240/255
#define XS_COLOR_LEMON_CHIFFON		255/255, 250/255, 205/255
#define XS_COLOR_SEASHELL			255/255, 245/255, 238/255
#define XS_COLOR_HONEYDEW			240/255, 255/255, 240/255
#define XS_COLOR_MINT_CREAM			245/255, 255/255, 250/255
#define XS_COLOR_AZURE				240/255, 255/255, 255/255
#define XS_COLOR_ALICE_BLUE			240/255, 248/255, 255/255
#define XS_COLOR_LAVENDER			230/255, 230/255, 250/255
#define XS_COLOR_LAVENDER_BLUSH		255/255, 240/255, 245/255
#define XS_COLOR_MISTY_ROSE			255/255, 228/255, 225/255
#define XS_COLOR_DARK_SLATE_GREY	47 /255, 79	/255, 79 /255
#define XS_COLOR_DIM_GREY			105/255, 105/255, 105/255
#define XS_COLOR_SLATE_GREY			112/255, 128/255, 144/255
#define XS_COLOR_LIGHT_SLATE_GREY	119/255, 136/255, 153/255
#define XS_COLOR_GRAY				190/255, 190/255, 190/255
#define XS_COLOR_LIGHT_GREY			211/255, 211/255, 211/255
#define XS_COLOR_MIDNIGHT_BLUE		25 /255, 25	/255, 112/255
#define XS_COLOR_NAVY				0  /255, 0	/255, 128/255
#define XS_COLOR_CORNFLOWER_BLUE	100/255, 149/255, 237/255
#define XS_COLOR_DARK_SLATE_BLUE	72 /255, 61	/255, 139/255
#define XS_COLOR_SLATE_BLUE			106/255, 90	/255, 205/255
#define XS_COLOR_MEDIUM_SLATE_BLUE	123/255, 104/255, 238/255
#define XS_COLOR_LIGHT_SLATE_BLUE	132/255, 112/255, 255/255
#define XS_COLOR_MEDIUM_BLUE		0  /255, 0	/255, 205/255
#define XS_COLOR_ROYAL_BLUE			65 /255, 105/255, 225/255
#define XS_COLOR_BLUE				0  /255, 0	/255, 255/255
#define XS_COLOR_DODGER_BLUE		30 /255, 144/255, 255/255
#define XS_COLOR_DEEP_SKY_BLUE		0  /255, 191/255, 255/255
#define XS_COLOR_SKY_BLUE			135/255, 206/255, 235/255
#define XS_COLOR_STEEL_BLUE			70 /255, 130/255, 180/255
#define XS_COLOR_LIGHT_STEEL_BLUE	176/255, 196/255, 222/255
#define XS_COLOR_LIGHT_BLUE			173/255, 216/255, 230/255
#define XS_COLOR_POWDER_BLUE		176/255, 224/255, 230/255
#define XS_COLOR_PALE_TURQUOSIE		175/255, 238/255, 238/255
#define XS_COLOR_DARK_TURQUOSIE		0  /255, 206/255, 209/255
#define XS_COLOR_MEDIUM_TURQUOSIE	72 /255, 209/255, 204/255
#define XS_COLOR_TURQUOSIE			64 /255, 224/255, 208/255
#define XS_COLOR_CYAN				0  /255, 255/255, 255/255
#define XS_COLOR_LIGHT_CYAN			224/255, 255/255, 255/255
#define XS_COLOR_CADET_BLUE			95 /255, 158/255, 160/255
#define XS_COLOR_MEDIUM_AQUAMARINE	102/255, 205/255, 170/255
#define XS_COLOR_AQUAMARINE			127/255, 255/255, 212/255
#define XS_COLOR_DARK_GREEN			0  /255, 100/255, 0	 /255
#define XS_COLOR_DARK_PLIVE_GREEN	85 /255, 107/255, 47 /255
#define XS_COLOR_DARK_SEA_GREEN		143/255, 188/255, 143/255
#define XS_COLOR_SEA_GREEN			46 /255, 139/255, 87 /255
#define XS_COLOR_MEDIUM_SEA_GREEN	60 /255, 179/255, 113/255
#define XS_COLOR_LIGHT_SEA_GREEN	32 /255, 178/255, 170/255
#define XS_COLOR_PALE_GREEN			152/255, 251/255, 152/255
#define XS_COLOR_SPRING_GREEN		0  /255, 255/255, 127/255
#define XS_COLOR_LAWN_GREEN			124/255, 252/255, 0	 /255
#define XS_COLOR_GREEN				0  /255, 255/255, 0	 /255
#define XS_COLOR_CHARTREUSE			127/255, 255/255, 0	 /255
#define XS_COLOR_GREEN_YELLOW		173/255, 255/255, 47 /255
#define XS_COLOR_LIME_GREEN			50 /255, 205/255, 50 /255
#define XS_COLOR_FOREST_GREEN		34 /255, 139/255, 34 /255
#define XS_COLOR_OLIVE_DRAB			107/255, 142/255, 35 /255
#define XS_COLOR_DARK_KHAKI			189/255, 183/255, 107/255
#define XS_COLOR_PALE_GOLDENROD		238/255, 232/255, 170/255
#define XS_COLOR_LIGHT_YELLOW		255/255, 255/255, 224/255
#define XS_COLOR_YELLOW				255/255, 255/255, 0	 /255
#define XS_COLOR_GOLD				255/255, 215/255, 0	 /255
#define XS_COLOR_ROSY_BROWN			188/255, 143/255, 143/255
#define XS_COLOR_INDIAN_RED			205/255, 92	/255, 92 /255
#define XS_COLOR_SADDLE_BROWN		139/255, 69	/255, 19 /255
#define XS_COLOR_SIENNA				160/255, 82	/255, 45 /255
#define XS_COLOR_PERU				205/255, 133/255, 63 /255
#define XS_COLOR_BURLY_WOOD			222/255, 184/255, 135/255
#define XS_COLOR_BEIGE				245/255, 245/255, 220/255
#define XS_COLOR_WHEAT				245/255, 222/255, 179/255
#define XS_COLOR_SANDY_BROWN		244/255, 164/255, 96 /255
#define XS_COLOR_TAN				210/255, 180/255, 140/255
#define XS_COLOR_CHOCOLATE			210/255, 105/255, 30 /255
#define XS_COLOR_FIREBRICK			178/255, 34	/255, 34 /255
#define XS_COLOR_BROWN				165/255, 42	/255, 42 /255
#define XS_COLOR_DARK_SALMON		233/255, 150/255, 122/255
#define XS_COLOR_SALMON				250/255, 128/255, 114/255
#define XS_COLOR_LIGHT_SALMON		255/255, 160/255, 122/255
#define XS_COLOR_ORANGE				255/255, 165/255, 0	 /255
#define XS_COLOR_DARK_ORANGE		255/255, 140/255, 0	 /255
#define XS_COLOR_CORAL				255/255, 127/255, 80 /255
#define XS_COLOR_LIGHT_CORAL		240/255, 128/255, 128/255
#define XS_COLOR_TOMATO				255/255, 99	/255, 71 /255
#define XS_COLOR_ORANGE_RED			255/255, 69	/255, 0	 /255
#define XS_COLOR_RED				255/255, 0	/255, 0	 /255
#define XS_COLOR_HOT_PINK			255/255, 105/255, 180/255
#define XS_COLOR_DEEP_PINK			255/255, 20	/255, 147/255
#define XS_COLOR_PINK				255/255, 192/255, 203/255
#define XS_COLOR_LIGHT_PINK			255/255, 182/255, 193/255
#define XS_COLOR_PALE_VIOLET_RED	219/255, 112/255, 147/255
#define XS_COLOR_MAROON				176/255, 48	/255, 96 /255
#define XS_COLOR_MEDIUM_VIOLET_RED	199/255, 21	/255, 133/255
#define XS_COLOR_VIOLET_RED			208/255, 32	/255, 144/255
#define XS_COLOR_MAGENTA			255/255, 0	/255, 255/255
#define XS_COLOR_VIOLET				238/255, 130/255, 238/255
#define XS_COLOR_PLUM				221/255, 160/255, 221/255
#define XS_COLOR_ORCHID				218/255, 112/255, 214/255
#define XS_COLOR_MEDIUM_ORCHID		186/255, 85	/255, 211/255
#define XS_COLOR_DARK_ORCHID		153/255, 50	/255, 204/255
#define XS_COLOR_DARK_VIOLET		148/255, 0	/255, 211/255
#define XS_COLOR_BLUE_VIOLET		138/255, 43	/255, 226/255
#define XS_COLOR_PURPLE				160/255, 32 /255, 240/255
#define XS_COLOR_THISTLE			216/255, 191/255, 216/255

const vex3f XsColorSnow(255.f / 255.f, 250.f / 255.f, 250.f / 255.f);
const vex3f XsColorGhostWhite(248.f / 255.f, 248.f / 255.f, 255.f / 255.f);
const vex3f XsColorWhiteSmoke(245.f / 255.f, 245.f / 255.f, 245.f / 255.f);
const vex3f XsColorGainsBoro(220.f / 255.f, 220.f / 255.f, 220.f / 255.f);
const vex3f XsColorFloralWhite(255.f / 255.f, 250.f / 255.f, 240.f / 255.f);
const vex3f XsColorOldLace(253.f / 255.f, 245.f / 255.f, 230.f / 255.f);
const vex3f XsColorLinen(250.f / 255.f, 240.f / 255.f, 230.f / 255.f);
const vex3f XsColorAntiqueWhite(250.f / 255.f, 235.f / 255.f, 215.f / 255.f);
const vex3f XsColorPapayaWhip(255.f / 255.f, 239.f / 255.f, 213.f / 255.f);
const vex3f XsColorBlanchedAlmond(255.f / 255.f, 235.f / 255.f, 205.f / 255.f);
const vex3f XsColorBisque(255.f / 255.f, 228.f / 255.f, 196.f / 255.f);
const vex3f XsColorPeachPuff(255.f / 255.f, 218.f / 255.f, 185.f / 255.f);
const vex3f XsColorNavajoWhite(255.f / 255.f, 222.f / 255.f, 173.f / 255.f);
const vex3f XsColorMoccasin(255.f / 255.f, 228.f / 255.f, 181.f / 255.f);
const vex3f XsColorCornsilk(255.f / 255.f, 248.f / 255.f, 220.f / 255.f);
const vex3f XsColorIvory(255.f / 255.f, 255.f / 255.f, 240.f / 255.f);
const vex3f XsColorLemonChiffon(255.f / 255.f, 250.f / 255.f, 205.f / 255.f);
const vex3f XsColorSeashell(255.f / 255.f, 245.f / 255.f, 238.f / 255.f);
const vex3f XsColorHoneydew(240.f / 255.f, 255.f / 255.f, 240.f / 255.f);
const vex3f XsColorMintCream(245.f / 255.f, 255.f / 255.f, 250.f / 255.f);
const vex3f XsColorAzure(240.f / 255.f, 255.f / 255.f, 255.f / 255.f);
const vex3f XsColorAliceBlue(240.f / 255.f, 248.f / 255.f, 255.f / 255.f);
const vex3f XsColorLavender(230.f / 255.f, 230.f / 255.f, 250.f / 255.f);
const vex3f XsColorLavenderBlush(255.f / 255.f, 240.f / 255.f, 245.f / 255.f);
const vex3f XsColorMistyRose(255.f / 255.f, 228.f / 255.f, 225.f / 255.f);
const vex3f XsColorDarkSlateGrey(47.f / 255.f, 79.f / 255.f, 79.f / 255.f);
const vex3f XsColorDimGrey(105.f / 255.f, 105.f / 255.f, 105.f / 255.f);
const vex3f XsColorSlateGrey(112.f / 255.f, 128.f / 255.f, 144.f / 255.f);
const vex3f XsColorLightSlateGrey(119.f / 255.f, 136.f / 255.f, 153.f / 255.f);
const vex3f XsColorGray(190.f / 255.f, 190.f / 255.f, 190.f / 255.f);
const vex3f XsColorLightGrey(211.f / 255.f, 211.f / 255.f, 211.f / 255.f);
const vex3f XsColorMidnightBlue(25.f / 255.f, 25.f / 255.f, 112.f / 255.f);
const vex3f XsColorNavy(0.f / 255.f, 0.f / 255.f, 128.f / 255.f);
const vex3f XsColorCornflowerBlue(100.f / 255.f, 149.f / 255.f, 237.f / 255.f);
const vex3f XsColorDarkSlateBlue(72.f / 255.f, 61.f / 255.f, 139.f / 255.f);
const vex3f XsColorSlateBlue(106.f / 255.f, 90.f / 255.f, 205.f / 255.f);
const vex3f XsColorMediumSlateBlue(123.f / 255.f, 104.f / 255.f, 238.f / 255.f);
const vex3f XsColorLightSlateBlue(132.f / 255.f, 112.f / 255.f, 255.f / 255.f);
const vex3f XsColorMediumBlue(0.f / 255.f, 0.f / 255.f, 205.f / 255.f);
const vex3f XsColorRoyalBlue(65.f / 255.f, 105.f / 255.f, 225.f / 255.f);
const vex3f XsColorBlue(0.f / 255.f, 0.f / 255.f, 255.f / 255.f);
const vex3f XsColorDodgerBlue(30.f / 255.f, 144.f / 255.f, 255.f / 255.f);
const vex3f XsColorDeepSkyBlue(0.f / 255.f, 191.f / 255.f, 255.f / 255.f);
const vex3f XsColorSkyBlue(135.f / 255.f, 206.f / 255.f, 235.f / 255.f);
const vex3f XsColorSteelBlue(70.f / 255.f, 130.f / 255.f, 180.f / 255.f);
const vex3f XsColorLightSteelBlue(176.f / 255.f, 196.f / 255.f, 222.f / 255.f);
const vex3f XsColorLightBlue(173.f / 255.f, 216.f / 255.f, 230.f / 255.f);
const vex3f XsColorPowderBlue(176.f / 255.f, 224.f / 255.f, 230.f / 255.f);
const vex3f XsColorPaleTurquosie(175.f / 255.f, 238.f / 255.f, 238.f / 255.f);
const vex3f XsColorDarkTurquosie(0.f / 255.f, 206.f / 255.f, 209.f / 255.f);
const vex3f XsColorMediumTurquosie(72.f / 255.f, 209.f / 255.f, 204.f / 255.f);
const vex3f XsColorTurquosie(64.f / 255.f, 224.f / 255.f, 208.f / 255.f);
const vex3f XsColorCyan(0.f / 255.f, 255.f / 255.f, 255.f / 255.f);
const vex3f XsColorLightCyan(224.f / 255.f, 255.f / 255.f, 255.f / 255.f);
const vex3f XsColorCadetBlue(95.f / 255.f, 158.f / 255.f, 160.f / 255.f);
const vex3f XsColorMediumAquamarine(102.f / 255.f, 205.f / 255.f, 170.f / 255.f);
const vex3f XsColorAquamarine(127.f / 255.f, 255.f / 255.f, 212.f / 255.f);
const vex3f XsColorDarkGreen(0.f / 255.f, 100.f / 255.f, 0.f / 255.f);
const vex3f XsColorDarkPliveGreen(85.f / 255.f, 107.f / 255.f, 47.f / 255.f);
const vex3f XsColorDarkSeaGreen(143.f / 255.f, 188.f / 255.f, 143.f / 255.f);
const vex3f XsColorSeaGreen(46.f / 255.f, 139.f / 255.f, 87.f / 255.f);
const vex3f XsColorMediumSeaGreen(60.f / 255.f, 179.f / 255.f, 113.f / 255.f);
const vex3f XsColorLightSeaGreen(32.f / 255.f, 178.f / 255.f, 170.f / 255.f);
const vex3f XsColorPaleGreen(152.f / 255.f, 251.f / 255.f, 152.f / 255.f);
const vex3f XsColorSpringGreen(0.f / 255.f, 255.f / 255.f, 127.f / 255.f);
const vex3f XsColorLawnGreen(124.f / 255.f, 252.f / 255.f, 0.f / 255.f);
const vex3f XsColorGreen(0.f / 255.f, 255.f / 255.f, 0.f / 255.f);
const vex3f XsColorChartreuse(127.f / 255.f, 255.f / 255.f, 0.f / 255.f);
const vex3f XsColorGreenYellow(173.f / 255.f, 255.f / 255.f, 47.f / 255.f);
const vex3f XsColorLimeGreen(50.f / 255.f, 205.f / 255.f, 50.f / 255.f);
const vex3f XsColorForestGreen(34.f / 255.f, 139.f / 255.f, 34.f / 255.f);
const vex3f XsColorOliveDrab(107.f / 255.f, 142.f / 255.f, 35.f / 255.f);
const vex3f XsColorDarkKhaki(189.f / 255.f, 183.f / 255.f, 107.f / 255.f);
const vex3f XsColorPaleGoldenrod(238.f / 255.f, 232.f / 255.f, 170.f / 255.f);
const vex3f XsColorLightYellow(255.f / 255.f, 255.f / 255.f, 224.f / 255.f);
const vex3f XsColorYellow(255.f / 255.f, 255.f / 255.f, 0.f / 255.f);
const vex3f XsColorGold(255.f / 255.f, 215.f / 255.f, 0.f / 255.f);
const vex3f XsColorRosyBrown(188.f / 255.f, 143.f / 255.f, 143.f / 255.f);
const vex3f XsColorIndianRed(205.f / 255.f, 92.f / 255.f, 92.f / 255.f);
const vex3f XsColorSaddleBrown(139.f / 255.f, 69.f / 255.f, 19.f / 255.f);
const vex3f XsColorSienna(160.f / 255.f, 82.f / 255.f, 45.f / 255.f);
const vex3f XsColorPeru(205.f / 255.f, 133.f / 255.f, 63.f / 255.f);
const vex3f XsColorBurlyWood(222.f / 255.f, 184.f / 255.f, 135.f / 255.f);
const vex3f XsColorBeige(245.f / 255.f, 245.f / 255.f, 220.f / 255.f);
const vex3f XsColorWheat(245.f / 255.f, 222.f / 255.f, 179.f / 255.f);
const vex3f XsColorSandyBrown(244.f / 255.f, 164.f / 255.f, 96.f / 255.f);
const vex3f XsColorTan(210.f / 255.f, 180.f / 255.f, 140.f / 255.f);
const vex3f XsColorChocolate(210.f / 255.f, 105.f / 255.f, 30.f / 255.f);
const vex3f XsColorFirebrick(178.f / 255.f, 34.f / 255.f, 34.f / 255.f);
const vex3f XsColorBrown(165.f / 255.f, 42.f / 255.f, 42.f / 255.f);
const vex3f XsColorDarkSalmon(233.f / 255.f, 150.f / 255.f, 122.f / 255.f);
const vex3f XsColorSalmon(250.f / 255.f, 128.f / 255.f, 114.f / 255.f);
const vex3f XsColorLightSalmon(255.f / 255.f, 160.f / 255.f, 122.f / 255.f);
const vex3f XsColorOrange(255.f / 255.f, 165.f / 255.f, 0.f / 255.f);
const vex3f XsColorDarkOrange(255.f / 255.f, 140.f / 255.f, 0.f / 255.f);
const vex3f XsColorCoral(255.f / 255.f, 127.f / 255.f, 80.f / 255.f);
const vex3f XsColorLightCoral(240.f / 255.f, 128.f / 255.f, 128.f / 255.f);
const vex3f XsColorTomato(255.f / 255.f, 99.f / 255.f, 71.f / 255.f);
const vex3f XsColorOrange_red(255.f / 255.f, 69.f / 255.f, 0.f / 255.f);
const vex3f XsColorRed(255.f / 255.f, 0.f / 255.f, 0.f / 255.f);
const vex3f XsColorHotPink(255.f / 255.f, 105.f / 255.f, 180.f / 255.f);
const vex3f XsColorDeepPink(255.f / 255.f, 20.f / 255.f, 147.f / 255.f);
const vex3f XsColorPink(255.f / 255.f, 192.f / 255.f, 203.f / 255.f);
const vex3f XsColorLight_pink(255.f / 255.f, 182.f / 255.f, 193.f / 255.f);
const vex3f XsColorPaleVioletRed(219.f / 255.f, 112.f / 255.f, 147.f / 255.f);
const vex3f XsColorMaroon(176.f / 255.f, 48.f / 255.f, 96.f / 255.f);
const vex3f XsColorMediumVioletRed(199.f / 255.f, 21.f / 255.f, 133.f / 255.f);
const vex3f XsColorVioletRed(208.f / 255.f, 32.f / 255.f, 144.f / 255.f);
const vex3f XsColorMagenta(255.f / 255.f, 0.f / 255.f, 255.f / 255.f);
const vex3f XsColorViolet(238.f / 255.f, 130.f / 255.f, 238.f / 255.f);
const vex3f XsColorPlum(221.f / 255.f, 160.f / 255.f, 221.f / 255.f);
const vex3f XsColorOrchid(218.f / 255.f, 112.f / 255.f, 214.f / 255.f);
const vex3f XsColorMediumOrchid(186.f / 255.f, 85.f / 255.f, 211.f / 255.f);
const vex3f XsColorDarkOrchid(153.f / 255.f, 50.f / 255.f, 204.f / 255.f);
const vex3f XsColorDarkViolet(148.f / 255.f, 0.f / 255.f, 211.f / 255.f);
const vex3f XsColorBlueViolet(138.f / 255.f, 43.f / 255.f, 226.f / 255.f);
const vex3f XsColorPurple(160.f / 255.f, 32.f / 255.f, 240.f / 255.f);
const vex3f XsColorThistle(216.f / 255.f, 191.f / 255.f, 216.f / 255.f);