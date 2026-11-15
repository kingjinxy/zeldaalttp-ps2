	THUMB_FUNC_START sub_0805251C
sub_0805251C: @ 0x0805251C
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl GetNextFrame
	ldr r0, [r7]
	bl sub_0803CC20
	ldr r0, [r7]
	mov r2, #54
	ldrsh r1, [r0, r2]
	cmp r1, #52
	ble _080525AC
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #1
	ldrb r2, [r0, #20]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #20]
	ldr r0, [r7]
	mov r1, #1
	bl sub_08003870
	ldr r0, _080525CC  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #11]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #12]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #4
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #12]
	ldr r0, _080525CC  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #11]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	add r1, r0, #0
	add r0, r0, #56
	ldrb r1, [r0]
	mov r2, #255
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r1, _080525D0  @ =0x00000216
	add r0, r1, #0
	bl play_sound
	ldr r1, _080525D4  @ =0x000001A3
	add r0, r1, #0
	bl play_sound
_080525AC:
	ldr r0, [r7]
	bl sub_08052494
	ldr r0, [r7]
	ldr r1, _080525D8  @ =gUnknown_03000948
	ldrh r2, [r1]
	mov r3, #2
	add r1, r2, #0
	and r1, r1, r3
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	cmp r1, #0
	beq _080525DC
	mov r1, #3
	b _080525DE
_080525CC:
	.4byte gUnknown_03006A30
_080525D0:
	.4byte 0x00000216
_080525D4:
	.4byte 0x000001A3
_080525D8:
	.4byte gUnknown_03000948
_080525DC:
	mov r1, #0
_080525DE:
	mov r2, #15
	and r1, r1, r2
	ldrb r2, [r0, #30]
	mov r3, #240
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #30]
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805251C

	.byte 0x00
	.byte 0x00
