	THUMB_FUNC_START sub_08020798
sub_08020798: @ 0x08020798
	push {r4,r5,lr}
	add r4, r0, #0
	bl 0x08003828
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	beq _080207BA
	add r0, r4, #0
	bl 0x0800963C
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #0
	bne _080207D2
_080207BA:
	cmp r5, #0
	bne _080207CA
	ldrb r0, [r4, #23]
	mov r1, #60
	sub r1, r1, r0
	add r0, r4, #0
	add r0, r0, #116
	strb r1, [r0]
_080207CA:
	mov r0, #3
	strb r0, [r4, #20]
	mov r0, #30
	strb r0, [r4, #23]
_080207D2:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08020798

