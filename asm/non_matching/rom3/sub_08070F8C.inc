	THUMB_FUNC_START sub_08070F8C
sub_08070F8C: @ 0x08070F8C
	push {lr}
	ldr r0, _08070FB0  @ =gRam
	ldr r2, _08070FB4  @ =0x00000CF5
	add r1, r0, r2
	add r2, r2, #1
	add r0, r0, r2
	ldrb r1, [r1]
	ldrb r0, [r0]
	orr r0, r0, r1
	cmp r0, #0
	beq _08070FA6
	bl sub_08130FF8
_08070FA6:
	bl sub_0806D1F4
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08070FB0:
	.4byte gRam
_08070FB4:
	.4byte 0x00000CF5
	THUMB_FUNC_END sub_08070F8C

