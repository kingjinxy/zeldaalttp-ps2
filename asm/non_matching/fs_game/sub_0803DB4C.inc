	THUMB_FUNC_START sub_0803DB4C
sub_0803DB4C: @ 0x0803DB4C
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _0803DBA4  @ =gUnknown_03000E20
	ldrb r1, [r0, #18]
	cmp r1, #0
	beq _0803DB70
	ldr r0, [r7]
	ldrb r1, [r0, #21]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #6
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #21]
_0803DB70:
	ldr r0, _0803DBA8  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #11]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #5]
	cmp r1, #0
	bne _0803DB9A
	ldr r0, [r7]
	ldrb r1, [r0, #21]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #6
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #21]
_0803DB9A:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0803DBA4:
	.4byte gUnknown_03000E20
_0803DBA8:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_0803DB4C

