	THUMB_FUNC_START sub_080A3E40
sub_080A3E40: @ 0x080A3E40
	push {lr}
	ldr r0, _080A3E5C  @ =gRam
	ldr r1, _080A3E60  @ =0x00001791
	add r0, r0, r1
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080A3E56
	bl sub_080A3920
_080A3E56:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A3E5C:
	.4byte gRam
_080A3E60:
	.4byte 0x00001791
	THUMB_FUNC_END sub_080A3E40

