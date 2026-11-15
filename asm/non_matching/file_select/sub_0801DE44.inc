	THUMB_FUNC_START sub_0801DE44
sub_0801DE44: @ 0x0801DE44
	push {r4,lr}
	add r4, r0, #0
	ldrb r1, [r4, #24]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _0801DE76
	add r0, r4, #0
	bl 0x08003828
	add r2, r4, #0
	add r2, r2, #41
	ldrb r1, [r2]
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	beq _0801DE76
	ldrb r1, [r4, #24]
	mov r0, #253
	and r0, r0, r1
	strb r0, [r4, #24]
	ldrb r1, [r2]
	mov r0, #15
	and r0, r0, r1
	strb r0, [r2]
_0801DE76:
	ldrb r1, [r4, #24]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0801DE94
	mov r0, #5
	strb r0, [r4, #20]
	add r1, r4, #0
	add r1, r1, #42
	mov r0, #255
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #0
	bl sub_0801DEC0
_0801DE94:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801DE44

	.byte 0x00
	.byte 0x00
