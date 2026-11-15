	THUMB_FUNC_START sub_0800CCAC
sub_0800CCAC: @ 0x0800CCAC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #12
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r9, r0
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r10, r1
	lsl r2, r2, #16
	lsr r2, r2, #16
	mov r8, r2
	lsl r3, r3, #16
	lsr r7, r3, #16
	ldr r0, _0800CD64  @ =gUnknown_03000204
	ldrb r1, [r0]
	lsl r0, r1, #2
	add r0, r0, r1
	lsl r0, r0, #6
	ldr r1, _0800CD68  @ =gUnknown_0202A0F0
	add r0, r0, r1
	mov r1, #160
	lsl r1, r1, #1
	bl zero_memory
	mov r0, r8
	lsl r4, r0, #16
	asr r6, r4, #16
	lsl r3, r7, #16
	asr r5, r3, #16
	cmp r6, r5
	bge _0800CD98
	mov r1, r8
	str r1, [sp]
	lsl r1, r6, #1
	mov r0, #3
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r7, r0, #16
	lsr r2, r4, #16
	mov r8, r2
	mov r2, #0
	mov r3, r9
	lsl r3, r3, #16
	str r3, [sp, #4]
	mov r0, r10
	lsl r0, r0, #16
	str r0, [sp, #8]
	cmp r4, #0
	bge _0800CD18
	b _0800CE2E
_0800CD18:
	mov r10, r5
	mov r9, r6
_0800CD1C:
	lsl r0, r2, #16
	asr r6, r0, #16
	mov r0, r10
	mul r0, r6, r0
	mov r1, r9
	bl __udivsi3
	add r4, r0, #0
	lsl r4, r4, #16
	lsr r4, r4, #16
	mov r1, r8
	lsl r0, r1, #16
	asr r5, r0, #16
	mov r0, r10
	mul r0, r5, r0
	mov r1, r9
	bl __udivsi3
	lsl r1, r6, #1
	ldr r2, _0800CD6C  @ =gUnknown_02038000
	add r1, r1, r2
	strh r0, [r1]
	lsl r0, r5, #1
	add r0, r0, r2
	strh r4, [r0]
	lsl r0, r7, #16
	asr r0, r0, #16
	cmp r0, #0
	bge _0800CD70
	add r0, r0, #6
	lsl r1, r6, #2
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r7, r0, #16
	b _0800CD86
	.byte 0x00
	.byte 0x00
_0800CD64:
	.4byte gUnknown_03000204
_0800CD68:
	.4byte gUnknown_0202A0F0
_0800CD6C:
	.4byte gUnknown_02038000
_0800CD70:
	add r1, r0, #0
	add r1, r1, #10
	sub r0, r6, r5
	lsl r0, r0, #2
	add r1, r1, r0
	lsl r1, r1, #16
	lsr r7, r1, #16
	sub r0, r5, #1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r8, r0
_0800CD86:
	add r0, r6, #1
	lsl r0, r0, #16
	lsr r2, r0, #16
	lsl r1, r2, #16
	mov r3, r8
	lsl r0, r3, #16
	cmp r1, r0
	ble _0800CD1C
	b _0800CE2E
_0800CD98:
	str r7, [sp]
	lsl r1, r5, #1
	mov r0, #3
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r7, r0, #16
	lsr r0, r3, #16
	mov r8, r0
	mov r2, #0
	mov r1, r9
	lsl r1, r1, #16
	str r1, [sp, #4]
	mov r0, r10
	lsl r0, r0, #16
	str r0, [sp, #8]
	cmp r3, #0
	blt _0800CE2E
	mov r10, r6
	mov r9, r5
_0800CDBE:
	lsl r0, r2, #16
	asr r6, r0, #16
	mov r0, r10
	mul r0, r6, r0
	mov r1, r9
	bl __udivsi3
	add r4, r0, #0
	lsl r4, r4, #16
	lsr r4, r4, #16
	mov r1, r8
	lsl r0, r1, #16
	asr r5, r0, #16
	mov r0, r10
	mul r0, r5, r0
	mov r1, r9
	bl __udivsi3
	lsl r1, r6, #1
	ldr r2, _0800CE04  @ =gUnknown_02038000
	add r1, r1, r2
	strh r0, [r1]
	lsl r0, r5, #1
	add r0, r0, r2
	strh r4, [r0]
	lsl r0, r7, #16
	asr r0, r0, #16
	cmp r0, #0
	bge _0800CE08
	add r0, r0, #6
	lsl r1, r6, #2
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r7, r0, #16
	b _0800CE1E
_0800CE04:
	.4byte gUnknown_02038000
_0800CE08:
	add r1, r0, #0
	add r1, r1, #10
	sub r0, r6, r5
	lsl r0, r0, #2
	add r1, r1, r0
	lsl r1, r1, #16
	lsr r7, r1, #16
	sub r0, r5, #1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r8, r0
_0800CE1E:
	add r0, r6, #1
	lsl r0, r0, #16
	lsr r2, r0, #16
	lsl r1, r2, #16
	mov r3, r8
	lsl r0, r3, #16
	cmp r1, r0
	ble _0800CDBE
_0800CE2E:
	ldr r1, [sp, #4]
	asr r0, r1, #16
	ldr r2, [sp, #8]
	asr r1, r2, #16
	ldr r3, [sp]
	lsl r2, r3, #16
	asr r2, r2, #16
	bl sub_0800CBBC
	ldr r2, _0800CE68  @ =gUnknown_030004A0
	ldr r3, _0800CE6C  @ =gUnknown_0202A0F0
	ldr r0, _0800CE70  @ =gUnknown_03000204
	ldrb r1, [r0]
	lsl r0, r1, #2
	add r0, r0, r1
	lsl r0, r0, #6
	add r0, r0, r3
	ldrh r0, [r0]
	add r2, r2, #88
	strh r0, [r2]
	add sp, sp, #12
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0800CE68:
	.4byte gUnknown_030004A0
_0800CE6C:
	.4byte gUnknown_0202A0F0
_0800CE70:
	.4byte gUnknown_03000204
	THUMB_FUNC_END sub_0800CCAC

