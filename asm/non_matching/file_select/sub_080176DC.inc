	THUMB_FUNC_START sub_080176DC
sub_080176DC: @ 0x080176DC
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
	ldr r0, _08017730  @ =gUnknown_08139684
	str r0, [r4, #72]
	add r0, r4, #0
	add r0, r0, #69
	ldrb r1, [r0]
	add r0, r0, #55
	strb r1, [r0]
	add r0, r4, #0
	mov r1, #0
	bl sub_08003870
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	ldr r0, _08017734  @ =gUnknown_03006A30
	ldr r0, [r0, #40]
	str r0, [r4, #88]
	bl sub_08044594
	add r1, r0, #0
	str r1, [r4, #100]
	add r0, r4, #0
	bl sub_0803CECC
	add r4, r4, #43
	strb r0, [r4]
	pop {r4}
	pop {r0}
	bx r0
_08017730:
	.4byte gUnknown_08139684
_08017734:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_080176DC

