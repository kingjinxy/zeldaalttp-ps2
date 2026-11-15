	THUMB_FUNC_START sub_080C44FC
sub_080C44FC: @ 0x080C44FC
	push {r4,r5,lr}
	ldr r2, _080C4560  @ =gRam
	ldr r1, _080C4564  @ =0x000016C4
	add r0, r2, r1
	ldrb r3, [r0]
	ldr r4, _080C4568  @ =0x000016C5
	add r0, r2, r4
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r3, r3, r0
	add r3, r3, #4
	mov r5, #182
	lsl r5, r5, #5
	add r0, r2, r5
	ldrb r1, [r0]
	sub r4, r4, #4
	add r0, r2, r4
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #8
	ldr r5, _080C456C  @ =0x00000964
	add r0, r2, r5
	mov r4, #8
	strb r4, [r0]
	add r5, r5, #1
	add r0, r2, r5
	strb r4, [r0]
	mov r4, #150
	lsl r4, r4, #4
	add r0, r2, r4
	strb r3, [r0]
	lsr r3, r3, #8
	add r5, r5, #11
	add r0, r2, r5
	strb r3, [r0]
	ldr r3, _080C4570  @ =0x00000961
	add r0, r2, r3
	strb r1, [r0]
	lsr r1, r1, #8
	add r4, r4, #17
	add r2, r2, r4
	strb r1, [r2]
	pop {r4,r5}
	pop {r0}
	bx r0
_080C4560:
	.4byte gRam
_080C4564:
	.4byte 0x000016C4
_080C4568:
	.4byte 0x000016C5
_080C456C:
	.4byte 0x00000964
_080C4570:
	.4byte 0x00000961
	THUMB_FUNC_END sub_080C44FC

