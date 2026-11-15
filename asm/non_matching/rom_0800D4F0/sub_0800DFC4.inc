	THUMB_FUNC_START sub_0800DFC4
sub_0800DFC4: @ 0x0800DFC4
	push {r4-r6,lr}
	add r3, r0, #0
	lsl r1, r1, #24
	lsr r4, r1, #24
	mov r0, #255
	add r0, r0, r3
	mov r12, r0
	ldrb r2, [r0]
	mov r1, #48
	mov r0, #112
	and r1, r1, r2
	and r0, r0, r4
	cmp r1, r0
	beq _0800E010
	mov r0, #63
	and r0, r0, r4
	mov r1, r12
	strb r0, [r1]
	add r1, r3, #0
	add r1, r1, #91
	ldrb r5, [r1]
	ldr r2, _0800E00C  @ =0x00000101
	add r0, r3, r2
	ldrb r0, [r0]
	sub r0, r5, r0
	add r2, r1, #0
	cmp r0, #0
	ble _0800E01C
	add r0, r5, #7
	mov r5, #8
	neg r5, r5
	add r1, r5, #0
	and r0, r0, r1
	strb r0, [r2]
	b _0800E01C
	.byte 0x00
	.byte 0x00
_0800E00C:
	.4byte 0x00000101
_0800E010:
	mov r0, #63
	and r0, r0, r4
	mov r1, r12
	strb r0, [r1]
	add r2, r3, #0
	add r2, r2, #91
_0800E01C:
	mov r0, #15
	and r0, r0, r4
	add r1, r3, #0
	add r1, r1, #92
	strb r0, [r1]
	ldrb r0, [r2]
	lsr r2, r0, #3
	mov r0, #28
	sub r0, r0, r2
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r6, r3, #0
	add r6, r6, #100
	ldrb r0, [r3, #27]
	cmp r0, #2
	beq _0800E05C
	ldr r1, _0800E058  @ =0x00000107
	add r0, r3, r1
	ldrb r0, [r0]
	mov r1, #2
	and r1, r1, r0
	lsl r1, r1, #24
	lsr r1, r1, #24
	lsl r0, r1, #3
	sub r0, r0, r1
	lsl r0, r0, #2
	add r0, r6, r0
	add r1, r0, r2
	b _0800E05E
	.byte 0x00
	.byte 0x00
_0800E058:
	.4byte 0x00000107
_0800E05C:
	add r1, r6, r2
_0800E05E:
	mov r0, #48
	and r4, r4, r0
	lsl r0, r5, #24
	mov r2, #255
	lsl r2, r2, #24
	add r0, r0, r2
	lsr r5, r0, #24
	asr r0, r0, #24
	mov r2, #1
	neg r2, r2
	cmp r0, r2
	beq _0800E08C
_0800E076:
	strb r4, [r1, #28]
	strb r4, [r1]
	add r1, r1, #1
	lsl r0, r5, #24
	mov r3, #255
	lsl r3, r3, #24
	add r0, r0, r3
	lsr r5, r0, #24
	asr r0, r0, #24
	cmp r0, r2
	bne _0800E076
_0800E08C:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0800DFC4

	.byte 0x00
	.byte 0x00
