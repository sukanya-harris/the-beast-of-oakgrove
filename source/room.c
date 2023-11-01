
//{{BLOCK(room)

//======================================================================
//
//	room, 256x256@4, 
//	+ palette 256 entries, not compressed
//	+ 133 tiles (t|f|p reduced) not compressed
//	+ regular map (in SBBs), not compressed, 32x32 
//	Total size: 512 + 4256 + 2048 = 6816
//
//	Time-stamp: 2021-11-18, 16:47:49
//	Exported by Cearn's GBA Image Transmogrifier, v0.8.3
//	( http://www.coranac.com/projects/#grit )
//
//======================================================================

const unsigned short roomTiles[2128] __attribute__((aligned(4)))=
{
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xEEEE,0xEEEE,0x4444,0x4444,
	0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,
	0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xEEEE,0xEEEE,0x4444,0x6644,
	0x4444,0x7764,0x4444,0x3476,0x4444,0x4434,0xDDD4,0x7734,
	0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xEEEE,0xEEEE,0x4446,0x4444,
	0x4467,0x4444,0x4673,0x4444,0x4433,0x4444,0xD437,0x4DDD,

	0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xEEEE,0xEEEE,0x4444,0x4444,
	0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,0x3664,0x3333,
	0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xEEEE,0xEEEE,0x4444,0x4444,
	0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,0x3333,0x3333,
	0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xEEEE,0xEEEE,0x4444,0x4444,
	0x4444,0x4444,0x4444,0x4444,0xEEEE,0xEEEE,0xAAAE,0xAAAA,
	0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xEEEE,0xEEEE,0x4444,0x4444,
	0x4444,0x4444,0x4844,0x4444,0xF844,0x4487,0xF844,0x7F87,

	0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xEEEE,0xEEEE,0x4444,0x4444,
	0x4444,0x4444,0x8444,0x4844,0x87F8,0x487F,0x87F8,0x487F,
	0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,
	0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,
	0xAAD4,0x3334,0xEED4,0x334E,0xEED4,0x44EE,0x99D4,0xBBB9,
	0xDDD4,0xDDDD,0x9D44,0x448D,0xD444,0x7F8D,0x4444,0x7F84,
	0xA433,0x4DAE,0xEA43,0x4DEE,0xEEA4,0x4DEE,0x9BBB,0x4D99,
	0xDDDD,0x4DDD,0xD448,0x44D9,0xD7F8,0x444D,0x87F8,0x4444,

	0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,
	0x4444,0x4444,0x5559,0x5555,0x999E,0x9999,0x8889,0x8888,
	0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,
	0x4444,0x4444,0x5555,0x9555,0x9999,0xE999,0x8888,0x9E88,
	0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,
	0x4444,0x4444,0x4448,0x4444,0x4448,0x4444,0x4448,0x4444,
	0x7764,0xFFFF,0x6734,0x1166,0x6F34,0x1111,0x6F34,0x1116,
	0x6F34,0x1112,0x6F34,0x1111,0x6F34,0x1111,0x6F34,0x7711,

	0xFFFF,0xFFFF,0x1111,0x6666,0x1177,0x2111,0x1111,0x2111,
	0x1111,0x2611,0x1111,0x2266,0x6111,0x2222,0x2611,0x2222,
	0xFFFF,0xFFFF,0x6666,0x6666,0x6662,0x1126,0x6622,0x1622,
	0x2222,0x6222,0x2222,0x2222,0x1112,0x2222,0x1112,0x2221,
	0xFFFF,0x4677,0x1116,0x4371,0x7111,0x43F1,0x7111,0x43F1,
	0x1111,0x43F1,0x1116,0x43F1,0x1162,0x43F6,0x1122,0x43F6,
	0xBBBE,0xBBBB,0xAAA8,0xAAAA,0xEEA8,0xEEEE,0xFEA8,0xFFFF,
	0xFEA8,0x66F6,0xFEA8,0xFFFF,0xFEA8,0x633F,0xFEA8,0xFFFF,

	0xBBBB,0xEBBB,0xAAAA,0x8AAA,0xEEEE,0x8AEE,0xFFFF,0x8AEF,
	0x6633,0x8AEF,0xFFFF,0x8AEF,0x66F6,0x8AEF,0xFFFF,0x8AEF,
	0x8844,0x7F88,0xC8DD,0x888C,0xC8AD,0x228C,0x58ED,0x2285,
	0x8AED,0x6688,0x999D,0x88BB,0xDDDD,0xDDDD,0xD9D4,0x4444,
	0x8888,0x4888,0x8CC8,0xD811,0x8CC8,0xD811,0x8558,0xD8AA,
	0xA888,0xDE88,0xBBBB,0xD999,0xDDDD,0xDDDD,0x4444,0x4D9D,
	0x4444,0x4444,0xD444,0x4448,0xAD44,0x4489,0xAD44,0x448A,
	0xAD44,0x448A,0xAD44,0x008A,0xAD44,0xA08A,0xAD44,0x808A,

	0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,
	0x4444,0x4444,0x0000,0x0000,0xAAAA,0x0AAA,0xAAAA,0x0AAA,
	0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,0xAAA4,0x4444,
	0xEE06,0x444A,0xE006,0x0006,0xAAAE,0x880E,0x666E,0x980E,
	0x4444,0x4444,0xD844,0x4444,0x9A84,0x444D,0xAA84,0x444D,
	0xAA84,0x444D,0xAA80,0x444D,0xAA89,0x444D,0xAA8A,0x444D,
	0x4444,0x4444,0xD444,0xDDDD,0x9844,0xAAA9,0xA844,0xAAAA,
	0xA844,0xAAAA,0xA844,0xAAAA,0xA844,0xAAAA,0xA844,0xAAAA,

	0x4444,0x4444,0xDDDD,0xDDDD,0xAAAA,0xAAAA,0xAAAA,0xAAAA,
	0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,0xAAAA,
	0x4444,0x8884,0xDDD4,0x228D,0xEAD4,0x228A,0xEED4,0x668E,
	0xEED4,0x88AE,0x99D4,0xBBB9,0xDDD4,0xDDDD,0x9D44,0x444D,
	0x8888,0x4444,0x8CC8,0x4DDD,0x8CC8,0x4DAA,0x8558,0x4DEA,
	0xA88A,0x4DEE,0x9BBB,0x4D99,0xDDDD,0x4DDD,0xD444,0x44D9,
	0xE889,0xEEEE,0x9E89,0x9999,0x9E89,0x9999,0x9E89,0x9999,
	0x9E89,0x9999,0x9E89,0x9999,0x9E89,0x9999,0x9E89,0x9999,

	0xEEEE,0x9E8E,0x9999,0x9E89,0x9999,0x9E89,0x9999,0x9E89,
	0x9999,0x9E89,0x8999,0x9E88,0x5899,0x9E85,0x5899,0x9E89,
	0x4448,0x4444,0x4448,0x4444,0x4448,0x4444,0x4448,0x4444,
	0x4448,0x4444,0x4448,0x4444,0x4448,0x4444,0x4448,0x4444,
	0x6F34,0x7111,0x6F34,0x1111,0x6F34,0x1116,0x6F34,0x1662,
	0x6F34,0x6222,0x6F34,0x2221,0x6F34,0x2211,0x6734,0x6666,
	0x2211,0x1222,0x2211,0x1222,0x2211,0x1222,0x6261,0x1222,
	0x6226,0x1226,0x6222,0x6226,0x6662,0x2266,0x6666,0x6666,

	0x1111,0x2221,0x1111,0x6226,0x1111,0x6622,0x6111,0x6622,
	0x2611,0x6662,0x2266,0x2666,0x6222,0x2266,0x6666,0x6666,
	0x1122,0x43F6,0x1626,0x43F6,0x1226,0x43F6,0x1226,0x43F6,
	0x1222,0x43F1,0x1122,0x43F1,0x7111,0x43F1,0x1666,0x4371,
	0xFEA8,0x3F66,0xFEA8,0xFFFF,0xFEA8,0x6336,0xFEA8,0xFFFF,
	0x3EA8,0xFFF7,0x99A8,0x9999,0xAAA8,0xAAAA,0x8888,0x8888,
	0xF336,0x8AEF,0xFFFF,0x8AEF,0x63F6,0x8AEF,0xFFFF,0x8AEF,
	0x7FFF,0x8AE3,0x9999,0x8A99,0xAAAA,0x8AAA,0x8888,0x8888,

	0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,
	0x4444,0x4444,0x4444,0x9E44,0x9444,0xA999,0xA999,0xA999,
	0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,0x4444,
	0x4444,0x4444,0x44E9,0x4444,0xEE99,0x444E,0x9999,0xEEE9,
	0x9044,0x8009,0x8044,0x8008,0x80DD,0x8808,0x8099,0x0008,
	0x80AA,0xD008,0x80AA,0x8008,0x8099,0x8008,0x8088,0x8008,
	0xAAAA,0xAAAA,0xAAAA,0xAAAA,0x8888,0x8888,0x0000,0x0000,
	0x5DDD,0xDD55,0x5D99,0x8D55,0xD099,0x80DD,0x00AA,0x9000,

	0x6660,0xA980,0x000A,0xAA88,0x8888,0x8888,0x0000,0x0000,
	0xDDDD,0xDDDD,0x9999,0x9999,0x9999,0x9999,0xAAAA,0xAAAA,
	0x990A,0x4440,0x880A,0x4440,0x8808,0xDDD0,0x8800,0x9990,
	0x880D,0xAAA0,0x8809,0xAAA0,0x8809,0x9990,0x880A,0x8880,
	0xA844,0xAAAA,0xA044,0xAAAA,0x80DD,0x8888,0x8099,0x0008,
	0x80AA,0xD008,0x80AA,0x8D08,0x8099,0x8D08,0x8088,0x8D08,
	0xAAAA,0xAAAA,0xAAAA,0xAAAA,0x8888,0x8888,0x0000,0x0000,
	0xDDDD,0xDDDD,0x9999,0x9999,0x9999,0x9999,0xAAAA,0xAAAA,

	0xAAAA,0x448A,0xAAAA,0x440A,0x8888,0xDD08,0x8000,0x9908,
	0x80DD,0xAA08,0x8099,0xAA08,0x8099,0x9908,0x80AA,0x8808,
	0x4444,0x4444,0x4444,0x4444,0xDDDD,0xDDDD,0x9999,0x9999,
	0xA9AA,0xAAAA,0xA9AA,0xAAAA,0x9999,0x9999,0x8888,0x8888,
	0xD444,0x444D,0x4444,0x4444,0xDDDD,0xDDDD,0x9999,0x9999,
	0xA9AA,0xAAAA,0xA9AA,0xAAAA,0x9999,0x9999,0x8888,0x8888,
	0x9E89,0x9999,0x9E89,0x9999,0x9E89,0x9999,0x9E89,0x9999,
	0x9E89,0x9999,0x9E89,0x9999,0x9E89,0x9999,0x8889,0x8888,

	0xE999,0x9E8E,0x9999,0x9E89,0x9999,0x9E89,0x9999,0x9E89,
	0x9999,0x9E89,0x9999,0x9E89,0x9999,0x9E89,0x8888,0x9E88,
	0x4448,0x4444,0x4448,0x4444,0xDDD8,0xDDDD,0x9998,0x9999,
	0xA9A8,0xAAAA,0xA9A8,0xAAAA,0x9998,0x9999,0x8888,0x8888,
	0x7764,0xFFFF,0x3664,0x3333,0xDDDD,0xDDDD,0x9999,0x9999,
	0xA9AA,0xAAAA,0xA9AA,0xAAAA,0x9999,0x9999,0x8888,0x8888,
	0xFFFF,0xFFFF,0x3333,0x3333,0xDDDD,0xDDDD,0x9999,0x9999,
	0xA9AA,0xAAAA,0xA9AA,0xAAAA,0x9999,0x9999,0x8888,0x8888,

	0xFFFF,0x4677,0x3333,0x4663,0xDDDD,0xDDDD,0x9999,0x9999,
	0xA9AA,0xAAAA,0xA9AA,0xAAAA,0x9999,0x9999,0x8888,0x8888,
	0xAAB9,0xA999,0xAAB9,0xA999,0xAAB9,0xA999,0xAAB9,0xBA99,
	0xBAB9,0x88AA,0x8BB8,0x7788,0x9889,0xEB78,0xAA88,0xEBB8,
	0x9999,0xE999,0x9999,0xE999,0x9999,0xE999,0x99AA,0xE999,
	0xAA88,0xE99A,0x8877,0x8AA8,0x87B7,0x9889,0x8BB7,0x88AA,
	0xA844,0xAAAA,0xA044,0xAAAA,0x80DD,0x8888,0x8099,0x0008,
	0x80AA,0xD008,0x80AA,0x8008,0x8099,0x8008,0x8088,0x8008,

	0xAAAA,0xAAAA,0xAAAA,0xAAAA,0x8888,0x8888,0x0000,0x0000,
	0x555D,0xDDDD,0x555D,0x998D,0xDDD0,0x9980,0x0000,0xAA90,
	0xAAAA,0xAAAA,0xAAAA,0xAAAA,0x8888,0x8888,0x0000,0x0000,
	0x55DD,0xDDD5,0x55D9,0x98D5,0xDD09,0x980D,0x000A,0xA900,
	0x80EE,0x8808,0x80EE,0xD008,0x80EE,0x8008,0x80EE,0x8008,
	0x80EE,0x8008,0x80EE,0x8808,0x80EE,0xD008,0x80EE,0x8008,
	0x8888,0x8888,0xDDDD,0x64DD,0x9999,0x2499,0x9999,0x8999,
	0xAAAA,0xAAAA,0x8888,0x8888,0x26DD,0x2333,0x6849,0x6222,

	0x8888,0x8888,0x8882,0xD462,0x3332,0x8422,0x2222,0x9882,
	0x6668,0xAA98,0x8888,0x8888,0xDDD6,0xDDDD,0x9848,0x9999,
	0x8808,0xDEE0,0x880D,0xDEE0,0x8809,0xDEE0,0x8809,0xDEE0,
	0x880A,0xDEE0,0x8808,0xDEE0,0x880D,0xDEE0,0x8809,0xDEE0,
	0x80EE,0x8808,0x80EE,0xD008,0x80EE,0x8D08,0x80EE,0x8D08,
	0x80EE,0x8D08,0x80EE,0x8808,0x80EE,0xD008,0x80EE,0x8D08,
	0x8888,0x8888,0xDDDD,0xDDDD,0x9999,0x9999,0x9999,0x9999,
	0xAAAA,0xAAAA,0x8888,0x8888,0xDDDD,0xDDDD,0x9999,0x9999,

	0x8088,0xDE08,0x80DD,0xDE08,0x8099,0xDE08,0x8099,0xDE08,
	0x80AA,0xDE08,0x8088,0xDE08,0x80DD,0xDE08,0x8099,0xDE08,
	0xEEEE,0xDEEE,0xEEEE,0xDEEE,0xEEEE,0xDEEE,0xEEEE,0xDEEE,
	0xEEEE,0xDEEE,0xEEEE,0xDEEE,0xEEEE,0xDEEE,0xEEEE,0xDEEE,
	0xEE8E,0xEBB8,0x998E,0xBB78,0x998E,0xB748,0x998E,0x4448,
	0x998E,0xA448,0x998E,0xA448,0x998E,0xBA48,0x9984,0xAA48,
	0x8BEE,0xD8EE,0x87BB,0xD899,0x847B,0xD899,0x8444,0xD899,
	0x8449,0xD899,0x8449,0xD899,0x849A,0xD899,0x849A,0x4899,

	0x80EE,0x8808,0x80EE,0xD008,0x80EE,0x8008,0x80EE,0x8008,
	0x80EE,0x8008,0x80EE,0x8808,0x80EE,0xD008,0x80EE,0x9008,
	0x8888,0x8888,0x8264,0x6288,0x3224,0x2233,0x2289,0x8222,
	0x68AA,0x9866,0x8888,0x8888,0xDDDD,0x326D,0x9999,0x2684,
	0x8888,0x8888,0xDDD4,0xDDDD,0x9984,0x9999,0x9998,0x9999,
	0xAAAA,0xAAAA,0x8888,0x8888,0x6233,0xDDDD,0x8622,0x9984,
	0x80EE,0x8008,0x80EE,0x8008,0x80EE,0x8808,0x80EE,0x0008,
	0x80EE,0xD008,0xD0EE,0xD00D,0xD0EE,0x000D,0x0EEE,0xDEE0,

	0x8649,0x8666,0x64AA,0x6333,0x4888,0x4444,0x0000,0x0000,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0x0000,0x0000,0xEEEE,0xDEEE,
	0x9846,0x9999,0xAA94,0xAAAA,0x8888,0x8888,0x0000,0x0000,
	0xDDDD,0xDDDD,0xDDDD,0xDDDD,0x0000,0x0000,0xEEEE,0xDEEE,
	0x8809,0xDEE0,0x880A,0xDEE0,0x8808,0xDEE0,0x8800,0xDEE0,
	0x8800,0xDEE0,0xDD00,0xDEE0,0xDD00,0xDEE0,0x00EE,0xDEEE,
	0x80EE,0x8D08,0x80EE,0x8D08,0x80EE,0x8808,0x80EE,0x0008,
	0x80EE,0xD008,0xD0EE,0x000D,0xD0EE,0xDE0D,0x0EEE,0xDEE0,

	0x9999,0x9999,0xAAAA,0xAAAA,0x8888,0x8888,0x0000,0x0000,
	0xDDDD,0xDDDD,0x0000,0x0000,0xEEEE,0xDEEE,0xEEEE,0xDEEE,
	0x8099,0xDE08,0x80AA,0xDE08,0x8088,0xDE08,0x8000,0xDE08,
	0x800D,0xDE08,0xD000,0xDE0D,0xD0EE,0xDE0D,0x0EEE,0xDEE0,
	0x9984,0xA448,0x9984,0x4448,0x9984,0x4448,0xEE84,0x8888,
	0x9A84,0x99E8,0x8894,0x999E,0x99E4,0x444E,0x444E,0xDEE4,
	0x8489,0x4899,0x8444,0x4899,0x8444,0x4899,0x8888,0x48EE,
	0x8E99,0x489A,0xE999,0x4988,0xE444,0x4E99,0x4EEE,0xD444,

	0x80EE,0x9008,0x80EE,0xA008,0x80EE,0x8808,0x80EE,0x0008,
	0x80EE,0xD008,0xD0EE,0x000D,0xD0EE,0xDE0D,0x0EEE,0xDEE0,
	0x9999,0x6864,0xAAAA,0x364A,0x8888,0x4488,0x0000,0x0000,
	0xDDDD,0xDDDD,0x0000,0x0000,0xEEEE,0xDEEE,0xEEEE,0xDEEE,
	0x6866,0x9984,0x4633,0xAAA9,0x8444,0x8888,0x0000,0x0000,
	0xDDDD,0xDDDD,0x0000,0x0000,0xEEEE,0xDEEE,0xEEEE,0xDEEE,
	0xEEEE,0xDEEE,0xEEEE,0xDEEE,0xEEEE,0xDEEE,0xEEEE,0xDEEE,
	0xEEEE,0x0000,0x0EEE,0x555E,0xE0EE,0x5555,0x50EE,0x5555,

	0xEEEE,0xDEEE,0xEEEE,0xDEEE,0xEEEE,0xDEEE,0xEEEE,0xDEEE,
	0x0000,0x0000,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0xEEEE,0xDEEE,0xEEEE,0xDEEE,0xEEEE,0xDEEE,0xEEEE,0xDEEE,
	0x0000,0xDEEE,0xE555,0xDEE0,0x5555,0xDE0E,0x5555,0xDE05,
	0x50EE,0x5555,0x50EE,0x5555,0x50EE,0x5555,0x50EE,0x5555,
	0xE0EE,0x5555,0xDEEE,0xAAAA,0x0EEE,0xEEED,0x0EEE,0x0000,
	0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,0x5555,
	0x5555,0x5555,0xAAAA,0xAAAA,0xEEEE,0xEEEE,0x0000,0x0000,

	0x5555,0xDE05,0x5555,0xDE05,0x5555,0xDE05,0x5555,0xDE05,
	0x5555,0xDE0E,0xAAAA,0xDE0D,0xDEEE,0xDEE0,0x0000,0xDEE0,
	0x0EEE,0xEDDE,0x0EEE,0x5DE5,0x0EEE,0x5DE5,0x0EEE,0xEDE5,
	0x0EEE,0xEDE5,0x0EEE,0x00E5,0xEEEE,0xDE00,0xEEEE,0xDEEE,
	0xEEEE,0xDEEE,0xE555,0xDED0,0x5555,0xD555,0xEEEE,0xDEEE,
	0x5555,0x5555,0x0000,0x0000,0xEEEE,0xDEEE,0xEEEE,0xDEEE,
	0xEEED,0xEEEE,0xD0ED,0x555E,0x555D,0x5555,0xEEED,0xEEEE,
	0x5555,0x5555,0x0000,0x0000,0xEEEE,0xDEEE,0xEEEE,0xDEEE,

	0xDEDE,0xDEE0,0xE5D5,0xDEE0,0xE5D5,0xDEE0,0xE5DE,0xDEE0,
	0xE5DE,0xDEE0,0xE500,0xDEE0,0x00EE,0xDEEE,0xEEEE,0xDEEE,
	0xEEEE,0xDEEE,0xEEEE,0xDEEE,0xEEEE,0xDEEE,0x999E,0x9999,
	0x7779,0x7777,0x7779,0x7777,0xAAA8,0xAAAA,0x888E,0x8888,
	0x8EEE,0xDE99,0xB8EE,0xD977,0xB8EE,0x9BAA,0xEE99,0x99AE,
	0x55E7,0x9AE5,0xAA5E,0x9A5C,0xCCCE,0x9A5C,0xCC5E,0x9A5C,
	0xEEEE,0xDEEE,0xEEEE,0xDEEE,0xEEEE,0xDEEE,0xEEEE,0xDEEE,
	0xEEEE,0xDE66,0xEEEE,0xDE1E,0x666E,0x666E,0x116E,0xE666,

	0xEEEE,0xDEEE,0xEEEE,0xDEEE,0x66EE,0xDEEE,0x616E,0xDEEE,
	0xE116,0xDEEE,0xEE16,0xDEEE,0xEE11,0xDEEE,0x6E11,0xDEEE,
	0xEEEE,0xDEEE,0xEEEE,0xDEEE,0xEEEE,0xDEEE,0xEEEE,0xDEEE,
	0xEEEE,0xEEEE,0xAEEE,0xAAA9,0xAEEE,0xAAA9,0xAEEE,0xAAAA,
	0xEEEE,0xDEEE,0xEEEE,0xDEEE,0xEEEE,0xDEEE,0xEEEE,0xDEEE,
	0xEEEE,0xEEEE,0xAAAA,0xA9AA,0xAAAA,0xA9AA,0xAAAA,0xAAAA,
	0x998E,0xEE88,0x5E8E,0xEE55,0xCC58,0xE5CC,0xCC58,0xECCC,
	0xCC5E,0xECCC,0xCC5E,0xECCC,0xCC5E,0xECCC,0xCC5E,0xE5CC,

	0xCC55,0x9A5C,0xCC55,0x9A5C,0xCC55,0x9AEC,0xEE55,0x9AEE,
	0x55E5,0x9AE5,0xAA5E,0x9A5C,0xCCCE,0x9A5C,0xCC55,0x9A5C,
	0x16EE,0xE661,0x1EEE,0xE6E1,0xEEEE,0x6E11,0xEEEE,0x6611,
	0xEEEE,0x6111,0xEEEE,0x616E,0xEEEE,0x666E,0xEEEE,0x66EE,
	0x6E16,0xDEEE,0xEE66,0xDE6E,0xE666,0xDE11,0x1EE6,0xDEE1,
	0x61E6,0xDEEE,0x6666,0xDEEE,0xE666,0xDEEE,0xE666,0xDEEE,
	0x6EEE,0x6666,0x3EEE,0xAAAA,0x76EE,0xAAAA,0xF3EE,0xAAAA,
	0xF3EE,0xAAAA,0xF3EE,0xAAAA,0xF3EE,0xAAAA,0x73EE,0xAAAA,

	0x6666,0xDEE6,0xAAAA,0xDEE3,0xAAAA,0xDE67,0xAAAA,0xDE3F,
	0xAAAA,0xDE3F,0xAAAA,0xDE3F,0xAAAA,0xDE3F,0xAAAA,0xDE37,
	0xEEEE,0xDEEE,0xEEEE,0xDEEE,0xEEEE,0xEEEE,0xAEEE,0xAAA9,
	0xAEEE,0xAAA9,0xAEEE,0xAAAA,0xAEEE,0xAAA9,0xAEEE,0xAAAA,
	0xAEEE,0xAAA9,0xAEEE,0xAAAA,0xAEEE,0xAAA9,0xAEAA,0xAAAA,
	0xBEAA,0xBBBA,0xA8AA,0xAAA9,0xA8AA,0x8AA9,0xA8AA,0xBAA9,
	0xAAAA,0xA9AA,0xAAAA,0xAAAA,0xAAAA,0xA9AA,0xAAAA,0xAAAA,
	0xBBBB,0xBABB,0xAAAA,0xA9AA,0x8888,0xA9AA,0xBBBB,0xA9AA,

	0xEEEE,0xDEEE,0xEEEE,0xDEEE,0xEEEE,0xDEEE,0xAAAE,0xDEA9,
	0xAAAE,0xDEA9,0xAAA8,0xDEAA,0xAAA8,0xDEA9,0xAAA8,0xDEAA,
	0xEEEE,0xDEEE,0xEEEE,0xDEEE,0xEEEE,0xDEEE,0xEEEE,0xCC5E,
	0xEEEE,0xCCCE,0xEEEE,0xB7CE,0xEEEE,0xCCCE,0xEEEE,0xB7CE,
	0xEEEE,0xDEEE,0xEEEE,0xDEEE,0xEEEE,0xDEEE,0xCCCC,0xCCCC,
	0xBBBB,0xBBBB,0xCC5B,0xCCCC,0xBBCB,0xBBBB,0xBBCB,0xBBBB,
	0xEEEE,0xDEEE,0xEEEE,0xDEEE,0xEEEE,0xDEEE,0xCCCC,0xCCCC,
	0xBBBB,0xBBBB,0xCCCC,0xB5CC,0xBBBB,0xBCBB,0xBBBB,0xBCBB,

	0xEEEE,0xDEEE,0xEEEE,0xDEEE,0xEEEE,0xDEEE,0xE5CC,0xDEEE,
	0xECCC,0xDEEE,0xEC7B,0xDEEE,0xECCC,0xDEEE,0xEC7B,0xDEEE,
	0x555E,0xEE55,0xCC5E,0xE5CC,0xCC58,0xECCC,0xCC5E,0xECCC,
	0xCC5E,0xECCC,0xCC5E,0xE5CC,0xAAAE,0xAAAA,0x7779,0x7777,
	0xCC55,0x9A5C,0xAC55,0x9A9A,0x7E55,0x9A77,0xB9E5,0x9BAA,
	0xAB9E,0x9AAA,0xAB9E,0x9AAA,0x999A,0xD9A9,0xA777,0xD9A8,
	0xEEEE,0x66EA,0xEEEE,0x66EA,0xEEEE,0x6E9B,0xEEEE,0xE9B9,
	0xEEEE,0xBBA9,0xEEEE,0xAA9E,0xEEEE,0xA98E,0xEEEE,0x88EE,

	0x8E66,0xDEEE,0x8E66,0xDEEE,0x89E6,0xDEEE,0x9A9E,0xDEEE,
	0x8AAA,0xDEEE,0xE8AA,0xDEEE,0xE89A,0xDEEE,0xEE88,0xDEEE,
	0x36EE,0x4BBB,0x36EE,0xF4AA,0x6EEE,0x7433,0xA98E,0x49AA,
	0xAA8E,0xAAAA,0xA94E,0xAAAA,0x44EE,0x4444,0xEEEE,0xDEEE,
	0xBBB4,0xDE63,0xAA4F,0xDE63,0x3343,0xDEE6,0xAA94,0xD89A,
	0xAAAA,0xD8AA,0xAAAA,0xD49A,0x4444,0xDE44,0xEEEE,0xDEEE,
	0xAEEE,0xAAA9,0xAEEE,0xAAAA,0xBEEE,0xBBBA,0xA8EE,0xAAA9,
	0xA8EE,0x8AA9,0xA8EE,0xBAA9,0x98EE,0xAA99,0x88EE,0x8888,

	0x98AA,0xAA99,0x88AA,0x8888,0xBBBB,0xBABB,0xAAAA,0xA9AA,
	0x8888,0xA9AA,0xBBBB,0xA9AA,0xAAAA,0x999A,0x8888,0x8888,
	0xAAAA,0x999A,0x8888,0x8888,0xBABE,0xBBBB,0xA9A8,0xAAAA,
	0xA9A8,0x888A,0xA9A8,0xBBBA,0x9998,0xAAAA,0x8888,0x8888,
	0xAAA8,0xDEA9,0xAAA8,0xDEAA,0xBBBB,0xDEBA,0xAAAA,0xD8A9,
	0xAA88,0xD8A9,0xAABB,0xD8A9,0x9AAA,0xD899,0x8888,0xD888,
	0xEEEE,0xCCCE,0xEEEE,0xB7CE,0xEEEE,0xCCCE,0xEEEE,0xB7CE,
	0xEEEE,0xCCCE,0xEEEE,0xCC5E,0xEEEE,0xDEEE,0xEEEE,0xDEEE,

	0xBBCB,0xBBBB,0xBBCB,0xBBBB,0x77CB,0x7777,0xCC5B,0xCCCC,
	0xBBBB,0xBBBB,0xCCCC,0xCCCC,0xEEEE,0xDEEE,0xEEEE,0xDEEE,
	0xBBBB,0xBCBB,0xBBBB,0xBCBB,0x7777,0xBC77,0xCCCC,0xB5CC,
	0xBBBB,0xBBBB,0xCCCC,0xCCCC,0xEEEE,0xDEEE,0xEEEE,0xDEEE,
	0xECCC,0xDEEE,0xEC7B,0xDEEE,0xECCC,0xDEEE,0xEC7B,0xDEEE,
	0xECCC,0xDEEE,0xE5CC,0xDEEE,0xEEEE,0xDEEE,0xEEEE,0xDEEE,
	0x7779,0x7777,0xAAA8,0xAAAA,0x8888,0x8888,0x9988,0x9E98,
	0xAA8E,0xA7A8,0x778E,0xAAA8,0xAA8E,0x8888,0x88EE,0xDEEE,

	0x99A7,0xDE88,0x889A,0xDE89,0xA988,0xDE8A,0xAA9E,0xDE8A,
	0xAA97,0xD8AA,0xA9AA,0xD8AA,0x9888,0xD8AA,0x8EEE,0xD899,
};

