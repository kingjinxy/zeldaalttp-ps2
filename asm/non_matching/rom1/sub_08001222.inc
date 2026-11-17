	.syntax unified
	THUMB_FUNC_START_NOALIGN sub_08001222
sub_08001222: @ 0X08001222
	movs r0, r0
	lsls r2, r3, #1
	movs r7, r0
	lsls r0, r2, #1
	movs r7, r0
	lsls r4, r4, #1
	movs r0, r1
	lsls r5, r4, #1
	movs r6, r0
	movs r0, r0
	movs r0, r0
	push {r0, lr}
	bl sub_0800D1C0
	pop {r0, pc}
	.byte 0x00
	.byte 0xb5
	.byte 0x00
	.byte 0xf0
	.byte 0x71
	.byte 0xf9
	.byte 0x18
	.byte 0x1c
	.byte 0x00
	.byte 0xbd
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0xb5
	.byte 0x53
	.byte 0x46
	.byte 0x38
	.byte 0xb4
	.byte 0x00
	.byte 0xf0
	.byte 0xbd
	.byte 0xf8
	.byte 0x38
	.byte 0xbc
	.byte 0x9a
	.byte 0x46
	.byte 0x00
	.byte 0xbd
	.syntax unified
	.thumb

