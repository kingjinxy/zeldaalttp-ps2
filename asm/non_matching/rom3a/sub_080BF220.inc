	THUMB_FUNC_START sub_080BF220
sub_080BF220: @ 0x080BF220
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r7, r5, #0
	ldr r6, _080BF270  @ =gRam
	ldr r1, _080BF274  @ =0x00001844
	add r0, r6, r1
	add r4, r5, r0
	ldrb r0, [r4]
	sub r0, r0, #1
	mov r1, #0
	mov r8, r1
	strb r0, [r4]
	mov r1, #255
	and r0, r0, r1
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080BF250
	add r0, r5, #0
	bl sub_080BF294
_080BF250:
	mov r0, r8
	strb r0, [r4]
	ldr r0, _080BF278  @ =0x00000E29
	add r1, r6, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #4
	beq _080BF27C
	add r0, r5, #0
	bl sub_080BF294
	b _080BF286
_080BF270:
	.4byte gRam
_080BF274:
	.4byte 0x00001844
_080BF278:
	.4byte 0x00000E29
_080BF27C:
	ldr r1, _080BF290  @ =0x00000E15
	add r0, r6, r1
	add r0, r7, r0
	mov r1, r8
	strb r1, [r0]
_080BF286:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080BF290:
	.4byte 0x00000E15
	THUMB_FUNC_END sub_080BF220

