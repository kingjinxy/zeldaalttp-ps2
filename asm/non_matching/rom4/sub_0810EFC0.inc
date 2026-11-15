	THUMB_FUNC_START sub_0810EFC0
sub_0810EFC0: @ 0x0810EFC0
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _0810EFF8
	ldr r1, _0810EFEC  @ =gUnknown_03003E70
	mov r0, #1
	strb r0, [r1]
	ldr r0, _0810EFF0  @ =gRam
	ldr r1, _0810EFF4  @ =0x00000546
	add r0, r0, r1
	ldrh r1, [r0]
	mov r0, #129
	lsl r0, r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _0810EFF8
	mov r0, #1
	b _0810EFFA
_0810EFEC:
	.4byte gUnknown_03003E70
_0810EFF0:
	.4byte gRam
_0810EFF4:
	.4byte 0x00000546
_0810EFF8:
	mov r0, #0
_0810EFFA:
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0810EFC0

	.byte 0x00
	.byte 0x00
