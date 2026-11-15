	THUMB_FUNC_START sub_08028050
sub_08028050: @ 0x08028050
	push {lr}
	add r2, r0, #0
	ldr r1, _08028088  @ =gUnknown_0201F000
	add r0, r0, #82
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldr r1, [r2, #96]
	and r0, r0, r1
	cmp r0, r1
	bne _08028084
	mov r0, #0
	str r0, [r2, #96]
	ldrb r1, [r2, #28]
	sub r0, r0, #4
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r2, #28]
	ldrb r0, [r2, #20]
	add r0, r0, #1
	strb r0, [r2, #20]
	add r0, r2, #0
	bl sub_0804C9C8
_08028084:
	pop {r0}
	bx r0
_08028088:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_08028050

