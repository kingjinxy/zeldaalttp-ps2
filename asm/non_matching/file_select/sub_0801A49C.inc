	THUMB_FUNC_START sub_0801A49C
sub_0801A49C: @ 0x0801A49C
	push {r4,lr}
	add r4, r0, #0
	ldrb r1, [r4, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r4, #28]
	add r1, r4, #0
	add r1, r1, #46
	mov r0, #2
	strb r0, [r1]
	ldr r0, _0801A4DC  @ =gUnknown_08139E58
	str r0, [r4, #72]
	add r0, r4, #0
	mov r1, #4
	bl sub_08003870
	mov r0, #1
	strb r0, [r4, #20]
	add r1, r4, #0
	add r1, r1, #42
	mov r0, #255
	strb r0, [r1]
	add r0, r4, #0
	bl sub_0801A70C
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801A4DC:
	.4byte gUnknown_08139E58
	THUMB_FUNC_END sub_0801A49C

