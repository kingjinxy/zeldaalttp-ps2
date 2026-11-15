	THUMB_FUNC_START sub_08035A38
sub_08035A38: @ 0x08035A38
	push {r4,lr}
	add r1, r0, #0
	ldrb r0, [r1, #23]
	sub r0, r0, #1
	strb r0, [r1, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08035A78
	mov r0, #5
	strb r0, [r1, #20]
	mov r0, #60
	strb r0, [r1, #23]
	mov r1, #0
	ldr r2, _08035A80  @ =gUnknown_03006C80
	ldrb r0, [r2]
	cmp r1, r0
	bcs _08035A78
	ldr r4, _08035A84  @ =gUnknown_03006A58
	mov r3, #4
_08035A5E:
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r4
	ldr r0, [r0]
	add r0, r0, #42
	strb r3, [r0]
	add r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldrb r0, [r2]
	cmp r1, r0
	bcc _08035A5E
_08035A78:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08035A80:
	.4byte gUnknown_03006C80
_08035A84:
	.4byte gUnknown_03006A58
	THUMB_FUNC_END sub_08035A38

