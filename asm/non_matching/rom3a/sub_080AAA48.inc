	THUMB_FUNC_START sub_080AAA48
sub_080AAA48: @ 0x080AAA48
	push {lr}
	ldr r0, _080AAA5C  @ =gCaneOfSomaria
	ldrb r1, [r0]
	cmp r1, #0
	beq _080AAA68
	ldr r0, _080AAA60  @ =gRam
	ldr r1, _080AAA64  @ =0x00000964
	add r0, r0, r1
	mov r1, #1
	b _080AAA6E
_080AAA5C:
	.4byte gCaneOfSomaria
_080AAA60:
	.4byte gRam
_080AAA64:
	.4byte 0x00000964
_080AAA68:
	ldr r0, _080AAA74  @ =gRam
	ldr r2, _080AAA78  @ =0x00000964
	add r0, r0, r2
_080AAA6E:
	strh r1, [r0]
	pop {r0}
	bx r0
_080AAA74:
	.4byte gRam
_080AAA78:
	.4byte 0x00000964
	THUMB_FUNC_END sub_080AAA48

