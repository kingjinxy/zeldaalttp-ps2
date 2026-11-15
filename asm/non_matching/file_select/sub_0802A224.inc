	THUMB_FUNC_START sub_0802A224
sub_0802A224: @ 0x0802A224
	push {r4,lr}
	add r4, r0, #0
	add r0, r0, #65
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0802A27C
	add r2, r4, #0
	add r2, r2, #100
	ldrb r0, [r2]
	cmp r0, #0
	bne _0802A27C
	mov r1, #1
	mov r0, #1
	strb r0, [r2]
	ldrb r0, [r4, #11]
	eor r0, r0, r1
	strb r0, [r4, #11]
	add r1, r4, #0
	add r1, r1, #61
	mov r0, #232
	strb r0, [r1]
	add r0, r4, #0
	bl sub_0802A28C
	ldr r0, _0802A284  @ =gUnknown_0201F000
	add r1, r4, #0
	add r1, r1, #82
	ldrb r2, [r1]
	lsl r2, r2, #2
	add r2, r2, r0
	ldr r1, _0802A288  @ =gUnknown_08137B10
	ldrb r0, [r4, #10]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r2]
	ldr r0, [r0]
	eor r1, r1, r0
	str r1, [r2]
	add r0, r4, #0
	mov r1, #23
	bl 0x08003E10
_0802A27C:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802A284:
	.4byte gUnknown_0201F000
_0802A288:
	.4byte gUnknown_08137B10
	THUMB_FUNC_END sub_0802A224

