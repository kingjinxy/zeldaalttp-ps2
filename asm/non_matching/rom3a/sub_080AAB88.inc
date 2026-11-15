	THUMB_FUNC_START sub_080AAB88
sub_080AAB88: @ 0x080AAB88
	push {lr}
	ldr r0, _080AAB9C  @ =gArmor
	ldrb r0, [r0]
	cmp r0, #2
	bne _080AABA8
	ldr r0, _080AABA0  @ =gRam
	ldr r1, _080AABA4  @ =0x00000964
	add r0, r0, r1
	mov r1, #1
	b _080AABB0
_080AAB9C:
	.4byte gArmor
_080AABA0:
	.4byte gRam
_080AABA4:
	.4byte 0x00000964
_080AABA8:
	ldr r0, _080AABB8  @ =gRam
	ldr r1, _080AABBC  @ =0x00000964
	add r0, r0, r1
	mov r1, #0
_080AABB0:
	strh r1, [r0]
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080AABB8:
	.4byte gRam
_080AABBC:
	.4byte 0x00000964
	THUMB_FUNC_END sub_080AAB88

