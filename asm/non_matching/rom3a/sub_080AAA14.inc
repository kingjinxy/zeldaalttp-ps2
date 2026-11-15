	THUMB_FUNC_START sub_080AAA14
sub_080AAA14: @ 0x080AAA14
	push {lr}
	ldr r0, _080AAA28  @ =gMagicHammer
	ldrb r1, [r0]
	cmp r1, #0
	beq _080AAA34
	ldr r0, _080AAA2C  @ =gRam
	ldr r1, _080AAA30  @ =0x00000964
	add r0, r0, r1
	mov r1, #1
	b _080AAA3A
_080AAA28:
	.4byte gMagicHammer
_080AAA2C:
	.4byte gRam
_080AAA30:
	.4byte 0x00000964
_080AAA34:
	ldr r0, _080AAA40  @ =gRam
	ldr r2, _080AAA44  @ =0x00000964
	add r0, r0, r2
_080AAA3A:
	strh r1, [r0]
	pop {r0}
	bx r0
_080AAA40:
	.4byte gRam
_080AAA44:
	.4byte 0x00000964
	THUMB_FUNC_END sub_080AAA14

