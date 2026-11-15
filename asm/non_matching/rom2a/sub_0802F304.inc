	THUMB_FUNC_START sub_0802F304
sub_0802F304: @ 0x0802F304
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r7, r0, #24
	lsl r1, r1, #16
	lsr r6, r1, #16
	ldr r4, _0802F354  @ =gUnknown_02000010
	ldrb r1, [r4]
	mov r5, #127
	add r0, r5, #0
	and r0, r0, r1
	cmp r0, #6
	bne _0802F320
	bl sub_0800D644
_0802F320:
	ldrb r1, [r4]
	add r0, r5, #0
	and r0, r0, r1
	cmp r0, #0
	bne _0802F35C
	ldr r1, _0802F358  @ =gUnknown_02016D60
	mov r0, #255
	strb r0, [r1, #15]
	ldrh r0, [r1, #4]
	sub r0, r0, #1
	strh r0, [r1, #4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0802F35C
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #30
	strh r0, [r1, #4]
	add r0, r7, #0
	add r1, r6, #0
	bl sub_0802FA3C
	mov r0, #1
	b _0802F35E
	.byte 0x00
	.byte 0x00
_0802F354:
	.4byte gUnknown_02000010
_0802F358:
	.4byte gUnknown_02016D60
_0802F35C:
	mov r0, #0
_0802F35E:
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0802F304

