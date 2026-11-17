	THUMB_FUNC_START sub_08018648
sub_08018648: @ 0x08018648
	push {lr}
	ldrb r2, [r0, #28]
	mov r1, #4
	neg r1, r1
	and r1, r1, r2
	mov r2, #1
	orr r1, r1, r2
	strb r1, [r0, #28]
	add r3, r0, #0
	add r3, r3, #46
	mov r2, #0
	mov r1, #3
	strb r1, [r3]
	ldr r1, _08018680  @ =gUnknown_081398EC
	str r1, [r0, #72]
	ldrb r1, [r0, #20]
	add r1, r1, #1
	strb r1, [r0, #20]
	mov r1, #64
	strb r1, [r0, #23]
	mov r1, #16
	strb r1, [r0, #24]
	str r2, [r0, #88]
	mov r1, #0
	bl sub_08003870
	pop {r0}
	bx r0
_08018680:
	.4byte gUnknown_081398EC
	THUMB_FUNC_END sub_08018648

