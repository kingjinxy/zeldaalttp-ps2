	THUMB_FUNC_START sub_080DA6D8
sub_080DA6D8: @ 0x080DA6D8
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r7, #1
	ldr r6, _080DA73C  @ =gRam
	ldr r1, _080DA740  @ =0x00000FC2
	add r0, r6, r1
	add r4, r5, r0
	ldrb r0, [r4]
	cmp r0, #0
	beq _080DA70C
	add r0, r5, #0
	bl sub_080DA750
	ldrb r0, [r4]
	cmp r0, #1
	bne _080DA704
	ldr r1, _080DA744  @ =0x00000FA2
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
_080DA704:
	ldrb r0, [r4]
	cmp r0, #11
	bhi _080DA70C
	mov r7, #0
_080DA70C:
	cmp r7, #0
	beq _080DA734
	mov r0, #8
	bl sub_080CF370
	ldr r0, _080DA73C  @ =gRam
	ldr r1, _080DA748  @ =0x00000F92
	add r0, r0, r1
	add r0, r5, r0
	ldrb r1, [r0]
	lsl r1, r1, #4
	ldr r0, _080DA74C  @ =gUnknown_08175B28
	add r1, r1, r0
	add r0, r5, #0
	mov r2, #2
	bl sub_080C9480
	add r0, r5, #0
	bl sub_080DA488
_080DA734:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DA73C:
	.4byte gRam
_080DA740:
	.4byte 0x00000FC2
_080DA744:
	.4byte 0x00000FA2
_080DA748:
	.4byte 0x00000F92
_080DA74C:
	.4byte gUnknown_08175B28
	THUMB_FUNC_END sub_080DA6D8

