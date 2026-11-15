	THUMB_FUNC_START sub_081004F8
sub_081004F8: @ 0x081004F8
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r4, _08100530  @ =gRam
	ldr r1, _08100534  @ =0x000010C2
	add r0, r4, r1
	add r0, r2, r0
	mov r1, #0
	strb r1, [r0]
	ldr r1, _08100538  @ =0x00001082
	add r0, r4, r1
	add r0, r2, r0
	mov r1, #12
	strb r1, [r0]
	ldr r1, _0810053C  @ =0x00000FE2
	add r0, r4, r1
	add r3, r2, r0
	ldrb r0, [r3]
	cmp r0, #0
	beq _08100560
	cmp r0, #223
	bhi _08100540
	sub r1, r1, #80
	add r0, r4, r1
	add r0, r2, r0
	mov r1, #14
	strb r1, [r0]
	b _08100578
_08100530:
	.4byte gRam
_08100534:
	.4byte 0x000010C2
_08100538:
	.4byte 0x00001082
_0810053C:
	.4byte 0x00000FE2
_08100540:
	ldr r0, _08100558  @ =0x00000F92
	add r1, r4, r0
	add r1, r2, r1
	ldr r2, _0810055C  @ =gUnknown_0817ADE8
	ldrb r0, [r3]
	sub r0, r0, #224
	asr r0, r0, #3
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	b _08100578
	.byte 0x00
	.byte 0x00
_08100558:
	.4byte 0x00000F92
_0810055C:
	.4byte gUnknown_0817ADE8
_08100560:
	ldr r1, _08100580  @ =0x00000F82
	add r0, r4, r1
	add r0, r2, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #39
	strb r0, [r3]
	add r0, r2, #0
	mov r1, #102
	bl sub_080CF018
_08100578:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08100580:
	.4byte 0x00000F82
	THUMB_FUNC_END sub_081004F8

