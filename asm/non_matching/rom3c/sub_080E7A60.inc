	THUMB_FUNC_START sub_080E7A60
sub_080E7A60: @ 0x080E7A60
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _080E7AC4  @ =gRam
	ldr r2, _080E7AC8  @ =0x00001610
	add r0, r1, r2
	ldrb r0, [r0]
	add r6, r1, #0
	cmp r0, #2
	bhi _080E7ABC
	ldr r3, _080E7ACC  @ =0x000015F7
	add r0, r6, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E7A9A
	ldr r1, _080E7AD0  @ =0x000010F2
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E7A9A
	ldr r2, _080E7AD4  @ =gUnknown_03003E74
	ldr r1, _080E7AD8  @ =gUnknown_081778C6
	mov r0, #3
	and r0, r0, r4
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	strh r0, [r2]
_080E7A9A:
	ldr r2, _080E7ADC  @ =0x00001172
	add r1, r6, r2
	add r1, r4, r1
	ldr r3, _080E7AE0  @ =0x00000FA2
	add r0, r6, r3
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080E7AE4  @ =0x00000F82
	add r0, r6, r1
	add r5, r4, r0
	ldrb r2, [r5]
	cmp r2, #5
	bls _080E7AE8
	add r0, r4, #0
	bl sub_080E7BD4
_080E7ABC:
	add r0, r4, #0
	bl sub_080E7D28
	b _080E7B24
_080E7AC4:
	.4byte gRam
_080E7AC8:
	.4byte 0x00001610
_080E7ACC:
	.4byte 0x000015F7
_080E7AD0:
	.4byte 0x000010F2
_080E7AD4:
	.4byte gUnknown_03003E74
_080E7AD8:
	.4byte gUnknown_081778C6
_080E7ADC:
	.4byte 0x00001172
_080E7AE0:
	.4byte 0x00000FA2
_080E7AE4:
	.4byte 0x00000F82
_080E7AE8:
	add r0, r4, #0
	bl sub_080C6240
	ldrb r2, [r5]
	ldr r3, _080E7B10  @ =0x000009B2
	add r0, r6, r3
	ldr r3, _080E7B14  @ =0x0000164C
	add r1, r6, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrb r1, [r1]
	add r0, r0, r1
	cmp r0, #1
	bgt _080E7B18
	add r0, r4, #0
	add r1, r2, #0
	bl sub_080E7B2C
	b _080E7B24
_080E7B10:
	.4byte 0x000009B2
_080E7B14:
	.4byte 0x0000164C
_080E7B18:
	add r1, r2, #5
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r4, #0
	bl sub_080E7B2C
_080E7B24:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E7A60

	.byte 0x00
	.byte 0x00
