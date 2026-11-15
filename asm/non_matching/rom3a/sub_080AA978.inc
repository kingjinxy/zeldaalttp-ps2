	THUMB_FUNC_START sub_080AA978
sub_080AA978: @ 0x080AA978
	push {lr}
	ldr r0, _080AA98C  @ =gBow
	ldrb r1, [r0]
	cmp r1, #0
	beq _080AA998
	ldr r0, _080AA990  @ =gRam
	ldr r1, _080AA994  @ =0x00000964
	add r0, r0, r1
	mov r1, #1
	b _080AA99E
_080AA98C:
	.4byte gBow
_080AA990:
	.4byte gRam
_080AA994:
	.4byte 0x00000964
_080AA998:
	ldr r0, _080AA9A4  @ =gRam
	ldr r2, _080AA9A8  @ =0x00000964
	add r0, r0, r2
_080AA99E:
	strh r1, [r0]
	pop {r0}
	bx r0
_080AA9A4:
	.4byte gRam
_080AA9A8:
	.4byte 0x00000964
	THUMB_FUNC_END sub_080AA978

