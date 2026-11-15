	THUMB_FUNC_START sub_08135F50
sub_08135F50: @ 0x08135F50
	push {r4,r5,lr}
	sub sp, sp, #8
	add r4, r1, #0
	lsl r0, r0, #16
	lsr r1, r0, #16
	mov r5, #0
	ldr r0, _08135F6C  @ =gUnknown_03000020
	ldr r0, [r0]
	ldrh r0, [r0, #4]
	cmp r1, r0
	bcc _08135F74
	ldr r0, _08135F70  @ =0x000080FF
	b _08135F9E
	.byte 0x00
	.byte 0x00
_08135F6C:
	.4byte gUnknown_03000020
_08135F70:
	.4byte 0x000080FF
_08135F74:
	add r0, r1, #0
	mov r1, sp
	bl sub_08135DC4
	mov r2, sp
	mov r3, #0
	b _08135F8C
_08135F82:
	add r0, r3, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #3
	bhi _08135F9C
_08135F8C:
	ldrh r1, [r4]
	ldrh r0, [r2]
	add r2, r2, #2
	add r4, r4, #2
	cmp r1, r0
	beq _08135F82
	mov r5, #128
	lsl r5, r5, #8
_08135F9C:
	add r0, r5, #0
_08135F9E:
	add sp, sp, #8
	pop {r4,r5}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08135F50

	.byte 0x00
	.byte 0x00
