	THUMB_FUNC_START sub_080F7BDC
sub_080F7BDC: @ 0x080F7BDC
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r0, #236
	add r1, r6, #0
	bl sub_080CA538
	add r5, r0, #0
	cmp r5, #0
	blt _080F7C28
	lsl r0, r5, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r2, _080F7C30  @ =gRam
	ldr r1, _080F7C34  @ =0x00000FA2
	add r0, r2, r1
	add r0, r5, r0
	mov r4, #0
	mov r3, #3
	strb r3, [r0]
	add r1, r1, #32
	add r0, r2, r1
	add r0, r5, r0
	mov r1, #15
	strb r1, [r0]
	ldr r1, _080F7C38  @ =0x00000F52
	add r0, r2, r1
	add r0, r5, r0
	strb r4, [r0]
	ldr r0, _080F7C3C  @ =0x00001012
	add r2, r2, r0
	add r2, r5, r2
	strb r3, [r2]
	add r0, r6, #0
	mov r1, #110
	bl sub_080CF0AC
_080F7C28:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F7C30:
	.4byte gRam
_080F7C34:
	.4byte 0x00000FA2
_080F7C38:
	.4byte 0x00000F52
_080F7C3C:
	.4byte 0x00001012
	THUMB_FUNC_END sub_080F7BDC

