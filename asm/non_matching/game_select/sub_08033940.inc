	THUMB_FUNC_START sub_08033940
sub_08033940: @ 0x08033940
	push {r4,r5,lr}
	add r4, r0, #0
	bl GetNextFrame
	ldrb r0, [r4, #23]
	add r5, r0, #0
	cmp r5, #0
	beq _08033956
	sub r0, r0, #1
	strb r0, [r4, #23]
	b _0803397A
_08033956:
	mov r0, #88
	mov r1, #1
	mov r2, #0
	bl sub_0804C8A8
	add r1, r0, #0
	cmp r1, #0
	beq _0803397A
	ldr r3, _08033980  @ =0xFFEC0000
	add r0, r4, #0
	mov r2, #0
	bl sub_0803D4A4
	mov r0, #5
	strb r0, [r4, #20]
	mov r0, #120
	strb r0, [r4, #23]
	strb r5, [r4, #24]
_0803397A:
	pop {r4,r5}
	pop {r0}
	bx r0
_08033980:
	.4byte 0xFFEC0000
	THUMB_FUNC_END sub_08033940

