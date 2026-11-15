	THUMB_FUNC_START sub_0800E570
sub_0800E570: @ 0x0800E570
	push {r4,r5,lr}
	ldr r1, _0800E5DC  @ =gUnknown_020309B0
	ldr r0, _0800E5E0  @ =gUnknown_03000420
	ldrb r2, [r0, #3]
	lsl r0, r2, #3
	add r3, r0, r1
	ldrb r0, [r3, #1]
	cmp r0, #0
	beq _0800E5D4
	lsl r1, r2, #11
	ldr r0, _0800E5E4  @ =gUnknown_0202D5D0
	add r4, r1, r0
	mov r5, #7
	ldrsb r5, [r3, r5]
	add r0, r5, #0
	add r1, r4, #0
	bl sub_0800E5EC
	add r4, r4, #4
	cmp r5, #2
	beq _0800E5A8
	cmp r5, #3
	bne _0800E5B0
	add r0, r4, #0
	mov r1, #1
	bl sub_0800E63C
	sub r4, r4, #64
_0800E5A8:
	add r0, r4, #0
	mov r1, #0
	bl sub_0800E63C
_0800E5B0:
	ldr r4, _0800E5E0  @ =gUnknown_03000420
	ldrb r0, [r4, #3]
	lsl r0, r0, #3
	ldr r3, _0800E5DC  @ =gUnknown_020309B0
	add r2, r0, r3
	ldr r1, _0800E5E8  @ =gUnknown_020309A0
	add r0, r0, r1
	ldr r1, [r2]
	str r1, [r0]
	ldr r1, [r2, #4]
	str r1, [r0, #4]
	ldrb r0, [r4, #3]
	lsl r0, r0, #3
	add r0, r0, r3
	mov r1, #0
	strb r1, [r0, #1]
	bl sub_0802C934
_0800E5D4:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0800E5DC:
	.4byte gUnknown_020309B0
_0800E5E0:
	.4byte gUnknown_03000420
_0800E5E4:
	.4byte gUnknown_0202D5D0
_0800E5E8:
	.4byte gUnknown_020309A0
	THUMB_FUNC_END sub_0800E570

