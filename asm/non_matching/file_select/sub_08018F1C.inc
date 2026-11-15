	THUMB_FUNC_START sub_08018F1C
sub_08018F1C: @ 0x08018F1C
	push {r4,lr}
	add r4, r0, #0
	bl sub_0803DB4C
	ldr r2, _08018F54  @ =gUnknown_03006A30
	ldrb r1, [r4, #11]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r2
	ldrb r0, [r0, #5]
	cmp r0, #0
	bne _08018F3A
	mov r0, #6
	strb r0, [r4, #21]
_08018F3A:
	ldr r0, _08018F58  @ =gUnknown_08139954
	ldrb r1, [r4, #21]
	sub r1, r1, #5
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r4, #0
	bl _call_via_r1
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08018F54:
	.4byte gUnknown_03006A30
_08018F58:
	.4byte gUnknown_08139954
	THUMB_FUNC_END sub_08018F1C

