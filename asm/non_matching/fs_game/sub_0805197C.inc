	THUMB_FUNC_START sub_0805197C
sub_0805197C: @ 0x0805197C
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, _080519C8  @ =gUnknown_0201F000
	ldr r4, [r7]
	add r3, r4, #0
	add r4, r4, #82
	ldrb r3, [r4]
	add r4, r3, #0
	lsl r3, r4, #2
	add r2, r2, r3
	ldr r1, [r1, #96]
	ldr r2, [r2]
	and r1, r1, r2
	ldr r0, [r0, #96]
	cmp r0, r1
	bne _080519BE
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #1
	ldrb r2, [r0, #20]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #20]
_080519BE:
	add sp, sp, #8
	pop {r4,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080519C8:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_0805197C

