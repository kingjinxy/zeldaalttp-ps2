	THUMB_FUNC_START sub_0802A490
sub_0802A490: @ 0x0802A490
	push {r4,lr}
	add r4, r0, #0
	add r0, r0, #124
	ldrh r0, [r0]
	cmp r0, #0
	beq _0802A4DC
	add r0, r4, #0
	bl sub_0802A4EC
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldrb r0, [r4, #11]
	add r0, r0, #2
	cmp r1, r0
	bge _0802A4DC
	mov r0, #1
	strb r0, [r4, #20]
	add r3, r4, #0
	add r3, r3, #42
	strb r1, [r3]
	ldr r0, _0802A4E4  @ =gUnknown_0201F000
	add r1, r4, #0
	add r1, r1, #82
	ldrb r2, [r1]
	lsl r2, r2, #2
	add r2, r2, r0
	ldr r1, _0802A4E8  @ =gUnknown_08137B10
	ldrb r0, [r4, #10]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r2]
	ldr r0, [r0]
	eor r1, r1, r0
	str r1, [r2]
	ldrb r1, [r3]
	add r0, r4, #0
	bl 0x08003870
_0802A4DC:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802A4E4:
	.4byte gUnknown_0201F000
_0802A4E8:
	.4byte gUnknown_08137B10
	THUMB_FUNC_END sub_0802A490

