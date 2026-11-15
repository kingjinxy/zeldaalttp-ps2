	THUMB_FUNC_START sub_08101428
sub_08101428: @ 0x08101428
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r3, #29
	ldr r1, _08101444  @ =gRam
	ldr r2, _08101448  @ =0x000011EF
	add r0, r1, r2
	ldrb r0, [r0]
	add r4, r1, #0
	cmp r0, #0
	bne _0810144C
	mov r2, #29
	b _0810146C
	.byte 0x00
	.byte 0x00
_08101444:
	.4byte gRam
_08101448:
	.4byte 0x000011EF
_0810144C:
	lsl r0, r3, #24
	mov r3, #255
	lsl r3, r3, #24
	add r0, r0, r3
	lsr r3, r0, #24
	lsl r1, r3, #24
	asr r2, r1, #24
	cmp r2, #0
	blt _08101472
	ldr r6, _0810150C  @ =0x000011D2
	add r0, r4, r6
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _0810144C
	lsr r2, r1, #24
_0810146C:
	lsl r0, r3, #24
	cmp r0, #0
	bge _0810148A
_08101472:
	ldr r0, _08101510  @ =0x00001642
	add r2, r4, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08101488
	mov r0, #29
	strb r0, [r2]
_08101488:
	ldrb r2, [r2]
_0810148A:
	ldr r1, _0810150C  @ =0x000011D2
	add r0, r4, r1
	add r0, r2, r0
	mov r1, #15
	strb r1, [r0]
	ldr r3, _08101514  @ =0x000015F8
	add r0, r4, r3
	strb r1, [r0]
	ldr r6, _08101518  @ =0x000013EE
	add r1, r4, r6
	add r1, r2, r1
	ldr r3, _0810151C  @ =0x00000F92
	add r0, r4, r3
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	sub r6, r6, #210
	add r0, r4, r6
	add r0, r2, r0
	strb r5, [r0]
	ldr r0, _08101520  @ =0x0000122C
	add r1, r4, r0
	add r1, r2, r1
	sub r3, r3, #176
	add r0, r4, r3
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	sub r6, r6, #180
	add r1, r4, r6
	add r1, r2, r1
	add r3, r3, #32
	add r0, r4, r3
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r6, _08101524  @ =0x00000ED2
	add r0, r4, r6
	add r0, r5, r0
	ldrb r1, [r0]
	sub r3, r3, #16
	add r0, r4, r3
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #16
	ldr r6, _08101528  @ =0x0000120E
	add r0, r4, r6
	add r0, r2, r0
	strb r1, [r0]
	ldr r3, _0810152C  @ =0x0000124A
	add r0, r4, r3
	add r0, r2, r0
	lsr r1, r1, #8
	strb r1, [r0]
	add r6, r6, #240
	add r0, r4, r6
	add r0, r2, r0
	mov r1, #10
	strb r1, [r0]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810150C:
	.4byte 0x000011D2
_08101510:
	.4byte 0x00001642
_08101514:
	.4byte 0x000015F8
_08101518:
	.4byte 0x000013EE
_0810151C:
	.4byte 0x00000F92
_08101520:
	.4byte 0x0000122C
_08101524:
	.4byte 0x00000ED2
_08101528:
	.4byte 0x0000120E
_0810152C:
	.4byte 0x0000124A
	THUMB_FUNC_END sub_08101428

