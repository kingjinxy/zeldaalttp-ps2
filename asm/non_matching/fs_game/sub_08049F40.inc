	THUMB_FUNC_START sub_08049F40
sub_08049F40: @ 0x08049F40
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl GetNextFrame
	ldr r0, [r7]
	bl 0x08009F9C
	ldr r0, [r7]
	ldrh r1, [r0, #44]
	cmp r1, #0
	beq _08049F9C
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	sub r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	ldr r0, [r7]
	ldrh r1, [r0, #44]
	ldr r0, _08049F8C  @ =0x0000FFFF
	cmp r1, r0
	beq _08049F90
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	bne _08049F9C
	b _08049F90
	.byte 0x00
	.byte 0x00
_08049F8C:
	.4byte 0x0000FFFF
_08049F90:
	ldr r0, [r7]
	bl sub_0804C9F4
	ldr r0, [r7]
	bl DeleteThisEntity
_08049F9C:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08049F40

