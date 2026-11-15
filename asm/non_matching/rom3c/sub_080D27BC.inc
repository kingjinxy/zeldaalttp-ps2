	THUMB_FUNC_START sub_080D27BC
sub_080D27BC: @ 0x080D27BC
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	bl sub_08131E24
	bl sub_08133600
	ldr r1, _080D27EC  @ =gRam
	ldr r0, _080D27F0  @ =0x0000051E
	add r2, r1, r0
	mov r3, #0
	mov r0, #0
	strh r0, [r2]
	ldr r2, _080D27F4  @ =0x00000FA2
	add r0, r1, r2
	add r4, r4, r0
	strb r3, [r4]
	ldr r0, _080D27F8  @ =0x00001770
	add r1, r1, r0
	strb r3, [r1]
	pop {r4}
	pop {r0}
	bx r0
_080D27EC:
	.4byte gRam
_080D27F0:
	.4byte 0x0000051E
_080D27F4:
	.4byte 0x00000FA2
_080D27F8:
	.4byte 0x00001770
	THUMB_FUNC_END sub_080D27BC

