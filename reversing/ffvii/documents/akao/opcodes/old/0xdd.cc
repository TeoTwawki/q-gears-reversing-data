ch[0x80] = p[0] ? p[0] : 0x100;
// "/" is mips div operation
ch[0x82] = ((p[1] * 0xff - ch[0x7E]) / (p[0] ? p[0] : 0x100)) & 0xffffffff;