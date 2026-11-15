	THUMB_FUNC_START sub_0805CDA4
sub_0805CDA4: @ 0x0805CDA4
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #114
	ldrb r0, [r1]
	cmp r0, #0
	beq _0805CDE2
	ldr r0, _0805CDDC  @ =gUnknown_0201F000
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
	beq _0805CDE0
	mov r0, #1
	b _0805CE10
_0805CDDC:
	.4byte gUnknown_0201F000
_0805CDE0:
	b _0805CE0C
_0805CDE2:
	ldr r0, _0805CE08  @ =gUnknown_0201F000
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
	bne _0805CE0C
	mov r0, #1
	b _0805CE10
	.byte 0x00
	.byte 0x00
_0805CE08:
	.4byte gUnknown_0201F000
_0805CE0C:
	mov r0, #0
	b _0805CE10
_0805CE10:
	add sp, sp, #4
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0805CDA4

