	THUMB_FUNC_START sub_080AAAB0
sub_080AAAB0: @ 0x080AAAB0
	push {lr}
	ldr r0, _080AAAC4  @ =gArmor
	ldrb r1, [r0]
	cmp r1, #0
	beq _080AAAD0
	ldr r0, _080AAAC8  @ =gRam
	ldr r1, _080AAACC  @ =0x00000964
	add r0, r0, r1
	mov r1, #1
	b _080AAAD6
_080AAAC4:
	.4byte gArmor
_080AAAC8:
	.4byte gRam
_080AAACC:
	.4byte 0x00000964
_080AAAD0:
	ldr r0, _080AAADC  @ =gRam
	ldr r2, _080AAAE0  @ =0x00000964
	add r0, r0, r2
_080AAAD6:
	strh r1, [r0]
	pop {r0}
	bx r0
_080AAADC:
	.4byte gRam
_080AAAE0:
	.4byte 0x00000964
	THUMB_FUNC_END sub_080AAAB0

