	THUMB_FUNC_START sub_0803630C
sub_0803630C: @ 0x0803630C
	push {lr}
	add r2, r0, #0
	ldr r0, _0803632C  @ =gUnknown_02016D60
	ldrb r0, [r0, #1]
	cmp r0, #0
	bne _08036328
	ldr r0, _08036330  @ =gUnknown_0813DFB4
	ldrb r1, [r2, #20]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r2, #0
	bl _call_via_r1
_08036328:
	pop {r0}
	bx r0
_0803632C:
	.4byte gUnknown_02016D60
_08036330:
	.4byte gUnknown_0813DFB4
	THUMB_FUNC_END sub_0803630C

