	THUMB_FUNC_START sub_080C5488
sub_080C5488: @ 0x080C5488
	push {r4-r6,lr}
	add r6, r0, #0
	lsl r4, r1, #24
	lsr r4, r4, #24
	add r1, r4, #0
	bl sub_080C54B8
	ldr r0, _080C54B0  @ =gRam
	ldr r1, _080C54B4  @ =0x000010C2
	add r0, r0, r1
	add r4, r4, r0
	mov r5, #0
	strb r5, [r4]
	bl sub_080C43DC
	strb r5, [r6]
	mov r0, #1
	pop {r4-r6}
	pop {r1}
	bx r1
_080C54B0:
	.4byte gRam
_080C54B4:
	.4byte 0x000010C2
	THUMB_FUNC_END sub_080C5488

