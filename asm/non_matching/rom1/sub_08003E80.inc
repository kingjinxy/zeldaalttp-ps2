	thumb_func_start sub_08003E80
sub_08003E80: @ 0x08003E80
	ldrb r4, [r3, #4]
	lsrs r4, r2, #0x20
	subs r2, #0xa0
	lsrs r0, r0, #0x20
	subs r2, #0xb0
	lsrs r0, r0, #0x20
	subs r3, #0x88
	lsrs r0, r0, #0x20
	subs r3, #0x7e
	lsrs r0, r0, #0x20
	lsrs r4, r0, #0x1d
	lsls r0, r0, #0xc
	ldrb r0, [r2, #0xc]
	lsrs r3, r2, #0x20
	lsrs r4, r0, #0x1d
	lsls r0, r0, #0xc
	ldrb r0, [r2, #0xc]
	lsrs r3, r2, #0x20
	lsrs r4, r0, #0x1d
	lsls r0, r0, #0xc
	lsrs r0, r4, #0x18
	lsls r0, r0, #0xc
	subs r3, #0x54
	lsrs r0, r0, #0x20
	subs r3, #0x54
	lsrs r0, r0, #0x20
	.align 2, 0
_08003EB4: .4byte 0x03000468
_08003EB8: .4byte 0x080092A0
_08003EBC: .4byte 0x0201EF20
_08003EC0: .4byte 0x0201EDD0
_08003EC4: .4byte 0x03000840
_08003EC8: .4byte 0x03000940
_08003ECC: .4byte 0x03000840
_08003ED0: .4byte 0x03000940
_08003ED4: .4byte 0x03000940
_08003ED8: .4byte 0x03000940

