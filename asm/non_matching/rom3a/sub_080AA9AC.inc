	THUMB_FUNC_START sub_080AA9AC
sub_080AA9AC: @ 0x080AA9AC
	push {lr}
	ldr r0, _080AA9C0  @ =gGloves
	ldrb r1, [r0]
	cmp r1, #0
	beq _080AA9CC
	ldr r0, _080AA9C4  @ =gRam
	ldr r1, _080AA9C8  @ =0x00000964
	add r0, r0, r1
	mov r1, #1
	b _080AA9D2
_080AA9C0:
	.4byte gGloves
_080AA9C4:
	.4byte gRam
_080AA9C8:
	.4byte 0x00000964
_080AA9CC:
	ldr r0, _080AA9D8  @ =gRam
	ldr r2, _080AA9DC  @ =0x00000964
	add r0, r0, r2
_080AA9D2:
	strh r1, [r0]
	pop {r0}
	bx r0
_080AA9D8:
	.4byte gRam
_080AA9DC:
	.4byte 0x00000964
	THUMB_FUNC_END sub_080AA9AC

