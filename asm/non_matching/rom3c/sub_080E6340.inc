	THUMB_FUNC_START sub_080E6340
sub_080E6340: @ 0x080E6340
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	mov r7, #0
	mov r6, #255
	mov r2, #15
	ldr r5, _080E6388  @ =gRam
_080E634E:
	lsl r2, r2, #24
	asr r1, r2, #24
	lsl r0, r3, #3
	add r4, r1, r0
	mov r0, #15
	and r4, r4, r0
	ldr r1, _080E638C  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E6390
	add r1, r1, #80
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #220
	beq _080E637A
	cmp r0, #225
	beq _080E637A
	cmp r0, #217
	bne _080E6390
_080E637A:
	add r0, r3, #0
	add r1, r4, #0
	bl sub_080E63C0
	add r6, r4, #0
	b _080E63B2
	.byte 0x00
	.byte 0x00
_080E6388:
	.4byte gRam
_080E638C:
	.4byte 0x00000FA2
_080E6390:
	mov r1, #255
	lsl r1, r1, #24
	add r0, r2, r1
	lsr r2, r0, #24
	cmp r0, #0
	bge _080E634E
	cmp r7, #0
	bne _080E63B2
	ldr r1, _080E63BC  @ =0x00000F52
	add r0, r5, r1
	add r0, r3, r0
	strb r7, [r0]
	add r1, r1, #112
	add r0, r5, r1
	add r0, r3, r0
	mov r1, #64
	strb r1, [r0]
_080E63B2:
	add r0, r6, #0
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080E63BC:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080E6340

