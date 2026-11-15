	THUMB_FUNC_START sub_08059E34
sub_08059E34: @ 0x08059E34
	push {r4,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl 0x08003B64
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08059E90
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	cmp r1, #255
	beq _08059E86
	ldr r0, _08059E88  @ =gUnknown_0201F000
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #82
	ldrb r1, [r2]
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, _08059E88  @ =gUnknown_0201F000
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #82
	ldrb r2, [r3]
	add r3, r2, #0
	lsl r2, r3, #2
	add r1, r1, r2
	ldr r2, _08059E8C  @ =gUnknown_08137B10
	ldr r3, [r7]
	ldrb r4, [r3, #11]
	add r3, r4, #0
	lsl r4, r3, #2
	add r2, r2, r4
	ldr r1, [r1]
	ldr r2, [r2]
	orr r1, r1, r2
	str r1, [r0]
_08059E86:
	b _08059EA4
_08059E88:
	.4byte gUnknown_0201F000
_08059E8C:
	.4byte gUnknown_08137B10
_08059E90:
	ldr r0, _08059EAC  @ =gUnknown_08140E44
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r1, [r0]
	ldr r0, [r7]
	bl _call_via_r1
_08059EA4:
	add sp, sp, #4
	pop {r4,r7}
	pop {r0}
	bx r0
_08059EAC:
	.4byte gUnknown_08140E44
	THUMB_FUNC_END sub_08059E34

