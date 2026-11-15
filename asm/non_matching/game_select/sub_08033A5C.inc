	THUMB_FUNC_START sub_08033A5C
sub_08033A5C: @ 0x08033A5C
	push {r4,lr}
	add r3, r0, #0
	ldr r0, [r3, #12]
	add r2, r0, #0
	sub r2, r2, #32
	str r2, [r3, #12]
	mov r4, #128
	lsl r4, r4, #1
	cmp r2, r4
	bne _08033A8C
	mov r0, #2
	strb r0, [r3, #20]
	add r0, r3, #0
	bl 0x08003BCC
	ldr r2, _08033A88  @ =gUnknown_0201F000
	ldr r0, [r2]
	mov r1, #32
	orr r0, r0, r1
	str r0, [r2]
	b _08033A9C
	.byte 0x00
	.byte 0x00
_08033A88:
	.4byte gUnknown_0201F000
_08033A8C:
	ldr r0, _08033AA4  @ =gUnknown_03000488
	mov r1, #0
	strh r2, [r0]
	strh r4, [r0, #2]
	strh r1, [r0, #4]
	add r1, r3, #0
	bl sub_0803D770
_08033A9C:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08033AA4:
	.4byte gUnknown_03000488
	THUMB_FUNC_END sub_08033A5C

