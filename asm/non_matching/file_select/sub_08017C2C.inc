	THUMB_FUNC_START sub_08017C2C
sub_08017C2C: @ 0x08017C2C
	push {r4,lr}
	add r4, r0, #0
	add r1, r4, #0
	add r1, r1, #114
	ldrb r0, [r1]
	cmp r0, #0
	bne _08017C5E
	mov r0, #1
	strb r0, [r1]
	ldr r3, _08017C6C  @ =gUnknown_081396D8
	ldr r2, _08017C70  @ =gUnknown_03006A30
	ldrb r1, [r4, #11]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r2, r2, #40
	add r0, r0, r2
	ldr r0, [r0]
	add r0, r0, #42
	ldrb r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	strh r0, [r4, #44]
_08017C5E:
	add r0, r4, #0
	bl sub_08017DFC
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08017C6C:
	.4byte gUnknown_081396D8
_08017C70:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_08017C2C

