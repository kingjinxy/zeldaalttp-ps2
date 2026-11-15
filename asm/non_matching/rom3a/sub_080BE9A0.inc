	THUMB_FUNC_START sub_080BE9A0
sub_080BE9A0: @ 0x080BE9A0
	push {r4,lr}
	ldr r4, _080BE9BC  @ =gRam
	ldr r2, _080BE9C0  @ =0x00001661
	add r1, r4, r2
	strb r0, [r1]
	bl sub_080BDE8C
	ldr r0, _080BE9C4  @ =0x000016AC
	add r4, r4, r0
	mov r0, #1
	strh r0, [r4]
	pop {r4}
	pop {r0}
	bx r0
_080BE9BC:
	.4byte gRam
_080BE9C0:
	.4byte 0x00001661
_080BE9C4:
	.4byte 0x000016AC
	THUMB_FUNC_END sub_080BE9A0

