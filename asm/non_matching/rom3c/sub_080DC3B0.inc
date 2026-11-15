	THUMB_FUNC_START sub_080DC3B0
sub_080DC3B0: @ 0x080DC3B0
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r7, r4, #0
	add r0, r4, #0
	bl sub_080DC43C
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #0
	bne _080DC418
	add r0, r4, #0
	bl sub_080C5080
	bl GetRandomInt
	lsl r0, r0, #24
	cmp r0, #0
	bne _080DC3EA
	ldr r0, _080DC420  @ =gRam
	ldr r1, _080DC424  @ =0x00000FC2
	add r0, r0, r1
	add r0, r4, r0
	mov r1, #32
	strb r1, [r0]
_080DC3EA:
	ldr r0, _080DC420  @ =gRam
	ldr r2, _080DC428  @ =0x00000F92
	add r1, r0, r2
	add r5, r4, r1
	strb r6, [r5]
	ldr r1, _080DC424  @ =0x00000FC2
	add r0, r0, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080DC404
	mov r0, #1
	strb r0, [r5]
_080DC404:
	mov r1, #188
	lsl r1, r1, #1
	add r0, r7, #0
	mov r2, sp
	bl sub_080C9164
	lsl r0, r0, #24
	cmp r0, #0
	beq _080DC418
	strb r6, [r5]
_080DC418:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
_080DC420:
	.4byte gRam
_080DC424:
	.4byte 0x00000FC2
_080DC428:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080DC3B0

