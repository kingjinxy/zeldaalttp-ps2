	THUMB_FUNC_START sub_080CBCE8
sub_080CBCE8: @ 0x080CBCE8
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r0, #11
	add r1, r6, #0
	bl sub_080CA538
	add r5, r0, #0
	cmp r5, #0
	blt _080CBD2C
	lsl r0, r5, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r4, _080CBD34  @ =gRam
	ldr r1, _080CBD38  @ =0x00000FA2
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #6
	strb r1, [r0]
	ldr r1, _080CBD3C  @ =0x00000FC2
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #15
	strb r1, [r0]
	add r0, r6, #0
	mov r1, #20
	bl sub_080CF0AC
	ldr r0, _080CBD40  @ =0x000010F2
	add r4, r4, r0
	add r4, r5, r4
	mov r0, #2
	strb r0, [r4]
_080CBD2C:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CBD34:
	.4byte gRam
_080CBD38:
	.4byte 0x00000FA2
_080CBD3C:
	.4byte 0x00000FC2
_080CBD40:
	.4byte 0x000010F2
	THUMB_FUNC_END sub_080CBCE8

