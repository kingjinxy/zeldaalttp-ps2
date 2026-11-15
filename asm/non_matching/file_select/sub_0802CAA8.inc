	THUMB_FUNC_START sub_0802CAA8
sub_0802CAA8: @ 0x0802CAA8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r12, r0
	lsl r1, r1, #24
	lsr r6, r1, #24
	lsl r2, r2, #24
	lsr r2, r2, #24
	mov r8, r2
	lsl r3, r3, #24
	lsr r7, r3, #24
	add r2, r6, #0
	add r0, r2, r7
	ldr r1, _0802CC00  @ =gUnknown_03000420
	mov r10, r1
	cmp r2, r0
	bge _0802CB0C
	mov r5, r12
	add r5, r5, r8
	mov r9, r10
_0802CADA:
	mov r3, r9
	ldrb r1, [r3, #3]
	lsl r1, r1, #11
	lsl r0, r2, #6
	ldr r4, _0802CC04  @ =gBG0Buffer
	add r0, r0, r4
	add r3, r1, r0
	mov r1, r12
	add r2, r2, #1
	cmp r1, r5
	bge _0802CB02
	mov r4, #10
_0802CAF2:
	lsl r0, r1, #1
	add r0, r0, r3
	strh r4, [r0]
	add r0, r1, #1
	lsl r0, r0, #16
	lsr r1, r0, #16
	cmp r1, r5
	blt _0802CAF2
_0802CB02:
	lsl r0, r2, #16
	lsr r2, r0, #16
	add r0, r6, r7
	cmp r2, r0
	blt _0802CADA
_0802CB0C:
	mov r0, r10
	ldrb r1, [r0, #3]
	lsl r1, r1, #11
	sub r0, r6, #1
	lsl r0, r0, #6
	ldr r2, _0802CC04  @ =gBG0Buffer
	add r0, r0, r2
	add r1, r1, r0
	mov r3, r12
	lsl r2, r3, #1
	add r3, r1, r2
	add r0, r7, #1
	lsl r0, r0, #6
	add r4, r3, r0
	mov r1, r12
	mov r0, r8
	add r5, r1, r0
	add r7, r7, r6
	mov r9, r7
	str r5, [sp, #4]
	mov r12, r2
	lsl r7, r6, #6
	lsl r0, r0, #1
	str r0, [sp]
	cmp r1, r5
	bge _0802CB5C
	mov r2, #77
	mov r8, r2
	ldr r0, _0802CC08  @ =0x0000084D
	add r2, r0, #0
_0802CB48:
	mov r0, r8
	strh r0, [r3]
	strh r2, [r4]
	add r0, r1, #1
	lsl r0, r0, #16
	lsr r1, r0, #16
	add r3, r3, #2
	add r4, r4, #2
	cmp r1, r5
	blt _0802CB48
_0802CB5C:
	mov r1, r10
	ldrb r0, [r1, #3]
	lsl r0, r0, #11
	ldr r2, _0802CC04  @ =gBG0Buffer
	add r1, r7, r2
	add r0, r0, r1
	mov r1, r12
	sub r1, r1, #2
	add r3, r0, r1
	ldr r4, [sp]
	add r0, r3, r4
	add r4, r0, #2
	add r2, r6, #0
	mov r1, r9
	cmp r2, r9
	bge _0802CB94
	mov r6, #78
	ldr r0, _0802CC0C  @ =0x0000044E
	add r5, r0, #0
_0802CB82:
	strh r6, [r3]
	strh r5, [r4]
	add r0, r2, #1
	lsl r0, r0, #16
	lsr r2, r0, #16
	add r3, r3, #64
	add r4, r4, #64
	cmp r2, r1
	blt _0802CB82
_0802CB94:
	mov r1, r10
	ldrb r0, [r1, #3]
	lsl r0, r0, #11
	add r0, r0, r12
	add r0, r0, r7
	ldr r2, _0802CC10  @ =gUnknown_0202D0CE
	add r0, r0, r2
	mov r1, #76
	strh r1, [r0]
	mov r3, r10
	ldrb r0, [r3, #3]
	lsl r0, r0, #11
	ldr r4, [sp, #4]
	lsl r3, r4, #1
	add r0, r0, r3
	add r0, r0, r7
	add r1, r2, #0
	add r1, r1, #2
	add r0, r0, r1
	ldr r2, _0802CC14  @ =0x0000044C
	add r1, r2, #0
	strh r1, [r0]
	mov r4, r10
	ldrb r0, [r4, #3]
	mov r1, r9
	lsl r2, r1, #6
	lsl r0, r0, #11
	add r0, r0, r12
	add r0, r2, r0
	ldr r1, _0802CC10  @ =gUnknown_0202D0CE
	add r1, r1, #64
	add r0, r0, r1
	ldr r4, _0802CC18  @ =0x0000084C
	add r1, r4, #0
	strh r1, [r0]
	mov r1, r10
	ldrb r0, [r1, #3]
	lsl r0, r0, #11
	add r0, r0, r3
	add r2, r2, r0
	ldr r0, _0802CC10  @ =gUnknown_0202D0CE
	add r0, r0, #66
	add r2, r2, r0
	ldr r3, _0802CC1C  @ =0x00000C4C
	add r0, r3, #0
	strh r0, [r2]
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0802CC00:
	.4byte gUnknown_03000420
_0802CC04:
	.4byte gBG0Buffer
_0802CC08:
	.4byte 0x0000084D
_0802CC0C:
	.4byte 0x0000044E
_0802CC10:
	.4byte gUnknown_0202D0CE
_0802CC14:
	.4byte 0x0000044C
_0802CC18:
	.4byte 0x0000084C
_0802CC1C:
	.4byte 0x00000C4C
	THUMB_FUNC_END sub_0802CAA8

