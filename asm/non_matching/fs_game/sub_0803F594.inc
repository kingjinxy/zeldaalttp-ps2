	THUMB_FUNC_START sub_0803F594
sub_0803F594: @ 0x0803F594
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	add r2, r0, #0
	add r0, r1, #0
	add r1, r7, #0
	strb r2, [r1]
	add r1, r7, #1
	strb r0, [r1]
	add r0, r7, #0
	ldrb r1, [r0]
	cmp r1, #255
	bne _0803F5BC
	ldr r1, _0803F5B8  @ =0x00000203
	add r0, r1, #0
	bl sub_0800D6A4
	b _0803F610
_0803F5B8:
	.4byte 0x00000203
_0803F5BC:
	ldr r1, _0803F618  @ =0x00000201
	add r0, r1, #0
	bl sub_0800D6A4
	ldr r0, _0803F61C  @ =gUnknown_0201ED90
	add r1, r7, #1
	ldrb r2, [r1]
	add r1, r2, #0
	add r2, r1, #1
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	str r1, [r0, #8]
	ldr r0, _0803F61C  @ =gUnknown_0201ED90
	ldr r1, _0803F620  @ =0x080046DC
	ldr r3, _0803F624  @ =gUnknown_03006C80
	add r2, r3, #0
	add r3, r3, #80
	ldrb r2, [r3]
	sub r3, r2, #1
	add r2, r3, #0
	lsl r3, r2, #2
	add r1, r1, r3
	ldr r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	str r1, [r0, #12]
	ldr r0, _0803F61C  @ =gUnknown_0201ED90
	ldr r1, _0803F620  @ =0x080046DC
	ldr r3, _0803F624  @ =gUnknown_03006C80
	add r2, r3, #0
	add r3, r3, #80
	ldrb r2, [r3]
	add r3, r2, #0
	lsl r2, r3, #2
	add r1, r1, r2
	ldr r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	str r1, [r0, #16]
_0803F610:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_0803F618:
	.4byte 0x00000201
_0803F61C:
	.4byte gUnknown_0201ED90
_0803F620:
	.4byte 0x080046DC
_0803F624:
	.4byte gUnknown_03006C80
	THUMB_FUNC_END sub_0803F594

