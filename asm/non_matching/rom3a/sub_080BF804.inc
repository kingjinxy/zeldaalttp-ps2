	THUMB_FUNC_START sub_080BF804
sub_080BF804: @ 0x080BF804
	push {r4-r7,lr}
	add r7, r1, #0
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r3, r0, #0
	ldr r4, _080BF870  @ =gRam
	ldr r0, _080BF874  @ =0x00000A88
	add r2, r4, r0
	add r2, r3, r2
	ldrb r0, [r2]
	lsl r0, r0, #28
	ldr r5, _080BF878  @ =0x00000A9C
	add r1, r4, r5
	add r1, r3, r1
	lsr r0, r0, #24
	ldrb r5, [r1]
	add r0, r0, r5
	strb r0, [r1]
	lsl r0, r0, #16
	asr r0, r0, #16
	mov r1, #255
	lsl r1, r1, #8
	and r0, r0, r1
	neg r1, r0
	orr r1, r1, r0
	lsr r5, r1, #31
	mov r6, #0
	ldrb r0, [r2]
	lsl r0, r0, #24
	lsr r1, r0, #28
	cmp r0, #0
	bge _080BF852
	mov r2, #16
	neg r2, r2
	add r0, r2, #0
	orr r1, r1, r0
	lsl r0, r1, #24
	lsr r1, r0, #24
	mov r6, #255
_080BF852:
	ldr r0, _080BF87C  @ =0x00000A92
	add r2, r4, r0
	add r2, r3, r2
	lsl r1, r1, #24
	asr r1, r1, #24
	add r1, r1, r5
	ldrb r0, [r2]
	add r0, r0, r1
	strb r0, [r2]
	cmp r7, #0
	beq _080BF86A
	strb r6, [r7]
_080BF86A:
	pop {r4-r7}
	pop {r0}
	bx r0
_080BF870:
	.4byte gRam
_080BF874:
	.4byte 0x00000A88
_080BF878:
	.4byte 0x00000A9C
_080BF87C:
	.4byte 0x00000A92
	THUMB_FUNC_END sub_080BF804

