	THUMB_FUNC_START sub_080D92D8
sub_080D92D8: @ 0x080D92D8
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r3, _080D9330  @ =gRam
	ldr r1, _080D9334  @ =0x00000FA2
	add r0, r3, r1
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #9
	bne _080D9328
	ldr r4, _080D9338  @ =0x000010E2
	add r0, r3, r4
	add r0, r2, r0
	ldrb r1, [r0]
	add r0, r1, #0
	cmp r0, #0
	beq _080D9328
	cmp r0, #79
	bhi _080D9328
	mov r0, #15
	and r0, r0, r1
	ldr r4, _080D933C  @ =0x000009AD
	add r1, r3, r4
	ldrb r1, [r1]
	orr r0, r0, r1
	ldr r4, _080D9340  @ =0x00001605
	add r1, r3, r4
	ldrb r1, [r1]
	orr r0, r0, r1
	cmp r0, #0
	bne _080D9328
	ldr r0, _080D9344  @ =0x00000F72
	add r1, r3, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add r0, r2, #0
	bl sub_080D9844
_080D9328:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D9330:
	.4byte gRam
_080D9334:
	.4byte 0x00000FA2
_080D9338:
	.4byte 0x000010E2
_080D933C:
	.4byte 0x000009AD
_080D9340:
	.4byte 0x00001605
_080D9344:
	.4byte 0x00000F72
	THUMB_FUNC_END sub_080D92D8

