	THUMB_FUNC_START sub_080DC1FC
sub_080DC1FC: @ 0x080DC1FC
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	ldr r5, _080DC244  @ =gRam
	ldr r1, _080DC248  @ =0x00000FC2
	add r0, r5, r1
	add r3, r4, r0
	ldrb r0, [r3]
	cmp r0, #0
	bne _080DC270
	ldr r1, _080DC24C  @ =gUnknown_08176000
	ldr r2, _080DC250  @ =0x00000F62
	add r0, r5, r2
	add r2, r4, r0
	ldrb r0, [r2]
	add r0, r0, r1
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080DC258
	mov r1, #132
	lsl r1, r1, #1
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9564
	ldr r0, _080DC254  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _080DC270
_080DC244:
	.4byte gRam
_080DC248:
	.4byte 0x00000FC2
_080DC24C:
	.4byte gUnknown_08176000
_080DC250:
	.4byte 0x00000F62
_080DC254:
	.4byte 0x00000F52
_080DC258:
	ldr r4, _080DC278  @ =0x00000F92
	add r0, r5, r4
	add r0, r6, r0
	strb r1, [r0]
	ldr r1, _080DC27C  @ =gUnknown_08176008
	ldrb r0, [r2]
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r3]
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
_080DC270:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
_080DC278:
	.4byte 0x00000F92
_080DC27C:
	.4byte gUnknown_08176008
	THUMB_FUNC_END sub_080DC1FC

