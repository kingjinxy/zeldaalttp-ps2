	THUMB_FUNC_START sub_0804EFC8
sub_0804EFC8: @ 0x0804EFC8
	push {r4,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #60
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _0804F03C  @ =gUnknown_03005E10
	ldr r1, [r7]
	ldr r2, [r1, #88]
	ldrb r1, [r2, #10]
	add r2, r1, #0
	lsl r1, r2, #1
	add r0, r0, r1
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #102
	ldrh r1, [r2]
	mvn r2, r1
	ldrh r0, [r0]
	add r1, r2, #0
	add r2, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _0804F040
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #24]
	add r1, r2, #1
	ldrb r2, [r0, #24]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #24]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #5
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	b _0804F076
	.byte 0x00
	.byte 0x00
_0804F03C:
	.4byte gUnknown_03005E10
_0804F040:
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	sub r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r1, #0
	orr r3, r3, r2
	add r2, r3, #0
	strb r2, [r0, #23]
	add r0, r1, #0
	mov r1, #0
	bic r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #255
	bne _0804F076
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #24]
_0804F076:
	ldr r0, [r7]
	ldr r1, [r0, #88]
	ldrb r0, [r1, #20]
	cmp r0, #6
	beq _0804F094
	cmp r0, #6
	bgt _0804F08E
	cmp r0, #3
	bgt _0804F0A8
	cmp r0, #2
	blt _0804F0A8
	b _0804F094
_0804F08E:
	cmp r0, #17
	beq _0804F094
	b _0804F0A8
_0804F094:
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #10
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #24]
_0804F0A8:
	ldr r0, _0804F1E8  @ =gUnknown_03006A30
	ldr r1, [r7]
	ldr r2, [r1, #88]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrh r1, [r0, #54]
	mov r2, #4
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	bne _0804F0E0
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #10
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #24]
_0804F0E0:
	ldr r0, _0804F1E8  @ =gUnknown_03006A30
	ldr r1, [r7]
	ldr r2, [r1, #88]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrh r1, [r0, #54]
	mov r2, #17
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _0804F118
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #10
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #24]
_0804F118:
	ldr r0, _0804F1E8  @ =gUnknown_03006A30
	ldr r1, [r7]
	ldr r2, [r1, #88]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #30]
	mov r2, #32
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0804F150
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #10
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #24]
_0804F150:
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	cmp r1, #9
	bls _0804F1FC
	ldr r0, _0804F1EC  @ =gLCDRegisterBuffer
	ldr r1, [r7]
	ldr r2, [r1, #88]
	ldrb r0, [r0]
	ldrb r1, [r2, #10]
	cmp r0, r1
	bne _0804F1A2
	ldr r0, _0804F1F0  @ =gUnknown_030004A0
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #104
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, _0804F1F4  @ =gUnknown_03000948
	ldrb r1, [r0, #4]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #4]
	ldr r0, [r7]
	ldrb r1, [r0, #31]
	mov r2, #254
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #31]
	mov r1, #128
	lsl r1, r1, #1
	add r0, r1, #0
	bl sub_0800D200
_0804F1A2:
	ldr r0, _0804F1E8  @ =gUnknown_03006A30
	ldr r1, [r7]
	ldr r2, [r1, #88]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldr r1, _0804F1E8  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldr r3, [r2, #88]
	ldrb r2, [r3, #10]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, r2
	ldrh r2, [r1, #54]
	ldr r3, _0804F1F8  @ =0x0000FFFB
	add r1, r2, #0
	and r1, r1, r3
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7]
	mov r1, #0
	bl sub_0804EF98
	b _0804F21E
_0804F1E8:
	.4byte gUnknown_03006A30
_0804F1EC:
	.4byte gLCDRegisterBuffer
_0804F1F0:
	.4byte gUnknown_030004A0
_0804F1F4:
	.4byte gUnknown_03000948
_0804F1F8:
	.4byte 0x0000FFFB
_0804F1FC:
	ldr r0, _0804F228  @ =gLCDRegisterBuffer
	ldr r1, [r7]
	ldr r2, [r1, #88]
	ldrb r0, [r0]
	ldrb r1, [r2, #10]
	cmp r0, r1
	bne _0804F21E
	ldr r0, [r7]
	ldr r2, [r0, #88]
	add r1, r2, #0
	add r0, r2, #0
	add r0, r0, #46
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
_0804F21E:
	add sp, sp, #4
	pop {r4,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0804F228:
	.4byte gLCDRegisterBuffer
	THUMB_FUNC_END sub_0804EFC8

