	.syntax unified
	THUMB_FUNC_START sub_080080A0
sub_080080A0: @ 0X080080A0
	strb r2, [r1, #1]
	ldr r2, [pc, #788]
	ldrh r2, [r2, #0]
	ldr r3, [pc, #780]
	ands r2, r3
	beq.n _080080D0
	ldr r3, [pc, #780]
	bl 0x8007740
	movs r3, #4
	strb r3, [r0, #15]
	movs r2, #128
	ldrb r3, [r0, #9]
	orrs r2, r3
	strb r2, [r0, #9]
	movs r2, #20
	strb r2, [r0, #7]
	bl 0x80075c8
	bl 0x80075f4
	movs r2, #142
	bl 0x80031ac
_080080D0:
	pop {pc}
	.byte 0x00
	.byte 0x00
_080080D4:
	mov r1, sl
	bl 0x80012a4
	bl 0x800750c
	pop {pc}
	.byte 0x00
	.byte 0xb5
	.byte 0xff
	.byte 0xf7
	.byte 0x45
	.byte 0xff
	.byte 0x51
	.byte 0x46
	.byte 0x89
	.byte 0x6a
	.byte 0x3d
	.byte 0x22
	.byte 0x8a
	.byte 0x5c
	.byte 0x12
	.byte 0x43
	.byte 0x10
	.byte 0xd1
	.byte 0x82
	.byte 0x69
	.byte 0x12
	.byte 0x43
	.byte 0x08
	.byte 0xd0
	.byte 0x13
	.byte 0x7d
	.byte 0x02
	.byte 0x2b
	.byte 0x0a
	.byte 0xd1
	.byte 0x53
	.byte 0x7d
	.byte 0x05
	.byte 0x2b
	.byte 0x07
	.byte 0xd1
	.byte 0xff
	.byte 0xf7
	.byte 0x70
	.byte 0xfb
	.byte 0x04
	.byte 0xd0
	.byte 0xad
	.byte 0x4a
	.byte 0x12
	.byte 0x88
	.byte 0xa9
	.byte 0x4b
	.byte 0x1a
	.byte 0x40
	.byte 0x05
	.byte 0xd1
	.byte 0x81
	.byte 0x69
	.byte 0x09
	.byte 0x43
	.byte 0xdc
	.byte 0xd0
	.byte 0x06
	.byte 0x22
	.byte 0x4a
	.byte 0x75
	.byte 0xd9
	.byte 0xe7
	.byte 0x51
	.byte 0x46
	.byte 0x8a
	.byte 0x78
	.byte 0x12
	.byte 0x43
	.byte 0xd5
	.byte 0xd1
	.byte 0x4a
	.byte 0x79
	.byte 0x01
	.byte 0x2a
	.byte 0x02
	.byte 0xd1
	.byte 0xff
	.byte 0xf7
	.byte 0x25
	.byte 0xfb
	.byte 0xcf
	.byte 0xd1
	.byte 0x51
	.byte 0x46
	.byte 0x8a
	.byte 0x6a
	.byte 0x2a
	.byte 0x23
	.byte 0xd3
	.byte 0x5c
	.byte 0x5b
	.byte 0x08
	.byte 0xa1
	.byte 0x4a
	.byte 0xd2
	.byte 0x5c
	.byte 0xff
	.byte 0xf7
	.byte 0x3d
	.byte 0xfb
	.byte 0x03
	.byte 0xd1
	.byte 0x9f
	.byte 0x4b
	.byte 0xff
	.byte 0xf7
	.byte 0xf9
	.byte 0xfa
	.byte 0x06
	.byte 0xe0
	.byte 0xff
	.byte 0xf7
	.byte 0xec
	.byte 0xfa
	.byte 0x51
	.byte 0x46
	.byte 0x4b
	.byte 0x79
	.byte 0x01
	.byte 0x22
	.byte 0x93
	.byte 0x42
	.byte 0x0c
	.byte 0xd1
	.byte 0x51
	.byte 0x46
	.byte 0x01
	.byte 0xb4
	.byte 0x88
	.byte 0x6a
	.byte 0x06
	.byte 0x21
	.byte 0xf9
	.byte 0xf7
	.byte 0xeb
	.byte 0xfc
	.byte 0x01
	.byte 0xbc
	.byte 0x4c
	.byte 0xd0
	.byte 0xc1
	.byte 0x70
	.byte 0xc2
	.byte 0x71
	.byte 0x03
	.byte 0x72
	.byte 0x49
	.byte 0x40
	.byte 0x00
	.byte 0xe0
	.byte 0x81
	.byte 0x69
_0800817A:
	orrs r1, r1
	beq.n _0800818C
	ldrb r2, [r1, #26]
	lsrs r2, r2, #1
	bcs.n _08008208
_08008184:
	movs r2, #2
	strb r2, [r1, #20]
	movs r2, #0
	strb r2, [r1, #21]
_0800818C:
	str r1, [r0, #24]
	mov r2, sl
	ldr r2, [r2, #40]
	ldrb r2, [r2, #10]
	strb r2, [r1, #11]
	ldr r3, [pc, #564]
	bl 0x8007740
	bl 0x80075c8
	bl 0x80075f4
	mov r1, sl
	movs r2, #3
	strb r2, [r1, #5]
	movs r2, #2
	strb r2, [r0, #4]
	movs r2, #15
	strb r2, [r0, #15]
	push {r0}
	movs r0, #11
	bl 0x8003dfc
	bl 0x80123e8
	adds r1, r0, #0
	pop {r0}
	bne.n _080081C6
	b.n _080080D4
_080081C6:
	push {r0, r1}
	movs r0, #2
	bl 0x8012728
	pop {r0, r1}
	movs r2, #5
	strb r2, [r1, #9]
	movs r2, #8
	strb r2, [r1, #8]
	movs r2, #128
	strb r2, [r1, #25]
	mov r2, sl
	ldr r2, [r2, #40]
	str r1, [r2, #108]
	ldrb r2, [r2, #10]
	strb r2, [r1, #10]
	ldr r2, [r0, #24]
	str r2, [r1, #88]
	ldrb r2, [r2, #26]
	strb r2, [r1, #26]
	str r0, [r1, #84]
	str r1, [r0, #24]
	ldrb r2, [r0, #3]
	strb r2, [r1, #11]
	ldrb r2, [r0, #7]
	strb r2, [r1, #23]
	ldrb r2, [r0, #8]
	strb r2, [r1, #24]
	movs r2, #60
	ldrb r1, [r0, r2]
	movs r3, #127
	ands r1, r3
	strb r1, [r0, r2]
_08008208:
	pop {pc}
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0xb5
	.byte 0xff
	.byte 0xf7
	.byte 0xaf
	.byte 0xfe
	.syntax unified
	.thumb
