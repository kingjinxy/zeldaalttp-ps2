	THUMB_FUNC_START sub_080AAAE4
sub_080AAAE4: @ 0x080AAAE4
	push {lr}
	ldr r0, _080AAAF8  @ =gMoonPearl
	ldrb r1, [r0]
	cmp r1, #0
	beq _080AAB04
	ldr r0, _080AAAFC  @ =gRam
	ldr r1, _080AAB00  @ =0x00000964
	add r0, r0, r1
	mov r1, #1
	b _080AAB0A
_080AAAF8:
	.4byte gMoonPearl
_080AAAFC:
	.4byte gRam
_080AAB00:
	.4byte 0x00000964
_080AAB04:
	ldr r0, _080AAB10  @ =gRam
	ldr r2, _080AAB14  @ =0x00000964
	add r0, r0, r2
_080AAB0A:
	strh r1, [r0]
	pop {r0}
	bx r0
_080AAB10:
	.4byte gRam
_080AAB14:
	.4byte 0x00000964
	THUMB_FUNC_END sub_080AAAE4

