	THUMB_FUNC_START sub_080F9C24
sub_080F9C24: @ 0x080F9C24
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _080F9D78  @ =gRam
	ldr r1, _080F9D7C  @ =0x00000F22
	add r0, r4, r1
	add r0, r5, r0
	ldrb r1, [r0]
	ldr r2, _080F9D80  @ =0x00000961
	add r0, r4, r2
	strb r1, [r0]
	ldr r3, _080F9D84  @ =0x00000F12
	add r0, r4, r3
	add r6, r5, r0
	ldr r1, _080F9D88  @ =0x00001152
	add r0, r4, r1
	add r0, r5, r0
	ldrb r0, [r0]
	ldrb r2, [r6]
	add r0, r0, r2
	mov r3, #150
	lsl r3, r3, #4
	add r1, r4, r3
	strb r0, [r1]
	bl sub_080CA32C
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080F9D8C  @ =0x00000F92
	add r1, r4, r2
	add r1, r1, r5
	mov r8, r1
	ldr r1, _080F9D90  @ =gUnknown_0817A388
	add r1, r0, r1
	ldrb r1, [r1]
	mov r3, r8
	strb r1, [r3]
	ldr r1, _080F9D94  @ =0x00001122
	add r3, r4, r1
	add r3, r5, r3
	ldrb r2, [r3]
	mov r1, #63
	and r1, r1, r2
	ldr r2, _080F9D98  @ =gUnknown_0817A398
	add r0, r0, r2
	ldrb r0, [r0]
	orr r1, r1, r0
	strb r1, [r3]
	add r0, r5, #0
	bl sub_080C6240
	ldr r2, _080F9D9C  @ =0x00001052
	add r0, r4, r2
	add r0, r0, r5
	mov r12, r0
	ldrb r2, [r0]
	mov r0, #31
	ldr r1, _080F9DA0  @ =gUnknown_0817A2F8
	add r1, r5, r1
	and r0, r0, r2
	ldrb r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r3, _080F9DA4  @ =gUnknown_0200F018
	add r1, r2, r3
	ldr r3, _080F9DA8  @ =0x00000EE2
	add r0, r4, r3
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080F9DAC  @ =gUnknown_0200F0D8
	add r1, r2, r0
	add r3, r3, #32
	add r0, r4, r3
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080F9DB0  @ =gUnknown_0200F198
	add r1, r2, r0
	sub r3, r3, #48
	add r0, r4, r3
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080F9DB4  @ =gUnknown_0200F258
	add r1, r2, r0
	ldr r2, _080F9DB8  @ =0x00000EF2
	add r0, r4, r2
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	mov r2, #0
	ldrb r1, [r6]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080F9CF2
	mov r2, #20
_080F9CF2:
	ldr r1, _080F9DBC  @ =gUnknown_03003E74
	lsr r0, r2, #2
	ldrh r3, [r1]
	add r0, r0, r3
	strh r0, [r1]
	mov r3, #0
	add r7, r4, #0
	mov r10, r8
	mov r9, r6
	mov r8, r12
	add r6, r1, #0
_080F9D08:
	ldr r0, _080F9DC0  @ =gUnknown_0817A3A8
	lsl r3, r3, #24
	asr r1, r3, #24
	add r0, r1, r0
	ldrb r0, [r0]
	mov r4, r10
	strb r0, [r4]
	ldr r0, _080F9DC4  @ =gUnknown_0817A384
	add r1, r1, r0
	mov r2, r8
	ldrb r0, [r2]
	ldrb r1, [r1]
	sub r0, r0, r1
	mov r2, #31
	ldr r1, _080F9DA0  @ =gUnknown_0817A2F8
	add r1, r5, r1
	and r0, r0, r2
	ldrb r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r4, _080F9DA4  @ =gUnknown_0200F018
	add r0, r2, r4
	ldrb r1, [r0]
	ldr r4, _080F9DC8  @ =0x00001622
	add r0, r7, r4
	strb r1, [r0]
	ldr r1, _080F9DAC  @ =gUnknown_0200F0D8
	add r0, r2, r1
	ldrb r1, [r0]
	add r4, r4, #1
	add r0, r7, r4
	strb r1, [r0]
	ldr r1, _080F9DB0  @ =gUnknown_0200F198
	add r0, r2, r1
	ldrb r1, [r0]
	add r4, r4, #1
	add r0, r7, r4
	strb r1, [r0]
	ldr r1, _080F9DB4  @ =gUnknown_0200F258
	add r0, r2, r1
	ldrb r1, [r0]
	ldr r2, _080F9DCC  @ =0x00001625
	add r0, r7, r2
	strb r1, [r0]
	mov r4, r9
	ldrb r1, [r4]
	mov r0, #128
	and r0, r0, r1
	add r4, r3, #0
	cmp r0, #0
	bne _080F9DD0
	ldrh r0, [r6]
	add r0, r0, #1
	b _080F9DD4
	.byte 0x00
	.byte 0x00
_080F9D78:
	.4byte gRam
_080F9D7C:
	.4byte 0x00000F22
_080F9D80:
	.4byte 0x00000961
_080F9D84:
	.4byte 0x00000F12
_080F9D88:
	.4byte 0x00001152
_080F9D8C:
	.4byte 0x00000F92
_080F9D90:
	.4byte gUnknown_0817A388
_080F9D94:
	.4byte 0x00001122
_080F9D98:
	.4byte gUnknown_0817A398
_080F9D9C:
	.4byte 0x00001052
_080F9DA0:
	.4byte gUnknown_0817A2F8
_080F9DA4:
	.4byte gUnknown_0200F018
_080F9DA8:
	.4byte 0x00000EE2
_080F9DAC:
	.4byte gUnknown_0200F0D8
_080F9DB0:
	.4byte gUnknown_0200F198
_080F9DB4:
	.4byte gUnknown_0200F258
_080F9DB8:
	.4byte 0x00000EF2
_080F9DBC:
	.4byte gUnknown_03003E74
_080F9DC0:
	.4byte gUnknown_0817A3A8
_080F9DC4:
	.4byte gUnknown_0817A384
_080F9DC8:
	.4byte 0x00001622
_080F9DCC:
	.4byte 0x00001625
_080F9DD0:
	ldrh r0, [r6]
	sub r0, r0, #1
_080F9DD4:
	strh r0, [r6]
	add r0, r5, #0
	bl sub_080C6240
	mov r1, #128
	lsl r1, r1, #17
	add r0, r4, r1
	lsr r3, r0, #24
	asr r0, r0, #24
	cmp r0, #4
	bne _080F9D08
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080F9C24

