	.syntax unified
	THUMB_FUNC_START_NOALIGN sub_08003406
sub_08003406: @ 0X08003406
	lsrs r3, r2, #32
	.2byte 0xb21c
	lsrs r3, r2, #32
_0800340C:
	.2byte 0xb3fc
	lsrs r3, r2, #32
_08003410:
	push {r2, r4, r7, lr}
	lsrs r3, r2, #32
	add r6, sp, #256
	lsrs r0, r0, #32
	bhi.n _080033DC
	lsrs r3, r2, #32
_0800341C:
	lsrs r0, r4, #18
	lsrs r4, r2, #32
	.2byte 0xb644
	lsrs r3, r2, #32
	adds r0, r3, #2
	lsrs r4, r2, #32
	adds r0, r3, #7
	lsrs r4, r2, #32
	pop {r3}
	lsrs r3, r2, #32
	.2byte 0xb78c
	lsrs r3, r2, #32
	bge.n _080033A0
	lsrs r3, r2, #32
	bge.n _080033AC
	lsrs r3, r2, #32
	bge.n _080033B8
	lsrs r3, r2, #32
	bge.n _080033C4
	lsrs r3, r2, #32
	bge.n _080033D0
	lsrs r3, r2, #32
	bge.n _080033DC
	lsrs r3, r2, #32
	bge.n _080033E8
	lsrs r3, r2, #32
	bge.n _080033F4
	lsrs r3, r2, #32
_08003454:
	bge.n _08003400
	lsrs r3, r2, #32
_08003458:
	bge.n _0800340C
	lsrs r3, r2, #32
	blt.n _08003460
	lsrs r3, r2, #32
_08003460:
	lsrs r4, r4, #12
	lsrs r4, r2, #32
	.2byte 0xdc54
	lsrs r3, r2, #32
	.2byte 0xdc7c
	lsrs r3, r2, #32
	ldmia r4, {r4, r6, r7}
	lsrs r3, r2, #32
	lsrs r0, r1, #14
	lsrs r4, r2, #32
	ldrh r0, [r4, #22]
	lsrs r2, r0, #1
	.2byte 0xb91c
	lsrs r3, r2, #32
	movs r3, #0
	lsrs r4, r2, #32
	movs r3, #8
	lsrs r4, r2, #32
	.4byte gUnknown_0813F6C8+0x78
	.4byte gUnknown_0813F74C+0x4c
	stmia r0!, {r3, r4, r5}
	lsrs r3, r2, #32
	ble.n _08003454
	lsrs r3, r2, #32
	ble.n _08003458
	lsrs r3, r2, #32
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x40
	.byte 0xae
	.byte 0x00
	.byte 0x08
	.byte 0xa8
	.byte 0xfc
	.byte 0x13
	.byte 0x08
	.byte 0x08
	.byte 0xd4
	.byte 0x13
	.byte 0x08
	.byte 0x40
	.byte 0xae
	.byte 0x00
	.byte 0x08
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x18
	.byte 0xf9
	.byte 0x13
	.byte 0x08
	.byte 0x20
	.byte 0xf5
	.byte 0x13
	.byte 0x08
	.byte 0xe4
	.byte 0xf3
	.byte 0x13
	.byte 0x08
	.byte 0x08
	.byte 0xde
	.byte 0x13
	.byte 0x08
	.byte 0x88
	.byte 0xf9
	.byte 0x13
	.byte 0x08
	.byte 0x78
	.byte 0xdf
	.byte 0x13
	.byte 0x08
	.byte 0xc8
	.byte 0xde
	.byte 0x13
	.byte 0x08
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0xa8
	.byte 0xdf
	.byte 0x13
	.byte 0x08
	.byte 0xf8
	.byte 0xf5
	.byte 0x13
	.byte 0x08
	.byte 0x08
	.byte 0xde
	.byte 0x13
	.byte 0x08
	.byte 0x40
	.byte 0xae
	.byte 0x00
	.byte 0x08
	.byte 0x40
	.byte 0xae
	.byte 0x00
	.byte 0x08
	.byte 0x60
	.byte 0x49
	.byte 0x00
	.byte 0x00
	.byte 0x80
	.byte 0xd7
	.byte 0x01
	.byte 0x00
	.byte 0xe0
	.byte 0x06
	.byte 0x03
	.byte 0x00
	.byte 0x20
	.byte 0x4b
	.byte 0x04
	.byte 0x00
	.byte 0x38
	.byte 0x7c
	.byte 0x42
	.byte 0x08
	.byte 0x30
	.byte 0x80
	.byte 0x42
	.byte 0x08
	.byte 0xf4
	.byte 0x82
	.byte 0x42
	.byte 0x08
	.byte 0x94
	.byte 0x10
	.byte 0x14
	.byte 0x08
	.byte 0x10
	.byte 0x0c
	.byte 0x00
	.byte 0x03
	.byte 0x10
	.byte 0x02
	.byte 0x00
	.byte 0x03
_08003510:
	ldrb r0, [r0, r0]
	lsls r0, r0, #12
	lsrs r0, r4, #5
	lsls r0, r0, #12
	movs r0, r0
	movs r0, r0
	lsls r7, r7, #7
	lsls r1, r0, #4
	lsls r1, r0, #4
	lsls r1, r0, #4
	lsls r7, r7, #11
	lsls r2, r0, #8
	lsls r2, r0, #8
	lsls r2, r0, #8
	lsls r7, r7, #15
	lsls r3, r0, #12
	lsls r3, r0, #12
	lsls r3, r0, #12
	lsls r7, r7, #3
	movs r0, r0
	.4byte 0xf731fec8
	ldrh r7, [r5, #38]
	asrs r7, r7, #13
	.4byte 0xffffffff
	.4byte 0xffff
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0xff
	.byte 0xff
	.syntax unified
	.thumb
