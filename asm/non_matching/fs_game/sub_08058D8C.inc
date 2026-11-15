	THUMB_FUNC_START sub_08058D8C
sub_08058D8C: @ 0x08058D8C
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _08058DA4  @ =gUnknown_03000420
	ldrb r1, [r0, #5]
	cmp r1, #0
	bne _08058DA8
	ldr r0, [r7]
	bl DeleteThisEntity
	b _08058DBC
_08058DA4:
	.4byte gUnknown_03000420
_08058DA8:
	ldr r0, _08058DC4  @ =gUnknown_08428FE0
	ldr r1, [r7]
	ldrb r2, [r1, #10]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r1, [r0]
	ldr r0, [r7]
	bl _call_via_r1
_08058DBC:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_08058DC4:
	.4byte gUnknown_08428FE0
	THUMB_FUNC_END sub_08058D8C

