	THUMB_FUNC_START sub_080299F4
sub_080299F4: @ 0x080299F4
	push {r4-r6,lr}
	add r4, r0, #0
	ldr r1, _08029A68  @ =gUnknown_0813D278
	ldrb r0, [r4, #20]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	add r0, r4, #0
	add r0, r0, #65
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08029A62
	mov r0, #127
	and r0, r0, r1
	cmp r0, #0
	bne _08029A62
	ldr r6, _08029A6C  @ =gUnknown_03006A30
	ldr r0, [r4, #76]
	ldrb r1, [r0, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r6
	ldrh r1, [r0, #54]
	mov r5, #128
	lsl r5, r5, #3
	add r0, r5, #0
	and r0, r0, r1
	cmp r0, #0
	bne _08029A62
	mov r0, #85
	mov r1, #1
	mov r2, #0
	bl sub_0804C8A8
	add r1, r0, #0
	cmp r1, #0
	beq _08029A62
	ldr r0, [r4, #76]
	str r0, [r1, #88]
	ldr r0, [r4, #76]
	ldrb r0, [r0, #10]
	lsl r1, r0, #3
	add r1, r1, r0
	lsl r1, r1, #4
	add r1, r1, r6
	ldrh r2, [r1, #54]
	add r0, r5, #0
	orr r0, r0, r2
	strh r0, [r1, #54]
_08029A62:
	pop {r4-r6}
	pop {r0}
	bx r0
_08029A68:
	.4byte gUnknown_0813D278
_08029A6C:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_080299F4

