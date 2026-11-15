	THUMB_FUNC_START sub_080F4B74
sub_080F4B74: @ 0x080F4B74
	push {lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r2, _080F4B9C  @ =gRam
	ldr r0, _080F4BA0  @ =0x00001172
	add r1, r2, r0
	add r1, r3, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080F4BA4  @ =0x000009C6
	add r2, r2, r0
	ldrh r0, [r2]
	cmp r0, #48
	bne _080F4B98
	add r0, r3, #0
	bl sub_080D26E8
_080F4B98:
	pop {r0}
	bx r0
_080F4B9C:
	.4byte gRam
_080F4BA0:
	.4byte 0x00001172
_080F4BA4:
	.4byte 0x000009C6
	THUMB_FUNC_END sub_080F4B74

