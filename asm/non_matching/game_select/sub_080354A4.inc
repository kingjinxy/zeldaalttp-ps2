	THUMB_FUNC_START sub_080354A4
sub_080354A4: @ 0x080354A4
	push {r4-r6,lr}
	add r4, r0, #0
	lsl r1, r1, #16
	lsr r6, r1, #16
	lsl r2, r2, #16
	lsr r5, r2, #16
	ldr r1, _080354E8  @ =gUnknown_08427B6C
	add r0, r0, #104
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r1, [r0]
	mov r0, #0
	mov r2, #1
	bl sub_0804C8A8
	add r2, r0, #0
	cmp r2, #0
	beq _080354E2
	strh r6, [r2, #50]
	strh r5, [r2, #54]
	ldrb r0, [r4, #22]
	strb r0, [r2, #23]
	add r0, r4, #0
	add r0, r0, #106
	ldrh r1, [r0]
	add r0, r2, #0
	add r0, r0, #80
	strh r1, [r0]
	add r0, r2, #0
	bl sub_0804C9C8
_080354E2:
	pop {r4-r6}
	pop {r0}
	bx r0
_080354E8:
	.4byte gUnknown_08427B6C
	THUMB_FUNC_END sub_080354A4

