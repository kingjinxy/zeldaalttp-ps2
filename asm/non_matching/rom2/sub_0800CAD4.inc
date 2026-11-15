	THUMB_FUNC_START sub_0800CAD4
sub_0800CAD4: @ 0x0800CAD4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	add r4, r2, #0
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r9, r0
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r10, r1
	ldr r0, _0800CB48  @ =gUnknown_02038000
	mov r8, r0
	lsl r4, r4, #16
	lsr r7, r4, #16
	ldr r0, _0800CB4C  @ =gUnknown_03000204
	ldrb r1, [r0]
	lsl r0, r1, #2
	add r0, r0, r1
	lsl r0, r0, #6
	ldr r1, _0800CB50  @ =gUnknown_0202A0F0
	add r0, r0, r1
	mov r1, #160
	lsl r1, r1, #1
	bl zero_memory
	add r5, r7, #0
	asr r4, r4, #15
	mov r0, #3
	sub r0, r0, r4
	lsl r0, r0, #16
	lsr r6, r0, #16
	lsl r0, r7, #16
	mov r4, #0
	cmp r0, #0
	blt _0800CB76
_0800CB1E:
	lsl r0, r4, #16
	asr r3, r0, #16
	lsl r0, r3, #1
	add r0, r0, r8
	strh r5, [r0]
	lsl r0, r5, #16
	asr r2, r0, #16
	lsl r0, r2, #1
	add r0, r0, r8
	strh r4, [r0]
	lsl r0, r6, #16
	asr r0, r0, #16
	cmp r0, #0
	bge _0800CB54
	add r0, r0, #6
	lsl r1, r3, #2
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r6, r0, #16
	b _0800CB68
	.byte 0x00
	.byte 0x00
_0800CB48:
	.4byte gUnknown_02038000
_0800CB4C:
	.4byte gUnknown_03000204
_0800CB50:
	.4byte gUnknown_0202A0F0
_0800CB54:
	add r1, r0, #0
	add r1, r1, #10
	sub r0, r3, r2
	lsl r0, r0, #2
	add r1, r1, r0
	lsl r1, r1, #16
	lsr r6, r1, #16
	sub r0, r2, #1
	lsl r0, r0, #16
	lsr r5, r0, #16
_0800CB68:
	add r0, r3, #1
	lsl r0, r0, #16
	lsr r4, r0, #16
	lsl r1, r4, #16
	lsl r0, r5, #16
	cmp r1, r0
	ble _0800CB1E
_0800CB76:
	mov r1, r9
	lsl r0, r1, #16
	asr r0, r0, #16
	mov r2, r10
	lsl r1, r2, #16
	asr r1, r1, #16
	lsl r2, r7, #16
	asr r2, r2, #16
	bl sub_0800CBBC
	ldr r2, _0800CBB0  @ =gUnknown_030004A0
	ldr r3, _0800CBB4  @ =gUnknown_0202A0F0
	ldr r0, _0800CBB8  @ =gUnknown_03000204
	ldrb r1, [r0]
	lsl r0, r1, #2
	add r0, r0, r1
	lsl r0, r0, #6
	add r0, r0, r3
	ldrh r0, [r0]
	add r2, r2, #88
	strh r0, [r2]
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0800CBB0:
	.4byte gUnknown_030004A0
_0800CBB4:
	.4byte gUnknown_0202A0F0
_0800CBB8:
	.4byte gUnknown_03000204
	THUMB_FUNC_END sub_0800CAD4