const unsigned short roomMap[1024] __attribute__((aligned(4)))=
{
	0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0001,0x0001,0x0001,0x0001,0x0002,0x0003,0x0001,0x0001,
	0x0001,0x0001,0x0004,0x0005,0x0005,0x0404,0x0006,0x0406,
	0x0007,0x0008,0x0001,0x0001,0x0001,0x0001,0x0001,0x0001,
	0x0009,0x0009,0x0009,0x0009,0x0009,0x0009,0x0009,0x0009,
	0x0009,0x0009,0x0009,0x0009,0x000A,0x000B,0x000C,0x000D,
	0x000E,0x0009,0x000F,0x0010,0x0011,0x0012,0x0013,0x0014,
	0x0015,0x0016,0x0009,0x0009,0x0009,0x0009,0x0009,0x0009,

	0x0017,0x0018,0x0019,0x001A,0x001B,0x001C,0x001C,0x041B,
	0x0009,0x0009,0x0009,0x0009,0x001D,0x001E,0x001F,0x0020,
	0x0021,0x0009,0x0022,0x0023,0x0024,0x0025,0x0026,0x0027,
	0x0009,0x0009,0x0028,0x0029,0x001B,0x001C,0x001C,0x041B,
	0x002A,0x002B,0x002C,0x002D,0x002E,0x002F,0x002F,0x0030,
	0x0031,0x0031,0x0031,0x0031,0x0032,0x0032,0x0033,0x0034,
	0x0035,0x0031,0x0036,0x0037,0x0037,0x0038,0x0031,0x0031,
	0x0031,0x0031,0x0039,0x003A,0x003B,0x003C,0x003D,0x0030,

	0x003E,0x003F,0x0040,0x0041,0x0042,0x0043,0x0043,0x0044,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0046,0x0047,0x0048,0x0049,0x004A,0x0044,
	0x004B,0x004C,0x004D,0x004E,0x004F,0x0050,0x0050,0x0051,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0052,0x0053,0x0054,0x0055,0x0056,0x0051,

	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,

	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0057,0x0058,0x0058,0x0059,0x0057,0x0058,0x0058,0x0059,
	0x0045,0x0045,0x0057,0x0058,0x0058,0x0059,0x0045,0x0045,
	0x0045,0x0045,0x0057,0x0058,0x0058,0x0059,0x0045,0x0045,
	0x0057,0x0058,0x0058,0x0059,0x0057,0x0058,0x0058,0x0059,

	0x005A,0x005B,0x005B,0x005C,0x005A,0x005B,0x005B,0x005C,
	0x0045,0x0045,0x005A,0x005B,0x005B,0x005C,0x0045,0x0045,
	0x0045,0x0045,0x005A,0x005B,0x005B,0x005C,0x0045,0x0045,
	0x005A,0x005B,0x005B,0x005C,0x005A,0x005B,0x005B,0x005C,
	0x005D,0x005E,0x005F,0x0060,0x005D,0x005E,0x005F,0x0060,
	0x0045,0x0045,0x005D,0x005E,0x005F,0x0060,0x0045,0x0045,
	0x0045,0x0045,0x005D,0x005E,0x005F,0x0060,0x0045,0x0045,
	0x005D,0x005E,0x005F,0x0060,0x005D,0x005E,0x005F,0x0060,

	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,

	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0057,0x0058,0x0058,0x0059,0x0057,0x0058,0x0058,0x0059,
	0x0045,0x0045,0x0057,0x0058,0x0058,0x0059,0x0045,0x0045,
	0x0045,0x0045,0x0057,0x0058,0x0058,0x0059,0x0045,0x0045,
	0x0057,0x0058,0x0058,0x0059,0x0057,0x0058,0x0058,0x0059,

	0x005A,0x005B,0x005B,0x005C,0x005A,0x005B,0x005B,0x005C,
	0x0045,0x0045,0x005A,0x005B,0x005B,0x005C,0x0045,0x0045,
	0x0045,0x0045,0x005A,0x005B,0x005B,0x005C,0x0045,0x0045,
	0x005A,0x005B,0x005B,0x005C,0x005A,0x005B,0x005B,0x005C,
	0x005D,0x005E,0x005F,0x0060,0x005D,0x005E,0x005F,0x0060,
	0x0045,0x0045,0x005D,0x005E,0x005F,0x0060,0x0045,0x0045,
	0x0045,0x0045,0x005D,0x005E,0x005F,0x0060,0x0045,0x0045,
	0x005D,0x005E,0x005F,0x0060,0x005D,0x005E,0x005F,0x0060,

	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,

	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0057,0x0058,0x0058,0x0059,0x0057,0x0058,0x0058,0x0059,
	0x0045,0x0045,0x0057,0x0058,0x0058,0x0059,0x0045,0x0045,
	0x0045,0x0045,0x0057,0x0058,0x0058,0x0059,0x0045,0x0045,
	0x0057,0x0058,0x0058,0x0059,0x0057,0x0058,0x0058,0x0059,

	0x005A,0x005B,0x005B,0x005C,0x005A,0x005B,0x005B,0x005C,
	0x0045,0x0045,0x005A,0x005B,0x005B,0x005C,0x0045,0x0045,
	0x0045,0x0045,0x005A,0x005B,0x005B,0x005C,0x0045,0x0045,
	0x005A,0x005B,0x005B,0x005C,0x005A,0x005B,0x005B,0x005C,
	0x005D,0x005E,0x005F,0x0060,0x005D,0x005E,0x005F,0x0060,
	0x0045,0x0045,0x005D,0x005E,0x005F,0x0060,0x0045,0x0045,
	0x0045,0x0045,0x005D,0x005E,0x005F,0x0060,0x0045,0x0045,
	0x005D,0x005E,0x005F,0x0060,0x005D,0x005E,0x005F,0x0060,

	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,

	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,

	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0061,0x0062,
	0x0063,0x0064,0x0045,0x0045,0x0045,0x0065,0x0066,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0067,0x0068,

	0x0069,0x006A,0x006B,0x006C,0x006D,0x006E,0x006F,0x0070,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0071,0x0072,
	0x0073,0x0074,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0075,0x0076,
	0x0077,0x0078,0x0079,0x007A,0x007B,0x007C,0x007D,0x007E,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x007F,0x0080,
	0x0081,0x0082,0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,
	0x0045,0x0045,0x0045,0x0045,0x0045,0x0045,0x0083,0x0084,
};

const unsigned short roomPal[256] __attribute__((aligned(4)))=
{
	0x1424,0x1AD0,0x5A26,0x49D0,0x1CE4,0x1CF5,0x3148,0x571B,
	0x1CA8,0x210F,0x2974,0x327C,0x153C,0x1849,0x20CB,0x7B9C,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,

	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
};

//}}BLOCK(room)