	THUMB_FUNC_START sub_080714C4
sub_080714C4: @ 0x080714C4
	push {lr}
	bl sub_08084720
	ldr r1, _080714E0  @ =gRam
	ldr r0, _080714E4  @ =0x000009E8
	add r2, r1, r0
	mov r3, #0
	mov r0, #0
	strh r0, [r2]
	ldr r0, _080714E8  @ =0x000009AD
	add r1, r1, r0
	strb r3, [r1]
	pop {r0}
	bx r0
_080714E0:
	.4byte gRam
_080714E4:
	.4byte 0x000009E8
_080714E8:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_080714C4

