	THUMB_FUNC_START sub_0802DAE0
sub_0802DAE0: @ 0x0802DAE0
	push {r4,lr}
	sub sp, sp, #4
	bl sub_0802DC2C
	ldr r4, _0802DB18  @ =gUnknown_0201EF18
	ldrb r0, [r4, #2]
	cmp r0, #30
	bne _0802DAFE
	mov r0, #0
	str r0, [sp]
	ldr r1, _0802DB1C  @ =0x06017E80
	ldr r2, _0802DB20  @ =0x01000030
	mov r0, sp
	bl CpuFastSet
_0802DAFE:
	ldrb r0, [r4, #2]
	sub r0, r0, #1
	strb r0, [r4, #2]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0802DB10
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
_0802DB10:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
_0802DB18:
	.4byte gUnknown_0201EF18
_0802DB1C:
	.4byte 0x06017E80
_0802DB20:
	.4byte 0x01000030
	THUMB_FUNC_END sub_0802DAE0

