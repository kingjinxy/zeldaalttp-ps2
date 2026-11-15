	THUMB_FUNC_START sub_08134DC4
sub_08134DC4: @ 0x08134DC4
	push {r4-r7,lr}
	add r7, r0, #0
	add r6, r1, #0
	lsl r2, r2, #24
	lsr r4, r2, #24
	cmp r4, #0
	beq _08134E28
	cmp r4, #16
	bls _08134DD8
	mov r4, #16
_08134DD8:
	ldr r0, _08134E30  @ =gUnknown_03007FF0
	ldr r5, [r0]
	ldr r1, [r5]
	ldr r0, _08134E34  @ =0x68736D53
	cmp r1, r0
	bne _08134E28
	add r0, r1, #1
	str r0, [r5]
	add r0, r7, #0
	bl sub_08134A70
	str r6, [r7, #44]
	strb r4, [r7, #8]
	mov r0, #128
	lsl r0, r0, #24
	str r0, [r7, #4]
	cmp r4, #0
	beq _08134E0C
	mov r1, #0
_08134DFE:
	strb r1, [r6]
	sub r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r6, #80
	cmp r4, #0
	bne _08134DFE
_08134E0C:
	ldr r0, [r5, #32]
	cmp r0, #0
	beq _08134E1C
	str r0, [r7, #56]
	ldr r0, [r5, #36]
	str r0, [r7, #60]
	mov r0, #0
	str r0, [r5, #32]
_08134E1C:
	str r7, [r5, #36]
	ldr r0, _08134E38  @ =0x08134075
	str r0, [r5, #32]
	ldr r0, _08134E34  @ =0x68736D53
	str r0, [r5]
	str r0, [r7, #52]
_08134E28:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08134E30:
	.4byte gUnknown_03007FF0
_08134E34:
	.4byte 0x68736D53
_08134E38:
	.4byte 0x08134075
	THUMB_FUNC_END sub_08134DC4

