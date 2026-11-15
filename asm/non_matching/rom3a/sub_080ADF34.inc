	THUMB_FUNC_START sub_080ADF34
sub_080ADF34: @ 0x080ADF34
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r6, _080ADFAC  @ =gUnknown_03003045
	mov r3, sp
	mov r5, #0
_080ADF46:
	ldrb r0, [r3]
	add r2, r0, r6
	ldrb r0, [r2]
	cmp r0, #49
	bne _080ADF52
	strb r5, [r2]
_080ADF52:
	ldrb r0, [r3]
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	strb r0, [r3]
	lsl r0, r0, #24
	cmp r0, #0
	bge _080ADF46
	add r0, r4, #0
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	asr r3, r0, #24
	cmp r3, #0
	bne _080ADFA4
	ldr r2, _080ADFB0  @ =gRam
	mov r1, sp
	ldr r4, _080ADFB4  @ =0x00000E29
	add r0, r2, r4
	ldrb r1, [r1]
	add r0, r0, r1
	strb r3, [r0]
	mov r1, sp
	ldr r3, _080ADFB8  @ =0x00001844
	add r0, r2, r3
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #9
	strb r1, [r0]
	ldr r4, _080ADFBC  @ =0x0000180D
	add r1, r2, r4
	mov r0, #1
	strb r0, [r1]
	mov r0, sp
	ldr r1, _080ADFC0  @ =0x00001832
	add r2, r2, r1
	ldrb r0, [r0]
	add r2, r2, r0
	mov r0, #2
	strb r0, [r2]
_080ADFA4:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
_080ADFAC:
	.4byte gUnknown_03003045
_080ADFB0:
	.4byte gRam
_080ADFB4:
	.4byte 0x00000E29
_080ADFB8:
	.4byte 0x00001844
_080ADFBC:
	.4byte 0x0000180D
_080ADFC0:
	.4byte 0x00001832
	THUMB_FUNC_END sub_080ADF34

