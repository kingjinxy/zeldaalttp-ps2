	THUMB_FUNC_START sub_08017924
sub_08017924: @ 0x08017924
	push {r4-r7,lr}
	add r7, r0, #0
	mov r6, #0
	mov r0, #3
	bl sub_08012468
	add r5, r0, #0
	cmp r5, #0
	beq _08017942
	strh r6, [r5, #58]
	add r1, r5, #0
	add r1, r1, #61
	mov r0, #240
	strb r0, [r1]
	mov r6, #1
_08017942:
	mov r0, #3
	bl sub_08012468
	add r4, r0, #0
	cmp r4, #0
	beq _08017964
	mov r0, #0
	strh r0, [r4, #58]
	add r1, r4, #0
	add r1, r1, #61
	mov r0, #240
	strb r0, [r1]
	lsl r0, r6, #24
	mov r1, #128
	lsl r1, r1, #17
	add r0, r0, r1
	lsr r6, r0, #24
_08017964:
	add r0, r7, #0
	add r1, r5, #0
	add r2, r4, #0
	bl sub_08044198
	lsl r0, r6, #24
	asr r2, r0, #24
	cmp r2, #2
	bne _08017980
	str r4, [r5, #84]
	mov r0, #1
	strb r0, [r5, #11]
	str r5, [r4, #84]
	strb r0, [r4, #11]
_08017980:
	ldr r1, [r7, #96]
	cmp r1, #0
	beq _0801798E
	add r1, r1, #98
	ldrh r0, [r1]
	add r0, r0, r2
	strh r0, [r1]
_0801798E:
	mov r0, #15
	mov r1, #2
	mov r2, #0
	bl sub_0804C8A8
	add r5, r0, #0
	cmp r5, #0
	beq _080179A6
	add r0, r7, #0
	add r1, r5, #0
	bl sub_0803D3D0
_080179A6:
	add r0, r7, #0
	bl DeleteThisEntity
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08017924

	.byte 0x00
	.byte 0x00
