	THUMB_FUNC_START sub_0802AB7C
sub_0802AB7C: @ 0x0802AB7C
	push {r4,lr}
	add r4, r0, #0
	bl sub_0803CC20
	ldr r0, [r4, #56]
	ldr r1, _0802ABD4  @ =0xFFFF8000
	add r0, r0, r1
	str r0, [r4, #56]
	ldrb r0, [r4, #24]
	sub r0, r0, #1
	strb r0, [r4, #24]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0802ABCC
	mov r0, #2
	strb r0, [r4, #20]
	add r0, r4, #0
	add r0, r0, #104
	ldrh r0, [r0]
	strh r0, [r4, #50]
	add r0, r4, #0
	add r0, r0, #106
	ldrh r0, [r0]
	strh r0, [r4, #54]
	ldr r0, _0802ABD8  @ =0x0000FFF0
	strh r0, [r4, #58]
	ldrb r1, [r4, #10]
	add r1, r1, #8
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r0, #15
	mov r2, #0
	bl sub_0804C8A8
	add r1, r0, #0
	cmp r1, #0
	beq _0802ABCC
	add r0, r4, #0
	bl sub_0803D3D0
_0802ABCC:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802ABD4:
	.4byte 0xFFFF8000
_0802ABD8:
	.4byte 0x0000FFF0
	THUMB_FUNC_END sub_0802AB7C

