	THUMB_FUNC_START sub_080CBE5C
sub_080CBE5C: @ 0x080CBE5C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080CBE94  @ =gRam
	ldr r1, _080CBE98  @ =0x00000E95
	add r3, r2, r1
	add r3, r0, r3
	mov r4, #171
	lsl r4, r4, #4
	add r1, r2, r4
	ldrh r1, [r1]
	mov r4, #0
	strb r1, [r3]
	ldr r3, _080CBE9C  @ =0x00000D4B
	add r1, r2, r3
	add r1, r0, r1
	strb r4, [r1]
	sub r3, r3, #8
	add r1, r2, r3
	add r1, r0, r1
	strb r4, [r1]
	ldr r1, _080CBEA0  @ =0x00000D53
	add r2, r2, r1
	add r0, r0, r2
	strb r4, [r0]
	pop {r4}
	pop {r0}
	bx r0
_080CBE94:
	.4byte gRam
_080CBE98:
	.4byte 0x00000E95
_080CBE9C:
	.4byte 0x00000D4B
_080CBEA0:
	.4byte 0x00000D53
	THUMB_FUNC_END sub_080CBE5C

