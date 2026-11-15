	THUMB_FUNC_START sub_0804CD94
sub_0804CD94: @ 0x0804CD94
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	add r1, r7, #0
	strb r0, [r1]
	ldr r0, _0804CDF8  @ =gUnknown_0202A7E0
	add r2, r7, #0
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #2
	add r2, r2, r1
	lsl r1, r2, #2
	add r0, r0, #12
	add r1, r0, r1
	ldr r0, [r1]
	cmp r0, #0
	beq _0804CDD0
	ldr r0, _0804CDF8  @ =gUnknown_0202A7E0
	add r2, r7, #0
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #2
	add r2, r2, r1
	lsl r1, r2, #2
	add r0, r0, #12
	add r1, r0, r1
	ldr r2, [r1]
	add r0, r2, #0
	bl DeleteThisEntity
_0804CDD0:
	add r0, r7, #2
	mov r1, #0
	strh r1, [r0]
	add r0, r7, #2
	add r2, r7, #0
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #2
	add r2, r2, r1
	lsl r1, r2, #2
	ldr r2, _0804CDF8  @ =gUnknown_0202A7E0
	add r1, r1, r2
	ldr r2, _0804CDFC  @ =0x0100000A
	bl CpuSet
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0804CDF8:
	.4byte gUnknown_0202A7E0
_0804CDFC:
	.4byte 0x0100000A
	THUMB_FUNC_END sub_0804CD94

