	THUMB_FUNC_START sub_0802D8E4
sub_0802D8E4: @ 0x0802D8E4
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r12, r0
	lsl r1, r1, #24
	lsl r2, r2, #24
	lsr r7, r2, #24
	lsl r3, r3, #24
	lsr r3, r3, #24
	lsr r2, r1, #24
	add r0, r2, r3
	cmp r2, r0
	bge _0802D940
	add r6, r0, #0
	ldr r0, _0802D94C  @ =gUnknown_03000420
	mov r9, r0
	ldr r0, _0802D950  @ =gBG0Buffer
	mov r8, r0
_0802D90E:
	mov r0, r9
	ldrb r1, [r0, #3]
	lsl r1, r1, #11
	lsl r0, r2, #6
	add r0, r0, r8
	add r4, r1, r0
	mov r3, r12
	add r0, r3, r7
	add r2, r2, #1
	cmp r3, r0
	bge _0802D938
	mov r5, #0
	add r1, r0, #0
_0802D928:
	lsl r0, r3, #1
	add r0, r0, r4
	strh r5, [r0]
	add r0, r3, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, r1
	blt _0802D928
_0802D938:
	lsl r0, r2, #24
	lsr r2, r0, #24
	cmp r2, r6
	blt _0802D90E
_0802D940:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_0802D94C:
	.4byte gUnknown_03000420
_0802D950:
	.4byte gBG0Buffer
	THUMB_FUNC_END sub_0802D8E4

