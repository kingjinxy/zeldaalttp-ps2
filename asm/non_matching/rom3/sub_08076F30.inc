	THUMB_FUNC_START sub_08076F30
sub_08076F30: @ 0x08076F30
	push {r4,r5,lr}
	ldr r0, _08076F94  @ =gRam
	ldr r2, _08076F98  @ =0x000009C6
	add r1, r0, r2
	ldrh r0, [r1]
	cmp r0, #127
	bhi _08076F50
	ldr r1, _08076F9C  @ =gUnknown_02002280
	add r0, r0, r1
	ldrb r1, [r0]
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	beq _08076F50
	bl sub_080925E4
_08076F50:
	ldr r0, _08076F94  @ =gRam
	ldr r2, _08076F98  @ =0x000009C6
	add r5, r0, r2
	ldrh r2, [r5]
	ldr r1, _08076F9C  @ =gUnknown_02002280
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _08076F84
	ldr r0, _08076FA0  @ =0x000036D0
	ldr r4, _08076FA4  @ =gUnknown_08150978
	lsl r1, r2, #1
	add r1, r1, r4
	ldrh r1, [r1]
	bl sub_0809265C
	ldr r0, _08076FA8  @ =0x000036D4
	ldrh r1, [r5]
	lsl r1, r1, #1
	add r1, r1, r4
	ldrh r1, [r1]
	add r1, r1, #2
	bl sub_0809265C
_08076F84:
	ldrh r0, [r5]
	cmp r0, #91
	bne _08076F8E
	bl sub_080924CC
_08076F8E:
	pop {r4,r5}
	pop {r0}
	bx r0
_08076F94:
	.4byte gRam
_08076F98:
	.4byte 0x000009C6
_08076F9C:
	.4byte gUnknown_02002280
_08076FA0:
	.4byte 0x000036D0
_08076FA4:
	.4byte gUnknown_08150978
_08076FA8:
	.4byte 0x000036D4
	THUMB_FUNC_END sub_08076F30

