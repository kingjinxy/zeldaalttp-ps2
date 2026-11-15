	THUMB_FUNC_START sub_080C4B60
sub_080C4B60: @ 0x080C4B60
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r6, r0, #0
	lsl r1, r1, #24
	lsr r4, r1, #24
	mov r8, r4
	ldr r5, _080C4BB4  @ =gRam
	ldr r1, _080C4BB8  @ =0x00000F82
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #2
	bls _080C4BD4
	add r0, r4, #0
	mov r1, #32
	bl sub_080C4378
	ldr r0, _080C4BBC  @ =0x000016F9
	add r1, r5, r0
	mov r0, #144
	strb r0, [r1]
	ldr r0, _080C4BC0  @ =0x000016F8
	add r1, r5, r0
	mov r0, #16
	strb r0, [r1]
	ldr r1, _080C4BC4  @ =0x00000E75
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #4
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #0
	beq _080C4BC8
	add r0, r6, #0
	add r1, r4, #0
	bl sub_080C555C
	b _080C4BF8
	.byte 0x00
	.byte 0x00
_080C4BB4:
	.4byte gRam
_080C4BB8:
	.4byte 0x00000F82
_080C4BBC:
	.4byte 0x000016F9
_080C4BC0:
	.4byte 0x000016F8
_080C4BC4:
	.4byte 0x00000E75
_080C4BC8:
	add r0, r4, #0
	bl sub_080C3AC8
	strb r5, [r6]
	mov r0, #1
	b _080C4BFC
_080C4BD4:
	ldr r0, _080C4C08  @ =0x000016F9
	add r7, r5, r0
	ldrb r0, [r7]
	cmp r0, #0
	bne _080C4BF0
	add r0, r4, #0
	mov r1, #4
	bl sub_080C4378
	ldr r0, _080C4C0C  @ =0x000016F8
	add r1, r5, r0
	mov r0, #16
	strb r0, [r1]
	strb r0, [r7]
_080C4BF0:
	add r0, r6, #0
	mov r1, r8
	bl sub_080C55A4
_080C4BF8:
	lsl r0, r0, #24
	lsr r0, r0, #24
_080C4BFC:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080C4C08:
	.4byte 0x000016F9
_080C4C0C:
	.4byte 0x000016F8
	THUMB_FUNC_END sub_080C4B60

