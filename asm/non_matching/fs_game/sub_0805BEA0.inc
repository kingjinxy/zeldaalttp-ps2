	THUMB_FUNC_START sub_0805BEA0
sub_0805BEA0: @ 0x0805BEA0
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	cmp r1, #1
	bne _0805BEF2
	add r0, r7, #4
	mov r1, #0
	strb r1, [r0]
_0805BEB6:
	add r0, r7, #4
	ldrb r1, [r0]
	cmp r1, #3
	bls _0805BEC0
	b _0805BEF0
_0805BEC0:
	ldr r0, _0805BEDC  @ =gUnknown_03006C80
	add r2, r7, #4
	ldrb r1, [r2]
	add r2, r0, #0
	add r0, r0, #92
	add r1, r0, r1
	ldrb r0, [r1]
	cmp r0, #0
	beq _0805BEE0
	ldr r0, [r7]
	bl sub_0805BE5C
	b _0805BEF0
	.byte 0x00
	.byte 0x00
_0805BEDC:
	.4byte gUnknown_03006C80
_0805BEE0:
	add r1, r7, #4
	add r0, r7, #4
	add r1, r7, #4
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _0805BEB6
_0805BEF0:
	b _0805BF20
_0805BEF2:
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	cmp r1, #2
	bne _0805BF20
	ldr r0, _0805BF28  @ =gUnknown_0201F000
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #82
	ldrb r1, [r2]
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, [r7]
	ldr r0, [r0]
	ldr r1, [r1, #96]
	and r0, r0, r1
	ldr r1, [r7]
	ldr r2, [r1, #96]
	cmp r0, r2
	bne _0805BF20
	ldr r0, [r7]
	bl sub_0805BE5C
_0805BF20:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
_0805BF28:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_0805BEA0

