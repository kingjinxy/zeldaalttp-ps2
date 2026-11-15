	THUMB_FUNC_START sub_080DDA2C
sub_080DDA2C: @ 0x080DDA2C
	push {r4,lr}
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r0, #43
	bl sub_080CA538
	add r4, r0, #0
	cmp r4, #0
	blt _080DDA5C
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r1, _080DDA64  @ =gRam
	ldr r2, _080DDA68  @ =0x00001052
	add r0, r1, r2
	add r0, r4, r0
	mov r2, #0
	strb r2, [r0]
	ldr r0, _080DDA6C  @ =0x00001172
	add r1, r1, r0
	add r1, r4, r1
	strb r2, [r1]
_080DDA5C:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DDA64:
	.4byte gRam
_080DDA68:
	.4byte 0x00001052
_080DDA6C:
	.4byte 0x00001172
	THUMB_FUNC_END sub_080DDA2C

