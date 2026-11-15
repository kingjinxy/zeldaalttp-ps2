	THUMB_FUNC_START sub_0800E430
sub_0800E430: @ 0x0800E430
	push {r4-r6,lr}
	ldr r2, _0800E4DC  @ =gUnknown_03000420
	ldrb r0, [r2, #3]
	lsl r0, r0, #3
	ldr r1, _0800E4E0  @ =gUnknown_020309A0
	add r3, r0, r1
	ldrb r0, [r3, #1]
	cmp r0, #0
	beq _0800E476
	mov r0, #0
	strb r0, [r3, #1]
	ldrb r2, [r2, #3]
	lsl r2, r2, #11
	ldrb r3, [r3, #5]
	lsl r0, r3, #6
	ldr r1, _0800E4E4  @ =gBG0Buffer
	add r0, r0, r1
	add r2, r2, r0
	mov r0, #20
	sub r1, r0, r3
	mov r3, #0
_0800E45A:
	add r5, r2, #0
	add r5, r5, #64
	sub r1, r1, #1
	add r0, r2, #0
	add r0, r0, #42
_0800E464:
	strh r3, [r0]
	sub r0, r0, #2
	cmp r0, r2
	bge _0800E464
	add r2, r5, #0
	cmp r1, #0
	bgt _0800E45A
	bl sub_0802C934
_0800E476:
	ldr r2, _0800E4DC  @ =gUnknown_03000420
	ldrb r0, [r2, #3]
	lsl r0, r0, #3
	ldr r1, _0800E4E8  @ =gUnknown_02030990
	add r3, r0, r1
	ldrb r0, [r3, #1]
	cmp r0, #0
	beq _0800E4D4
	mov r0, #0
	strb r0, [r3, #1]
	ldrb r2, [r2, #3]
	lsl r2, r2, #11
	ldrb r0, [r3, #5]
	lsl r0, r0, #5
	ldrb r1, [r3, #4]
	add r0, r0, r1
	lsl r0, r0, #1
	ldr r1, _0800E4E4  @ =gBG0Buffer
	add r0, r0, r1
	add r2, r2, r0
	ldrb r0, [r3, #7]
	add r1, r0, #2
_0800E4A2:
	mov r4, #0
	ldrb r0, [r3, #6]
	add r0, r0, #2
	add r5, r2, #0
	add r5, r5, #64
	sub r1, r1, #1
	cmp r4, r0
	bge _0800E4C2
	mov r6, #0
_0800E4B4:
	strh r6, [r2]
	add r2, r2, #2
	add r4, r4, #1
	ldrb r0, [r3, #6]
	add r0, r0, #2
	cmp r4, r0
	blt _0800E4B4
_0800E4C2:
	add r2, r5, #0
	cmp r1, #0
	bgt _0800E4A2
	ldrb r0, [r3, #5]
	ldrb r1, [r3, #7]
	bl sub_0802C974
	bl sub_0802C934
_0800E4D4:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0800E4DC:
	.4byte gUnknown_03000420
_0800E4E0:
	.4byte gUnknown_020309A0
_0800E4E4:
	.4byte gBG0Buffer
_0800E4E8:
	.4byte gUnknown_02030990
	THUMB_FUNC_END sub_0800E430

