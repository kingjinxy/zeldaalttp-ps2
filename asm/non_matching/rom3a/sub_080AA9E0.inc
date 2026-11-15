	THUMB_FUNC_START sub_080AA9E0
sub_080AA9E0: @ 0x080AA9E0
	push {lr}
	ldr r0, _080AA9F4  @ =gHookshot
	ldrb r1, [r0]
	cmp r1, #0
	beq _080AAA00
	ldr r0, _080AA9F8  @ =gRam
	ldr r1, _080AA9FC  @ =0x00000964
	add r0, r0, r1
	mov r1, #1
	b _080AAA06
_080AA9F4:
	.4byte gHookshot
_080AA9F8:
	.4byte gRam
_080AA9FC:
	.4byte 0x00000964
_080AAA00:
	ldr r0, _080AAA0C  @ =gRam
	ldr r2, _080AAA10  @ =0x00000964
	add r0, r0, r2
_080AAA06:
	strh r1, [r0]
	pop {r0}
	bx r0
_080AAA0C:
	.4byte gRam
_080AAA10:
	.4byte 0x00000964
	THUMB_FUNC_END sub_080AA9E0

