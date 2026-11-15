	THUMB_FUNC_START sub_080AAB18
sub_080AAB18: @ 0x080AAB18
	push {lr}
	ldr r0, _080AAB2C  @ =gGloves
	ldrb r0, [r0]
	cmp r0, #1
	beq _080AAB38
	ldr r0, _080AAB30  @ =gRam
	ldr r1, _080AAB34  @ =0x00000964
	add r0, r0, r1
	mov r1, #1
	b _080AAB40
_080AAB2C:
	.4byte gGloves
_080AAB30:
	.4byte gRam
_080AAB34:
	.4byte 0x00000964
_080AAB38:
	ldr r0, _080AAB48  @ =gRam
	ldr r1, _080AAB4C  @ =0x00000964
	add r0, r0, r1
	mov r1, #0
_080AAB40:
	strh r1, [r0]
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080AAB48:
	.4byte gRam
_080AAB4C:
	.4byte 0x00000964
	THUMB_FUNC_END sub_080AAB18

