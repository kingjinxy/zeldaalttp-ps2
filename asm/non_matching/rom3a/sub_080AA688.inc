	THUMB_FUNC_START sub_080AA688
sub_080AA688: @ 0x080AA688
	push {lr}
	ldr r3, _080AA6C4  @ =gRam
	ldr r0, _080AA6C8  @ =0x0000095A
	add r2, r3, r0
	ldrh r0, [r2]
	add r0, r0, #8
	strh r0, [r2]
	lsl r0, r0, #16
	asr r1, r0, #16
	cmp r1, #0
	bne _080AA6C0
	mov r0, #4
	strh r0, [r2]
	ldr r2, _080AA6CC  @ =0x00000A4C
	add r0, r3, r2
	strh r1, [r0]
	ldr r0, _080AA6D0  @ =0x000009AD
	add r1, r3, r0
	mov r0, #0
	strb r0, [r1]
	ldr r1, _080AA6D4  @ =0x00000A1A
	add r0, r3, r1
	ldrh r1, [r0]
	sub r2, r2, #160
	add r0, r3, r2
	strb r1, [r0]
	bl sub_0812FB90
_080AA6C0:
	pop {r0}
	bx r0
_080AA6C4:
	.4byte gRam
_080AA6C8:
	.4byte 0x0000095A
_080AA6CC:
	.4byte 0x00000A4C
_080AA6D0:
	.4byte 0x000009AD
_080AA6D4:
	.4byte 0x00000A1A
	THUMB_FUNC_END sub_080AA688

