	THUMB_FUNC_START sub_080C3138
sub_080C3138: @ 0x080C3138
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r7, r4, #0
	ldr r5, _080C31B4  @ =gRam
	ldr r1, _080C31B8  @ =0x00001804
	add r0, r5, r1
	ldrb r6, [r0]
	cmp r6, #0
	bne _080C3206
	ldr r2, _080C31BC  @ =0x00001782
	add r0, r5, r2
	ldrb r0, [r0]
	sub r0, r0, #1
	ldr r2, _080C31C0  @ =0x000015DC
	add r1, r5, r2
	ldrb r1, [r1]
	cmp r0, r1
	bne _080C31E4
	ldr r1, _080C31C4  @ =0x00001062
	add r0, r5, r1
	add r0, r4, r0
	strb r6, [r0]
	add r0, r4, #0
	mov r1, #10
	bl sub_080CF0AC
	ldr r0, _080C31C8  @ =0x0000141C
	add r2, r5, r0
	add r2, r4, r2
	ldr r1, _080C31CC  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	strb r1, [r2]
	mov r1, #10
	strb r1, [r0]
	ldr r2, _080C31D0  @ =0x00000FC2
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #16
	strb r1, [r0]
	ldr r1, _080C31D4  @ =0x0000140C
	add r0, r5, r1
	add r0, r4, r0
	strb r6, [r0]
	ldr r2, _080C31D8  @ =0x000013B2
	add r0, r5, r2
	add r0, r4, r0
	strb r6, [r0]
	add r0, r4, #0
	bl sub_080C2FA8
	ldr r1, _080C31DC  @ =gUnknown_08171E4D
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r2, _080C31E0  @ =0x000016D5
	add r0, r5, r2
	strb r1, [r0]
	b _080C3206
_080C31B4:
	.4byte gRam
_080C31B8:
	.4byte 0x00001804
_080C31BC:
	.4byte 0x00001782
_080C31C0:
	.4byte 0x000015DC
_080C31C4:
	.4byte 0x00001062
_080C31C8:
	.4byte 0x0000141C
_080C31CC:
	.4byte 0x00000FA2
_080C31D0:
	.4byte 0x00000FC2
_080C31D4:
	.4byte 0x0000140C
_080C31D8:
	.4byte 0x000013B2
_080C31DC:
	.4byte gUnknown_08171E4D
_080C31E0:
	.4byte 0x000016D5
_080C31E4:
	bl sub_080C4F6C
	add r0, r7, #0
	bl sub_080C4574
	bl sub_080C466C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080C3206
	add r0, r7, #1
	ldr r2, _080C320C  @ =0x0000179E
	add r1, r5, r2
	strb r0, [r1]
	ldr r2, _080C3210  @ =0x000015F6
	add r1, r5, r2
	strb r0, [r1]
_080C3206:
	pop {r4-r7}
	pop {r0}
	bx r0
_080C320C:
	.4byte 0x0000179E
_080C3210:
	.4byte 0x000015F6
	THUMB_FUNC_END sub_080C3138

