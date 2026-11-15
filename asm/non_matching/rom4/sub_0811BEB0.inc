	THUMB_FUNC_START sub_0811BEB0
sub_0811BEB0: @ 0x0811BEB0
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r5, r2, #0
	ldr r4, _0811BED4  @ =gRam
	ldr r1, _0811BED8  @ =0x00001832
	add r0, r4, r1
	add r3, r2, r0
	ldrb r0, [r3]
	sub r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	cmp r0, #0
	blt _0811BEDC
	add r0, r2, #0
	bl sub_0811C17C
	b _0811BF0C
_0811BED4:
	.4byte gRam
_0811BED8:
	.4byte 0x00001832
_0811BEDC:
	ldr r1, _0811BEF8  @ =0x00000E29
	add r0, r4, r1
	add r1, r2, r0
	ldrb r0, [r1]
	add r0, r0, #1
	cmp r0, #5
	bne _0811BF00
	ldr r1, _0811BEFC  @ =0x00000E15
	add r0, r4, r1
	add r0, r2, r0
	mov r1, #0
	strb r1, [r0]
	b _0811BF0C
	.byte 0x00
	.byte 0x00
_0811BEF8:
	.4byte 0x00000E29
_0811BEFC:
	.4byte 0x00000E15
_0811BF00:
	strb r0, [r1]
	mov r0, #1
	strb r0, [r3]
	add r0, r5, #0
	bl sub_0811C17C
_0811BF0C:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0811BEB0

	.byte 0x00
	.byte 0x00
