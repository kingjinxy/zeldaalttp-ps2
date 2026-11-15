	THUMB_FUNC_START sub_08034AF0
sub_08034AF0: @ 0x08034AF0
	push {r4,lr}
	add r4, r0, #0
	mov r1, #58
	ldrsh r0, [r4, r1]
	cmp r0, #0
	bge _08034B0E
	ldr r0, [r4, #56]
	mov r1, #128
	lsl r1, r1, #7
	add r0, r0, r1
	str r0, [r4, #56]
	add r0, r4, #0
	bl GetNextFrame
	b _08034B54
_08034B0E:
	ldr r2, _08034B5C  @ =gUnknown_0201F000
	ldr r0, [r2]
	mov r1, #1
	orr r0, r0, r1
	str r0, [r2]
	mov r0, #16
	bl sub_0802C2DC
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, #15
	and r0, r0, r1
	ldrb r2, [r4, #30]
	mov r1, #16
	neg r1, r1
	and r1, r1, r2
	orr r1, r1, r0
	strb r1, [r4, #30]
	add r2, r4, #0
	add r2, r2, #94
	ldrb r1, [r2]
	mov r0, #13
	neg r0, r0
	and r0, r0, r1
	strb r0, [r2]
	ldrb r0, [r4, #21]
	add r0, r0, #1
	strb r0, [r4, #21]
	ldr r0, _08034B60  @ =0x00000216
	bl play_sound
	add r0, r4, #0
	mov r1, #10
	bl sub_0804CE00
_08034B54:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08034B5C:
	.4byte gUnknown_0201F000
_08034B60:
	.4byte 0x00000216
	THUMB_FUNC_END sub_08034AF0

