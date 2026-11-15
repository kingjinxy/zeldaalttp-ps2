	THUMB_FUNC_START sub_08024EA0
sub_08024EA0: @ 0x08024EA0
	push {r4,r5,lr}
	add r4, r0, #0
	ldr r0, [r4, #116]
	mov r5, #0
	str r5, [r0]
	ldr r1, [r4, #84]
	add r1, r1, #124
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	mov r0, #15
	mov r1, #1
	mov r2, #0
	bl sub_0804C8A8
	add r1, r0, #0
	cmp r1, #0
	beq _08024ECA
	add r0, r4, #0
	bl sub_0803D3D0
_08024ECA:
	add r0, r4, #0
	bl sub_08025058
	mov r0, #25
	strb r0, [r4, #20]
	ldrb r1, [r4, #28]
	sub r0, r0, #29
	and r0, r0, r1
	strb r0, [r4, #28]
	add r2, r4, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #127
	and r0, r0, r1
	strb r0, [r2]
	add r0, r4, #0
	add r0, r0, #69
	strb r5, [r0]
	ldr r0, [r4, #112]
	bl DeleteThisEntity
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08024EA0

	.byte 0x00
	.byte 0x00
