	THUMB_FUNC_START sub_080AAA7C
sub_080AAA7C: @ 0x080AAA7C
	push {lr}
	ldr r0, _080AAA90  @ =gFireRod
	ldrb r1, [r0]
	cmp r1, #0
	beq _080AAA9C
	ldr r0, _080AAA94  @ =gRam
	ldr r1, _080AAA98  @ =0x00000964
	add r0, r0, r1
	mov r1, #1
	b _080AAAA2
_080AAA90:
	.4byte gFireRod
_080AAA94:
	.4byte gRam
_080AAA98:
	.4byte 0x00000964
_080AAA9C:
	ldr r0, _080AAAA8  @ =gRam
	ldr r2, _080AAAAC  @ =0x00000964
	add r0, r0, r2
_080AAAA2:
	strh r1, [r0]
	pop {r0}
	bx r0
_080AAAA8:
	.4byte gRam
_080AAAAC:
	.4byte 0x00000964
	THUMB_FUNC_END sub_080AAA7C

