	THUMB_FUNC_START sub_08023798
sub_08023798: @ 0x08023798
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #20]
	cmp r0, #0
	bne _080237CA
	mov r3, #1
	mov r0, #1
	strb r0, [r4, #20]
	ldrb r2, [r4, #28]
	mov r1, #4
	neg r1, r1
	add r0, r1, #0
	and r0, r0, r2
	orr r0, r0, r3
	strb r0, [r4, #28]
	add r2, r4, #0
	add r2, r2, #94
	ldrb r0, [r2]
	and r1, r1, r0
	orr r1, r1, r3
	strb r1, [r2]
	add r0, r4, #0
	mov r1, #19
	bl sub_08003870
_080237CA:
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080237F2
	mov r0, #15
	mov r1, #1
	mov r2, #0
	bl sub_0804C8A8
	add r1, r0, #0
	cmp r1, #0
	beq _080237EC
	add r0, r4, #0
	bl sub_0803D3D0
_080237EC:
	add r0, r4, #0
	bl DeleteThisEntity
_080237F2:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08023798

