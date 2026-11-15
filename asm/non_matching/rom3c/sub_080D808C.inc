	THUMB_FUNC_START sub_080D808C
sub_080D808C: @ 0x080D808C
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r7, _080D80D0  @ =gRam
	ldr r0, _080D80D4  @ =0x00001122
	add r2, r7, r0
	add r2, r6, r2
	ldrb r0, [r2]
	mov r1, #63
	and r1, r1, r0
	ldr r4, _080D80D8  @ =gUnknown_08175740
	ldr r0, _080D80DC  @ =0x00000F62
	add r3, r7, r0
	add r3, r6, r3
	ldrb r0, [r3]
	add r0, r0, r4
	ldrb r0, [r0]
	orr r1, r1, r0
	strb r1, [r2]
	ldr r0, _080D80E0  @ =0x00000F92
	add r1, r7, r0
	add r1, r6, r1
	ldr r2, _080D80E4  @ =gUnknown_0817575C
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldrb r0, [r3]
	cmp r0, #3
	bls _080D80E8
	add r0, r6, #0
	bl sub_080C6240
	b _080D8122
_080D80D0:
	.4byte gRam
_080D80D4:
	.4byte 0x00001122
_080D80D8:
	.4byte gUnknown_08175740
_080D80DC:
	.4byte 0x00000F62
_080D80E0:
	.4byte 0x00000F92
_080D80E4:
	.4byte gUnknown_0817575C
_080D80E8:
	ldr r0, _080D8128  @ =0x00001622
	add r0, r0, r7
	mov r12, r0
	ldrb r2, [r0]
	ldr r0, _080D812C  @ =0x00001623
	add r5, r7, r0
	ldrb r0, [r5]
	lsl r0, r0, #8
	add r2, r2, r0
	add r2, r2, #4
	ldr r0, _080D8130  @ =0x00001624
	add r3, r7, r0
	ldrb r1, [r3]
	add r0, r0, #1
	add r4, r7, r0
	ldrb r0, [r4]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #4
	mov r0, r12
	strb r2, [r0]
	lsr r2, r2, #8
	strb r2, [r5]
	strb r1, [r3]
	lsr r1, r1, #8
	strb r1, [r4]
	add r0, r6, #0
	bl sub_080C58F0
_080D8122:
	pop {r4-r7}
	pop {r0}
	bx r0
_080D8128:
	.4byte 0x00001622
_080D812C:
	.4byte 0x00001623
_080D8130:
	.4byte 0x00001624
	THUMB_FUNC_END sub_080D808C

