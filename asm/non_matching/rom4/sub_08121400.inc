	THUMB_FUNC_START sub_08121400
sub_08121400: @ 0x08121400
	push {r4,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r4, r1, #0
	ldr r2, _08121428  @ =gRam
	ldr r3, _0812142C  @ =0x000009AD
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _08121448
	ldr r3, _08121430  @ =0x00000E1F
	add r0, r2, r3
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #2
	bne _08121434
	add r0, r1, #0
	bl sub_08120FD0
	b _0812146E
_08121428:
	.4byte gRam
_0812142C:
	.4byte 0x000009AD
_08121430:
	.4byte 0x00000E1F
_08121434:
	add r0, r4, #0
	bl sub_0812147C
	add r0, r4, #0
	bl sub_081210E4
	add r0, r4, #0
	bl sub_081211D4
	b _0812146E
_08121448:
	mov r1, #4
_0812144A:
	lsl r2, r1, #24
	asr r4, r2, #24
	ldr r1, _08121474  @ =gUnknown_02006885
	add r0, r4, r1
	ldr r1, _08121478  @ =gUnknown_0818036C
	add r1, r4, r1
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	beq _08121464
	lsr r0, r2, #24
	bl sub_08121234
_08121464:
	sub r0, r4, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _0812144A
_0812146E:
	pop {r4}
	pop {r0}
	bx r0
_08121474:
	.4byte gUnknown_02006885
_08121478:
	.4byte gUnknown_0818036C
	THUMB_FUNC_END sub_08121400

