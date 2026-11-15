	THUMB_FUNC_START sub_0802A190
sub_0802A190: @ 0x0802A190
	push {lr}
	add r3, r0, #0
	ldrb r0, [r3, #20]
	add r0, r0, #1
	strb r0, [r3, #20]
	add r1, r3, #0
	add r1, r1, #60
	mov r0, #137
	strb r0, [r1]
	add r1, r1, #3
	mov r0, #57
	strb r0, [r1]
	add r1, r1, #29
	ldr r0, _0802A1E0  @ =0x000020AA
	strh r0, [r1]
	sub r1, r1, #28
	mov r0, #63
	strb r0, [r1]
	ldr r0, _0802A1E4  @ =gUnknown_0813D46C
	str r0, [r3, #72]
	ldrb r0, [r3, #11]
	cmp r0, #0
	bne _0802A1F6
	ldr r0, _0802A1E8  @ =gUnknown_0201F000
	add r1, r1, #18
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r2, _0802A1EC  @ =gUnknown_08137B10
	ldrb r0, [r3, #10]
	lsl r0, r0, #2
	add r0, r0, r2
	ldr r1, [r1]
	ldr r0, [r0]
	and r1, r1, r0
	cmp r1, #0
	beq _0802A1F0
	mov r0, #1
	strb r0, [r3, #11]
	b _0802A212
_0802A1E0:
	.4byte 0x000020AA
_0802A1E4:
	.4byte gUnknown_0813D46C
_0802A1E8:
	.4byte gUnknown_0201F000
_0802A1EC:
	.4byte gUnknown_08137B10
_0802A1F0:
	mov r0, #0
	strb r0, [r3, #11]
	b _0802A212
_0802A1F6:
	ldr r0, _0802A21C  @ =gUnknown_0201F000
	add r1, r3, #0
	add r1, r1, #82
	ldrb r2, [r1]
	lsl r2, r2, #2
	add r2, r2, r0
	ldr r1, _0802A220  @ =gUnknown_08137B10
	ldrb r0, [r3, #10]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r2]
	ldr r0, [r0]
	orr r1, r1, r0
	str r1, [r2]
_0802A212:
	add r0, r3, #0
	bl sub_0802A28C
	pop {r0}
	bx r0
_0802A21C:
	.4byte gUnknown_0201F000
_0802A220:
	.4byte gUnknown_08137B10
	THUMB_FUNC_END sub_0802A190

