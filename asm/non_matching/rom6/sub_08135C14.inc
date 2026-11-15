	THUMB_FUNC_START sub_08135C14
sub_08135C14: @ 0x08135C14
	push {lr}
	ldr r1, _08135C34  @ =gUnknown_03000012
	ldrh r0, [r1]
	cmp r0, #0
	beq _08135C30
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08135C30
	ldr r1, _08135C38  @ =gUnknown_03000014
	mov r0, #1
	strb r0, [r1]
_08135C30:
	pop {r0}
	bx r0
_08135C34:
	.4byte gUnknown_03000012
_08135C38:
	.4byte gUnknown_03000014
	THUMB_FUNC_END sub_08135C14

