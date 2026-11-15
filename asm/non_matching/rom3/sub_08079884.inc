	THUMB_FUNC_START sub_08079884
sub_08079884: @ 0x08079884
	push {r4,r5,lr}
	ldr r1, _080798D4  @ =gRam
	ldr r2, _080798D8  @ =0x000016C4
	add r0, r1, r2
	mov r5, #0
	ldrsh r0, [r0, r5]
	sub r0, r0, #1
	mov r2, #252
	lsl r2, r2, #1
	and r0, r0, r2
	asr r3, r0, #3
	mov r0, #150
	lsl r0, r0, #4
	add r4, r1, r0
	mov r5, #182
	lsl r5, r5, #5
	add r0, r1, r5
	ldrh r0, [r0]
	add r0, r0, #14
	and r0, r0, r2
	lsl r0, r0, #3
	orr r3, r3, r0
	strh r3, [r4]
	mov r0, #161
	lsl r0, r0, #4
	add r1, r1, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080798C8
	mov r1, #128
	lsl r1, r1, #5
	add r0, r1, #0
	orr r3, r3, r0
	strh r3, [r4]
_080798C8:
	mov r2, #0
	ldrsh r0, [r4, r2]
	pop {r4,r5}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080798D4:
	.4byte gRam
_080798D8:
	.4byte 0x000016C4
	THUMB_FUNC_END sub_08079884

