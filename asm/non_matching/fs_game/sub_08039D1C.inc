	THUMB_FUNC_START sub_08039D1C
sub_08039D1C: @ 0x08039D1C
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	add r0, r7, #0
	ldr r1, _08039D54  @ =gUnknown_03006C80
	ldrb r2, [r1, #1]
	strb r2, [r0]
_08039D2A:
	bl sub_0800099C
	add r1, r0, #0
	ldr r0, _08039D54  @ =gUnknown_03006C80
	mov r2, #3
	and r1, r1, r2
	ldrb r2, [r0, #1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #1]
	ldr r0, _08039D54  @ =gUnknown_03006C80
	add r1, r7, #0
	ldrb r0, [r0, #1]
	ldrb r1, [r1]
	cmp r0, r1
	beq _08039D58
	b _08039D5A
_08039D54:
	.4byte gUnknown_03006C80
_08039D58:
	b _08039D2A
_08039D5A:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08039D1C

	.byte 0x00
	.byte 0x00
