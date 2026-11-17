	THUMB_FUNC_START sub_08027D40
sub_08027D40: @ 0x08027D40
	push {r4-r7,lr}
	add r6, r0, #0
	add r0, r0, #41
	ldrb r1, [r0]
	add r0, r0, #83
	strb r1, [r0]
	add r0, r6, #0
	bl GetNextFrame
	mov r4, #0
	ldr r5, _08027DE4  @ =gUnknown_03006A30
	ldrb r1, [r5, #15]
	mov r7, #3
	add r0, r7, #0
	and r0, r0, r1
	cmp r0, #3
	bne _08027D6E
	ldr r1, [r5, #40]
	add r0, r6, #0
	bl sub_08027DF0
	lsl r0, r0, #24
	lsr r4, r0, #24
_08027D6E:
	add r0, r5, #0
	add r0, r0, #159
	ldrb r1, [r0]
	add r0, r7, #0
	and r0, r0, r1
	cmp r0, #3
	bne _08027D8E
	add r0, r5, #0
	add r0, r0, #184
	ldr r1, [r0]
	add r0, r6, #0
	bl sub_08027DF0
	orr r4, r4, r0
	lsl r0, r4, #24
	lsr r4, r0, #24
_08027D8E:
	ldr r1, _08027DE8  @ =0x0000012F
	add r0, r5, r1
	ldrb r1, [r0]
	add r0, r7, #0
	and r0, r0, r1
	cmp r0, #3
	bne _08027DB0
	mov r1, #164
	lsl r1, r1, #1
	add r0, r5, r1
	ldr r1, [r0]
	add r0, r6, #0
	bl sub_08027DF0
	orr r4, r4, r0
	lsl r0, r4, #24
	lsr r4, r0, #24
_08027DB0:
	ldr r1, _08027DEC  @ =0x000001BF
	add r0, r5, r1
	ldrb r1, [r0]
	add r0, r7, #0
	and r0, r0, r1
	cmp r0, #3
	bne _08027DD2
	mov r1, #236
	lsl r1, r1, #1
	add r0, r5, r1
	ldr r1, [r0]
	add r0, r6, #0
	bl sub_08027DF0
	orr r4, r4, r0
	lsl r0, r4, #24
	lsr r4, r0, #24
_08027DD2:
	add r1, r6, #0
	add r1, r1, #125
	ldrb r0, [r1]
	and r4, r4, r0
	strb r4, [r1]
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08027DE4:
	.4byte gUnknown_03006A30
_08027DE8:
	.4byte 0x0000012F
_08027DEC:
	.4byte 0x000001BF
	THUMB_FUNC_END sub_08027D40

