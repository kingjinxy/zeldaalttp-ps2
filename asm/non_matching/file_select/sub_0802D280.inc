	THUMB_FUNC_START sub_0802D280
sub_0802D280: @ 0x0802D280
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	ldr r0, _0802D2A4  @ =gUnknown_03000420
	ldr r6, [r0, #16]
	ldr r1, _0802D2A8  @ =0x0001869F
	mov r9, r0
	cmp r6, r1
	bls _0802D296
	add r6, r1, #0
_0802D296:
	ldr r0, _0802D2AC  @ =0x000003E7
	cmp r6, r0
	bhi _0802D2B0
	mov r0, #3
	mov r8, r0
	b _0802D2BE
	.byte 0x00
	.byte 0x00
_0802D2A4:
	.4byte gUnknown_03000420
_0802D2A8:
	.4byte 0x0001869F
_0802D2AC:
	.4byte 0x000003E7
_0802D2B0:
	ldr r0, _0802D344  @ =0x0000270F
	mov r1, #5
	mov r8, r1
	cmp r6, r0
	bhi _0802D2BE
	mov r2, #4
	mov r8, r2
_0802D2BE:
	mov r3, r9
	ldrb r0, [r3, #3]
	lsl r0, r0, #11
	ldr r7, _0802D348  @ =gUnknown_0202D13C
	add r0, r0, r7
	mov r5, #144
	lsl r5, r5, #3
	mov r12, r5
	add r4, r0, r5
	mov r2, #0
	strh r2, [r4]
	add r5, r5, #64
	add r1, r0, r5
	strh r2, [r1]
	strh r2, [r4, #2]
	ldr r1, _0802D34C  @ =0x000004C2
	add r0, r0, r1
	strh r2, [r0]
	ldrb r2, [r3, #3]
	lsl r2, r2, #11
	mov r0, #27
	mov r5, r8
	sub r0, r0, r5
	lsl r0, r0, #1
	add r1, r7, #0
	sub r1, r1, #44
	add r0, r0, r1
	add r5, r2, r0
	mov r0, r12
	add r4, r5, r0
	ldrb r0, [r3, #13]
	ldr r1, _0802D350  @ =0x0000101C
	cmp r0, #0
	beq _0802D304
	mov r1, #83
_0802D304:
	add r0, r1, #1
	strh r1, [r4]
	add r1, r0, #1
	strh r0, [r4, #2]
	mov r2, #152
	lsl r2, r2, #3
	add r0, r5, r2
	add r2, r1, #1
	strh r1, [r0]
	ldr r1, _0802D34C  @ =0x000004C2
	add r0, r5, r1
	strh r2, [r0]
	mov r2, r9
	ldrb r0, [r2, #3]
	lsl r0, r0, #11
	add r1, r7, #0
	add r1, r1, #12
	add r0, r0, r1
	add r0, r0, r12
	mov r3, #192
	lsl r3, r3, #6
	add r1, r6, #0
	mov r2, r8
	bl sub_0802D228
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802D344:
	.4byte 0x0000270F
_0802D348:
	.4byte gUnknown_0202D13C
_0802D34C:
	.4byte 0x000004C2
_0802D350:
	.4byte 0x0000101C
	THUMB_FUNC_END sub_0802D280

