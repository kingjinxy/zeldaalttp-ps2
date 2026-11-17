	THUMB_FUNC_START sub_08026600
sub_08026600: @ 0x08026600
	push {r4,r5,lr}
	add r4, r0, #0
	ldr r0, [r4, #84]
	cmp r0, #0
	beq _08026618
	ldr r0, [r0, #88]
	cmp r0, r4
	beq _08026618
	add r0, r4, #0
	bl DeleteThisEntity
	b _0802664E
_08026618:
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #0
	bne _0802664E
	mov r0, #2
	strb r0, [r4, #20]
	add r2, r4, #0
	add r2, r2, #60
	ldrb r0, [r2]
	mov r1, #128
	orr r0, r0, r1
	strb r0, [r2]
	add r2, r2, #20
	ldrh r1, [r2]
	ldr r0, _08026654  @ =0x0000CFFF
	and r0, r0, r1
	strh r0, [r2]
	add r0, r4, #0
	bl sub_08008DD8
	ldr r0, [r4, #84]
	cmp r0, #0
	beq _0802664E
	str r5, [r0, #88]
_0802664E:
	pop {r4,r5}
	pop {r0}
	bx r0
_08026654:
	.4byte 0x0000CFFF
	THUMB_FUNC_END sub_08026600

