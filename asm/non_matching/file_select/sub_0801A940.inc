	THUMB_FUNC_START sub_0801A940
sub_0801A940: @ 0x0801A940
	push {lr}
	ldrb r2, [r0, #28]
	mov r1, #4
	neg r1, r1
	and r1, r1, r2
	mov r2, #1
	orr r1, r1, r2
	strb r1, [r0, #28]
	add r2, r0, #0
	add r2, r2, #46
	mov r1, #2
	strb r1, [r2]
	ldr r1, _0801A964  @ =gUnknown_08139EEC
	str r1, [r0, #72]
	bl sub_0801AA60
	pop {r0}
	bx r0
_0801A964:
	.4byte gUnknown_08139EEC
	THUMB_FUNC_END sub_0801A940

