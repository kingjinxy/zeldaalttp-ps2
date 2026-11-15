	THUMB_FUNC_START sub_080AF5F8
sub_080AF5F8: @ 0x080AF5F8
	push {r4-r6,lr}
	ldr r4, _080AF644  @ =gRam
	ldr r2, _080AF648  @ =0x00001894
	add r1, r4, r2
	strb r0, [r1]
	bl sub_08092F78
	mov r1, #4
	ldr r0, _080AF64C  @ =0x00000E15
	add r6, r4, r0
	mov r5, #0
	ldr r2, _080AF650  @ =0x000017F0
	add r4, r4, r2
_080AF612:
	lsl r1, r1, #24
	asr r0, r1, #24
	add r2, r0, r6
	ldrb r3, [r2]
	add r0, r3, #0
	sub r0, r0, #48
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bls _080AF630
	lsl r0, r3, #24
	lsr r0, r0, #24
	cmp r0, #5
	bne _080AF632
	strb r5, [r4]
_080AF630:
	strb r5, [r2]
_080AF632:
	mov r2, #255
	lsl r2, r2, #24
	add r0, r1, r2
	lsr r1, r0, #24
	cmp r0, #0
	bge _080AF612
	pop {r4-r6}
	pop {r0}
	bx r0
_080AF644:
	.4byte gRam
_080AF648:
	.4byte 0x00001894
_080AF64C:
	.4byte 0x00000E15
_080AF650:
	.4byte 0x000017F0
	THUMB_FUNC_END sub_080AF5F8

