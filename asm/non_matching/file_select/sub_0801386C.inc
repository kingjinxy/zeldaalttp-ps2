	THUMB_FUNC_START sub_0801386C
sub_0801386C: @ 0x0801386C
	push {r4-r7,lr}
	add r5, r0, #0
	lsl r1, r1, #24
	lsr r7, r1, #24
	ldrb r0, [r5]
	cmp r0, #255
	beq _080138B2
	mov r6, #8
_0801387C:
	ldrb r0, [r5]
	lsl r2, r0, #4
	orr r2, r2, r6
	ldrb r1, [r5, #1]
	lsl r3, r1, #4
	orr r3, r3, r6
	ldr r4, _080138B8  @ =0x000003FF
	add r0, r4, #0
	and r3, r3, r0
	mov r0, #128
	and r1, r1, r0
	mov r4, #128
	lsl r4, r4, #7
	cmp r1, #0
	beq _0801389E
	mov r4, #128
	lsl r4, r4, #8
_0801389E:
	add r0, r2, #0
	add r1, r3, #0
	add r2, r4, #0
	add r3, r7, #0
	bl sub_08013824
	add r5, r5, #2
	ldrb r0, [r5]
	cmp r0, #255
	bne _0801387C
_080138B2:
	pop {r4-r7}
	pop {r0}
	bx r0
_080138B8:
	.4byte 0x000003FF
	THUMB_FUNC_END sub_0801386C

