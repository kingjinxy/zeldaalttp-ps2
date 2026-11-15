	THUMB_FUNC_START sub_08108FA4
sub_08108FA4: @ 0x08108FA4
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r2, r4, #0
	ldr r6, _08108FD8  @ =gRam
	ldr r1, _08108FDC  @ =0x00000FC2
	add r0, r6, r1
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	bne _08108FE4
	add r0, r4, #0
	bl sub_080C2C4C
	ldr r3, _08108FE0  @ =0x00001152
	add r1, r6, r3
	add r1, r4, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08108FEA
	mov r0, #32
	strb r0, [r5]
	b _08108FEA
_08108FD8:
	.4byte gRam
_08108FDC:
	.4byte 0x00000FC2
_08108FE0:
	.4byte 0x00001152
_08108FE4:
	ldrb r0, [r5]
	cmp r0, #1
	beq _08109010
_08108FEA:
	ldr r0, _08109004  @ =0x00000F92
	add r1, r6, r0
	add r1, r4, r1
	ldr r2, _08109008  @ =gUnknown_0817C29E
	ldr r3, _0810900C  @ =0x00000FB2
	add r0, r6, r3
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	b _08109024
	.byte 0x00
	.byte 0x00
_08109004:
	.4byte 0x00000F92
_08109008:
	.4byte gUnknown_0817C29E
_0810900C:
	.4byte 0x00000FB2
_08109010:
	ldr r1, _0810902C  @ =0x00000F52
	add r0, r6, r1
	add r0, r2, r0
	mov r1, #16
	strb r1, [r0]
	ldr r3, _08109030  @ =0x00001152
	add r0, r6, r3
	add r0, r2, r0
	mov r1, #160
	strb r1, [r0]
_08109024:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810902C:
	.4byte 0x00000F52
_08109030:
	.4byte 0x00001152
	THUMB_FUNC_END sub_08108FA4

