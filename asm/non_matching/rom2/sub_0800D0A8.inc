	THUMB_FUNC_START sub_0800D0A8
sub_0800D0A8: @ 0x0800D0A8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	ldr r4, [sp, #36]
	lsl r0, r0, #16
	lsr r5, r0, #16
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r8, r1
	lsl r2, r2, #16
	lsr r2, r2, #16
	lsl r3, r3, #16
	lsr r6, r3, #16
	lsl r4, r4, #16
	lsr r4, r4, #16
	str r4, [sp]
	ldr r0, _0800D19C  @ =gUnknown_02038000
	mov r10, r0
	lsl r7, r1, #16
	asr r1, r7, #16
	cmp r1, #0
	bge _0800D0E0
	lsl r0, r6, #16
	cmp r0, #0
	blt _0800D18C
_0800D0E0:
	cmp r1, #159
	ble _0800D0EC
	lsl r0, r6, #16
	asr r0, r0, #16
	cmp r0, #159
	bgt _0800D18C
_0800D0EC:
	lsl r3, r6, #16
	asr r0, r3, #16
	cmp r1, r0
	ble _0800D100
	lsr r3, r3, #16
	mov r8, r3
	lsr r6, r7, #16
	add r0, r5, #0
	add r5, r2, #0
	add r2, r0, #0
_0800D100:
	mov r1, r8
	lsl r0, r1, #16
	asr r4, r0, #16
	lsl r0, r6, #16
	asr r7, r0, #16
	cmp r4, r7
	beq _0800D18C
	lsl r0, r2, #16
	asr r0, r0, #16
	lsl r1, r5, #16
	asr r1, r1, #16
	mov r9, r1
	sub r0, r0, r1
	lsl r0, r0, #16
	sub r1, r7, r4
	bl __divsi3
	add r3, r0, #0
	cmp r4, #0
	bge _0800D138
	neg r0, r4
	mul r0, r3, r0
	asr r0, r0, #16
	add r0, r0, r9
	lsl r0, r0, #16
	lsr r5, r0, #16
	mov r4, #0
	mov r8, r4
_0800D138:
	cmp r7, #159
	ble _0800D13E
	mov r6, #159
_0800D13E:
	lsl r2, r5, #16
	mov r0, r8
	lsl r1, r0, #16
	asr r1, r1, #16
	lsl r0, r1, #1
	add r0, r0, r1
	ldr r4, [sp]
	lsl r1, r4, #16
	asr r1, r1, #16
	add r0, r0, r1
	lsl r0, r0, #1
	add r10, r10, r0
	lsl r0, r6, #16
	asr r1, r0, #16
_0800D15A:
	lsl r0, r5, #16
	cmp r0, #0
	bge _0800D162
	mov r5, #0
_0800D162:
	lsl r0, r5, #16
	asr r0, r0, #16
	cmp r0, #240
	ble _0800D16C
	mov r5, #240
_0800D16C:
	mov r0, r10
	strh r5, [r0]
	add r2, r2, r3
	lsr r5, r2, #16
	mov r4, r8
	lsl r0, r4, #16
	mov r4, #128
	lsl r4, r4, #9
	add r0, r0, r4
	mov r4, #6
	add r10, r10, r4
	lsr r4, r0, #16
	mov r8, r4
	asr r0, r0, #16
	cmp r0, r1
	ble _0800D15A
_0800D18C:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0800D19C:
	.4byte gUnknown_02038000
	THUMB_FUNC_END sub_0800D0A8

