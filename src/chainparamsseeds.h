#ifndef H_CHAINPARAMSSEEDS
#define H_CHAINPARAMSSEEDS
// List of fixed seed nodes for the bitcoin network
// AUTOGENERATED by contrib/devtools/generate-seeds.py

// Each line contains a 16-byte IPv6 address and a port.
// IPv4 as well as onion addresses are wrapped inside a IPv6 address accordingly.
static SeedSpec6 pnSeed6_main[] = {
  /*   {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x68,0xa7,0x77,0x99}, 15714},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x6a,0xb9,0x2e,0xbe}, 15714},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x77,0x60,0xcf,0x28}, 15714},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x97,0x50,0xa6,0xa8}, 15714},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xa2,0xf3,0xea,0xe9}, 15714},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xb0,0x09,0x00,0x13}, 15714},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xb0,0x09,0x41,0x29}, 15714},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xbf,0xee,0xf2,0xc0}, 15714},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xc0,0x63,0xb7,0x83}, 15714},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xc6,0x1b,0x50,0xa2}, 15714},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x18,0x16,0xa9,0xc7}, 15714},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x25,0xbb,0x3e,0xc5}, 15714},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x25,0x3b,0x67,0x3e}, 15714},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x2d,0x30,0x0e,0xf1}, 15714},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x05,0x87,0x93,0x92}, 15714},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x05,0xc4,0x52,0xaf}, 15714},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x42,0xcd,0xc3,0xea}, 15714},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x47,0xfc,0xd4,0xe6}, 15714},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x4a,0xd0,0xb8,0xa1}, 15714},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x4c,0x58,0x8a,0xc0}, 15714},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x57,0x7f,0x71,0x2f}, 15714},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x59,0xd7,0xf6,0x3e}, 15714},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x5e,0x17,0x26,0xc6}, 15714},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x62,0xc0,0x8b,0x0e}, 15714},
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x63,0xee,0xc1,0x26}, 15714},
    {{0x2a,0x01,0x0e,0x35,0x2e,0xb5,0x98,0xb0,0x59,0xbd,0x05,0x68,0x49,0x61,0xd4,0x8a}, 15714},
    {{0x20,0x01,0x41,0xd0,0x00,0x52,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc5}, 15714},
    {{0x26,0x07,0x53,0x00,0x00,0x60,0x44,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01}, 15714},
    {{0x26,0x07,0x53,0x00,0x00,0x60,0x46,0x9c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}, 15714},
    {{0x26,0x07,0x53,0x00,0x01,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0xa8}, 15714},
    {{0x26,0x10,0x01,0xc0,0x00,0x00,0x00,0x06,0x02,0x1e,0xc9,0xff,0xfe,0xdd,0xea,0x1b}, 15714} */
};

static SeedSpec6 pnSeed6_test[] = {

};
#endif
