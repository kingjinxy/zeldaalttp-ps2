	THUMB_FUNC_START sub_080E9240
sub_080E9240: @ 0x080E9240
	push {lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r0, _080E9260  @ =gRam
	ldr r2, _080E9264  @ =0x00001092
	add r0, r0, r2
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E925A
	add r0, r1, #0
	bl sub_080E91E0
_080E925A:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E9260:
	.4byte gRam
_080E9264:
	.4byte 0x00001092
	THUMB_FUNC_END sub_080E9240

