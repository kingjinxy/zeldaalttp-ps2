	THUMB_FUNC_START sub_0805C2D8
sub_0805C2D8: @ 0x0805C2D8
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	bne _0805C308
	ldr r0, _0805C304  @ =gUnknown_03006C80
	add r1, r0, #0
	add r0, r0, #110
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #4
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	b _0805C322
	.byte 0x00
	.byte 0x00
_0805C304:
	.4byte gUnknown_03006C80
_0805C308:
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
_0805C322:
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	cmp r1, #0
	bne _0805C334
	ldr r0, [r7]
	mov r1, #3
	bl 0x080037EC
	b _0805C33A
_0805C334:
	ldr r0, [r7]
	bl GetNextFrame
_0805C33A:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805C2D8

	.byte 0x00
	.byte 0x00
