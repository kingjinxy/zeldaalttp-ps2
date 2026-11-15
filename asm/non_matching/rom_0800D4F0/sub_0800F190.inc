	THUMB_FUNC_START sub_0800F190
sub_0800F190: @ 0x0800F190
	push {r4-r6,lr}
	add r4, r0, #0
	ldr r1, _0800F1B0  @ =gUnknown_0202E158
	mov r0, #0
	strb r0, [r1, #1]
	strb r0, [r1, #2]
	strb r0, [r1]
	mov r0, #8
	strb r0, [r1, #3]
	sub r0, r0, #9
	str r0, [r1, #4]
	add r5, r1, #0
	cmp r4, r0
	bne _0800F1B4
	mov r0, #2
	b _0800F222
_0800F1B0:
	.4byte gUnknown_0202E158
_0800F1B4:
	mov r1, #15
	add r0, r4, #0
	and r0, r0, r1
	cmp r1, r0
	bne _0800F1D2
	add r6, r5, #0
	mov r3, #0
_0800F1C2:
	add r2, r3, #1
	add r3, r2, #0
	lsl r1, r1, #4
	add r0, r1, #0
	and r0, r0, r4
	cmp r1, r0
	beq _0800F1C2
	strb r2, [r6, #1]
_0800F1D2:
	mov r1, #240
	lsl r1, r1, #24
	add r0, r4, #0
	and r0, r0, r1
	cmp r1, r0
	bne _0800F1F2
	ldr r6, _0800F21C  @ =gUnknown_0202E158
	ldrb r3, [r6, #2]
_0800F1E2:
	add r2, r3, #1
	add r3, r2, #0
	lsr r1, r1, #4
	add r0, r1, #0
	and r0, r0, r4
	cmp r1, r0
	beq _0800F1E2
	strb r2, [r6, #2]
_0800F1F2:
	ldrb r1, [r5, #1]
	ldrb r0, [r5, #2]
	add r1, r1, r0
	cmp r1, #0
	beq _0800F220
	ldrb r0, [r5, #3]
	sub r0, r0, r1
	strb r0, [r5, #3]
	ldrb r0, [r5, #1]
	lsl r0, r0, #2
	mov r1, #1
	neg r1, r1
	add r2, r1, #0
	lsl r2, r2, r0
	ldrb r0, [r5, #2]
	lsl r0, r0, #2
	lsr r1, r1, r0
	and r2, r2, r1
	str r2, [r5, #4]
	mov r0, #0
	b _0800F224
_0800F21C:
	.4byte gUnknown_0202E158
_0800F220:
	mov r0, #1
_0800F222:
	strb r0, [r5]
_0800F224:
	pop {r4-r6}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0800F190

	.byte 0x00
	.byte 0x00
